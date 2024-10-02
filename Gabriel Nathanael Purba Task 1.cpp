#include<iostream>
using namespace std;
int waktu()
{
	cout<<"This program serves to calculate the travel time of an object in seconds"<<endl;

	cout<<"calculating"<<endl;
	int waktu,jarak,kecepatan;
	cout<<"input distance(m)"<<endl;
	cin>>jarak;
	cout<<"input object speed(m/s)"<<endl;
	cin>>kecepatan;
	waktu=jarak/kecepatan;
	cout<<"the time is :"<<waktu<<endl;
}

	int main()
{
	waktu();
	return 0;
	
}


