
//======================================== naveen khan's ===================================================================          
// ----------------------------------Emploee managment system....


//------------------------------------------------Header files-------------------

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

//------------------ standard 

using namespace std;
// ------------------------------------------------STRUCTURE-----------------------------------------------
struct emp{
string name,id,address;
int contact,salary;
};

//--------------- we access it in all function.....
emp e[200];// Globally structure array.... we store data of 200 emploee...
int total=0;

//------------------------------------------function Declaration-----------------------------------------------



void Enter_Data();
void del();
void update();
void show();




// --------------------------------------FUNCTION defination----------------------------------
void update(){
	cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\t Update Data of emploee"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	
	if(total!=0){
	string id;
	cout<<"Enter id of employee which you want to update"<<endl;
	cin>>id;
for(int i=0;i<total;i++){
		if(e[i].id==id){
		cout<<"Old data of employee "<<i+1<<endl;
		cout<<"Name: "<<e[i].name<<endl;
		cout<<"ID: "<<e[i].id<<endl;
		cout<<"Address: "<<e[i].address<<endl;
		cout<<"Contact: "<<e[i].contact<<endl;
		cout<<"Salary: "<<e[i].salary<<endl;
		cout<<"\nEnter new data"<<endl;
		cout<<"Enter employee name: ";
		cin>>e[i].name;
		cout<<"Enter id: ";
		cin>>e[i].id;
		cout<<"Enter address: ";
		cin>>e[i].address;
		cout<<"Enter contact: ";
		cin>>e[i].contact;
		cout<<"Enter salary: ";
		cin>>e[i].salary;
		break;
		}
			if(i==total-1){
			cout<<"No such record found"<<endl;
		}
	}
}else{
	cout<<"No data is entered"<<endl;
}
}
void del(){
	
	cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\t Delete  Data of emploee"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
		
if(total!=0){
	int press;
	cout<<"Press 1 to delete specific record"<<endl;
	cout<<"Press 2 to delete full record"<<endl;
	cin>>press;
if(press==1){
		string id;
		cout<<"Enter id of employee which you want to delete"<<endl;
		cin>>id;
        for(int i=0;i<total;i++){
			  if(e[i].id==id){
				    for(int j=i;j<total;j++){
			    	e[j].name=e[j+1].name;
				    e[j].id=e[j+1].id;
				    e[j].address=e[j+1].address;
				    e[j].contact=e[j+1].contact;
				    e[j].salary=e[j+1].salary;
			
		             	}
				total--;
				cout<<"Your required record is deleted"<<endl;
				break;
			}
		        	if(i==total-1){
		            	cout<<"No such record found"<<endl;
 	                             	}
      	}}
	
  else if(press==2)
{
	          	total=0;
	      	cout<<"All record is deleted"<<endl;
}
else{
		cout<<"Invalid Input"<<endl;
}

}
else{
	cout<<"No data is entered"<<endl;
     }
}

void Enter_Data(){
	cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\tEnter Data of emploee"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	
	
	
	int choice=0;
	
	cout<<"enter how many data of  emploee do you want to enter.... ";
	cin>>choice;
	for(int i=total;i<total+choice;i++){
		
		cout<<"\n \tenter data of emploee"<<i+1<<"\n ";
		cout<<"\tEnter employee name: ";
		cin>>e[i].name;
		cout<<"\n\tEnter employee id: ";
		cin>>e[i].id;
		cout<<"\n\tEnter employee adress: ";
		cin>>e[i].address;
		cout<<"\n\tEnter contact: ";
		cin>>e[i].contact;
		cout<<"\n\tEnter salary: ";
		cin>>e[i].salary;		
	}
	total=total+choice;
//	cout<<total;
}
void show(){                          //All data show which is entered
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\tshow Data of emploee"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";




	if(total!=0){
	  for(int i=0;i<total;i++)
	  {
		cout<<"\n\tData of employee "<<i+1<<endl;
		cout<<"\n\tName: "<<e[i].name<<endl;
		cout<<"\n\tID: "<<e[i].id<<endl;
		cout<<"\n\tAddress: "<<e[i].address<<endl;            //rewrite on privious
		cout<<"\n\tContact: "<<e[i].contact<<endl;
		cout<<"\n\tSalary: "<<e[i].salary<<endl;
    	}
     }
    else{
    	cout<<"\n\tNo data is entered"<<endl;
	}


}
void Search(){                           //search the id of specific emploee
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\t Search Data of emploee"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
		

	if(total!=0){
	string id;
	cout<<"Enter id of employee which you want to search"<<endl;
	cin>>id;
	for(int i=0;i<total;i++){
		if(e[i].id==id){
		cout<<"Data of employee "<<i+1<<endl;
		cout<<"Name: "<<e[i].name<<endl;
		cout<<"ID: "<<e[i].id<<endl;
		cout<<"Address: "<<e[i].address<<endl;
		cout<<"Contact: "<<e[i].contact<<endl;
		cout<<"Salary: "<<e[i].salary<<endl;
		break;
		}
		if(i==total-1){
			cout<<"No such record found"<<endl;
	              	}
}}
	else{
	cout<<"No data is entered"<<endl;
}
}


 int main(){
	cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\tEmployee Management System"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	  string username,password;
    cout<<"\n\n\n\t\t******Signup******"<<endl;
	cout<<"\t\tEnter new username: ";
	cin>>username;
	cout<<"\t\tEnter new password: ";
	cin>>password;
	cout<<"\t\tYour new id is creating please wait";
	for(int i=0;i<6;i++)
	{
		cout<<".";
		Sleep(500);
	}
	cout<<"\n\t\tYour id created successfully";
	Sleep(2000);
	start:
	system("CLS");
	string usrn,pswd;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\t\tEmployee Management System"<<endl;
		cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n\n\n\t\t   LOGIN"<<endl;
	cout<<"\t\tEnter username: ";
	cin>>usrn;
	cout<<"\t\tEnter password: ";
	cin>>pswd;
	if(usrn==username&&pswd==password)
	{
	system("CLS");
	char ch;
	char c;// for do while condition
do{

	cout<<"\n\nPress 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update data"<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to logout"<<endl;
	cout<<"Press 7 to exit"<<endl;
	ch=getch();
	system("CLS");
	switch(ch){
		case '1':
		Enter_Data();
			break;
		case '2':
			show();
			break;
		case '3':
			Search();
			break;
		case '4':
			update();
			break;
		case '5':
			del();
			break;
		case '6':
			goto start;
			break;
		case '7':
	       	exit(0);
			break;
		default:
			cout<<"\aInvalid Input"<<endl;
		break;
	}
	//char c;
cout<<"Do you Want to select another option..(y/n)!";
cin>>c;
}while(c=='y'||c=='Y');
exit(0);
cout<<" byee Nice to meet you...";
}
  else if(usrn!=username)
  {
  	cout<<"\t\t\aInvalid username please try again";
  	Sleep(3000);
  	goto start;
  }
  else if(pswd!=password)
  {
  	cout<<"\t\t\aInvalid password please try again";
  	Sleep(3000);
  	goto start;
  }
  else{
  	cout<<"\t\t\aInvalid username and password";
  	Sleep(3000);
  	goto start;
  }
  }
