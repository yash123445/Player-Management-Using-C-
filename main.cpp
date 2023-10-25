#include "playermanage.h"

int main() {
	cout<<"\n\t------------------------------------Player Management--------------------------------------------------";
	int ch;
	management m1(5);
	
	while(ch!=6)
	{
		cout<<"\n\n\t-----Menu-----";
		cout<<"\n1.Store PLayer Info";
		cout<<"\n2.Display Player Info";
		cout<<"\n3.Search Player";
		cout<<"\n4.Update Player Info";
		cout<<"\n5.Remove Player";
		cout<<"\n6.Exit";
		cout<<"\n-----------------------------------------------------";
		
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
				int jn;
                char pname[20];
                char pteam[20];
                int age;
                char prole[10];
                char gender[10];
                int matches;
                int runs;
                float average;
                cout << "\n----Enter following details of Player----";
                cout << "\n\tJersey Number : ";
                cin >> jn;
                cin.ignore();
                cout << "\n\tName : ";
                cin.getline(pname, 20);
                cout << "\n\tTeam : ";
                cin.getline(pteam, 20);
                cout << "\n\tAge of the player:";
                cin >> age;
                cin.ignore();
                cout << "\n\tRole : ";
                cin.getline(prole, 10);
                cin.ignore();
                cout << "\n\tGender : ";
                cin.getline(gender, 10);
                cout << "\n\tMatch Played:";
                cin >> matches;
                cin.ignore();
                cout << "\n\t Runs Scored By Player:";
                cin >> runs;
                cin.ignore();
                average = (runs/matches);
                cout<<"\n\t Average Of the Player:"<<average;
                player p1(jn, pname, pteam, age, prole,gender,matches,runs,average);
                m1.addPlayer(p1);
				}
				break;
				
			case 2:
				{
					cout<<"\n---------- Players ------------";
					m1.display();
				}
				break;
				
			case 3:
				{
					int jn;
					cout<<"\nEnter Jersey Number to Find Player : ";
					cin>> jn;
					m1.searchPlayer(jn);
				}
				break;
				
			case 4:
				{
					int jn;
					cout<<"\nEnter Jersey Number to Update : ";
					cin>>jn;
					m1.updatePlayer(jn);
				}
				break;
				
			case 5:
				{
					int jn;
					cout<<"\nEnter jersey Number of player You want to delete : ";
					cin>>jn;
					m1.deletePlayer(jn);
					
				}
				break;
			default :
				cout<<"\n Thank You :)";
				
		}
	}
	return 0;
}
