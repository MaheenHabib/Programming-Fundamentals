#include <iostream>
using namespace std;
int main()
{
	double credithours[5], gradepoints[5], weightedsum= 0, totalcredits = 0;
	
	cout<<"enter the credit hours and grade points for 5 courses:"<<endl;
	for (int i=1; i<=5; i++) {
		cout<<"course"<<i<<"credit hours:";
		cin>> credithours[i];
		cout<<"course"<<i<<"grade points:";
		cin>>gradepoints[i];
		
		weightedsum+= credithours[i]* gradepoints[i];
		totalcredits+= credithours[i];
	}
	
	double sgpa = weightedsum / totalcredits;
	
	cout<<"the SGPA for the semester is:"<<sgpa<<endl;

}
