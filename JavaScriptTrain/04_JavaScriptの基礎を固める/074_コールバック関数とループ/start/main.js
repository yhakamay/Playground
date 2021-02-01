const arr = [1, 2, 3, 4];

function forEach(arr, callback) {
	for (i in arr)
		callback(arr[i]);
}

function log(value) {
	console.log(value);
}

////function double(value) {
//	log(value * 2);
//}

forEach(arr, log);
console.log('--')
//forEach(arr, double);
console.log('--')
forEach(arr, function (v) {
	v *= 2;
	console.log(v);
});
