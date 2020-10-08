var inputString = '';
var currentLine = 0;

process.stdin.on('data', (inputStdin) => {
	inputString += inputStdin;
});

process.stdin.on('end', (_) => {
	inputString = inputString.trim().split('\n').map((string) => {
		return string.trim();
	});

	main();
});

function readLine() {
	return inputString[currentLine++];
}

/**
 * Decrypts the color codes
 * @param {Array} color_codes - Array of color codes
 * @return {String} - Decrypted Message
 */
function decrypt(color_codes) {
	let result = '';
	for (let j = 0; j < color_codes.length; j++) {
		let s = [ '', '', '' ];
		for (let k = 2; k >= 0; k--) {
			s[k] = String.fromCharCode(color_codes[j] % 256);
			color_codes[j] = Math.floor(color_codes[j] / 256);
		}
		result += s[0] + s[1] + s[2];
	}
	return result;
}

function main() {
	var t = Number(readLine());
	for (var i = 0; i < t; i++) {
		readLine();
		var color_codes = readLine().trim().split(' ').map((string) => {
			return parseInt(string, 16);
		});
		console.log(decrypt(color_codes));
	}
}
