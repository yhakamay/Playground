function hello(callback, lastName) {
	console.log('hello ' + callback(lastName));
}

//function getName() {
//	return 'Yusuke Hakamaya';
//}

//function getFirstName() {
//	return 'Yusuke';
//}

hello(function () {
	return 'Yusuke';
})

//	上下二つは同じ意味

//hello(() => 'Yusuke');

hello(function (lastName) {
	return 'Yusuke ' + lastName;
}, 'Hakamaya')

function doSomething(a, b, callback) {
	const result = callback(a, b);
	console.log(result);
}

doSomething(3, 4, (a, b) => a * b);
doSomething(3, 4, (a, b) => a + b);

