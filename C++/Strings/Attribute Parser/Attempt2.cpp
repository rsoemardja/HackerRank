#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <exception>

using namespace std;


namespace StreamUtils
{
    void discardSpaces(stringstream& ss)
    {
        while (!ss.eof() && isspace(ss.peek())) ss.ignore();
    }

    template < typename ...Args >
    bool equals(char t, char c, Args... args)
    {
        return (t == c || equals(t, args...));
    }

    template <>
    bool equals(char t, char c)
    {
        return (t == c);
    }

    template < typename ...Args >
    string getUntil(stringstream& ss, Args... chars)
    {
        string str = "";
        while (!ss.eof() && !equals(ss.peek(), chars...)) str += ss.get();
        return str;
    }

}



struct Attribute
{
    string name;
    string value;
    Attribute(const string& name = "", const string& value = "") :
        name(name),
        value(value)
    {}
};


struct Tag
{
    string name;
    map<string, Attribute> attributes;
    map<string, Tag> children;
    Tag* parent;

    Tag(const string& name = "", Tag* parent = nullptr) :
        name(name),
        parent(parent)
    {}

    /*void print( int lvl )
    {
        int tempLvl = lvl;
        while ( tempLvl-- > 0) cout << "  ";
        cout << name << " ~ ";
        for ( auto& attr : attributes )
        {
            cout << attr.second.name << "=" << attr.second.value << " " ;
        }
        cout << endl;
        for ( auto& child : children )
        {
            child.second.print( lvl + 1 );
        }
    }*/
};


class HRMLParser
{
public:
    HRMLParser(const string& source) : source(source)
    { }

    void parse()
    {
        using namespace StreamUtils;

        stringstream ss(source);
        while (!ss.eof())
        {
            bool exitingTagScope = false;
            string tagName;

            discardSpaces(ss);
            if (ss.get() != '<') throw runtime_error("Expected '<'");
            discardSpaces(ss);
            if (ss.get() == '/') exitingTagScope = true;
            else ss.unget();
            discardSpaces(ss);
            if (exitingTagScope)
            {
                tagName = getUntil(ss, '>', ' ');
                discardSpaces(ss);
                if (ss.get() != '>') throw runtime_error("Expected '>'");
                discardSpaces(ss);
                if (!actualTag) throw runtime_error("Can't go to the parent tag, the actual tag is a nullptr.");
                if (actualTag->name == tagName)
                {
                    actualTag = actualTag->parent;
                }
                else throw runtime_error("Actual tag and specified tag names mismatch.");
            }
            else
            {
                tagName = getUntil(ss, ' ', '>');

                map<string, Tag>* usingMap;

                if (actualTag) usingMap = &actualTag->children;
                else usingMap = &tags;
                (*usingMap)[tagName] = Tag(tagName, actualTag);
                actualTag = &((*usingMap)[tagName]);

                if (ss.peek() != '>')
                {
                    discardSpaces(ss);
                    while (ss.peek() != '>')
                    {
                        string name;
                        string value;
                        name = getUntil(ss, ' ', '=');
                        discardSpaces(ss);
                        ss.get(); // =
                        discardSpaces(ss);
                        ss.get(); // "
                        value = getUntil(ss, '"');
                        ss.get(); // "
                        discardSpaces(ss);

                        actualTag->attributes[name] = Attribute(name, value);
                        //cout << "Parsed Attribute " << name << " = " << value << endl;
                    }

                    //cout << "Parsed Tag " << tagName << (actualTag->parent ? " with parent "s + actualTag->parent->name : "" ) << endl;

                }
                ss.get(); // >
                continue;
            }
        }
    }

    string processQuery(string query)
    {
        using namespace StreamUtils;
        string result = "";
        stringstream qs(query);
        map<string, Tag>* targetMap = &tags;
        map<string, Attribute>* attrs = nullptr;
        while (!qs.eof())
        {
            string name = getUntil(qs, ' ', '.', '~');
            string attrName;
            //cout << "Name got: " << name << endl;
            discardSpaces(qs);
            char nextToken = qs.get();
            discardSpaces(qs);
            switch (nextToken)
            {
            case '.':
                if (targetMap->find(name) != targetMap->end())
                {
                    attrs = &(*targetMap)[name].attributes;
                    targetMap = &(*targetMap)[name].children;
                }
                else
                {
                    result += "Not Found!";
                    return result;
                }
                break;
            case '~':
                qs >> attrName;

                if (targetMap->find(name) != targetMap->end())
                {
                    attrs = &(*targetMap)[name].attributes;
                    targetMap = &(*targetMap)[name].children;
                }
                else
                {
                    result += "Not Found!";
                    break;
                }

                if (attrs->find(attrName) != attrs->end())
                    result += (*attrs)[attrName].value;
                else
                    result += "Not Found!";
                break;

            default:
                throw runtime_error("Unexpected token "s + nextToken);
                break;
            }
            discardSpaces(qs);
        }
        return result;
    }

    /*void print()
    {
        for ( auto& tag : tags )
        {
            tag.second.print( 0 );
        }
    }*/

private:
    string source;
    map<string, Tag> tags;
    Tag* actualTag = nullptr;
};

int main()
{
    int N, Q;
    cin >> N >> Q;
    stringstream sstr;
    if (cin.peek() == '\n') cin.ignore();
    for (int i = 0; i < N; i++)
    {
        string str = "";
        while (cin.peek() != '\n') str += cin.get();
        cin.ignore();
        sstr << str << '\n';
    }
    string sourceCode = sstr.str();

    vector< string > queries;
    for (int i = 0; i < Q; i++)
    {
        string str;
        cin >> str;
        queries.push_back(str);
    }

    HRMLParser parser(sourceCode);
    try
    {
        parser.parse();
    }
    catch (runtime_error err)
    {
        cout << "Runtime error: " << err.what() << endl;
        return 1;
    }

    // parser.print();

    try
    {
        for (auto query : queries)
            cout << parser.processQuery(query) << endl;
    }
    catch (runtime_error err)
    {
        cout << "Runtime error: " << err.what() << endl;
        return 1;
    }
    return 0;
}