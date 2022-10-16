#ifndef DEVELOPER_H
#define DEVELOPER_H
#include <string>
using namespace std;

class Developer
{
	protected:
		char * devname;
		char *code;
		string email;
	public:
		Developer(const char *,const char *,const string);
		~Developer();
		void PrintDev();
		//Setters Getters 
		char* getCode() const; 
		char * getDev() const;
		string getMail() const; 
		
		void setDev(const char *);
		void setCode(const char *); 
		void setMail(const string);
		
};

#endif
