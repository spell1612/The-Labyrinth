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


class savedat
{public:char na[20],b,p;
 int d1,d2,d3,d4,d5,d6,d7,c1,c2,c3,c4,c5,f6,f7,v1,v2,in,f1,c7; //binary deciders
 savedat()
 {
  strcpy(na,"xyz");
  d1=0;d2=0;d3=0;d4=0;d5=0;d6=0;d7=0;c1=0;c2=0;c3=0;c4=0;c5=0;f6=0;f7=0;v1=0;v2=0;in=0;f1=0;c7=0;b='k';//initialisations
 }

}s,a;


void map1(int in)
{
if(in!=8)
clrscr();
o"\nGround Floor-Your Room\n\n";
o" ______(win)______          N\n";
o"|                 |        W+E \n";
o"|               (Door)      S\n";
o"|    |---|(You)   |\n";
o"|    |   |        |\n";
o"|____(bed)________|\n";
}


void map2()
{clrscr();
o"Ground Floor-Hallway \n\n";
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
o"Ground Floor-The Exit\n\n";
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
o"Ground Floor-Reception.\n\n";
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
o" First Floor-Hallway\n\n";
o"|-(Rubble)-|__(xDoorx)______|-(Rubble)-|                     N \n";
o"|                                      |  ________          W+E   \n";
o"|                                      |  | |     |          S        \n";
o"|                                      |  |_|_    |\n";
o"|                                      |______|   |\n";
o"|          (You)                         | | |    |\n";
o"| up                             down>   | | |    |\n";
o"|     ____(Store)___________            _|_|_|____|\n";
o"|  __|     (room)           |-(Rubble)-|   \n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
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

void the_end(savedat sa,fstream &p)
{
 int count=0;

 while(p.read((char*)&a,sizeof(savedat)))
 {if(strcmpi(a.na,sa.na)==0)
  {p.seekg(-sizeof(savedat),ios::cur);
   p.write((char*)&sa,sizeof(savedat));
   count++;
  }
 }

 if(count==0)
 {p.seekg(0,ios::end);
  p.write((char*)&sa,sizeof(savedat));
 }
 clrscr();
 o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
 o"Thank you for playing The Labrynth\n";delay(600);
 o"\n\n\nStory:\nDan Drake,Jay Kay\n";delay(600);
 o"\n\nAlgorithms Developed by:\nSpeLL1612\n";delay(600);
 o"\nCode Written by:\nJay Kay,SpeLL1612\n";delay(600);
 p.close();
 getch();
 exit(0);
}



void main()
{
 clrscr();
 char a,fd[10],ps[10]="dogice";
 fstream prof("prof",ios::in|ios::out|ios::binary|ios::ate);
 prof.seekg(0);
 char ch[20];int count=0;
 cout<<"Enter your name:\n";
 gets(ch);
 if(strcmpi(ch,"x")==0)
 exit(0);
 clrscr();

 while(prof.read((char*)&s,sizeof(savedat)))
 {
  if(strcmpi(ch,s.na)==0)
  {
   count++;
   switch(s.in)
   {
    c 9:goto l16;break;
    c 8:goto l7;break;
    c 6:goto l4;break;
    c 5:goto l17;break;
    c 4:goto l6;break;
    c 31:goto l18;break;
    c 2:goto l11;break;
    c 1:goto l12;break;
   }
  }
 }

 if(count==0)
 strcpy(s.na,ch);

 o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
 delay(2000);
 o"You wake up in a hospital room.\n"d"You could feel that it was still daylight outside.\n"d"You seem to be strapped to a support system.\n"d"You remember nothing about how you got there."<<endl<<endl;
 delay(2000);
 o"You get your bearings and check out the room.\n"d"The hospital was eerily quiet,if not unusual.\n";
 delay(2000);
 l7:;if(s.in==6){map1(s.in);s.in=8;}else {s.in=8;map1(s.in);}o"You are standing in your room by the bed.\n";
 delay(2000);
 o"To your north(in front of you) you notice a window,\n"d"On your right, there is a door."<<endl;
 delay(2000);
 l1:;o"\nWhat do you want to do??\n(press h for help)\n\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'n':l3:;o"You walk towards the window.\n"d"It was boarded up pretty tight.\n"d"Nothing much you can do about that.\n";delay(2000);goto l1;break;
   c 'e':s.in=7;map1(s.in);o"You walked towards the door.\n";goto l2;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l7;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"invalid\n";break;
  }
 }while(a!='n'&&a!='e');

 l2:;
 o"\nWhat do you do??\n"<<endl;

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':o"You opened the door,\n";getch();goto l4;break;
   c 'n':goto l3;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l7;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"invalid\n";break;
  }
 }while(a!='f');

 l4:;s.in=6;map2();
 o"You reach the hallway.\n";delay(2000);if(s.c4==0){o"The corridoor to the south was blocked by rubble,\n"d"Which left it inaccessible.\n";delay(2000);}s.c4=1;o"You see the sign exit to the north and the sign reception further to the east.\n"d"What do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'n':o"You decided to go towards the exit.\n";delay(2000);if(s.c7==0){o"..Slowly,inching towards it..\n"d"You find the humid atmosphere quite creepy.\n";}getch();l17:;s.in=5;map3();o"You reach the end of the hallway,a\n"d"only to find the door barred by wooden planks.\n";delay(2000);if(s.c7==0){o"Just great.....\n"d"This day is turning out to be more fun by the minute.\n";s.c7=1;}delay(2000);goto l5;break;
   c 'e':if(s.c3==0){o"You decided find out what in gods name is going on.\n"d"An actual human being to talk to would be just great.\n";delay(2000);}s.c3=1;o"You started down the hall.\n"d"You see all the doors and windows boarded up, like the one in your room.\n"d"After about a minute of walking through the lone hallways.....\n";getch();goto l6;break;
   c 'w':goto l7;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l4;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"invalid\n";break;
  }
 }while(a!='n'&&a!='e'&&a!='w');

 l5:;o"\nWhat do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':if(s.d1==0){o"You tried to pry open the planks with your hands,\n"d"But your attempts proved fruitless";delay(2000);goto l5;}else if(s.d1==1){o"\nYou use the fireman's axe to hack away at the planks.\n"d"After about 5 minutes of work, You break open the door\n";delay(3000);o"The sun shone bright upon your face.\n";delay(3000);o"\nYou look up at the sky,\n"d"Then you look down again,\n"d"To protect your eyes from the glare.\n"d"\nWhen you were able to see again,\n"d"You wished you could\n"d"Just go back to being blinded by the glare again.\n";delay(3000);o"\nWhat you saw shocked you.";delay(6500);clrscr();o"Because, you had just witnessed.....\n"d"."d"\n."d"\n.\n"d"The End..\n\n\n";delay(3000);o"Or Is It???...";delay(6000);the_end(s,prof);}break;
   c 's':goto l4;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l17;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"Invalid\n";break;
  }
 }while(a!='f'&&a!='s');

 l6:;s.in=4;map4();;o"You are ";if(s.d3==1){o"downstairs ";s.d3==0;}o"at a reception area.\n";delay(2000);if(s.c1==0){cout<<"Its abandoned.\n"d"You think that it should've been pretty obvious,\n"d"Given all the boarded up windows you saw on your way here.\n";delay(2000);}s.c1=1;o"There is a stair case further to the east.\n"d"There seems to be a phone on the counter.\n";delay(1000);
 o"\nWhat do you do\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'w':goto l4;break;
   c 'f':l18:;s.in=31;map4();;if(s.c2==0){o"Finally!!\n"d"A chance talk to someone,\n"d"And to ask what the hell was going on.\n"d"You hurry towards the phone, dialled for emergency services.\n";delay(3000);}o"The line was dead.\n";delay(3000);if(s.c2==0){o"You stand there hopeless,\n"d"About to break.\n";delay(2500);o"You would have,too,\n"d"That is, if you hadn't noticed the blinking red light on the phone.\n";delay(2500);o"A light which,\n"d"You knew,could only mean that ";} s.c2=1;cout<<"Someone had left a message\n"d"On the answering machine";delay(2000);goto l8;break;
   c 'e':l10:;o"You felt like you were being left out.\n"d"'Where did every one go???'you wondered.\n"d"You decide to check upstairs.\n";delay(3000);goto l11;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l6;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"Invalid\n";break;
  }
 }while(a!='w'&&a!='f');

 l8:;
 o"\nWhat do you do?\n";

 do
 {a=getch();
  switch(a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'f':map4();;if(s.c5==0){o"You check for messages,\n"d"There seems to be just one.\n";delay(3000);o"And there was just two words in it.\n";delay(3000);o"Two words wich sent chills down your back,\n"d"Like no other pair of words have ever done before.\n";delay(3000);o"Two words spoken by a man,\n"d"Whose voice implied nothing but desperation,and fear.\n";delay(3500);cout<<"Two words,"d" when spelled,"d" read:"d"GET OUT!!!!\n";}else o"The message said:GET OUT!!";delay(2000);s.c5=1;goto l8;break;
   c 'w':goto l4;break;
   c 'e':goto l10;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l6;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default:o"Invalid\n";break;
  }
 }while(a!='w'&&a!='e');

 l11:;s.in=2;map5();;
 o"You are at the first floor.\n"d"\nAll doors are barred except for one.\n"d"A storeroom\n"d"You were standing in front of it\n"d"\nThere is a staircase leading to the terrace to the west.\n"d"The only way back was the stairway down to the reception area to the east\n";delay(2000);l14:;if(s.in==21)map5();;o"\nWhat do you want to do ??\n";

 do
 {a=getch();
  switch (a)
  {c 'h':o"Map-m\n";if(s.b=='i')o"Inventory-i\n";o"Move north - n\nMove south-s\nGo upstairs - w\nGo Downstairs-e\n Exit - x\n";break;
   c 'e':s.d3==1;if(s.v1==1&&s.f1==0){o"\nOn your way down,\n"d"The broken recorder got jerked around in your pocket.\n"d"\nIt started playing some one's audio logs\n"d"\n\n\"Arthur Dent 'ere,\n"d"Its been 30 days since it started...\n"d"30 days...."d" 30 months is more like it.";delay(3000);o"\nIv'e been able to board up this place."d"Nice and tight, I did.\n";delay(3000);o"\nThere's a Patient still here,\n"d"The lad's in a comma or sumthing from what Iv'e heard\n";delay(3000);o"There's something mighty suspicious about that kid though.\n"d"People lookin' like FEDs,\n"d"Were showin up and goin into his room and stuff.\n"d"Well, I don#$%^&*($...\"\n";delay(3000);o"The tape got cut off there\n\n";delay(5000);s.f1=1;}goto l6;break;
   c 'w':if(s.f6==0){o"You don't want to be trapped in here forever.\n"d"You decided to go to the terrace and get some fresh air.\n";delay(2000);s.f6=1;}goto l12;break;
   c 'f':o"You tried the door\n";delay(3000);o"It was locked\n"d"That too by a 6 character authorization code\n"d"Input Code:";gets(fd);if(strcmp(fd,ps)==0){if(s.d2==0){o"...BEEP.\n"d"The door opens.\n"d"For some weird reason,\n"d"The shelf was stocked up on food\n"d"\nThats when you realized\n"d"That, in all the exitement,\n"d"You forgot that you were feeling very weak.\n"d"And was in need of immediate nourishment.\n"d"\nAlso,\n"d"There was a fireman's axe placed at the corner of the room";delay(2000);goto l16;}else {o"You are in the storeroom\n"d"Nothing much usefull left here\n"d"You went back to the first floor\n";s.in=21;goto l14;}}else {o"\nACCESS DENIED";delay(3000);s.in=21;goto l14;}break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l11;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
   default :o"invalid";break;
  }
 }while(a!='e'&&a!='w');

 l12:;
 o"You are on the terrace.\n";delay(3000);if(s.f7==0){o"You sense a horrendous stench as soon as you reached there.\n"d"You turn around,\n"d"And is shocked to find out what its source is\n";delay(3000);o"After curbing your urge for regurgitation,\n"d"You try to stay calm and take in what you see before you."d"\nBecause ";}s.f7=1;o"you see the corpse of a dead person,\n"d"Presumably a security guard who worked here.\n";delay(2000);if(s.d5==0){o"Beside him, on a table,\n"d"There was a piece of paper and broken audio recorder\n";delay(2000);}
 o"\nWhat do you want to do??\n";
 s.in=1;

 do
 {a=getch();
  switch(a)
  {c 'h':if(s.b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nGo Downstairs-w\nInteract-f\nExit-x\n";break;
   c 'f':if(s.b!='i'){o"Taking care not to go near the corpse,\n"d"You approach the table.\n"d"You pick up both the piece of paper and the recorder.\n";delay(2000);clrscr();s.d5=1;s.v1=1;o"\n\nNOTIFICATION!!!!\n"d"You have recieved 2 inventory items.\n"d"Press i to view inventory\n";s.b=getch();if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l12;}else o"Invalid\n";}else o"Invalid\n";break;
   c 'w':goto l11;break;
   c 'i':if(s.b=='i'){invent(s.v1,s.v2,s.d7);goto l12;}else o"Invalid";break;
   c 'x':the_end(s,prof);break;
  }
 }while(a!='w');

l16:;o"\nWhat do you want to do??\n(PS:The first floor hallway is to the north)\n";
s.in=9;
do
{a=getch();
switch(a)
{c 'h':if(s.b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nmove west-w\nInteract-f\nExit-x\n";break;
c 'n':goto l11;break;
c 'f':o"Which do you want to pick up??\n1.Food\n2.Fireman's Axe\n(press 1 or 2 to select,press b to continue)\n";while(s.p!='b'){s.p=getch();switch(s.p){c '1':if(s.d6==0){o"Food added to inventory\n";s.d6=1;s.v2=1;s.d2=1;}else o"You already have that item\n";break;c '2':if(s.d4==0){o"Axe added to inventory\n";s.d4=1;s.v2=1;s.d2=1;s.d1=1;}else o"\nYou already have that item\n";break;c 'b':goto l16;break;default:o"Invalid\n";break;}};goto l16;break;
c 'i':{invent(s.v1,s.v2,s.d7);goto l16;}break;
c 'x':the_end(s,prof);break;
default:o"Invalid";break;
}
}while(a!='s');
getch();
}









