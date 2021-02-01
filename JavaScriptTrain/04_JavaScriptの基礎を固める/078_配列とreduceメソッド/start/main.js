const arr = [1, 2, 3, 4, 5];

arr.reduce(
	function (accu, curr) {
		console.log(accu, curr);
		//return accu + curr;
	}, 10)

const str = 'animation';
const strArray = str.split('');
console.log(strArray);

const result = strArray.reduce((accu, curr) => {
	return '<' + curr + '>';
}, "")

console.log(result);
