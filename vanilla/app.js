// vanilla application
const app = document.getElementById('app');
window.run = ()=> app.innerText="Hello there, welcome to the land of opportunities.....";
app.innerHTML = '<button onclick="run()"">Load</button>';
