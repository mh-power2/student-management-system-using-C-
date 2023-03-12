#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//Mohamed Hassan 
int num_of_students=0;
   // the main strucutre that store and can access the users from it
struct students{
	int id;
	string name;
	int money;
	string subjects[3];

};
 students add_member[100];
students stud;
students student_register(){
	int s=0; int avalible_money=0;
	cout<<"Please enter id for a new student:";
    cin>> stud.id;
	cout<<endl;

    cout<<"Please Enter the name of student:";
	cin.ignore();
    getline(cin, stud.name);
	cout<<endl;

    cout<<"Please Enter available money:";
    cin>> stud.money;
	avalible_money= stud.money;
    cout<<endl;
cout<<"                 The available subjects:"<<endl;

cout<<"1) Programming languages. Fee 1000"<<endl;
cout<<"2) Technical writing. Fee 400"<<endl;
cout<<"3) Software Engineering. Fee 1000"<<endl;
cout<<"4) Database. Fee 600"<<endl;

int s1,s2,s3;
int temp1,temp2;

cout<<"Please choose first subject number to enroll in:";
cin>>s1;

if (s1==1)
s +=1000;
else if (s1==2)
s +=400;
else if (s1==3)
s +=1000;
else if (s1==4)
s +=600;

// avalibale money valdiation for first subject and sum value
while(s >avalible_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose first subject number to enroll in:";
cin>>s1;
s =0;

if (s1==1)
s +=1000;
else if (s1==2)
s +=400;
else if (s1==3)
s +=1000;
else if (s1==4)
s +=600;
}

//first restore value of sum if any error occur to sum 
temp1= s;
   cout<<"Please choose second subject number to enroll in:";
cin>>s2;

// repeated entered subject valdiation 
while(s1==s2){
cout<<"sorry ,you already entered this subject";
cin>>s2;
}

if (s2==1)
s +=1000;
else if (s2==2)
s +=400;
else if (s2==3)
s +=1000;
else if (s2==4)
s +=600;
// avalibale money valdiation for the second subject
while(s >avalible_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose second subject number to enroll in:";
cin>>s2;
s =temp1;

if (s2==1)
s +=1000;
else if (s2==2)
s +=400;
else if (s2==3)
s +=1000;
else if (s2==4)
s +=600;
}
//second restore value of sum if any error occur to sum 
temp2= s;
cout<<"Please choose third subject number to enroll in:";
cin>>s3;
// repeated entered subject valdiation 
while((s3==s1)||(s3==s2)){
cout<<"sorry ,you already entered this subject";
cin>>s3;
}
if (s3==1)
s +=1000;
else if (s3==2)
s +=400;
else if (s3==3)
s +=1000;
else if (s3==4)
s +=600;
// avalibale money valdiation for the third subject
while(s >avalible_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose third subject number to enroll in:";
cin>>s3;
s =temp2;
if (s3==1)
s +=1000;
else if (s3==2)
s +=400;
else if (s3==3)
s +=1000;
else if (s3==4)
s +=600;
}
//adding the first subject to the list
	if(s1==1 )
		stud.subjects[0]="Programming languages";
	else if (s1==2 )
		stud.subjects[0]="Technical writing";
	else if (s1==3 )
		stud.subjects[0]="Software Engineering";
	else if (s1==4)
		stud.subjects[0]="Database";

		//adding the second subject to the list

		if(s2==1 )
			stud.subjects[1]="Programming languages";
	else if (s2==2 )
			stud.subjects[1]="Technical writing";
	else if (s2==3 )
			stud.subjects[1]="Software Engineering";
	else if (s2==4)
			stud.subjects[1]="Database";

		//adding the third subject to the list

		if(s3==1 )
			stud.subjects[2]="Programming languages";
	else if (s3==2 )
			stud.subjects[2]="Technical writing";
	else if (s3==3 )
			stud.subjects[2]="Software Engineering";
	else if (s3==4)
			stud.subjects[2]="Database";


	



	return stud;
}

students add_reg(){

	
	int sum=0,avaliable_money=0;


	
    
    cout<<"Please Enter your student new name:";
	cin.ignore();
    getline(cin, stud.name);
	cout<<endl;

    cout<<"Please Enter your student new available money:";
    cin>> stud.money;
	avaliable_money= stud.money;
    cout<<endl;





cout<<"The chosen subjects are:"<<endl;
cout<<"(1)"<< stud.subjects[0]<<endl<<"(2)"<< stud.subjects[1]<<endl<<"(3)"<< stud.subjects[2]<<endl;
cout<<endl; cout<<endl;


char check='N';
cout<<"Do you want to edit them Y/N: ";

cin>>check;

if(check=='y'||check=='Y') {

cout<<"1) Programming languages. Fee 1000"<<endl;
cout<<"2) Technical writing. Fee 400"<<endl;
cout<<"3) Software Engineering. Fee 1000"<<endl;
cout<<"4) Database. Fee 600"<<endl;

int s1,s2,s3;
int temp1,temp2;

cout<<"Please choose first subject number to edit it:";
cin>>s1;

if (s1==1)
sum+=1000;
else if (s1==2)
sum+=400;
else if (s1==3)
sum+=1000;
else if (s1==4)
sum+=600;

// avalibale money valdiation for first subject and sum value
while(sum>avaliable_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose first subject number to edit it:";
cin>>s1;
sum=0;

if (s1==1)
sum+=1000;
else if (s1==2)
sum+=400;
else if (s1==3)
sum+=1000;
else if (s1==4)
sum+=600;
}

//first restore value of sum if any error occur to sum 
temp1=sum;

cout<<"Please choose second subject number to edit it:";
cin>>s2;

// repeated entered subject valdiation 
while(s1==s2){
cout<<"sorry ,you already entered this subject";
cin>>s2;
}

if (s2==1)
sum+=1000;
else if (s2==2)
sum+=400;
else if (s2==3)
sum+=1000;
else if (s2==4)
sum+=600;



// avalibale money valdiation for the second subject
while(sum>avaliable_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose second subject number to edit it:";
cin>>s2;
sum=temp1;

if (s2==1)
sum+=1000;
else if (s2==2)
sum+=400;
else if (s2==3)
sum+=1000;
else if (s2==4)
sum+=600;
}


//second restore value of sum if any error occur to sum 
temp2=sum;



cout<<"Please choose third subject number to edit it:";
cin>>s3;


// repeated entered subject valdiation 
while((s3==s1)||(s3==s2)){
cout<<"sorry ,you already entered this subject";
cin>>s3;
}

if (s3==1)
sum+=1000;
else if (s3==2)
sum+=400;
else if (s3==3)
sum+=1000;
else if (s3==4)
sum+=600;


// avalibale money valdiation for the second subject
while(sum>avaliable_money){
cout<<"Error your fees is less than the total fees of subjects you want to enroll in."<<endl;
cout<<"Please choose second subject number to edit it:";
cin>>s3;
sum=temp2;

if (s3==1)
sum+=1000;
else if (s3==2)
sum+=400;
else if (s3==3)
sum+=1000;
else if (s3==4)
sum+=600;
}




//adding the first subject to the list
	if(s1==1 )
		stud.subjects[0]="Programming languages";
	else if (s1==2 )
		stud.subjects[0]="Technical writing";
	else if (s1==3 )
		stud.subjects[0]="Software Engineering";
	else if (s1==4 )
		stud.subjects[0]="Database";

		//adding the second subject to the list

		if(s2==1 )
			stud.subjects[1]="Programming languages";
	else if (s2==2 )
			stud.subjects[1]="Technical writing";
	else if (s2==3 )
			stud.subjects[1]="Software Engineering";
	else if (s2==4 )
			stud.subjects[1]="Database";

		//adding the third subject to the list

		if(s3==1 )
			stud.subjects[2]="Programming languages";
	else if (s3==2 )
			stud.subjects[2]="Technical writing";
	else if (s3==3 )
			stud.subjects[2]="Software Engineering";
	else if (s3==4 )
			stud.subjects[2]="Database";
}
	return stud;
}

void show(){

	//Student id =1, name = hassan, available money = 4000, subjects enrolled in {Technical writing, Software engineering, Database}
for(int i=0 ; i<= num_of_students;i++){
			cout<<"("<<(i+1)<<")";
		cout<<"Name is ="<< add_member[i].name<<", ";
	cout<<"and subjects enrolled in are ";  cout<<"{";
		for(int j=0 ;j<=2 ;j++){
			cout<<add_member[i].subjects[j];

			if(j<2)
			cout<<", ";
			}
		cout<<"}"; cout<<endl;
	}
	   
}
bool check_student_id(students arr[100], int id)
{
    for(int i=0;i<100;i++)
    {
		if(id==arr[i].id) 
			return false;

    }
    return true;
}


void main_menu(){

cout<<"            Registration of students in college"<<endl;
cout<<endl;

cout<<"1) Add student."<<endl;
cout<<endl;
cout<<"2) Edit student."<<endl;
cout<<endl;
cout<<"3) Show all students in system."<<endl;

}
int main(){
	int choice=0;
	bool running=true;
	while(running){
	main_menu();
	cout<<endl; cout<<endl; cout<<endl;
	int choice=0;
	cin>>choice;
	switch (choice){
	    //regester the student case

		case 1:{
			
   for(int i=0;i<100;i++)
   {
       
	   add_member[i]= student_register();

	   cout<<endl; cout<<endl; 
	   cout<<"do you want to add another studentY/N"<<endl;
	
	   char sure='y';
	   cin>>sure;

	  if (sure=='n'||sure=='N'){
			break;
	  }
	  
	  num_of_students++;
   }break;}



   //edit the student case
		case 2:{

	  int id=0;
    cout<<"Please enter id for a student to edit: ";
    cin>>id;
	cout<<endl;
    if(check_student_id(add_member, id )) {
		cout<<"Error this student's id doesn't exists."<<endl<<endl;
		break;
	}


	add_member[id]= add_reg();

	   cout<<endl; cout<<endl; 
	  
	
	  

	   break;
			   }


	//show the student case
		case 3:{
			   
			show();
			   

			cout<<endl<<endl;
			break;
			   }


	}


	}

	
	return 0;}
