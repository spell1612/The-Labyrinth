#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>
#define i cin>>
#define o cout<<
#define c case
#define d ;delay(2000);cout<<


void map1();
void map2();
void map3();
void map4();
void map5();
void map6();
void map7();

void invent(int,int,int &);


class game
{public:char na[20],b,p;
 int d1,d2,d3,d4,d5,d6,d7,c1,c2,c3,c4,c5,f6,f7,v1,v2,in,f1,c7; //binary deciders
 game()
 {
  strcpy(na,"xyz");
  d1=0;d2=0;d3=0;d4=0;d5=0;d6=0;d7=0;c1=0;c2=0;c3=0;c4=0;c5=0;f6=0;f7=0;v1=0;v2=0;in=0;f1=0;c7=0;b='k';//initialisations
 }
 void part1(char);
 void part2(char);
 void part3(char);
 void part4(char);
 void part5(char);
 void part6(char);
 void part7(char);
 void part8(char);
}s,t;


void the_end(fstream &prof,int count,int cc)
{
 if(cc!=0)
 {prof.seekg(count*sizeof(game));
  prof.write((char*)&s,sizeof(game));
 }
 else
 {prof.seekg(0,ios::end);
  prof.write((char*)&s,sizeof(game));
 }


 clrscr();
 o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
 o"Thank you for playing The Labrynth\n";delay(600);
 o"\n\n\nStory:\nDan Drake,Jay Kay\n";delay(600);
 o"\n\nAlgorithms Developed by:\nSpeLL1612\n";delay(600);
 o"\nCode Written by:\nJay Kay,Spell1612\n";delay(600);
 prof.close();
 getch();
 exit(0);
}



void invent(int v1,int v2,int &d7)
{char f='i';
clrscr();
o"\nInventory\n";
if(v1==1){o"1.Piece of paper\n2.Audio Recorder\n";if(v2==1)o"3.Fireman's Axe\n4.Food\n";}o"\n\n(press corresponding numbers to use item,press b to go back to game)\n";
while(f!='b')
{f=getch();if(f=='1')o"On the piece of paper, it is written 'dogice'.\n";else if(f=='2')o"It seems to be broken.\n";else if(f=='3')o"A sturdy Axe made of iron.\n";else if(f=='4'){if(d7==0){o"You ate the food.\nYou felt strength coming back into your limbs\n";d7=1;}else o"You do not have any left\n";}else if(f=='b')break;
}
clrscr();
}




game take(fstream &prof,char ch[20],int &count,int &cc)
{while(prof.read((char*)&t,sizeof(game)))
 {count++;
  if(strcmpi(t.na,ch)==0)
  {prof.seekg(0);
   strcpy(t.na,ch);
   return t;
   cc++;
  }
 }
 strcpy(s.na,ch);
 return s;
}

void resume(fstream &prof,char a,int count,int cc)
{clrscr();

 switch(s.in)
 {
  c 8:s.part1(a);the_end(prof,count,cc);break;
  c 6:s.part2(a);the_end(prof,count,cc);break;
  c 5:s.part3(a);the_end(prof,count,cc);break;
  c 4:s.part4(a);the_end(prof,count,cc);break;
  c 31:s.part5(a);the_end(prof,count,cc);break;
  c 2:s.part6(a);the_end(prof,count,cc);break;
  c 1:s.part7(a);the_end(prof,count,cc);break;
  c 9:s.part8(a);the_end(prof,count,cc);break;
 }

}


void del(fstream &prof)
{prof.close();
 remove("prof");
 prof.open("prof",ios::in|ios::out|ios::binary|ios::ate);
 prof.seekg(0);clrscr();
 o"\n\n\nDone...all save data has been purged\n";
 getch();clrscr();
}


void opt(fstream &prof)
{char ma;
 do
 {o" ______________________________________________________________ \n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|     >>OPTIONS                                                |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|            1.Delete All Progress                             |\n";
  o"|            2.Credits                                         |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|            3.Back                                            |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|                                                              |\n";
  o"|______________________________________________________________|\n";

  ma=getch();
  clrscr();
  switch(ma)
  {c '1':del(prof);break;
   c '2':clrscr();
	 o"Thank you for playing The Labrynth\n";delay(600);
	 o"\n\n\nStory:\nDan Drake,Jay Kay\n";delay(600);
	 o"\n\nAlgorithms Developed by:\nSpeLL1612\n";delay(600);
	 o"\nCode Written by:\nJay Kay,SpeLL1612\n";delay(600);
	 getch();clrscr();break;
   c '3':return;break;
   default:o"invalid\n\n";break;
  }
 }while(ma!='3');
}




void main()
{
 clrscr();

 char a,ch[20],ma;
 int count=0,cc=0;

 cout<<"Enter your name:\n";
 gets(ch);
 clrscr();

 if(strcmpi(ch,"x")==0)
 exit(0);

 fstream prof("prof",ios::in|ios::out|ios::binary|ios::ate);
 prof.seekg(0);

 s=take(prof,ch,count,cc);



 do
 {o" _______________________________________________________________ \n";
  o"|  _            _          __    _     _    _   ______   _   _  |\n";
  o"| | |    /__ | | |  |   / |  |  | |   | |  | | |__  __| | |_| | |\n";
  o"| | |   | __ | |_/  |  /  |_ /  | |  |  | | |     ||    |     | |\n";
  o"| | |__ | || | | |   ||   | ||  | |  | || |       ||    |  _  | |\n";
  o"| |____||_||_| |_/   ||   | ||  |_| |_| |_|       ||    |_| |_| |\n";
  o"|                                                               |\n";
  o"|                                                               |\n";
  o"|                                                               |\n";
  if(cc!=0)
  {o"|           1.New Game                                          |\n";
   o"|           2.Continue                                          |\n";
   o"|           3.Options                                           |\n";
   o"|           4.Exit                                              |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|___________________________________________________v0.7.5______|\n";
   ma=getch();
   clrscr();
   switch(ma)
   {c '1':clrscr();
	  o endl<<endl;
	  delay(2000);
	  o"You wake up in a hospital room.\n"d"You could feel that it was still daylight outside.\n"d"You seem to be strapped to a support system.\n"d"You remember nothing about how you got there."<<endl<<endl;
	  delay(2000);
	  o"You get your bearings and check out the room.\n"d"The hospital was eerily quiet,if not unusual.\n(press any key)\n";
	  delay(2000);getch();

	  s.part1(a);

	  the_end(prof,count,cc);break;
    c '2':resume(prof,a,count,cc);break;
    c '3':opt(prof);break;
    c '4':exit(0);break;
    default:"invalid\n";break;
   }

  }

  else
  {
   o"|           1.New Game                                          |\n";
   o"|           2.Option                                            |\n";
   o"|           3.Exit                                              |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|                                                               |\n";
   o"|___________________________________________________v0.7.5b_____|\n";

   ma=getch();
   clrscr();
   switch(ma)
   {c '1':clrscr();
	  o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
	  delay(2000);
	  o"You wake up in a hospital room.\n"d"You could feel that it was still daylight outside.\n"d"You seem to be strapped to a support system.\n"d"You remember nothing about how you got there."<<endl<<endl;
	  delay(2000);
	  o"You get your bearings and check out the room.\n"d"The hospital was eerily quiet,if not unusual.\n(press any key)\n";
	  delay(2000);getch();

	  s.part1(a);

	  the_end(prof,count,cc);break;
    c '2':opt(prof);break;
    c '3':exit(0);break;
    default:"invalid\n";break;
   }
  }

 }while(ma!='1');



 getch();
}

//___________________________________________________________________________________________
void game::part1(char a)
{int f=0;l7:;
if(f!=1)
{in=8;
 map1();
 o"You are standing in your room by the bed.\n";
 delay(2000);
 o"To your north(in front of you) you notice a window,\n"d"On your right, there is a door."<<endl;
 delay(2000);}
 o"\nWhat do you want to do??\n(press h for help)\n\n";

 do
 {a=getche();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'n':l3:;map1();f=1;o"You walk towards the window.\n"d"It was boarded up pretty tight.\n"d"Nothing much you can do about that.\n";delay(2000);goto l7;break;
   c 'e':in=7;map1();f=0;o"You walked towards the door.\n";break;
   c 'i':if(b=='i'){invent(v1,v2,d7);f=0;goto l7;}else o"Invalid";break;
   c 'x':return;break;
   default:o"invalid\n";break;
  }
 }while(a!='n'&&a!='e');

 o"\nWhat do you do??\n"<<endl;

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':o"You opened the door,\n";getch();part2(a);break;
   c 'n':goto l3;break;
   c 'i':if(b=='i'){invent(v1,v2,d7);goto l7;}else o"Invalid";break;
   c 'x':return;break;
   default:o"invalid\n";break;
  }
 }while(a!='f');

}
//__________________________________________________________________________________


void game::part2(char a)
{l4:;in=6;map2();
 o"You reach the hallway.\n";delay(2000);if(c4==0){o"The corridoor to the south was blocked by rubble,\n"d"Which left it inaccessible.\n";delay(2000);}c4=1;o"You see the sign exit to the north and the sign reception further to the east.\n"d"What do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'n':map2();o"You decided to go towards the exit.\n";delay(2000);if(c7==0){o"..Slowly,inching towards it..\n"d"You find the humid atmosphere quite creepy.\n";}o"(press any key to continue)\n";getch();part3(a);break;
   c 'e':map2();if(c3==0){o"You decided find out what in gods name is going on.\n"d"An actual human being to talk to would be just great.\n";delay(2000);}c3=1;o"You started down the hall.\n"d"You see all the doors and windows boarded up, like the one in your room.\n"d"After about a minute of walking through the lone hallways.....\n(press any key to continue)\n";getch();part5(a);break;
   c 'w':part1(a);break;
   c 'i':if(b=='i'){invent(v1,v2,d7);goto l4;}else o"Invalid";break;
   c 'x':return;break;
   default:o"invalid\n";break;
  }
 }while(a!='n'&&a!='e'&&a!='w');

}

//____________________________________________________________________________________

void game::part3(char a)
{int f=0;l17:;
if(f!=1)
{in=5;
map3();
o"You reach the end of the hallway\n"d"only to find the door barred by wooden planks.\n";delay(2000);if(c7==0){o"Just great.....\n"d"This day is turning out to be more fun by the minute.\n";c7=1;}delay(2000);}
o"\nWhat do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':f=1;if(d1==0){o"You tried to pry open the planks with your hands,\n"d"But your attempts proved fruitless";delay(2000);goto l17;}else if(d1==1){o"\nYou use the fireman's axe to hack away at the planks.\n"d"After about 5 minutes of work, You break open the door\n";delay(3000);o"The sun shone bright upon your face.\n";delay(3000);o"\nYou look up at the sky,\n"d"Then you look down again,\n"d"To protect your eyes from the glare.\n"d"\nWhen you were able to see again,\n"d"You wished you could\n"d"Just go back to being blinded by the glare again.\n";delay(3000);o"\nWhat you saw shocked you.";delay(6500);clrscr();o"Because, you had just witnessed.....\n"d"."d"\n."d"\n.\n"d"The End..\n\n\n";delay(3000);o"Or Is It???...";delay(6000);return;}break;
   c 's':f1=0;part2(a);break;
   c 'i':if(b=='i'){invent(v1,v2,d7);f=0;goto l17;}else o"Invalid";break;
   c 'x':return;break;
   default:o"Invalid\n";break;
  }
 }while(a!='f'&&a!='s');
}

//________________________________________________________________________________

void game::part4(char a)
{l6:;
in=4;
map4();
o"You are ";if(d3==1){o"downstairs ";d3==0;}o"at a reception area.\n";delay(2000);if(c1==0){cout<<"Its abandoned.\n"d"You think that it should've been pretty obvious,\n"d"Given all the boarded up windows you saw on your way here.\n";delay(2000);}c1=1;o"There is a stair case further to the east.\n"d"There seems to be a phone on the counter.\n";delay(1000);
 o"\nWhat do you do\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'w':part2(a);break;
   c 'f':part5(a);break;
   c 'e':part6(a);break;
   c 'i':if(b=='i'){invent(v1,v2,d7);goto l6;}else o"Invalid";break;
   c 'x':return;break;
   default:o"Invalid\n";break;
  }
 }while(a!='w'&&a!='f');
}

//__________________________________________________________________________________

void game::part5(char a)
{int f=0;
 l18:;
 if(f!=1)
 {in=31;
 map4();
 if(c2==0){o"Finally!!\n"d"A chance talk to someone,\n"d"And to ask what the hell was going on.\n"d"You hurry towards the phone, dialled for emergency services.\n";delay(3000);}o"The line was dead.\n";delay(3000);if(c2==0){o"You stand there hopeless,\n"d"About to break.\n";delay(2500);o"You would have,too,\n"d"That is, if you hadn't noticed the blinking red light on the phone.\n";delay(2500);o"A light which,\n"d"You knew,could only mean that ";} c2=1;cout<<"Someone had left a message\n"d"On the answering machine";delay(2000);}
 o"\nWhat do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':map4();f=1;if(c5==0){o"You check for messages,\n"d"There seems to be just one.\n";delay(3000);o"And there was just two words in it.\n";delay(3000);o"Two words wich sent chills down your back,\n"d"Like no other pair of words have ever done before.\n";delay(3000);o"Two words spoken by a man,\n"d"Whose voice implied nothing but desperation,and fear.\n(press any key to continue)\n";getch();map4();cout<<"Two words,"d" when spelled,"d" read:"d"GET OUT!!!!\n";}else o"The message said:GET OUT!!";delay(2000);c5=1;goto l18;break;
   c 'w':part2(a);break;
   c 'e': map4(); o"You felt like you were being left out.\n"d"'Where did every one go???'you wondered.\n"d"You decide to check upstairs.\n(press any key to continue)\n";getch();part6(a);break;
   c 'i':if(b=='i'){invent(v1,v2,d7);f=0;goto l18;}else o"Invalid";break;
   c 'x':return;break;
   default:o"Invalid\n";break;
  }
 }while(a!='w'&&a!='e');
}
//________________________________________________________________________________________


void game::part6(char a)
{char fd[10],ps[10]="dogice";int f=0;l11:;in=2;
 if(f!=1)
 {map5();
 o"You are at the first floor.\n"d"\nAll doors are barred except for one.\n"d"A storeroom\n"d"You were standing in front of it\n"d"\nThere is a staircase leading to the terrace to the west.\n"d"The only way back was the stairway down to the reception area to the east\n";delay(2000);}
 o"\nWhat do you want to do ??\n";

 do
 {a=getch();
  switch (a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory-i\n";o"Move north - n\nMove south-s\nGo upstairs - w\nGo Downstairs-e\n Exit - x\n";break;
   c 'e':d3==1;if(v1==1&&f1==0){clrscr();o"\nOn your way down,\n"d"The broken recorder got jerked around in your pocket.\n"d"\nIt started playing some one's audio logs\n"d"\n\n\"Arthur Dent 'ere,\n"d"Its been 30 days since it started...\n"d"30 days...."d" 30 weeks s'more like it.";delay(3000);o"\nIv'e been able to board up this place."d"Nice and tight, I did.\n";delay(3000);o"\nThere's a Patient still here,\n"d"The lad's in a comma or sumthing from what Iv'e heard\n";delay(3000);o"There's something mighty suspicious about that kid though.\n"d"People lookin' like FEDs,\n"d"Were showin up and goin into his room and stuff.\n"d"Well, I dont kn..........\"\n";delay(3000);o"The tape got cut off there\n\n";delay(5000);f1=1;}part4(a);break;
   c 'w':f=0;if(f6==0){o"You don't want to be trapped in here forever.\n"d"You decided to go to the terrace and get some fresh air.\n";delay(2000);f6=1;}part7(a);break;
   c 'f':map5();f=1;o"You tried the door\n";delay(3000);o"It was locked\n"d"That too by a 6 character authorization code\n"d"Input Code:";gets(fd);if(strcmpi(fd,ps)==0){if(d2==0){o"...BEEP.\n"d"The door opens.\n(press any key to continue)\n";getch();map7();o"For some reason,\n"d"The shelf was stocked up on food\n"d"\nThats when you realized\n"d"That, in all the excitement,\n"d"You forgot that you were feeling very weak.\n"d"And was in need of immediate nourishment.\n"d"\nAlso,\n"d"There was a fireman's axe placed at the corner of the room";delay(2000);part8(a);}else {o"You are in the storeroom\n"d"Nothing much usefull left here\n"d"You went back to the first floor\n";f=1;goto l11;}}else {o"\nACCESS DENIED";delay(3000);goto l11;}break;
   c 'i':if(b=='i'){invent(v1,v2,d7);f=0;goto l11;}else o"Invalid";break;
   c 'x':return;break;
   default :o"invalid";break;
  }
 }while(a!='e'&&a!='w');

}

//________________________________________________________________________________

void game::part7(char a)
{l12:;
 map6();
 in=1;
 o"You are on the terrace.\n";delay(3000);if(f7==0){o"You sense a horrendous stench as soon as you reached there.\n"d"You turn around,\n"d"And is shocked to find out what its source is\n";delay(3000);o"After curbing your urge for regurgitation,\n"d"You try to stay calm and take in what you see before you.\n(press any key to continue)\n";getch();map6();o"\nBecause ";}f7=1;o"you see the corpse of a dead person,\n"d"Presumably a security guard who worked here.\n";delay(2000);if(d5==0){o"Beside him, on a table,\n"d"There was a piece of paper and broken audio recorder\n";delay(2000);}
 o"\nWhat do you want to do??\n";


 do
 {a=getch();
  switch(a)
  {c 'h':if(b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nGo Downstairs-w\nInteract-f\nExit-x\n";break;
   c 'f':if(b!='i'){map6();o"Taking care not to go near the corpse,\n"d"You approach the table.\n"d"You pick up both the piece of paper and the recorder.\n(press any key to continue)\n";getch();clrscr();d5=1;v1=1;o"\n\nNOTIFICATION!!!!\n"d"You have recieved 2 inventory items.\n"d"Press i to view inventory\n";b=getch();if(b=='i'){invent(v1,v2,d7);goto l12;}else o"Invalid\n";}else o"Invalid\n";break;
   c 'n':part6(a);break;
   c 'i':if(b=='i'){invent(v1,v2,d7);goto l12;}else o"Invalid";break;
   c 'x':return;break;
  }
 }while(a!='n');
}

//_____________________________________________________________________________________________

void game::part8(char a)
{l16:;
o"\nWhat do you want to do??\n(PS:The first floor hallway is to the north)\n";
in=9;


do
{a=getch();
 switch(a)
 {c 'h':if(b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nmove west-w\nInteract-f\nExit-x\n";break;
  c 'n':part6(a);break;
  c 'f':clrscr();o"Which do you want to pick up??\n1.Food\n2.Fireman's Axe\n(press 1 or 2 to select,press b to continue)\n";while(p!='b'){p=getch();switch(p){c '1':if(d6==0){o"Food added to inventory\n";d6=1;v2=1;d2=1;}else o"You already have that item\n";break;c '2':if(d4==0){o"Axe added to inventory\n";d4=1;v2=1;d2=1;d1=1;}else o"\nYou already have that item\n";break;c 'b':goto l16;break;default:o"Invalid\n";break;}};goto l16;break;
  c 'i':{invent(v1,v2,d7);goto l16;}break;
  c 'x':return;break;
  default:o"Invalid";break;
  }
 }while(a!='n');
}
//___________________________________________________________________________________



void map1()
{clrscr();
o"\n>>Your Room(ground Floor)\n\n";
o" ______(win)______          N\n";
o"|                 |        W+E \n";
o"|               (Door)      S\n";
o"|    |---|(You)   |\n";
o"|    |   |        |\n";
o"|____(bed)________|\n";
}


void map2()
{clrscr();
o">>The Hallway(Ground Floor) \n\n";
o"  |         |         |                        N \n";
o"  |         |         |                       W+E\n";
o"  |         |         |                        S \n";
o"(xwinx)  ^  |         |     \n";
o"  |      e  |         |        \n";
o"  |      x  |         |           \n";
o"  |      i  |         |              \n";
o"  |      t  |         |                 \n";
o"  |         |_(xDoorx)|__(xDoorx)_         \n";
o"  |                                        \n";
o"  |                                        \n";
o"(Door) (You)   Reception>                  \n";
o"  |                                        \n";
o"  |                                        \n";
o"  |-(RUBLE)--_____________________         \n";
o"  |         |                              \n";
o"  |         |                              \n";
}


void map3()
{clrscr();
o">>The Exit(Ground Floor)\n\n";
o"      ^                  N \n";
o"     exit               E+W \n";
o"|--(Barred)--|           S    \n";
o"|            |\n";
o"|   (You)    |\n";
o"|            |\n";
o"|            |\n";
o"|            |\n";
o"|  reception |\n";
o"|      v     |\n";
}

void map4()
{clrscr();
o">>Reception Area(Ground Floor).\n\n";
o"              |          |                     N\n";
o"______________|-(Rubble)-|________            W+E\n";
o"                           | | |               S\n";
o" < exit                    | | |stairs >\n";
o"      (You)	            _|_|_|__\n";
o"   __(Phone)__           |  \n";
o"  |           |          |  \n";
o"  |(Reception)|          |  \n";
o"__|___________|          |  \n";
o"              |-(Rubble)-|\n\n";
}


void map5()
{clrscr();
o">>The  Hallway(2nd Floor)\n\n";
o"|-(Rubble)-|__(xDoorx)______|-(Rubble)-|                     N \n";
o"|                                      |  ________          W+E   \n";
o"|                                      |  | |     |          S        \n";
o"|                                      |  |_|_    |\n";
o"|                                      |______|   |\n";
o"|          (You)                         | | |    |\n";
o"| up                             down>   | | |    |\n";
o"| v   ____(Store)___________            _|_|_|____|\n";
o"|  __|     (room)           |-(Rubble)-|   \n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
}

void map6()
{clrscr();
 o">>The Terrace(3rd floor)  \n\n";
 o"    |___|  ^                             N \n";
 o"    |___| down                          W+E \n";
 o"  __|__ |__________                      S  \n";
 o" |         _____   |\n";
 o" |  (you) |Table|  | \n";
 o" |        |_____|  | \n";
 o" |  X-corpse       | \n";
 o" |                 | \n";
 o" |                 | \n";
 o" |                 | \n";
 o" |_________________| \n";
 }

void map7()
{clrscr();
o">>Storeroom(Ground Floor)\n\n";
o"                                ^                  N\n";
o"  _______(Door)_________   2nd floor hallway      W+E  \n";
o" |                      |                          S      \n";
o" |    _____      _____  |\n";
o" |   |shelf|    |shelf| |\n";
o" |   |_____|    |_____| |\n";
o" |   |_____|    |_____| |   \n";
o" |                      | \n";
o" |                      |  \n";
o" |<AXE>                 |  \n";
o" |                      |  \n";
o" |______________________| \n";

}











