#ifndef APPSYSTEM_H
#define APPSYSTEM_H
#include <vector>
#include <string>
#include "App.h"
#include "UserRating.h"
#include "Developer.h"
#include "typeinfo"
#include "Game.h"
#include "Office.h"



class AppSystem
{
	protected:
		vector <App *> apps;
		vector<App *>::iterator ptr;

	public:
		AppSystem();
		~AppSystem();
		void AddApp(App *);
		void PrintApps();
		void PrintAppVec(ostream &);
		void AddRating(App *,UserRating *);
		void AddDeveloper(App *,Developer *);
		void GoodGames();
		void DeleteMalApps();
		void ChangeCode(App *,char *);
		void ChangeName(App *,string );
		void ChangePrice(App *,float );
		void ChangeVersion(App *,float );
		void getFreeOfApp();
};

#endif
