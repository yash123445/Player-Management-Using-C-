#include "player.h"
#include<string.h>

//def ctor
player::player()
{
	this-> jn = 0;
	strcpy(this->pname,"Not Provided");
	strcpy(this->pteam,"Not Provided");
	this->age = 0;
	strcpy(this->prole,"Not Provided");
	strcpy(this->gender,"Not Provided");
	this->matches = 0;
	this->runs=0;
	this->average=0;
}

//param ctor
player::player(int j, char* nm, char* tm,int a,char* r,char* g,int m,int rn,float av)
{
	this->jn = j;
	strcpy(this->pname,nm);
	strcpy(this->pteam,tm);
	this->age = a;
	strcpy(this->prole,r);
	strcpy(this->gender,g);
	this->matches = m;
	this->runs=rn;
	this->average=av;
}

//setters
void player::setJn(int j)
{
	this->jn = j;
}
void player::setName(char* nm)
{
	strcpy(this->pname,nm);
}
void player::setTeam(char* tm)
{
	strcpy(this->pteam,tm);
}
void player::setage(int a)
{
	this->age= a;
}
void player::setrole(char* r)
{
	strcpy(this->prole,r);
}
void player::setgender(char* g)
{
	strcpy(this->gender,g);
}
void player::setmatches(int m)
{
	this->matches = m;
}
void player::setruns(int rn)
{
	this->runs = rn;
}
void player::setaverage(float av)
{
	this->average = av;
}


//getters
int player::getJn()
{
	return jn;
}
char* player::getName()
{
	return pname;
}
char* player::getTeam()
{
	return pteam;
}
int player::getage()
{
	return age;
}
char* player::getrole()
{
	return prole;
}
char* player::getgender()
{
	return gender;
}
int player::getmatches()
{
	return matches;
}
int player::getruns()
{
	return runs;
}
float player::getaverage()
{
	return average;
}

//display method
void player::display()
{
	cout<<"\n\t Jersey Number  : "<<jn;
	cout<<"\n\t Player Name    : "<<pname;
	cout<<"\n\t Team Name      : "<<pteam;
	cout<<"\n\t Age Of Player  : "<<age;
	cout<<"\n\t Role Of Player : "<<prole;
	cout<<"\n\t Gender         : "<<gender;
	cout<<"\n\t Matches Played : "<<matches;
	cout<<"\n\t Runs Scored    : "<<runs;
	cout<<"\n\t Average        : "<<average;
}
