#include<iostream>
using namespace std;

class player{
	int jn;
	int age;
	int matches;
	int runs;
	float average;
	char pname[20];
	char pteam[20];
	char prole[10];
	char gender[10];
	public:
		player();
		player(int,char*,char*,int,char*,char*,int,int,float);
		
		//setters
		void setJn(int);
		void setName(char*);
		void setTeam(char*);
		void setage(int);
		void setrole(char*);
		void setgender(char*);
		void setmatches(int);
		void setruns(int);
		void setaverage(float);
		
		//getters
		int getJn();
		char* getName();
		char* getTeam();
		int getage();
		char* getrole();
		char* getgender();
		int getmatches();
		int getruns();
		float getaverage();
		
		//display
		void display();
};
