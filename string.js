// string = > like this array it's  "sfgsvs"

// let x = "HELLO WORLD";      
// console.log(x[1]);
// let m = 20;
// let y = 'ski"llqode';

// console.log("value is: ",${m}, "sdfvgsg");

// template literal (`)back tick

// let y = `hewllo ${m} worlzdghdbd`
// console.log(y);




// String length
// console.log(x.length);

// toUppercase() ->  Upper case convert
// toLowerCase() -> lower case convert

// console.log(x.toUpperCase());
// console.log(x.toLowerCase());


// split
// console.log(x.split('a'));

let result;
// let x = "Now I am learning JAVASCRIPT";
// slice (start, end) => start index include / end index not include

// result = x.slice(6,18);  //start and end
// result = x.slice(6); // start
// result = x.slice(-16,-5);    // start and end negative number

// subString(start, end)

// result = x.substring(6, 18);
// result = x.substring(6);
// result = x.substring(-3,5);


// subStr(startIndex, length)

// result = x.substr(6,2);
// console.log(result);

// trim -> extra space remove
// console.log(x);
// console.log("Before trim string length: ",x.length);
// result = x.trim();
// console.log(result);
// console.log("after trim string length: ",result.length);

// trimStart()
// result = x.trimStart();
// console.log(result);
// console.log("after trim string length: ",result.length);

// trimEnd()
// result = x.trimEnd();
// console.log(result);
// console.log("after trim string length: ",result.length);

// padStart()
// let a = '15123';
// console.log(a.padStart(15,"z"));


// padEnd()
// console.log(a.padEnd(8,"z"));

// console.log(x.charAt(11))
// console.log(x.charCodeAt(11))

// concat

// let str1 = "Skill";
// let str2 = "Qode";
// let str3 = "Hello";
// console.log(str1.concat(" ",str2, " ", str3));


let x = "Now I am learning JAVASCRIPT";
// console.log(x.endsWith('JAVASCRIPT'))
// console.log(x.startsWith('Now'))

// // result = x.replace('I', 'i');
// result = x.replace(/\i/g, 'Z');
// console.log(result);

result = x.replaceAll('I', 'Z');
console.log(result);

