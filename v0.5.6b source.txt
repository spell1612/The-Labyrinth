#include<iostream.h>
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

class stop
{char a;
 public:void the_end()
 {clrscr();
 o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
 o"Thank you for playing The Labrynth\n";delay(600);
 o"\n\n\nStory:\nDan Drake,Jay Kay\n";delay(600);
 o"\n\nAlgorithms Developed by:\nSpeLL1612\n";delay(600);
 o"\nCode Written by:\nJay Kay,SpeLL1612\n";delay(600);
 i a;exit(0);}
};

void main()
{clrscr();
 randomize();
 stop game;
 char a,p,f,fd[10],ps[10]="aceven",b='k';
 int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,c1=0,c2=0,c3=0,c4=0,c5=0,f6=0,f7=0,v1=0,v2=0,in=0,f1=0,c7=0;
 o"######################## Welcome to The Labirynth ############################"<<endl<<endl;
 delay(2000);
 o"You wake up in a hospital room.\n"d"You could feel that it was still daylight outside.\n"d"You seem to be strapped to a support system.\n"d"You remember nothing about how you got there."<<endl<<endl;
 delay(2000);
 o"You get your bearings and check out the room.\n"d"The hospital was eerily quiet,if not unusual.\n";
 delay(2000);
 l7:;if(in==6){in=8;goto l17;}in=8;goto l18;l19:;o"You are standing in your room by the bed.\n";
 delay(2000);
 o"To your north(in front of you) you notice a window,\n"d"On your right, there is a door."<<endl;
 delay(2000);
 l1:;o"\nWhat do you want to do??\n(press h for help)\n\n";
 do
 {i a;
  switch(a)
  {c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
   c 'n':l3:;o"You walk towards the window.\n"d"It was boarded up pretty tight.\n"d"Nothing much you can do about that.\n";delay(2000);goto l1;break;
   c 'e':in=7;goto l17;l20:;o"You walked towards the door.\n";goto l2;break;
   c 'i':if(b=='i')goto l15;else o"Invalid";break;
   c 'm':goto l17;break;
   c 'x':game.the_end();break;
   default:o"invalid\n";break;
  }
 }while(a!='n'&&a!='e');
 l2:;
o"\nWhat do you do??\n"<<endl;
do
{cin>>a;
switch(a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
c 'f':o"You opened the door,\n";delay(1000);goto l4;break;
c 'n':goto l3;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default:o"invalid\n";break;
}
}while(a!='f');
l4:;in=6;goto l17;l21:;
o"You reach the hallway.\n";delay(2000);if(c4==0){o"The corridoor to the south was blocked by rubble,\n"d"Which left it inaccessible.\n";delay(2000);}c4=1;o"You see the sign exit to the north and the sign reception further to the east.\n"d"What do you do?\n";
do
{i a;
switch(a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
c 'n':o"You decided to go towards the exit.\n";delay(2000);if(c7==0){o"..Slowly,inching towards it..\n"d"You find the humid atmosphere quite creepy.\n";}delay(3500);in=5;goto l17;l22:;o"You reach the end of the hallway,a\n"d"only to find the door barred by wooden planks.\n";delay(2000);if(c7==0){o"Just great.....\n"d"This day is turning out to be more fun by the minute.\n";c7=1;}delay(2000);goto l5;break;
c 'e':if(c3==0){o"You decided find out what in gods name is going on.\n"d"An actual human being to talk to would be just great.\n";delay(2000);}c3=1;o"You started down the hall.\n"d"You see all the doors and windows boarded up, like the one in your room.\n"d"After about a minute of walking through the lone hallways,\n";delay(2000);goto l6;break;
c 'w':goto l7;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default:o"invalid\n";break;
}
}while(a!='n'&&a!='e'&&a!='w');

l5:;o"\nWhat do you do?\n";
do
{i a;
switch(a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
c 'f':if(d1==0){o"You tried to pry open the planks with your hands,\n"d"But your attempts proved fruitless";goto l5;}else if(d1==1){o"\nYou use the fireman's axe to hack away at the planks.\n"d"After about 5 minutes of work, You break open the door\n";delay(3000);o"The sun shone bright upon your face.\n";delay(3000);o"\nYou look up at the sky,\n"d"Then you look down again,\n"d"To protect your eyes from the glare.\n"d"\nWhen you were able to see again,\n"d"You wished you could\n"d"Just go back to being blinded by the glare again.\n";delay(3000);o"\nWhat you saw shocked you.";delay(6500);clrscr();o"Because, you had just witnessed.....\n"d"."d"\n."d"\n.\n"d"The End..\n\n\n";delay(3000);o"Or Is It???...";delay(6000);game.the_end();}break;
c 's':goto l4;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default:o"Invalid\n";break;
}
}while(a!='f'&&a!='s');

l6:;in=4;goto l17;l23:;o"You are ";if(d3==1){o"downstairs ";d3==0;}o"at a reception area.\n";delay(2000);if(c1==0){cout<<"Its abandoned.\n"d"You think that it should've been pretty obvious,\n"d"Given all the boarded up windows you saw on your way here.\n";delay(2000);}c1=1;o"There is a stair case further to the east.\n"d"There seems to be a phone on the counter.\n";delay(1000);
o"\nWhat do you do\n";
do
{i a;
switch(a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
c 'w':goto l4;break;
c 'f':in=31;goto l17;l24:;in=32;if(c2==0){o"Finally!!\n"d"A chance talk to someone,\n"d"And to ask what the hell was going on.\n"d"You hurry towards the phone, dialled for emergency services.\n";delay(3000);}o"The line was dead.\n";delay(3000);if(c2==0){o"You stand there hopeless,\n"d"About to break.\n";delay(2500);o"You would have,too,\n"d"That is, if you hadn't noticed the blinking red light on the phone.\n";delay(2500);o"A light which,\n"d"You knew,could only mean that ";} c2=1;cout<<"Someone had left a message\n"d"On the answering machine";delay(2000);goto l8;break;
c 'e':l10:;o"You felt like you were being left out.\n"d"'Where did every one go???'you wondered.\n"d"You decide to check upstairs.\n";delay(3000);goto l11;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default:o"Invalid\n";break;
}
}while(a!='w'&&a!='f');

l8:;
o"\nWhat do you do?\n";
do
{i a;
switch(a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory - i\n";o"move north-n\nmove east-e\nmove south-s\nmove west-w\ninteract-f\nexit-x\n";break;
c 'f':goto l17;l25:;if(c5==0){o"You check for messages,\n"d"There seems to be just one.\n";delay(3000);o"And there was just two words in it.\n";delay(3000);o"Two words wich sent chills down your back,\n"d"Like no other pair of words have ever done before.\n";delay(3000);o"Two words spoken by a man,\n"d"Whose voice implied nothing but desperation,and fear.\n";delay(3500);cout<<"Two words,"d" when spelled,"d" read:"d"GET OUT!!!!\n";}else o"The message said:GET OUT!!";delay(2000);c5=1;goto l8;break;
c 'w':goto l4;break;
c 'e':goto l10;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default:o"Invalid\n";break;
}
}while(a!='w'&&a!='e');
l11:;in=2;goto l17;l26:;
o"You are at the first floor.\n"d"\nAll doors are barred except for one.\n"d"A storeroom\n"d"You were standing in front of it\n"d"\nThere is a staircase leading to the terrace to the west.\n"d"The only way back was the stairway down to the reception area to the east\n";delay(2000);l14:;if(in==21)goto l17;l27:;o"\nWhat do you want to do ??\n";
do
{i a;
switch (a)
{c 'h':o"Map-m\n";if(b=='i')o"Inventory-i\n";o"Move north - n\nMove south-s\nGo upstairs - w\nGo Downstairs-e\n Exit - x\n";break;
c 'e':d3==1;if(v1==1&&f1==0){o"\nOn your way down,\n"d"The broken recorder got jerked around in your pocket.\n"d"\nIt started playing some one's audio logs\n"d"\n\n\"Arthur Dent 'ere,\n"d"Its been 30 days since it started...\n"d"30 days...."d" 30 months is more like it.";delay(3000);o"\nIv'e been able to board up this place."d"Nice and tight, I did.\n";delay(3000);o"\nThere's a Patient still here,\n"d"The lad's in a comma or sumthing from what Iv'e heard\n";delay(3000);o"There's something mighty suspicious about that kid though.\n"d"People lookin' like FEDs,\n"d"Were showin up and goin into his room and stuff.\n"d"Well, I don#$%^&*($...\"\n";delay(3000);o"The tape got cut off there\n\n";delay(5000);f1=1;}goto l6;break;
c 'w':if(f6==0){o"You don't want to be trapped in here forever.\n"d"You decided to go to the terrace and get some fresh air.\n";delay(2000);f6=1;}goto l12;break;
c 'f':o"You tried the door\n";delay(3000);o"It was locked\n"d"That too by a 6 character authorization code\n"d"Input Code:";gets(fd);if(strcmp(fd,ps)==0){if(d2==0){o"...BEEP.\n"d"The door opens.\n"d"For some weird reason,\n"d"The shelf was stocked up on food\n"d"\nThats when you realized\n"d"That, in all the exitement,\n"d"You forgot that you were feeling very weak.\n"d"And was in need of immediate nourishment.\n"d"\nAlso,\n"d"There was a fireman's axe placed at the corner of the room";delay(2000);goto l16;}else {o"You are in the storeroom\n"d"Nothing much usefull left here\n"d"You went back to the first floor\n";in=21;goto l14;}}else {o"\nACCESS DENIED";delay(3000);in=21;goto l14;}break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'm':goto l17;break;
c 'x':game.the_end();break;
default :o"invalid";break;
}
}while(a!='e'&&a!='w');
l12:;
o"You are on the terrace.\n";delay(3000);if(f7==0){o"You sense a horrendous stench as soon as you reached there.\n"d"You turn around,\n"d"And is shocked to find out what its source is\n";delay(3000);o"After curbing your urge for regurgitation,\n"d"You try to stay calm and take in what you see before you."d"\nBecause ";}f7=1;o"you see the corpse of a dead person,\n"d"Presumably a security guard who worked here.\n";delay(2000);if(d5==0){o"Beside him, on a table,\n"d"There was a piece of paper and broken audio recorder\n";delay(2000);}
o"\nWhat do you want to do??\n";
in=1;
do
{i a;
switch(a)
{c 'h':if(b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nGo Downstairs-w\nInteract-f\nExit-x\n";break;
c 'f':if(b!='i'){o"Taking care not to go near the corpse,\n"d"You approach the table.\n"d"You pick up both the piece of paper and the recorder.\n";delay(2000);d5=1;v1=1;o"\n\nNOTIFICATION!!!!\n"d"You have recieved 2 inventory items.\n"d"Press i to view inventory\n";i b;if(b=='i')goto l15;else o"Invalid\n";}else o"Invalid\n";break;
c 'w':goto l11;break;
c 'i':if(b=='i')goto l15;else o"Invalid";break;
c 'x':game.the_end();break;
}
}while(a!='w');
l16:;o"\nWhat do you want to do??\n(PS:The first floor hallway is to the north)\n";
in=9;
do
{i a;
switch(a)
{c 'h':if(b=='i')o"Inventory-i\n";o"Move north-n\nMove east-e\nMove south-s\nmove west-w\nInteract-f\nExit-x\n";break;
c 'n':goto l11;break;
c 'f':o"Which do you want to pick up??\n1.Food\n2.Fireman's Axe\n(press 1 or 2 to select,press b to continue)\n";while(p!='b'){i p;switch(p){c '1':if(d6==0){o"Food added to inventory\n";d6=1;v2=1;d2=1;}else o"You already have that item\n";break;c '2':if(d4==0){o"Axe added to inventory\n";d4=1;v2=1;d2=1;d1=1;}else o"\nYou already have that item\n";break;c 'b':goto l16;break;default:o"Invalid\n";break;}};goto l16;break;
c 'i':goto l15;break;
c 'x':game.the_end();break;
default:o"Invalid";break;
}
}while(a!='s');
l15:;
clrscr();
o"\nInventory\n";
if(v1==1){o"1.Piece of paper\n2.Audio Recorder\n";if(v2==1)o"3.Fireman's Axe\n4.Food\n";}o"\n\n(press corresponding numbers to use item,press b to go back to game\nor x to exit)\n";
while(f!='x')
{i f;if(f=='1')o"On the piece of paper, it is written 'aceven'.\n";else if(f=='2')o"It seems to be broken.\n";else if(f=='3')o"A sturdy Axe made of iron.\n";else if(f=='4'){if(d7==0){o"You ate the food.\nYou felt strength coming back into your limbs\n";d7=1;}else o"You do not have any left\n";}else if(f=='b'){clrscr();if(in==1)goto l12;else if(in==2)goto l11;else if(in==8)goto l7;else if(in==9)goto l11;else if(in==3)goto l8;else if(in==4)goto l6;else if(in==5)goto l5;else if(in==6)goto l4;else if(in==7)goto l2;}else if(f=='x')exit(0);
}
l17:;
clrscr();
l18:;
if(in==8||in==7)
{
o"\nGround Floor-Your Room\n\n";
o" ______(win)______          N\n";
o"|                 |        W+E \n";
o"|               (Door)      S\n";
o"|    |---|(You)   |\n";
o"|    |   |        |\n";
o"|____(bed)________|\n";
if(in==7)goto l20;goto l19;
}
else if(in==6)
{
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
goto l21;
}
else if(in==5)
{
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
goto l22;
}
if(in==4||in==31||in==32)
{
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
if(in==31)goto l24;else if(in==32)goto l25;goto l23;
}
if(in==2||in==21)
{
o" First Floor-Hallway\n\n";
o"|-(Rubble)-|__(xDoorx)______|-(Rubble)-|                     N \n";
o"|                                      |  ________          W+E   \n";
o"|                                      |  | |     |          S        \n";
o"|                                      |  |_|_    |\n";
o"|                                      |______|   |\n";
o"|          w(You)e                       | | |    |\n";
o"| up          f                  down>   | | |    |\n";
o"|     ____(Store)___________            _|_|_|____|\n";
o"|  __|     (room)           |-(Rubble)-|   \n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
o"|____|\n";
if(in==21){in=2;goto l27;}
goto l26;
}
getch();
}

