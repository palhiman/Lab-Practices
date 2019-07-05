var http = require('http');
var dt = require('./my_module');

http.createServer(function(req, res){
	res.writeHead(200, {'Content-Type':'text/html'});
	res.write("Current data and time are: " + dt.myDateTime());
	res.end();
}).listen(7000);
