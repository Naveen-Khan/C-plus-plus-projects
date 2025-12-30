
#include<iostream>
#include<conio.h>
#include<windows.h>
#include <string>
#include <fstream>

using namespace std;

void display();
void list_opeation ();
void insertion_students_records();
void show();
void Search();
void delt();
void insert_record_in_file();
void count_number_of_students();
void undo();

struct student{
string name,id,qualification;
long contact;
string roll_number;
};

struct action{
    student s;
    string operation;
};

const int maximum_size=100;
student s[maximum_size];
static int total_students=0;
static int top=-1;

action undoStack[maximum_size];
int undoTop = -1;

void pushToUndoStack(student , string );

int main(){
 display();
 list_opeation();
}

void display(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\t\tSTUDENT MANAGMENT SYSTEM"<<endl;
cout<<"\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\n\t\tPress 1 to Insertion student recods  "<<endl;
cout<<"\t\tPress 2 to show student recods"<<endl;
cout<<"\t\tPress 3 to search student recods"<<endl;
cout<<"\t\tPress 4 to count students"<<endl;
cout<<"\t\tPress 5 to delete student recods"<<endl;
cout<<"\t\tpress 6 to insert record in file"<<endl;
cout<<"\t\tPress 7 to undo operation"<<endl;
cout<<"\t\tPress 8 to exit"<<endl;
}

void list_opeation (){
char ch;
char c;
do{
system("CLS");
display();
cout<<"\n enter your choice of records :";
cin >>ch;
cout<<"\t\t\nplease wait a moment";
for(int i=0;i<6;i++)
{
cout<<".";
Sleep(500);
}
system("CLS");
switch(ch){
 case '1':
  insertion_students_records();
 break;
case '2':
show();
     break;
case '3':
Search();
     break;
case '4':
     count_number_of_students();
     break;
case '5':
               delt();
     break;
case '6':
      insert_record_in_file();
     break;
case '7':
   undo();
     break;
case'8':
 exit(0);
     break;
default:
 cout<<"\aInvalid Input"<<endl;
     break;
 }
cout<<"Do you Want to select another option..(y/n)!";
cin>>c;
}while(c=='y'||c=='Y');
cout<<" byee Nice to meet you...";
exit(0);
}

void insertion_students_records(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\tEnter Insert student records "<<endl;
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

if(top==maximum_size){
 cout<<"you are not enter more data...limit exceed ";
}
else{
top++;
cout<<"\n \tenter data of student "<<total_students+1<<"\n\n ";
cout << "\tEnter student name: ";
cin>>s[top].name;
cout<<"\n\tEnter student id: ";
cin>>s[top].id;
cout<<"\n\tEnter student qualification: ";
cin>>s[top].qualification;
cout<<"\n\tEnter contact: ";
cin>>s[top].contact;
cout<<"\n\tEnter Roll : ";
cin>>s[top].roll_number;

pushToUndoStack(s[top], "insert");
total_students=total_students+1;
}
}

void show(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\tshow Data of students"<<endl;
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
int count=1;
if(total_students!=0){
for(int i=top;i>=0;i--){
cout<<"\n\tData of STUDENT "<<count<<endl;
cout<<"\n\tName: "<<s[i].name<<endl;
cout<<"\n\tID: "<<s[i].id<<endl;
cout<<"\n\tQualification: "<<s[i].qualification<<endl;
cout<<"\n\tContact: "<<s[i].contact<<endl;
cout<<"\n\t Roll number: "<<s[i].roll_number<<endl;
count++;
}
}
else{
cout<<"\n\tNo data is entered"<<endl;
}
}

void Search(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\t Search Data of student"<<endl;
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

if(total_students!=0){
string id;
cout<<"Enter id of student which you want to search"<<endl;
cin>>id;
for(int i=0;i<=top;i++){
if(s[i].id==id){
cout<<"Name: "<<s[i].name<<endl;
cout<<"ID: "<<s[i].id<<endl;
cout<<"qualification: "<<s[i].qualification<<endl;
cout<<"Contact: "<<s[i].contact<<endl;
cout<<"Roll number: "<<s[i].roll_number<<endl;
break;
}
if(i==total_students-1){
 cout<<"No such record found"<<endl;
}
}
}
else{
 cout<<"No data is entered"<<endl;
}
}

void count_number_of_students(){
system("CLS");
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\t count number of students";
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
if(total_students==0){
cout<< "\n\t\t sorry\n record was not enterd\n\n";
}
else{
 cout<<"\n\ttotal number of student record you entered is:"<<total_students<<endl;
}
}

void delt(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\tDELETE STUDENT RECORD"<<endl;
cout<<"\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n delete record of recent student\n";
cout<<"\n\n\t\t please wait a moment";
for(int i=0;i<7;i++){
cout<<".";
Sleep(500);
}
if(top==-1){
cout<<"\n\tdeletion is not possible\n\t";
}
else{
pushToUndoStack(s[top], "delete");
top--;
total_students--;
}
cout<<"\n\nrecord successfully delete!...";
}

void insert_record_in_file(){
system("CLS");
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\t insert record"<<endl;
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

ofstream file("items.file",ios::app);
for(int i=top; i>=0; i--){
file << "Name: " << s[i].name << "\n";
file << "ID: " << s[i].id << "\n";
file << "Qualification: " << s[i].qualification << "\n";
file << "Contact: " << s[i].contact << "\n";
file << "ROLL NUMBER: " << s[i].roll_number << "\n";
file << "----------------------" << "\n";
}
file.close();
cout << "\n\t\tData successfully written to file." << endl;
}

void undo(){
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
cout<<"\n\n\t\t undo operation  ";
cout<<"\n\n\t--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n\n";
if(undoTop == -1){
cout << "\n\t Nothing to undo!";
return;
}
if(undoStack[undoTop].operation == "insert"){
delt();
cout << "\n\tLatest insertion has been undone!";
}
else if(undoStack[undoTop].operation == "delete"){
top++;
s[top] = undoStack[undoTop].s;
total_students++;
cout << "\n\tLatest deletion has been undone!";
}
undoTop--;
}

void pushToUndoStack(student stud, string oper) {
    if(undoTop >= maximum_size - 1) {
        cout << "\n\tUndo stack is full!";
        return;
    }
    undoTop++;
    undoStack[undoTop].s = stud;
    undoStack[undoTop].operation = oper;
}
