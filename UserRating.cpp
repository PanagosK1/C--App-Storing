#include "UserRating.h"
#include <iostream>
#include <string.h>

UserRating::UserRating(const float strs, const string user, const string sxolia)
{
	if(strs>5 || strs<0){
		stars = NULL;
	}else
	stars = strs;
	
	name = user ; 
	feedback = sxolia; 
}

UserRating::~UserRating()
{
	cout<<"Destroying rate from user " << name << endl;
}

float UserRating::getStar() const{ 
	return stars;
}

string UserRating::getName() const {
	return name;
}

string UserRating::getFeed() const {
	return feedback;
}

void UserRating::setStar(const float strs ){
	if(strs>5 || strs<0){
		stars = NULL;
		cout << "The rating must be between 0 and 5." << endl << "Try Again!" << endl ;
	}else
	stars = strs;
}

void UserRating::setName(const string user){
	name = user;
}

void UserRating::setFeed(const string sxolia){
	feedback = sxolia;
}

void UserRating::PrintRate(){
	cout<<endl <<endl;
	cout<<"Rate from user : " << name << endl;
	cout<<"Stars :" << stars << endl;
	cout<<"Feedback:"<< endl << "" << feedback;
}
