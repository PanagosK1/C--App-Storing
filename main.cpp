//Author:Παναγιώτης Κυριακάκος
//AM:47138

#include <iostream>
#include <string.h>
#include "App.h"
#include "Game.h"
#include "Office.h"
#include "UserRating.h"
#include "AppSystem.h"
#include "Developer.h"



int main(int argc, char** argv) {
	
	system ("chcp 1253"); 

  	App app1("ik2832","Appie",1.24,"Origin",30.5);
  	app1.Print();
  	Game app2(1,"Strategic","Wf4521","World of war 2",1.55,"Origin",50.5);
	Game app4(1,"MOBA","Wf4521","League of Legends",2.48,"RIOT",0);
	Game app5(1,"Shooter ","CSGO2512","Counter Strike",1.55,"Valve",0);
   	app2.Print();
	Office app3(".xlsx","C1523","Excel",2.1,"Microsoft",10);
	Office app6(".mp4","Md2541","Media Player",2.1,"Tool",0);
	app3.Print();
	UserRating r1(4.1,"Angelia","Quite good and fun game!");
	UserRating r2(0.5,"Skara","Not Usefull at all!");
	UserRating r3(3.5,"Dad_dy","Most fun ever!");
	UserRating r4(5,"Covid","Such a great game");
	Developer dev1("Origin EA","Tk2541","Origin@origin.com");
	Developer dev2("Skipper","Mk1515","Mal25@gmail.com");
	r1.PrintRate();
	AppSystem Apps;
	Apps.AddApp(&app1);
	Apps.AddApp(&app2);
	Apps.AddApp(&app3);
	Apps.AddApp(&app4);
	Apps.AddApp(&app5);
	Apps.AddApp(&app6);
	app3.AddRate(&r1);
	Apps.AddRating(&app3,&r2);
	Apps.AddRating(&app5,&r1);
	Apps.AddRating(&app5,&r3);
	Apps.AddRating(&app5,&r4);
	Apps.PrintApps();
	Apps.AddDeveloper(&app2,&dev1);
	Apps.AddDeveloper(&app3,&dev2);
	Apps.PrintApps();
	Apps.GoodGames();
	app3.getTotalRating();
	Apps.ChangeCode(&app3,"Ex1111");
	Apps.PrintAppVec(cout);
	Apps.getFreeOfApp();
	return 0;
}
