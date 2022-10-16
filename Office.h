#ifndef OFFICE_H
#define OFFICE_H
#include "App.h"

class Office : public App
{
	protected:
		string typeoffiles;
	public:
		Office(const string,const char *,const string,const float,const char *,const float);
		~Office();
		void Print() const;
		
//Setter & Getter 		
	string getType() const;
	void setType(const string);
};

#endif
