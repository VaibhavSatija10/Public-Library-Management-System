#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
//**************LIBRARY MANAGEMENT SYSTEM RECORD***************//
struct classstudent//class student structure
{
	int bookID;
	char title[30];
	char authorofbook[30];
	int costofbook;
};
const int books=5;//Maximum 5 book Enter in the record
int arr;
classstudent classstudentobj[books];

void Add_Book()//ENTER THE BOOK RECORD
{
	if(arr < books)
	{
		cout<<"---***Enter  the Details of Books---***"<<endl;
		cout<<"Enter a book id="<<endl;
		cin>>classstudentobj[arr].bookID;
		cout<<"Enter book title="<<endl;
		cin>>classstudentobj[arr].title;
		cout<<"Enter name of author="<<endl;
		cin>>classstudentobj[arr].authorofbook;
		cout<<"Enter the cost of book="<<endl;
		cin>>classstudentobj[arr].costofbook;
		arr++;
	}
	else
	    {
	    	cout<<"No more space in system for another"<<endl;
		
	    }
}

void Display_Books()//DISPLAY THE BOOK RECORD
{

	for(int i=0; i < arr; i++)
	{
		cout<<"---**Detail of all books in liabrary**---";
		cout<<"Book ID="<<classstudentobj[i].bookID<<endl;
		cout<<"Book Title is="<<classstudentobj[i].title<<endl;
		cout<<"Author Name="<<classstudentobj[i].authorofbook<<endl;
		cout<<"cost of book="<<classstudentobj[i].costofbook<<endl;
	}
}

void Book_Author()//SEARCH BY BOOK AUTHOR
{
	char search_book[30];
	cout<<"Enter the name of Author="<<endl;//Book BY SEARCH BY AUTHOR
	cin>>search_book;
	int i=0;
	while(i<arr)
	{
		if(strcmp(search_book,classstudentobj[i].authorofbook)==0)
		{
			cout<<endl;
		    cout<<"Book ID="<<classstudentobj[i].bookID<<endl;
		    cout<<"Book Title is="<<classstudentobj[i].title<<endl;
		    cout<<"Author Name="<<classstudentobj[i].authorofbook<<endl;
		    cout<<"cost of book="<<classstudentobj[i].costofbook<<endl;
			i++;
		}
	}
}

int main()//MAIN BODY START
{
	int choice;
	char input;
	do
	{
		cout<<"***---Library Book Record System***--"<<endl;
		cout<<"Press 1 to enter a book record:"<<endl;
		cout<<"press 2 to Display all Records of books:"<<endl;
		cout<<"press 3 to search book by author name:"<<endl;
		cout<<"press 4 to count total books in library:"<<endl;
		cout<<"press 5 to Exist from the system:"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;

		switch(choice)//Switch statement used
		{
			case 1://case 1 Add Book
				Add_Book();
				break;
			case 2://Case 2 Display Book
			    Display_Books();
				break; 	
		    case 3://Case 3 Search By Book Author
			    Book_Author();
				break;
			case 4://Case 4 Count the total book
			    cout<<"Total Number of books in library are:"<<arr<<endl;
				break;
			case 5://case 5 exit 
			    exit(0);
			default:
				cout<<"invalid choice please try again";
		}
		cout<<"Are you want to continue,please press y or Y"<<endl;
		cin>>input;

	}while(input=='y'||input=='Y');
}
//********************END OF PROJECT******************//
