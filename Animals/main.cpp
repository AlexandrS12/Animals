#include"Mylibrary.h"

class Ship :public iSwim {
public:
	virtual void Swim() {
		cout << "������� - ������ ���������\n";
	}
};

class Airplane : public iFly {
public:
	virtual void Fly() {
		cout << "�������� ������ � ����\n";
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
	Pinguin obj("�������", 55, "�������");
	Parrot obj1("������", 1 , "������");

	//iSwim* ptr = &obj;
	//ptr->Swim();

	//Ship sh;
	//Func(&obj);
	//Func(&sh);

	Airplane pl;
	Func(&pl);
	Func(&obj1);
}