#ifndef GAME_H
#define GAME_H
#include "App.h"

using namespace std;

class Game : public App{ 
protected: 
	bool online;
	string category;
public:
	Game(bool,const string,const char *,const string,const float,const char *,const float);
	~Game();
	void Print() const;
	
	//Setter & Getter
	bool getOnline(); 
	string getCategory() const;
	
	void setOnline(bool );
	void setCategory(const string);
};

#endif
