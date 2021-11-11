#include <iostream>
#include "Patient.h"
#include "Date.h"
#include "Service.h"
#include "Turn.h"
#include "Managment.h"
using namespace std;

int main()
{
	Patient p;
	cin >> p;
	cout << p;

	Date date;
	cin >> date;
	cout << date;

	Ortodensi d;
	JermGiri j;
	Lamineyt l;
	Implant i;
	Service* service = new Service();

	service = &d;
	cout << service->getType() << " " << service->getPrice() << endl;

	service = &j;
	cout << service->getType() << " " << service->getPrice() << endl;

	service = &i;
	cout << service->getType() << " " << service->getPrice() << endl;

	service = &l;
	cout << service->getType() << " " << service->getPrice() << endl;

	//nobat ha
	Turn t(p, date, service);
	cout << t;

	//naghshe monshi
	Managment manage;
	manage.addPatient(t);

	cout << manage.getQueueLength() << " " << manage.getCurrentBudget() << endl;
	Turn t2=manage.servicePatient();
	cout << manage.getQueueLength() << " " << manage.getCurrentBudget() << endl;
}