#include"player.h"
class management
{
	int size,index;
	player *p;
	public:
		management(int);
		bool isEmpty();
		bool isFull();
		void addPlayer(player &);
		void searchPlayer(int);
		void deletePlayer(int);
		void updatePlayer(int);
		void display();
		~management();
	
};
