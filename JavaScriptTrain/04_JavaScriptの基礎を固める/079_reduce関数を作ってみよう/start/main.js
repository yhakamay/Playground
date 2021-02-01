const str = 'animation';
const strArry = str.split('');

function tag(accu, curr) {
	console.log(accu, curr);
	return `${accu}<${curr}>`;
}

function reduce(arr, callback, defaultValue) {
	let accu = defaultValue;

	for (v of arr) {
		let curr = v;
		accu = callback(accu, curr);
	}

	return accu;
}

const result = reduce(strArry, tag, "");
console.log(result);
