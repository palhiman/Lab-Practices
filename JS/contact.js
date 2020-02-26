var contacts = [
	{
		"firstName":"Akira",
		"lastName":"Laine",
		"number":"05454334234",
		"likes":["Pizza", "Coding", "Hacking"]
	},
	{
		"firstName":"Harry",
		"lastName":"Potter",
		"number":"0343493258",
		"likes":["Hogwarts", "Magic", "Hagrid"]
	},
	{
		"firstName":"Sherlock",
		"lastName":"Holmes",
		"number":"22BakersStreet",
		"likes":["Violin","Intriguing Cases"]
	},
	{
		"firstName":"Kristian",
		"lastName":"Vos",
		"number":"unknown",
		"likes":["Javascript", "Gaming", "Foxes"]
	}
];

function lookUpProfile(name, prop){
	for(var i=0; i<contacts.length; i++){
		if(contacts[i].firstName === name){
			return contacts[i][prop] || "No such property";
		}
	}

	return "No such contacts!!!";
}

var data = lookUpProfile("Sherlock", "hello");
console.log(data);
