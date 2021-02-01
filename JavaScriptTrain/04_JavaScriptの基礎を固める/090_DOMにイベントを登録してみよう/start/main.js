const btn = document.querySelector('#btn');
const h1 = document.querySelector('h1');

function changeColor() {
	h1.style.color = 'red';
};
function changeBgColor() {
	h1.style.backgroundColor = 'Black';
};

btn.addEventListener('click', changeColor);
btn.addEventListener('clck', changeBgColor);

//btn.addEventListener('click', changeColor);
//btn.addEventListener('click', changeBgColor);
//btn.removeEventListener('mouseenter', hello);
btn.onclick = changeColor;
