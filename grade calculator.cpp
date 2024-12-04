#include <iostream>
using namespace std;
int main()
{
	int marks;
	char grade;
	
	cout<<"enter marks obtanined by the student (out of 100):"<<endl;
	cin>>marks;
	
	if (marks>= 90){
	   grade = 'A+';
	}
	else if(marks>=70&&marks<90){
		grade ='A';
	}
	else if(marks>=50&&marks<70){
		grade ='B';
	}
	else{
		grade = 'F';
	}
	
	cout<<"The grade of the student is:"<<grade<<endl;
}
