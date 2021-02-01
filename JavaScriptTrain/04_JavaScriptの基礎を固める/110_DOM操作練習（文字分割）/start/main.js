document.addEventListener('DOMContentLoaded', function () {
	const el = document.querySelector('.animate-title');
	const str = el.innerHTML.trim().split("");

	el.innerHTML = str.reduce((acc, curr) => {
		curr = curr.replace(' ', '&nbsp;');
		return `${acc}<span class="char">${curr}</span>`;
	}, '');
});
