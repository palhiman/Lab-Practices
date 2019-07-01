const http = require('http');

const hostname = "127.0.0.5";
const port = 3500;

const server = http.createServer((req, res) => {
	res.StatusCode=200;
	res.setHeader('Content-Type', 'text/plain');
	res.end('Hello Himanshu. Welcome to the server created by Nodejs.\n')
});

server.listen(port, hostname, () => {
	console.log('Server running at http://${hostname}:${port}/');
});



