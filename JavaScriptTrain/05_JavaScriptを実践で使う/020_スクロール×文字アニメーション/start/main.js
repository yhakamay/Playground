document.addEventListener('DOMContentLoaded', function () {

	const els = document.querySelectorAll('.animate-title');
	const cb = function (entries, observer) {
		entries.forEach(entry => {
			if (entry.isIntersecting) {
				const ta = new TextAnimation(entry.target);
				ta.animate();
				observer.unobserve(entry.target);
			}
		});
	};
	const options = {
		root: null,
		// デフォルトは0px；左右のmarginは原則設定しない；必ずpxか%をつける
		rootMargin: "0px",
		// オブジェクトのどこを起点として交差を判定するか？を設定する
		threshold: 0
	};
	const io = new IntersectionObserver(cb, options);
	els.forEach(el => io.observe(el));
	//io.observe(child);
});
