console.log(
	[...Array(1000).keys()]
		.filter(n => !(n % 3) || !(n % 5))
		.reduce((p, n) => p + n)
);