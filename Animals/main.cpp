#include"Mylibrary.h"

class Ship :public iSwim {
public:
	virtual void Swim() {
		cout << "Корабль - водный транспорт\n";
	}
};

class Airplane : public iFly {
public:
	virtual void Fly() {
		cout << "Самолеты летают в небе\n";
	}
};

void Func(iFly* ptr) {
	ptr->Fly();
}

void Func(iSwim* ptr) {
	ptr->Swim();
}

int main()
{
	Pinguin obj("Пингвин", 55, "Арктика");
	Parrot obj1("Какаду", 1 , "Клетка");

	//iSwim* ptr = &obj;
	//ptr->Swim();

	//Ship sh;
	//Func(&obj);
	//Func(&sh);

	Airplane pl;
	Func(&pl);
	Func(&obj1);
}