#include <iostream>
using namespace std;
int main()
{
	char gender , city;
	int age, salary, netsalary;
	
	cout<<"ennter gender(F for female, M for male):"<<endl;
	cin>>gender;
	cout<<"ente age:"<<endl;
	cin>>age;
	cout<<"enter city(k for karachi, h for hyderabad, s for sukkur, g for ghotki):"<<endl;
	cin>>city;
	cout<<"enter your current salary:"<<endl;
	cin>>salary;
	netsalary=salary;
	
	if (gender=='F'&&(age>=25&&age<=35)&&(city=='k'||city=='h')){
		netsalary+=2000;
	} else if (gender=='M'&&(age>=25&&age<40)&&(city=='s'||city=='g')){
		netsalary+=2500;
	}
	cout<<"the net salary is:"<<netsalary<<endl;
}
