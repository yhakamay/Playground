const child = document.querySelector('.child');
const cb = function (entries, observe) {
	entries.forEach(entry => {
		if (entry.isIntersecting) {
			entry.target.classList.add('inview');
			// observer.unobserve(entry.target);
		} else {
			entry.target.classList.remove('inview');
		}
	});
	// alert('intersecting');
}
const options = {
	root: null,
	// デフォルトは0px；左右のmarginは原則設定しない；必ずpxか%をつける
	rootMargin: "-300px 0px",
	// オブジェクトのどこを起点として交差を判定するか？を設定する
	threshold: [0, 0.5, 1]
};
const io = new IntersectionObserver(cb, options);

io.observe(child);
