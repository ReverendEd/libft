class StupidPeople extends Person {
	constructor()
	{
		this.list = []
	}

	addPerson(person){
		this.list.push(person)
	}
}

class Person {
	constructor(name, iq)
	{
		this.name = name
		this.iq = iq
		this.footHurts = false
		this.punched = false
	}

	stepOnTheirFoot()
	{
		this.footHurts = true
	}

	punchPerson = () => {
		this.punched = true
	}

	static punchAndMakeThemCry = (people, () => {
		people.forEach(person=>{
			person.punched = true
		})
	})
}

let chris = new Person('chris', 1.2)
let stupidPeopleList = new StupidPeople()
chris.stepOnTheirFoot()
stupidPeopleList.addPerson(chris)