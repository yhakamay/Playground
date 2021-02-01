const person = {
	name: ['Code', 'Mafia'],
	age: 32,
	gender: 'male',
	interests: {
		sports: 'soccer',
		music: 'piano'
	},
	putFullName: function () {
		console.log(this.name[0] + ' ' + this.name[1]);
	}
};

person.age = 12;
console.log(person.interests.sports);
console.log(person.age);
person.putFullName();

const s = 'hello world';
s.length;
console.log(s.toUpperCase());
