#include "AppSystem.h"
#include <iostream>
#include <string.h>


AppSystem::AppSystem()
{
}

AppSystem::~AppSystem()
{
}

//Συνάρτηση που πρόσθετει νέες εγγραφές στην λίστα με τα application
void AppSystem::AddApp(App *ap){
    cout << "Adding App to the list" << endl;
    apps.push_back(ap);
}

//Συνάρτηση εκτύπωσης όλων των στοιχειών της λίστας με τα application
void AppSystem::PrintApps(){
    cout << endl <<"List of apps stored:" <<endl;
    int i = apps.size();
    for (int j=0 ; j<i ;j++){
        apps[j]->Print(); 
        cout << endl;
    }
}

//Συνάρτηση εκτύπωσης που παίρνει σαν είσοδο ενα κανάλι επικοινωνιάς που θέλουμε , για το πάρσιμο των τιμών χρησιμοποιούνται οι συναρτήσεις get της κλάσης App
void AppSystem::PrintAppVec(ostream &ch){
    ch << endl <<"List of apps stored:" <<endl;
    int i = apps.size();
    for (int j=0 ; j<i ;j++){
        ch << "Name : " << apps[j]->getName() << endl; 
        ch << "Code : " << apps[j]->getCode() << endl;
        ch << "Developer : " << apps[j]->getDeveloper() << endl; 
        ch << "Price : " << apps[j]->getPrice() << endl; 
        ch << "Version : " << apps[j]->getVersion() << endl;
        apps[j]->getRate(ch);
        ch << endl;
    }
}

//Συνάρτηση που δέχεται σαν όρισμα την εφαρμογή και το rating που θα χορηγηθεί σε αυτή και στην συνέχεια καλείται η συνάρτηση που αποθηκεύει την αξιολόγηση μέσα στην λίστα αξιολογήσεων της κάθε application
void AppSystem::AddRating(App *ap,UserRating *rt){
    cout << "Adding rating for the app " << ap->getName();
    ap->AddRate(rt);
}

//Συνάρτηση που εισάγεται νέος κατασκευαστής για την εφαρμογή της επιλογής μας 
void AppSystem::AddDeveloper(App *ap,Developer *dev){
    cout << endl << "Deleting old Deloper " << ap->getDeveloper();
    char *p;
    p = dev->getDev();
    int l = strlen(p);
    cout << "changing into " ;
    for(int i=0 ; i < l ; i++){
        cout << "" << *(p+i);
    }
    ap->setDeveloper(p);
}

//Συνάρτηση που ελέγχει την λίστα εφαρμογών για παιχνίδια που χουν αξιολογήσεις πάνω απο 4 κατα μέσο όρο
void AppSystem::GoodGames(){
    cout << "Searching for good games !" << endl;
    int i = apps.size();
    float rate=0;
    Game *tmp;
    for (int j=0 ; j<i ;j++){
        tmp = dynamic_cast<Game*> (apps[j]);
        if(tmp != NULL){
            rate = tmp->getTotalRating();
            cout << "Rating for " << tmp->getName() << " is " << rate << endl;
            if(rate >= 4){
               tmp->Print();
            }else
            cout <<"There is no games with rating above 4 !" << endl;
        }
    }
}

//Συνάρτηση που καταργεί τις εφαρμογές που έχουν κακόβουλο developer
void AppSystem::DeleteMalApps(){
    cout << "Searching the list for malicious developers" << endl;
}

//Ακολουθούν συναρτήσεις για αλλαγή χαρακτηριστικων στις ήδη υπάρχοντες εφαρμογές, ανάλογα τι επιζητούμε να αλλάξουμε χρειάζεται να δώσουμε και στην συνέχεια ενα όρισμα. 
//Για την υλοποιήση των αλλαγών χρησιμοποιούνται οι έτοιμες συναρτήσεις set που υπάρχουν στην κλάση app
void AppSystem::ChangeCode(App *ap , char *c){
    cout << endl << "Deleting old code " << ap->getCode();
    int l = strlen(c);
    cout << " changing into " ;
    for(int i=0 ; i < l ; i++){
        cout << "" << *(c+i);
    }
    ap->setCode(c);
}


void AppSystem::ChangeName(App *ap , string str){
    cout << endl << "Deleting old name " << ap->getName() << " changing into " << str << endl ;
    ap->setName(str);
}

void AppSystem::ChangePrice(App *ap ,float pr){
    cout << endl << "Deleting old price " << ap->getPrice() << " changing into " << pr << endl;
    ap->setPrice(pr);
}


void AppSystem::ChangeVersion(App *ap ,float vr){
    cout << endl << "Deleting old version " << ap->getVersion() << " changing into " << vr << endl ;
    ap->setVersion(vr);
}

//Συνάρτηση που ελέγχει την λίστα εφαρμογών για εφαρμογές γραφείου που είναι δωρεάν προς χρήση 
void AppSystem::getFreeOfApp(){
    cout << endl << "Seachring for free Office Apps" << endl;
    int i = apps.size();
    float pr = 0;
    Office *tmp;
    for (int j=0 ; j<i ;j++){
        tmp = dynamic_cast<Office*> (apps[j]);
        if(tmp != NULL){
            pr = tmp->getPrice();
            if(pr == 0 ){
                cout << "Office App " <<  tmp->getName() << " is free to install ! " << endl;
            }else
            cout << "Office app " <<tmp->getName() << " is not free to install ! " << endl;
        }
    }
}
