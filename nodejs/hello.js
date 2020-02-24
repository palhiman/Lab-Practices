const http = require('http');	// loads the http module

http.createServer((request, response) => {
	response.writeHead(200, {
		'Content-Type':'text/plain'
	}); // this tells browser everything is OK with the status code

	response.write('Hello, Himanshu !!!\n'); // Write the text to the body of page

	response.end();	// tells the server to close all the response headers


}).listen(process.env.PORT); // tells the server what port to be on