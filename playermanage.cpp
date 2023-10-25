#include"playermanage.h"
management::management(int s)
{
	size = s;
	index = -1;
	p= new player[size];
	
}


bool management::isEmpty()
{
	if(index==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool management::isFull()
{
	if(index==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void management::addPlayer(player &pl)
{
	if(isFull())
	{
		cout<<"\n Storage is Full Cannot add More players..";
	}
	else
	{
		p[++index] = pl;
	}
}


void management::searchPlayer(int jn)
{
	if(isEmpty())
	{
		cout<<"\n No Records present in the Storage..";
	}
	else
	{
		int i;
		for(i =0; i<=index; i++)
		{
			if(p[i].getJn() == jn)
			{
				cout<<"\nPlayer Found In Record..";
				p[i].display();
				return;
			}
		}
		cout<<"\nPlayer Not Found In Record";
	}
}


void management::display()
{
	if(isEmpty())
	{
		cout<<"\n No Player to Display (No records)..";
	}
	else
	{
		for(int i = 0; i<= index; i++)
		{
			p[i].display();
			cout<<"\n--------------------------------";
		}
	}
}

void management::updatePlayer(int jn)
{
	if(isEmpty())
	{
		cout<<"\nUpdate Not Possible..";
	}
	else
	{
		int i;
		for(i = 0; i <=index; i++)
		{
			if(p[i].getJn()==jn)
			{
				int ch;
				cout<<"\n1.Change Name ";
				cout<<"\n2.Change Team ";
				cout<<"\n3.Change Age";
				cout<<"\n4.Matches Played";
				cout<<"\n5.Runs";
				cout<<"\nEnter Choice : ";
				cin>>ch;
				
				switch(ch){
					
					case 1:
						{
						char nm[20];
						cin.ignore();
						cout<<"\nEnter Player Name :";
						cin.getline(nm,20);
						p[i].setName(nm);
						}
						break;
						
					case 2:
						{
							char tm[20];
							cin.ignore();
							cout<<"\nEnter Player Team :";
							cin.getline(tm,20);
							p[i].setTeam(tm);
						}
						break;
					case 3:
						{
							int age;
							cin.ignore();
							cout<<"Enter the new age of the player:";
							cin>>age;
							p[i].setage(age);
						}
						break;
					case 4:
						{
							int matches;
							cin.ignore();
							cout<<"Enter the new no of matches played:";
							cin>>matches;
							p[i].setmatches(matches);
						}
						break;
					case 5:
						{
							int runs;
							cin.ignore();
							cout<<"Enter the runs scored by the Player:";
							cin>>runs;
							p[i].setruns(runs);
						}
						break;
						
					default:
						cout<<"\nEnter Valid Choice";
				}
			}
		}
		
		cout<<"\nUpdated Successfully..";
	}
	
}

void management::deletePlayer(int jn)
{
	if(isEmpty())
	{
		cout<<"\n Not Possible to delete";
	}
	else
	{
		int i;
		for(int i = 0; i<=index; i++)
		{
			if(p[i].getJn()==jn)
			{
				break;
			}
		}
	if(i>index)
	{
		cout<<"\nPlayer Not Found..";
		
	}
	else
	{
		while(i<index)
		{
			p[i]=p[i+1];
			i++;
		}
		index--;
		cout<<"\n Player record deteled";
	}
	 
	}
}
//dtor
management::~management()
{
	if(p!=NULL)
	{
		delete []p;
	}
}
