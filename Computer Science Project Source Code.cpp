#include<iostream>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
int ch1,ch2;	
void add();
void search();
void del();
void mod();
void menu();
class passenger
{
int p,p1;
float r;
long pin,pnno,mob;
char name[30],address[40],email[30],from[15],to[15],stand[20];
public:
void getdata()
	{
	cout<<"\n\nENTER YOUR NAME  :";
	gets(name);
	cout<<"\nENTER YOUR ADDRESS  :";
	gets(address);
	cout<<"\nENTER YOUR PIN NO.  :";
	cin>>pin;
	cout<<"\nENTER YOUR MOBILE NO.  :";
	cin>>mob;
	cout<<"\nENTER YOUR EMAIL ID  :";
	gets (email);
	}
void putdata()
	{
	cout<<"\n\n\t\t\t  PNR NO.  :"<<pnno;
	cout<<"\n\nNAME  :"<<name;
	cout<<"\t\t\t\tADDRESS :"<<address;
	cout<<"\n\nPIN NO. :"<<pin;
	cout<<"\t\t\t\tMOBILE NO. is  :"<<mob;
	cout<<"\n\nEMAIL ID :"<<email;
	cout<<"\n\nFROM :"<<from<<"\t\t\t\t TO :"<<to;
	cout<<"\n\nADULT PASSENGER :"<<p;
	cout<<"\t\t\t\tCHILDREN PASSENGER :"<<p1;
	cout<<"\n\n\t\t\t"<<stand;
	cout<<"\n\n\t\t\tTOTAL FARE :"<<r;
	}
void calculation();
void modify();
char *getname()
	{
	return(name);
	}
long getpnno()
	{
	return(pnno);
	}
}d,d1;
void passenger::calculation()
{
if(ch1==1)
	{
	clrscr();
	pnno=1092873;
	strcpy(from,"GUWAHATI");
	strcpy(to,"KOLKATA");
	gotoxy(30,1);
	cout<<"SARAIGHAT EXPRESS";
	gotoxy(28,2);
	cout<<".....................\n";
	cout<<"\tGUWAHATI (12:45) PM      -       KOLKATA (5:10) AM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 3190/-        1.(A)\n";
	cout<<"2. 1870/-        2.(A)\n";
	cout<<"3. 1305/-        3.(A)\n";
	cout<<"4. 500/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS 50% ofADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*3190+p1*1595);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*1870+p1*935);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*1305+p1*652.5);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*500+p1*250);
		}
	}
else
if(ch1==2)
	{
	clrscr();
	pnno=8272552;
	strcpy(from,"KOLKATA");
	strcpy(to,"GUWAHATI");
	gotoxy(30,1);
	cout<<"GUWAHATI EXPRESS";
	gotoxy(28,2);
	cout<<"....................\n";
	cout<<"\tKOLKATA (2:25) PM      -       GUWAHATI (7:55) AM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 2400/-        1.(A)\n";
	cout<<"2. 1810/-        2.(A)\n";
	cout<<"3. 1265/-        3.(A)\n";
	cout<<"4. 485/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*2400+p1*1200);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*1810+p1*905);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*1265+p1*632.5);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CASS";
		r=(p*485+p1*242.5);
		}
	}
if(ch1==3)
	{
	clrscr();
	pnno=7252441;
	strcpy(from,"DELHI");
	strcpy(to,"KOLKATA");
	gotoxy(30,1);
	cout<<"POORVA EXPRESS";
	gotoxy(28,2);
	cout<<"..............\n";
	cout<<"\tDELHI (4:05) PM      -       KOLKATA (4:55) PM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 3935/-        1.(A)\n";
	cout<<"2. 2295/-        2.(A)\n";
	cout<<"3. 1585/-        3.(A)\n";
	cout<<"4. 605/-         SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*3935+p1*1967.5);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*2295+p1*1147.5);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*1585+p1*792.5);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*605+p1*302.5);
		}
	}
if(ch1==4)
	{
	clrscr();
	pnno=5874936;
	strcpy(from,"KOLKATA");
	strcpy(to,"DELHI");
	gotoxy(30,1);
	cout<<"KOLKATA RAJDHANI";
	gotoxy(28,2);
	cout<<"................\n";
	cout<<"\tKOLKATA (4:45) PM      -       DELHI(10:00) AM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 4815/-        1.(A)\n";
	cout<<"2. 2900/-        2.(A)\n";
	cout<<"3. 2110/-        3.(A)\n";
	cout<<"4. 810/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*4815+p1*2407.5);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*2900+p1*1450);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*2110+p1*1055);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*810+p1*405);
		}
	}
else
if(ch1==5)
	{
	clrscr();
	pnno=7298346;
	strcpy(from,"GUWAHATI");
	strcpy(to,"DELHI");
	gotoxy(30,1);
	cout<<"DBRT RAJDHANI E";
	gotoxy(28,2);
	cout<<"................\n";
	cout<<"\tGUWAHATI (7:05) AM      -       NEW DELHI (5:10) AM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 5845/-        1.(A)\n";
	cout<<"2. 3535/-        2.(A)\n";
	cout<<"3. 2610/-        3.(A)\n";
	cout<<"4. 1000/-         SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*5845+p1*2922.5);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*3535+p1*1767.5);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*2610+p1*1305);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*1000+p1*500);
		}
	}
else
if(ch1==6)
	{
	clrscr();
	pnno=8475937;
	strcpy(from,"DELHI");
	strcpy(to,"GUWAHATI");
	gotoxy(30,1);
	cout<<"DBRT RAJDHANI ";
	gotoxy(28,2);
	cout<<".................\n";
	cout<<"\tNEW DELHI (12:55) PM      -       GUWAHATI (5:20) AM, 2 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 5848/-        1.(A)\n";
	cout<<"2. 3535/-        2.(A)\n";
	cout<<"3. 2510/-        3.(A)\n";
	cout<<"4. 950/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*5848+p1*2924);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*3535+p1*1767.5);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*2510+p1*1255);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*950+p1*475);
		}
	}
else
if(ch1==7)
	{
	clrscr();
	pnno=2037474;
	strcpy(from,"GUWAHATI");
	strcpy(to,"MUMBAI");
	gotoxy(30,1);
	cout<<"GUWAHATI LTT EXPRESS";
	gotoxy(28,2);
	cout<<"........................\n";
	cout<<"\tGUWAHATI (4:45) PM      -       MUMBAI (8:00) PM, 3 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 4500/-        1.(A)\n";
	cout<<"2. 3170/-        2.(A)\n";
	cout<<"3. 2130/-        3.(A)\n";
	cout<<"4. 810/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*4500+p1*2250);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*3170+p1*1585);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*2130+p1*1065);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*810+p1*405);
		}
	}
else
if(ch1==8)
	{
	clrscr();
	pnno=3847406;
	strcpy(from,"MUMBAI");
	strcpy(to,"GUWAHATI");
	gotoxy(30,1);
	cout<<"GUWAHATI EXPRESS";
	gotoxy(28,2);
	cout<<"....................\n";
	cout<<"\tMUMBAI (8:05) AM      -      GUWAHATI (11:30) AM, 3 DAYS\n";
	cout<<"PRICE LIST\n";
	cout<<"1. 4000/-        1.(A)\n";
	cout<<"2. 3170/-        2.(A)\n";
	cout<<"3. 2130/-        3.(A)\n";
	cout<<"4. 810/-          SL\n";
	cout<<"\nNOTE:-CHILDREN'S FARE IS HALF OF THE ADULT'S FARE   ....";
	cout<<"\n\nYOUR PNR NO.IS   :"<<pnno;
	cout<<"\n\nENTER THE NO. OF ADULT PASSENGER..\t";
	cin>>p;
	cout<<"\nENTER THE NO. OF CHILDREN PASSENGER..\t";
	cin>>p1;
	cout<<"\nSELECT A CLASS FROM THE ABOVE PRICE LIST (1/2/3/4):\t" ;
	cin>>ch2;
	if(ch2==1)
		{
		strcpy(stand,"1.(A) [FIRST CLASS]");
		cout<<"\nYOU SELECTED THE 1.(A) [FIRST CLASS]";
		r=(p*4000+p1*2000);
		}
	if(ch2==2)
		{
		strcpy(stand,"2.(A) [SECOND CLASS]");
		cout<<"\nYOU SELECTED THE 2.(A) [SECOND CLASS]";
		r=(p*3170+p1*1585);
		}
	if(ch2==3)
		{
		strcpy(stand,"3.(A) [THIRD CLASS]");
		cout<<"\nYOU SELECTED THE 3.(A) [THIRD CLASS]";
		r=(p*2130+p1*1065);
		}
	if(ch2==4)
		{
		strcpy(stand,"SLEEPER CLASS");
		cout<<"\nYOU SELECTED THE SLEEPER CLASS";
		r=(p*810+p1*405);
		}
	}
}
void passenger::modify()
{
cout<<"\n\n\t\t\t  PNR NO.  :"<<pnno;
cout<<"\n\nNAME  :"<<name;
cout<<"\t\t\t\tADDRESS :"<<address;
cout<<"\n\nPIN NO. :"<<pin;
cout<<"\t\t\t\tMOBILE NO. is  :"<<mob;
cout<<"\n\nEMAIL ID :"<<email;
cout<<"\n\nFROM :"<<from<<"\t\t\t\t TO "<<to;
cout<<"\n\nADULT PASSENGER :"<<p;
cout<<"\t\t\t\tCHILDREN PASSENGER :"<<p1;
cout<<"\n\n\t\t\t"<<stand;
cout<<"\n\n\t\t\tTOTAL FARE :"<<r;
getch();
clrscr();
cout<<"\n\t\t\t    ENTER NEW DETAILS  :";
char nm[30],ad[40],em[30];
long pn,mb;
int y,y1;
float ru;
cout<<"\n\nNEW NAME : (ENTER '.'TO RETAIN OLD ONE)\t";
gets(nm);
cout<<"\n\nNEW ADDRESS : (ENTER '.'TO RETAIN OLD ONE)\t";
gets(ad);
cout<<"\n\nNEW PIN NO. : (ENTER '0'TO RETAIN OLD ONE)\t";
cin>>pn;
cout<<"\n\nNEW MOBILE NO. : (ENTER '0'TO RETAIN OLD ONE)\t";
cin>>mb;
cout<<"\n\nNEW EMAIL : (ENTER '.'TO RETAIN OLD ONE)\t";
gets(em);
cout<<"\n\nNEW NO. OF ADULT PASSENGER : (ENTER '0'TO RETAIN OLD ONE)\t";
cin>>y;
cout<<"\n\nNEW NO. OF CHILDREN PASSENGER  : (ENTER '0'TO RETAIN OLD ONE)\t";
cin>>y1;
if(strcmp(nm,".")!=0)
	strcpy(name,nm);
if(strcmp(ad,".")!=0)
	strcpy(address,ad);
if(pn!=0)
	pin=pn;
if(mb!=0)
	mob=mb;
if(strcmp(em,".")!=0)
	strcpy(email,em);
if(y!=0)
	p=y;
if(y1!=0)
	p1=y1;
if((y==0&&y1!=0)||(y!=0&&y1==0)||(y!=0&&y1!=0))
	{
	if(ch1==1)
		{
		if(ch2==1)
		ru=(y*3190+y1*1595);
		else
		if(ch2==2)
		ru=(y*1870+y1*935);
		else
		if(ch2==3)
		ru=(y*1305+y1*652.5);
		else
		if(ch2==4)
		ru=(y*500+y1*250);
		}
	else
	if(ch1==2)
		{
		if(ch2==1)
		ru=(y*2400+y1*1200);
		else
		if(ch2==2)
		ru=(y*1810+y1*905);
		else
		if(ch2==3)
		ru=(y*1265+y1*632.5);
		else
		if(ch2==4)
		ru=(y*485+y1*242.5);
		}

	if(ch1==3)
		{
		if(ch2==1)
		ru=(y*3935+y1*1967.5);
		else
		if(ch2==2)
		ru=(y*2295+y1*1147.5);
		else
		if(ch2==3)
		ru=(y*1585+y1*792.5);
		else
		if(ch2==4)
		ru=(y*605+y1*302.5);
		}

	if(ch1==4)
		{
		if(ch2==1)
		ru=(y*4815+y1*2407.5);
		else
		if(ch2==2)
		ru=(y*2900+y1*1450);
		else
		if(ch2==3)
		ru=(y*2110+y1*1055);
		else
		if(ch2==4)
		ru=(y*810+y1*405);
		}

	if(ch1==5)
		{
		if(ch2==1)
		ru=(y*5845+y1*2922.5);
		else
		if(ch2==2)
		ru=(y*3535+y1*1767.5);
		else
		if(ch2==3)
		ru=(y*2610+y1*1305);
		else
		if(ch2==4)
		ru=(y*1000+y1*500);
		}

	if(ch1==6)
		{
		if(ch2==1)
		ru=(y*5848+y1*2924);
		else
		if(ch2==2)
		ru=(y*3535+y1*1767.5);
		else
		if(ch2==3)
		ru=(y*2510+y1*1255);
		else
		if(ch2==4)
		ru=(y*950+y1*475);
		}

	if(ch1==7)
		{
		if(ch2==1)
		ru=(y*4500+y1*2250);
		else
		if(ch2==2)
		ru=(y*3170+y1*1585);
		else
		if(ch2==3)
		ru=(y*2130+y1*1065);
		else
		if(ch2==4)
		ru=(y*810+y1*405);
		}

	if(ch1==8)
		{
		if(ch2==1)
		ru=(y*4000+y1*2000);
		else
		if(ch2==2)
		ru=(y*3170+y1*1585);
		else
		if(ch2==3)
		ru=(y*2130+y1*1065);
		else
		if(ch2==4)
		ru=(y*810+y1*405);
		}
	r=ru;
	}
}
void menu()
{
clrscr();
int ch;
clrscr();
gotoxy(16,8);
cout<<"MAIN MENU";
gotoxy(16,10);
cout<<"1.Add";
gotoxy(16,12);
cout<<"2.Search";
gotoxy(16,14);
cout<<"3.Cancellation";
gotoxy(16,16);
cout<<"4.Edit";
gotoxy(16,18);
cout<<"5.Exit";
gotoxy(16,20);
cout<<"Enter your choice (1/2/3/4/5):\t";
cin>>ch;
switch(ch)
{
case 1:
	{
	clrscr();
	add();
	break;
	}
case 2:
	{
	clrscr();
	search();
	break;
	}
case 3:
	{
	clrscr();
	del();
	break;
	}
case 4:
	{
	clrscr();
	mod();
	break;
	}
case 5:
	 {
	 clrscr();
	 for(int i=1;i<=55;i++)
		{
		gotoxy(i,12);
		cout<<"Thank you for visiting! ";
		delay(160);
		clrscr();
		}
	 exit(0);
	 }
}
}
void add()
{
clrscr();
ofstream fout;
fout.open("be.dat",ios::app);
gotoxy(9,2);
cout<<"  TRAIN  ";
gotoxy(37,2);
cout<<"  FROM  ";
gotoxy(67,2);
cout<<"  TO  ";
gotoxy(1,3);
cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
gotoxy(4,5);
cout<<"1.SARAIGHAT EXPRESS......";
gotoxy(33,5);
cout<<"GUWAHATI..........";
gotoxy(62,5);
cout<<"KOLKATA...........";
gotoxy(4,7);
cout<<"2.GUWAHATI EXPRESS.......";
gotoxy(33,7);
cout<<"KOLKATA...........";
gotoxy(62,7);
cout<<"GUWAHATI..........";
gotoxy(4,9);
cout<<"3.POORVA EXPRESS.........";
gotoxy(33,9);
cout<<"DELHI.............";
gotoxy(62,9);
cout<<"KOLKATA...........";
gotoxy(4,11);
cout<<"4.KOLKATA RAJDHANI.......";
gotoxy(33,11);
cout<<"KOLKATA...........";
gotoxy(62,11);
cout<<"DELHI.............";
gotoxy(4,13);
cout<<"5.DBRT RAJDHANI E........";
gotoxy(33,13);
cout<<"GUWAHATI..........";
gotoxy(62,13);
cout<<"DELHI.............";
gotoxy(4,15);
cout<<"6.DBRT RAJDHANI..........";
gotoxy(33,15);
cout<<"DELHI.............";
gotoxy(62,15);
cout<<"GUWAHATI..........";
gotoxy(4,17);
cout<<"7.GUWAHATI LTT EXPRESS...";
gotoxy(33,17);
cout<<"GUWAHATI..........";
gotoxy(62,17);
cout<<"MUMBAI............";
gotoxy(4,19);
cout<<"8.GUWAHATI EXPRESS.......";
gotoxy(33,19);
cout<<"MUMBAI............";
gotoxy(62,19);
cout<<"GUWAHATI..........\n";
gotoxy(4,20);
cout<<"\nENTER A NO. FROM THE ABOVE TABLE IN WHICH TRAIN YOU WANT TO TRAVEL  .... ";
gotoxy(4,22);
cout<<"\nPRESS 0 TO RETURN TO MENU  \t\t\t\t\t    .... ";
cin>>ch1;
if(ch1==1||ch1==2||ch1==3||ch1==4||ch1==5||ch1==6||ch1==7||ch1==8)
	{
	 clrscr();
	 d.getdata();
	 getch();
	 d.calculation();
	 getch();
	 cout<<"\n\n\n\t\t\t    THANKYOU FOR BOOKING\n";
	 fout.write((char*)&d,sizeof(d));
	 fout.close();
	 getch();
	 menu();
	 }
else
if(ch1==0)
	{
	 getch();
	 clrscr();
	 menu();
	}
}
void search()
{
clrscr();
ifstream fin;
fin.open("be.dat",ios::in);
char name1[30],found='n';
long pnr;
cout<<"\n\n\tENTER THE NAME YOU WANT TO SEARCH FOR .. \t";
gets(name1);
cout<<"\n\n\tENTER THE PNR NO. .. \t";
cin>>pnr;
while(!fin.eof())
	{
	fin.read((char*)&d,sizeof(d));
	if((strcmp(d.getname(),name1)==0)&&(d.getpnno()==pnr))
		{
		d.putdata();
		found='y';
		getch();
		menu();
		}
	}
if(found=='n')
	{
	cout<<"\n\n\n\n\n\n\t\tSORRY THERE IS NO SUCH RESERVATION  !!!!!!!";
	getch();
	menu();
	}
fin.close();
getch();
}
void del()
{
clrscr();
ifstream fio("be.dat",ios::in);
ofstream file("temp.dat",ios::out);
char name3[30],found='f',confirm='n';
long pnr2;
cout<<"\n\n\t\tENTER THE NAME WHICH RECORD YOU WANT TO DELETE  :";
gets(name3);
cout<<"\n\n\t\tENTER THE PNR NO.  :";
cin>>pnr2;
while(!fio.eof())
	{
	fio.read((char*)&d,sizeof(d));
	if((strcmp(d.getname(),name3)==0)&&(d.getpnno()==pnr2))
		{
		d.putdata();
		found='t';
		cout<<"\n\\t\tARE YOU SURE, YOU WANT TO DELETE THIS RECORD!!(Y/N)..";
		cin>>confirm;
		if(confirm=='n'||confirm=='N')
		       {
			file.write((char*)&d,sizeof(d));
			getch();
			clrscr();
			menu();
		       }
		}
	else
		{
		file.write((char*)&d,sizeof(d));
		found='t';
		getch();
		clrscr();
		gotoxy(27,14);
		cout<<"\nTHE FILE IS DELETED !!!!";
		}
	}
if(found=='f')
cout<<"\n\n\t\tTHERE IS NO SUCH RESERVATION !!!! " ;
fio.close();
file.close();
remove("be.dat");
rename("temp.dat","be.dat");
getch();
menu();
}
void mod()
{
fstream fio("be.dat",ios::in||ios::out);
char name2[30],found='f';
long pos1,pnr1;
cout<<"\n\n  ENTER THE NAME WHOSE RECORD IS TO BE MODIFIED  :  ";
gets(name2);
cout<<"\n\n  ENTER THE PNR NO.  :  ";
cin>>pnr1;
while(!fio.eof())
	{
	pos1=fio.tellg();
	fio.read((char*)&d,sizeof(d));
	if((strcmp(d.getname(),name2)==0)&&(d.getpnno()==pnr1))
		{
		d.modify();
		cout<<"\n\t\t\t  PRESS ENTER  !!!!!!";
		getch();
		clrscr();
		fio.seekg(pos1);
		fio.write((char*)&d,sizeof(d));
		found='t';
		break;
		}
	}
if(found=='f')
	{
	cout<<"\n\n\n\n\t\t\t SORRY THERE IS NO SUCH RESERVATION!!!!!!\n";
	getch();
	menu();
	}
fio.seekg(0);
cout<<"\n\t\t\t   NOW THE FILE CONTAINS  :\n";
cout<<"\t\t\t............................ \n";
while(!fio.eof())
	{
	fio.read((char*)&d,sizeof(d));
	d.putdata();
	getch();
	clrscr();
	menu();
	}
fio.close();
}
void main()
{
clrscr();
menu();
getch();
}




