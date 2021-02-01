const h1 = document.querySelector('h1');
h1.style.color = 'red';

const dcl = document.querySelector('.dcl');
const load = document.querySelector('.load');

//// windowに対しても適用できる
//document.addEventListener("DOMContentLoaded", function () {
//	dcl.classList.add('done');
//});

//// documentに対しては適用できない
//window.addEventListener("load", function () {
//	load.classList.add('done');
//});
