#include "App.h"
#include <iostream>
#include <string.h>

//Constructor της κλάσης app
App::App(const char *c,const string na, const float vers, const char *pub, const float pr){
	
	int len = strlen(c);
	code = new char[len];
	strcpy(code,c);
	
	name = na;
	min_version = vers;
	
	int le = strlen(pub);
	developer = new char[le];
	strcpy(developer,pub);
	price = pr;
}

App::~App(){
	cout << "Destroying the Application " << name <<  endl;
	delete []code;
	delete []developer;
}

//Συνάρτηση εκτύπωσης όλων των χαρακτηριστικών που έχουν όλα τα αντικείμενα τύπου Αpp
void App::Print(){
	cout <<"Name of App: " << name << endl; 
	cout <<"Code : " ;
	int size = strlen(code);
	for(int i=0; i<size; i++)
		cout<<""<<*(code+i);
	cout << endl;
	cout <<"Minimun Version of software : " << min_version << endl;
	cout <<"Developer : " ;
	size = strlen(developer);
	for(int i=0; i<size; i++)
		cout<<""<<*(developer+i);
	cout << endl;
	cout <<"Price : " << price << endl;
	cout <<"Ratings:" ;
    int i = rating.size();
	if(i!=0){
    for (int j=0 ; j<i ;j++){
        rating[j]->PrintRate(); 
		}
	}else{
		cout << "No available ratings yet !" << endl;
	}
	cout << endl;
}

//Σνάρτηση για την τύπωση των αξιολογήσεων που χει η εκάστοτε εφαρμογή. Σαν όρισμα παίρνει ενα κανάλι επικοινωνιάς.
void App::getRate(ostream &ch){
	ch <<"Ratings:" ;
    int i = rating.size();
	if(i!=0){
    for (int j=0 ; j<i ;j++){
        rating[j]->PrintRate(); 
		}
	}else{
		ch << "No available ratings yet !" << endl;
	}
	ch << endl;
}

//Setters & Getters
//Για το κωδικό της κάθε εφαρμογής
char * App::getCode() const{ 
	return code;
}

//Για το όνομα 
string App::getName() const{ 
	return name;
}

//Για την ελάχιστη έκδοση που τρέχει
float App::getVersion() const {
	return min_version;
}

//Για τον κατασκευαστή
char * App::getDeveloper() const{ 
	return developer;
}

//Για την τιμή που χει
float App::getPrice() const {
	return price;
}

//Με ακριβώς την ίδια σειρά υπάρχουν και οι setters για τα παραπάνω χαρακτηριστικά
void App::setCode(const char * Cod){ 
	delete [] code;
	int len = strlen(Cod)+1;
	code = new char [len];
	strcpy(code,Cod);
}


void App::setName(const string nam){
	name = nam ; 
}

void App::setVersion(const float v){
	min_version = v ;
}


void App::setDeveloper(const char * Pro){ 
	delete [] developer;
	int len = strlen(Pro)+1;
	developer = new char [len];
	strcpy(developer,Pro);
}


void App::setPrice(const float pr){
	price = pr ;
}

//Συνάρτηση για την εισαγωγή νέας αξιολόγησης για κάποια εφαρμογή
void App::AddRate(UserRating *rate)
{
	rating.push_back(rate);
	cout << "App " << name << " rating :" << endl;
    int i = rating.size();
    for (int j=0 ; j<i ;j++){
        rating[j]->PrintRate();
        cout << endl;
	}
}

//Συνάρτηση που παράγει τον μέσο όρο όλων των αξιολογήσεων που υπάρχουν για την εκάστοτε εφαρμογή
float App::getTotalRating(){
	float avg,sum = 0;
	int c = 0;
	for(int i =0 ; i<(int)rating.size() ;i++){
		sum = sum + rating[i]->getStar();
		c+=1;
	}
	avg = sum/c;
	cout << " The total ratings for the " << name << " is " << avg <<endl;
	return avg;
}
