#include<iostream>
#include<sstream>
//#include"monopoly.hpp"
#include<iomanip>
using namespace std;
 // Monopoly::Monopoly(){
 //   //consturctor
 // }
 // Monopoly::~Monopoly(){
 //   //distructor
 //
 // }
 // int Monopoly::rollDice(){
 //   int value = rand() % 6 + 1;//randomizes number
 //   return value;
 // }
 // void Monopoly::addplayer(string name){
 //   	if(isEmpty())
 //   	{
 //      playerarray[End+1]=name;
 //      End=0;
 //      Front=0;
 //      return;
 //   	}
 //   	if(isFull())
 //   	{
 //   		cout<<"Limted 8 players, cannot add new player"<<endl;
 //   		return;
 //   	}
 //   	else
 //   	{
 //   		if(End==SIZE-1)
 //   		{
 //   			End=-1;
 //   		}
 //   		playerarray[End+1]=name;
 //   		End++;
 //   	}
 //   	return;
 //   }
 //
 // void Monopoly::removeplayer(string name){
 //   //if a player has no money or in debt and can't pay back they get dequeued
 //
 // }
 // void Monopoly::isTurn(){
 //   //call the roll dice twice and check what they headt
 //   //update the players status and what property they're on.
 // }
 struct Property{
   Property* next;
   std::string name;
   std::string color;
   int retail;
   int rent;
   int house;
   int house2;
   int house3;
   int hotel;
   int costHouse;
   int costHotel;
   int Freepark;
   bool owned;
   bool cc;
   bool GO;
   bool EX
   int xIndex;
   int yIndex;
 };
 Property * head=NULL;
 Property *tail=NULL;
 // prev->next=head;
 Property matrix[11][11];

 void printBoard(){
  for(int i=0;i<110;i++){
    cout<<"-";
  }

  Property *temp=head;
  while(temp->next!=head){
    cout<<setw(10)<<matrix[temp->xIndex][temp->yIndex].house<<"|"<<endl;
    temp=temp->next;
  }
  for(int i=0;i<110;i++){
    cout<<"-";
  }
 }

 void Monopoly::addplayer(string name){
   if(isFull()){
	 cout<<"Limted 8 players, cannot add new player"<<endl;
   return;
   }
   Player a = new Player;
   a.name = name;
   a.money = 1500;
   a.jail = false;
   a.doublesRolled = 0;
   if(isEmpty()){
     playerarray[Front] = a;
     End = Front;
   }
   else{
    playerarray[End+1] = a;
    End++;
  }
 }

 void addlinkedlist(string name_,string color_,int retail_,int rent_,int house_,int house2_,int house3_,int hotel_,int costHouse_,int costHotel_,int Freepark_,bool owned_,bool cc_,bool GO_,bool EX_,int xIndex_,int yIndex_){
   Property * temp= new Property;
   temp->retail=retail_;
   temp->rent=rent_;
   temp->house=house_;
   temp->house2=house2_;
   temp->house3=house3_;
   temp->hotel=hotel_;
   temp->costHouse=costHouse_;
   temp->costHotel=costHotel_;
   temp->owned=owned_;
   temp->color=color_;
   temp->name=name_;
   temp->xIndex=xIndex_;
   temp->yIndex=yIndex_;
   temp->name=name_;
   temp->color=color_;
   temp->Freepark=Freepark_;
   temp->cc=cc_;
   temp->GO=GO_;
   temp->EX=EX_;

   if(head==NULL)
   {
     temp->next=head;
     head= tail = temp;
   }
   else{
    tail->next= temp;
    tail = temp;
    tail->next = head;
   }
    Property *islist=head;
    matrix[islist->xIndex][islist->yIndex]=*islist;
 }
 int main(){
   string name, color;
   int retail, rent, house,house2, house3, hotel, costHouse, costHotel, Freepark;
   bool owned, cc, GO, EX;
   int xIndex, yIndex;
   string line="";
   ifstream file("Monopoly.txt");
   if(file.is_open())
   {
     while(getline(file,line)){
       stringstream ss;
       ss<<line;
       string info;
         getline(ss,info,',');
          name=info;
         getline(ss,info,',');
          color=info;
         getline(ss,info,',');
          retail=stoi(info);
         getline(ss,info,',');
          rent=stoi(info);
         getline(ss,info,',');
          house=stoi(info);
         getline(ss,info,',');
          house2=stoi(info);
         getline(ss,info,',');
          house3=stoi(info);
         getline(ss,info,',');
          hotel=stoi(info);
         getline(ss,info,',');
          costHouse=stoi(info);
         getline(ss,info,',');
          costHotel=stoi(info);
         getline(ss,info,',');
          Freepark=stoi(info);
         getline(ss,info,',');
          bool owned;
         getline(ss,info,',');
          bool cc;
         getline(ss,info,',');
          bool GO;
         getline(ss,info,',');
          bool EX;
         getline(ss,info,',');
          xIndex =stoi(info);
         getline(ss,info,',');
          yIndex =stoi(info);
         // getline(ss,info,',');
         addlinkedlist(name,color,retail,rent,house,house2,house3,hotel,costHouse,costHotel,Freepark,owned,cc,GO,EX,xIndex,yIndex);
     }
   }

   printBoard();
   // Monopoly P;
   // cout<<"WELCOME TO MONOPOLY"<<endl;
   // cout<<"PRESS 1 IF YOU WANT TO LEARN THE RULE"<<endl;
   // int value=0;
   // cin>>value;
   // if(value==1){
   //   cout<<"put all the rules in here"<<endl;
   // }
   // else{
   //   int counter=0;
   //   string name;
   //   cout<<"ENTER PLAYERS NAME: (players limited to 8)"<<endl;
   //   while(counter!=8){
   //     cin>>name;
   //     P.addplayer(name);
   //     counter++;
   //   }
   // }
   // P.isTurn();
   // cout<<"hi"<<<<"hello"

   }
