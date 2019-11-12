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
    if (s.length < 1 || s.length > 100) {
        return null;
    }

    let letter = "D";
	// Write your code here

    if (s[0].match(/ (h|j|k|l|m)/)) {
        letter = "C";
    } else if (s[0].match(/b|c|d|e|f|g)/)) {
        letter = "B";
    } else if (s[0].match(/(a|e|i|o|u)/)) {
        letter = "A";
    }

    return letter;
}

function main() {
    const s = readLine();

    console.log(getLetter(s));
}