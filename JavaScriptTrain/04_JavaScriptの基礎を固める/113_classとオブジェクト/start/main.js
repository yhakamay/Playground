const obj = {
	firstName: 'Mafia',
	lastName: 'Code',
	printFullName: function () {
		console.log(`${this.lastName} ${this.firstName}`);
	}
}

class MyObj {
	constructor() {
		this.firstName = 'Mafia';
		this.lastName = 'Code';
	}

	printFullName() {
		console.log(`${this.lastName} ${this.firstName}`);
		//console.log('hello');
	}
}

const obj2 = new MyObj();
obj.printFullName();
obj2.printFullName();
