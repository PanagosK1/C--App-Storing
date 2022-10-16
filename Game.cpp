#include "Game.h"
#include "App.h"
#include <iostream>
#include <string.h>

//Constructor για την κλαση game μέσω του οποιού καλείται ο κατασκευαστής της κλάσης App με τα απαιρέτητα ορίσματα
Game::Game(bool b ,const string cat,const char *c,const string name,const float vers,const char *pub,const float pr): App(c,name,vers,pub,pr){
	online = b ; 
	category = cat;
}
Game::~Game(){
	cout << "Destroying the Game " <<  endl;
}
//Συνάρτηση εκτύπωσης όλων των χαρακτηριστικών που έχουν όλα τα αντικείμενα τύπου game, αυτήν την φορά προτιμήθηκε να τυπόνωνται μέσω των συναρτήσεων get που κληρονομούνται απο την κλάση App
void Game::Print() const{
	cout<< endl ;
	cout <<"Details for Game : " << getName() << endl; 
	cout <<"Code : " << getCode() << endl;
	cout <<"Minimun Version of software : " << getVersion() << endl;
	cout <<"Developer : " << getDeveloper() << endl;
	cout <<"Price : " << getPrice() << endl; 
	cout <<"Category :" << category << endl;
	cout <<"Online : "	<< online << endl;	 
}

//Setters & Getters για το επιπλεόν χαρακτηριστικό της κλάσης Office

bool Game::getOnline(){ 
	return online;
}


string Game::getCategory() const {
	return category;
}

void Game::setOnline(bool on){
	online = on ; 
}

void Game::setCategory(const string cat){
	category = cat;
}
