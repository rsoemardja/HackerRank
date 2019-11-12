'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let CurrentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string =>) {
        return string.trim();
    });

	main();
});

function readLine() {
    return inputString[CurrentLine++];
}

function getLetter(s) {
    let letter;
	// Write your code here

    switch (s.charAt(0))
    {

       case ('h'||'j'||'k'||'l'||'m'):
        letter = "C";
        break;
     
       case ('b'||'c'||'d'||'e'||'f'||'g'):
        letter = "B";
        break;
        
        case ('a'||'e'||'i'||'o'||'u'): 
        letter = "A";
        break;

        case ('z'||'n'||'p'||'q'||'r'||'s'||'t'||'v'||'w'||'x'||'y'):
        letter = 'D';        
}
    return letter;
}

function main() {
    const s = readLine();

    console.log(getLetter(s));
}