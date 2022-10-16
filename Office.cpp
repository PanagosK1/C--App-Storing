#include "Office.h"
#include "App.h"
#include <iostream>
#include <string.h>

//Constructor ��� ��� ����� office ���� ��� ������ �������� � ������������� ��� ������ App �� �� ���������� ��������
Office::Office(const string tp,const char *c,const string name,const float vers,const char *pub,const float pr): App(c,name,vers,pub,pr)
{
	typeoffiles = tp;
}

Office::~Office()
{
	cout << "Destroying office app " << endl;
}

//��������� ��������� ���� ��� ��������������� ��� ����� ��� �� ����������� ����� office, ����� ��� ���� ����������� �� ���������� ��������� �� �������������� ��� �������������� ��� ��� ����� App
void Office::Print() const{
	cout<<endl <<endl;
	cout<< "Details for Office-App : " << name << endl ;
	cout <<"Code : " ;
	int size = strlen(code);
	for(int i=0; i<size; i++)
		cout<<""<<*(code+i);
	cout << endl;
	cout <<"Minimun Version of software : " << getVersion() << endl;
	cout <<"Developer : " ;
	size = strlen(developer);
	for(int i=0; i<size; i++)
		cout<<""<<*(developer+i);
	cout << endl;
	cout <<"Price : " << price << endl;
	cout <<"Type of files : " << typeoffiles << endl;
}

//Setter & Getter ��� �� �������� �������������� ��� ������ Office
string Office::getType() const{
	return typeoffiles;
}

void Office::setType(const string type){
		typeoffiles = type;
}
