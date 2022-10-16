#ifndef USERRATING_H
#define USERRATING_H
#include <string>

using namespace std;

class UserRating
{
	protected:
		float stars;
		string name;
		string feedback;
	public:
		UserRating(const float, const string ,const string);
		~UserRating();
		
//Setter & Getter
		float getStar() const; 
		string getName() const;
		string getFeed() const;
		void setStar(const float );
		void setName(const string);
		void setFeed(const string);
		void PrintRate();
};

#endif
