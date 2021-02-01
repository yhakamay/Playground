todos = [
	{
		title: "Go to school",
		done: true,
		deadline: "30 Jan 2021"
	},
	{
		title: "Eat a curry",
		done: false,
		deadline: "20 Jan 2021"
	},
	{
		title: "Write the thesis",
		done: true,
		deadline: "30 Jan 2021"
	},
	{
		title: "Submit a document to Bunkyo city hall",
		done: true,
		deadline: "31 Jan 2021"
	}
]

for (i in todos) {
	let todo = todos[i];

	if (todo.done == true && todo.deadline == "30 Jan 2021") {
		console.log(todo.title);
	}
}
