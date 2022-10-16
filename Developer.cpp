#include "Developer.h"
#include <iostream>
#include <string.h>

Developer::Developer(const char * name, const char * cod, const string mail )
{
	int len = strlen(cod);
	code = new char[len];
	strcpy(code,cod);
	
	int le = strlen(name);
	devname = new char[le];
	strcpy(devname,name);
	email = mail; 
	
}

Developer::~Developer()
{
	cout << "Destroying developer " << devname << endl; 
	delete []code;
	delete []devname;
}

void Developer::PrintDev(){
	cout <<"Name of Developer : "; 
	int le = strlen(devname);
	for(int i=0; i<le; i++)
		cout<<""<<*(devname+i);
	cout <<endl <<"Code : " ;
	int size = strlen(code);
	for(int i=0; i<size; i++)
		cout<<""<<*(code+i);
	cout << "Contact him at " << email;
	cout << endl;
}

char * Developer::getCode() const{ //getter ��� ��� ������ ��� ���������
	return code;
}

char * Developer::getDev() const{ //getter ��� �� ����� ��� ���������
	return devname;
}

string Developer::getMail() const{
	return email;
}

void Developer::setDev(const char * name){
	delete []devname ;
	int len = strlen(name);
	code = new char[len];
	strcpy(devname,name);
}

void Developer::setCode(const char *co){
	delete []code ;
	int len = strlen(co);
	code = new char[len];
	strcpy(code,co);
}


void Developer::setMail(const string mail){
	email = mail;
}
