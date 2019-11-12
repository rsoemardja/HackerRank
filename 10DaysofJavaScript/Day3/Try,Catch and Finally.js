'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try {
        var splitSring = s.split("");
        var reverseArray = splitString.reverse();
        var joinArray = reverse.join("");
        console.log(joinArray);
    }
    catch (error)
    {
		//print s on a new line. if no exception was thrown then this should be the reversed string; if an exception was thrown, this should be the original string.
        console.log(error.message);
        console.log(s);
    }
}


function main() {
    const s = eval(readLine());

    reverseString(s);
}