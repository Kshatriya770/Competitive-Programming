#include<iostream>
#include<process.h>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<stdio.h>
class admission_desk_jee_mains
{
int applicant_no;
int jeemains_rollno;
char applicant_first_name[30] ;
char applicant_last_name[30];
int age;
char gender;
char fathers_name[40];
char mothers_name[40];
char house_no[30];
char street_no[30];
char area[30];
char city[30];
char state[30];
char country[40];
long pincode;
int board_rollno;
int adharcardno;
char centre[30];
float percentile;
char category[40];
char type_college[30];
char residence;
char mobile_no[10];
char email[50];
char alternateno[10];
char school_name[40];
char school_address[40];
float boards_percentage;
float olympiad_score;
float other_testscore;
float additional_score;

 public:
void enter();
void modify();
void display();
void calc();
void dispcollege();
int rano()
{return applicant_no;}
};
void admission_desk_jee_mains::enter()
{cout<<"Enter applicant no"<<endl;
cin>>applicant_no;
cout<<"Enter jee mains roll number"<<endl;
cin>>jeemains_rollno;
cout<<"Enter applicant first name"<<endl;
gets(applicant_first_name);
cout<<"Enter applicant last name"<<endl;
gets(applicant_last_name);
cout<<"Enter applicant age"<<endl;
cin>>age ;
cout<<"Enter gender"<<endl;
cin>>gender;
cout<<"Enter applicants fathers name"<<endl;
gets(fathers_name);
cout<<"Enter applicant mothers name"<<endl;
gets(mothers_name);
cout<<"Enter applicants address"<<endl;
cout<<"Enter house no"<<endl;
gets(house_no);
cout<<"Enter street no"<<endl;
gets(street_no);
cout<<"Enter area"<<endl;
gets(area);
cout<<"enter city"<<endl;
gets(city);
cout<<"Enter country"<<endl;
gets(country);
cout<<"Enter pincode"<<endl;
cin>>pincode;
cout<<"Enter applicants board rollno"<<endl;
cin>>board_rollno;
cout<<"Enter applicants adhar card no"<<endl;
cin>>adharcardno;
cout<<"Enter applicants jee mains centre"<<endl;
gets(centre);
cout<<"Enter applicants jee mains percentile"<<endl;
cin>>percentile;
cout<<"Enter apllicants category"<<endl;
gets(category);
cout<<"Enter your residence delhi (D) or outside delhi(O)"<<endl;
cin>>residence;
cout<<"Enter applicants mobile no"<<endl;
cin>>mobile_no;
cout<<"Enter applicants email"<<endl;
gets(email);
cout<<"Enter applicants alternate no"<<endl;
cin>>alternateno;
cout<<"Enter applicants school name"<<endl;
gets(school_name);
cout<<"Enter applicants school address"<<endl;
gets(school_address);
cout<<"Enter applicants board percentage"<<endl;
cin>>boards_percentage;
cout<<"Enter applicants olympiad score"<<endl;
cin>>olympiad_score;
cout<<"Enter applicants other test score"<<endl;
cin>>other_testscore;
}
void admission_desk_jee_mains::modify()
{int choice;
cout<<"1.to modify first name"<<endl;
cout<<"2.to modify last name"<<endl;
cout<<"3.to modify age"<<endl;
cout<<"4.to modify gender"<<endl;
cout<<"5.to modify fathers name"<<endl;
cout<<"6.to modify mothers name"<<endl;
cout<<"7.to modify address"<<endl;
cout<<"8.to modify house no"<<endl;
cout<<"9.to modify street no"<<endl;
cout<<"10.to modify area"<<endl;
cout<<"11.to modify city"<<endl;
cout<<"12.to modify country"<<endl;
cout<<"13.to modify pincode"<<endl;
cout<<"14.to modify board rollno"<<endl;
cout<<"15.to modify adhar card no"<<endl;
cout<<"16.to modify jee main's centre"<<endl;
cout<<"17.to modify jee mains percentile"<<endl;
cout<<"18.to modify category "<<endl;
cout<<"19.to modify residence"<<endl;
cout<<"20.to modify mobile no"<<endl;
cout<<"21.to modify email "<<endl;
cout<<"22.to modify alternate no"<<endl;
cout<<"23.to modify school name"<<endl;
cout<<"24.to modify school adress"<<endl;
cout<<"25.to modify board percentage"<<endl;
cout<<"26.to modify olympiad score"<<endl;
cout<<"27.to modify other test score"<<endl;
cout<<"enter your choice "<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter updated first name"<<endl;
gets(applicant_first_name);
break;
case 2:
cout<<"enter updated last name"<<endl;
gets(applicant_last_name);
break;
case 3:
cout<<"enter updated age "<<endl;
cin>>age;
break;
case 4:
cout<<"enter updated gender "<<endl;
cin>>gender;
break;
case 5:
cout<<"enter updated fathers name "<<endl;
gets(fathers_name);
break;
case 6:
cout<<"enter updated mothers name"<<endl;
gets(mothers_name);
break;
case 8:
cout<<"enter updated house no"<<endl;
gets(house_no);
break;
case 9:
cout<<"enter updated street no "<<endl;
gets(street_no);
break;
case 10:
cout<<"enter updated area "<<endl;
gets(area);
break;
case 11:
cout<<"enter updated city "<<endl;
gets(city);
break;
case 12:
cout<<"enter updated country"<<endl;
gets(country);
break;
case 13:
cout<<"enter updated pincode"<<endl;
cin>>pincode;
break;
case 14:
cout<<"enter updated board rollno"<<endl;
cin>>board_rollno;
break;
case 15:
cout<<"enter updated adhar card no"<<endl;
cin>>adharcardno;
break;
case 16:
cout<<"enter updated centre"<<endl;
gets(centre);
break;
case 17:
cout<<"enter updated percentile"<<endl;
cin>>percentile;
break;
case 18:
cout<<"enter updated category"<<endl;
gets(category);
break;
case 19:
cout<<"enter updated residence"<<endl;
cin>>residence;
break;
case 20:
cout<<"enter updated mobile no"<<endl;
gets(mobile_no);
break;
case 21:
cout<<"enter updated email "<<endl;
gets(email);
break;
case 22:
cout<<"enter updated alternate no"<<endl;
gets(alternateno);
break;
case 23:
cout<<"enter updated school name "<<endl;
gets(school_name);
break;
case 24:
cout<<"enter updated school address"<<endl;
gets(school_address);
break;
case 26:
cout<<"enter updated boards percentage"<<endl;
cin>>boards_percentage;
break;
case 27:
cout<<"enter updated olympiad score"<<endl;
cin>>olympiad_score;
break;
case 28:
cout<<"enter updated other test score"<<endl;
cin>>other_testscore;
break;
}
}
void admission_desk_jee_mains::display()
{cout<<"Applicants jee mains no is"<<jeemains_rollno<<endl;
cout<<"Applicants no is"<<applicant_no<<endl;
cout<<"Applicants first name is"<<applicant_first_name<<endl;
cout<<"Applicants last name is"<<applicant_last_name<<endl;
cout<<"Applicants age is"<<age<<endl;
cout<<"Applicants gender"<<gender<<endl;
cout<<"Applicants father name is"<<fathers_name<<endl;
cout<<"Applicants mother name is"<<mothers_name<<endl;
cout<<"Applicants address is"<<endl;
cout<<"Applicants house no is"<<house_no<<endl;
cout<<"Applicants street no is"<<street_no<<endl;
cout<<"Applicants area is"<<area<<endl;
cout<<"Applicants city is"<<city<<endl;
cout<<"Applicants pincode is"<<pincode<<endl;
cout<<"Applicants country is"<<country<<endl;
cout<<"Applicants adhar card no is"<<adharcardno<<endl;
cout<<"Applicants jee mains percentile is"<<percentile<<endl;
cout<<"Applicants category is"<<category<<endl;
cout<<"Applicants residence is"<<residence<<endl;
cout<<"Applicants mobile no is"<<mobile_no<<endl;
cout<<"Applicants email is"<<email<<endl;
cout<<"Applicants alternate no is"<<alternateno<<endl;
cout<<"Applicants school name is"<<school_name<<endl;
cout<<"Applicants boards percentage is"<<boards_percentage<<endl;
  }
void admission_desk_jee_mains::calc()
{if(residence=='D')
{cout<<"you belongs to Delhi so you will get preferences in the following colleges"<<endl;
cout<<"1.DTU (delhi tech university)"<<endl;
cout<<"2.IGDTUW (indira gandhi delhi tech university for women)"<<endl;
cout<<"3.IIIT (indian institute of information tech)"<<endl;
cout<<"4.NSIT (netaji subhash institute of tech)"<<endl;
cout<<"5.College under IPU (indraprashtha university)"<<endl;
cout<<"5.1 maharja agrasen college"<<endl;
cout<<"5.2 bhartiya vidyapeeth college"<<endl;
cout<<"5.3 maharaja surajmal college"<<endl;
cout<<"5.4 bhagvan parshuram college"<<endl;
}
else
{cout<<"you are non resident of delhi, you get admission in following colleges"<<endl;
cout<<"1.SRM"<<endl ;
cout<<"2.VIT"<<endl;
cout<<"3.Amity university"<<endl;
cout<<"4.Manipal university"<<endl;
cout<<"5.IIT"<<endl;
cout<<"you can also get admission in any college of delhi but without prefernces"<<endl;
}
}
void admission_desk_jee_mains::dispcollege()
{int i;
char arr[][100]={"appear in IIT advance exam",
		 "Delhi technical university",
		  "Netaji subhash institute on tech",
		  "indian institute of information tech",

		  "maharja agrasen college(IPU)",
		  "Bhartiya vidyapeeth college(IPU)",
		  "maharaja surajmal college(IPU)",
		  "Bhagwan parshuram college(IPU)",
		  "SRM",
		  "VIT",
		  "Amity",
		  "Manipal"};
		 cout<<"College List"<<endl;
if(percentile>=99)
{
for(i=0;i<11;i++)
{
cout<<arr[i]<<endl;
}
}
else if(percentile>=97)
{cout<<arr[0]<<endl;
for(i=3;i<11;i++)
{
cout<<arr[i]<<endl;
}
}
else if(percentile>=95&&gender=='F')
{cout<<arr[0]<<endl;
cout<<"IGDTUW"<<endl;
for(i=4;i<11;i++)
{
cout<<arr[i]<<endl;
}
}
else if(percentile>=90)
{cout<<"appear in IIT advance exam"<<endl;
for(i=4;i<11;i++)
{
cout<<arr[i]<<endl;
}
}
else
{
for(i=8;i<11;i++)
{
cout<<arr[i]<<endl;
}
}
 }
void writedata()
{admission_desk_jee_mains A;
ofstream fout("admission.dat",ios::out|ios::binary);
cout<<"enter the details of student"<<endl;
A.enter();
fout.write((char*)&A,sizeof(A));
fout.close();
}
void readdata()
{admission_desk_jee_mains A;
ifstream fin("admission.dat",ios::in|ios::binary);
while(fin.read((char*)&A,sizeof(A)))
{A.display();
}
fin.close();
}
void searchdata()
{int ano;
admission_desk_jee_mains A;
ifstream fin("admission.dat",ios::in|ios::binary);
cout<<"enter applicant no to be searched"<<endl;
cin>>ano;
while(fin.read((char*)&A,sizeof(A)))
{if (ano==A.rano())
{A.display();
}
}
fin.close();
}
void dispcollegelist()
{int ano;
admission_desk_jee_mains A;
ifstream fin("admission.dat",ios::in|ios::binary);
cout<<"enter applicant no to be searched for college list"<<endl;
cin>>ano;
while(fin.read((char*)&A,sizeof(A)))
{if(ano==A.rano())
{A.calc();
}
}
fin.close();
}
void dispcollegelistperc()
{int ano;
admission_desk_jee_mains A;
ifstream fin("admission.dat",ios::in|ios::binary);
cout<<"enter applicant no to be searched for college list in which you are selected"<<endl;
cin>>ano;
while(fin.read((char*)&A,sizeof(A)))
{if(ano==A.rano())
{A.dispcollege();
}
}
fin.close();
}
void deletedata()
{int ano;
admission_desk_jee_mains A;
ifstream fin("admissiom.dat",ios::in|ios::binary);
ofstream fout("temp.dat",ios::out|ios::binary);
cout<<"enter applicant no to be deleted"<<endl;
cin>>ano;
while(fin.read((char*)&A,sizeof(A)))
{if(ano!=A.rano())
{fout.write((char*)&A,sizeof(A));
}
}
fin.close();
fout.close();
remove("admission.dat");
rename("temp.dat","admission.dat");
}
void updatedata()
{int ano;
admission_desk_jee_mains A;
long p;
fstream fio("admission.dat",ios::in|ios::out|ios::binary);
cout<<"enter applicant no to be modified "<<endl;
cin>>ano;
while(!fio.eof())
{p=fio.tellg();
fio.read((char*)&A,sizeof(A));
if(ano==A.rano())
{
A.modify();
fio.seekp(p-sizeof(A));
fio.write((char*)&A,sizeof(A));
}
}
fio.close();
}
void main()
{
clrscr();
char ch;
int choice;
ch='y';
do
{cout<<"main menu"<<endl;
cout<<"1.Enter applicant"<<endl;
cout<<"2.Display applicant "<<endl;
cout<<"3.Search applicant"<<endl;
cout<<"4.Display college list delhi or other state"<<endl;
cout<<"5.display college list in which you are selected"<<endl;
cout<<"6.Delete applicant"<<endl;
cout<<"7.Modify applicant"<<endl;
cout<<"8.Exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
{case 1:
writedata();
break;
case 2:
readdata();
break;
case 3:
searchdata();
break;
case 4:
dispcollegelist();
break;
case 5:
dispcollegelistperc();
break;
case 6:
deletedata();
break;
case 7:
updatedata();
break;
case 8:
exit(0);
break;
}
cout<<"do you want to continue"<<endl;
cin>>ch;
}
while(ch=='y');
getch();
}