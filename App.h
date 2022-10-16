#ifndef App_h
#define App_h
#include <string>
#include <vector>
#include "UserRating.h"

using namespace std;

class App{ 
	protected:
		char *code;
		string name;
		float min_version;
		char *developer;
		float price;
		vector <UserRating *> rating;
	public:
		App(const char *, const string, const float, const char *,const float);
		~App();
		virtual void Print();
		void AddRate(UserRating *);
		void getRate(ostream &);

		//Getters Setters 
		char* getCode() const; 
		string getName() const; 
		float getVersion() const;
		char* getDeveloper() const; 
		float getPrice() const;
		float getTotalRating();
		
		void setName(const string);
		void setCode(const char *);
		void setVersion(const float);
		void setDeveloper(const char *);
		void setPrice(const float);

};

#endif
