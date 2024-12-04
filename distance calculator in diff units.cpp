#include <iostream>
using namespace std;
int main()
{
	double miles;
	
	cout<< "enter the distance between SHU and your home in miles:"<<endl;
	cin>>miles;
	
	double kilometers =  miles*160934;
	double meters = kilometers * 1000;
	double centimeters= meters * 100;
	double millimeters = centimeters * 10;
	double micrometers = millimeters * 1000;
	
	cout<<"distance in kilometers:"<<kilometers<<"km"<<endl;
	cout<<"Distance in meters:"<<meters<<"m"<<endl;
	cout<<"Distance in centimeters:"<<centimeters<<"cm"<<endl;
	cout<<"distance in millimeters:"<<millimeters<<"mm"<<endl;
	cout<<"distace in micrometers:"<<micrometers<<"µm"<<endl;
	
}
	
	
