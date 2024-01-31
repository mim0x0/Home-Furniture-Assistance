/*
*This program has developed to suggest the 2 best option for the customers depending on their room size.
*Program : Dining Table for the Living Room
* developer
	1. MUHAMMAD AL HAKIM BIN ANUAR 155374 (alhakim_usm02@student.usm.my)
	2. MUHAMMAD IMRAN MARZUQI BIN ZAINI 155417 (imranzaini389@student.usm.my)
    3. MUHAMMAD ILHAM MULHIM BIN ABD RAHMAN 155315 (mimbarilham@student.usm.my)

*/
#include<iostream>
using namespace std;
int main()
{
	float length,width ,arearoom;
	const float area_rectangle_heinrich = 18.0;//seventh largest table
	const float area_rectangle_niklas = 19.27; //sixth largest table
	const float area_rectangle_bertha = 22.26; //fifth largest table
	const float area_rectangle_shade = 26.04;  //forth largest table
	const float area_round_nadine = 69.4;      //largest table
	const float area_round_emma = 65.04;       //third largest table
	const float area_square_lea = 16.81;       //eighth largest table
	const float area_square_finn = 15.68;      //smallest table
	const float area_oval_stefan = 27.9;       //third largest table
	
	cout<<"    --HELLO WELCOME TO GROUP 47 FURNITURE STORE !--"<<endl<<endl;
	cout<<">   Our store provide a new beautiful table furniture for your house   <"<<endl<<endl;
	cout<<"    Here is our list of table furniture :"<<endl<<endl;
	cout<<"  1. Rectangle Heinrich"<<endl;
	cout<<"  2. Rectangle Niklas"<<endl;
	cout<<"  3. Rectangle Bertha"<<endl;
	cout<<"  4. Rectangle Shade"<<endl;
	cout<<"  5. Round Nadine"<<endl;
	cout<<"  6. Round Emma"<<endl;
	cout<<"  7. Square Lea"<<endl;
	cout<<"  8. Square Finn"<<endl;
	cout<<"  9. Oval Stefan"<<endl<<endl;
	
	cout<<"  Enter your room dimension so that we can suggest the best table size for you"<<endl<<endl;
	cout<<"  Your room length in meter: ";
	cin>>length;                          // length from user for area calculation
	cout<<"  Your room width  in meter: ";
	cin>>width;
	cout<<endl;                           // width from user for area calculation
	arearoom = length * width;            // calculation for the area of customer room
	
	if (arearoom>=65.04)                         //condition suitable for room larger than 65.04 m
	{
		cout<<"\n  The 2 best table is:"<<endl;
		cout<<"    1. Round Nadine"<<endl;
		cout<<"    2. Round Emma"<<endl;
	}
	else if (arearoom>=26.04 && arearoom<65.04)  //condition suitable for room size between 26.04m until 65.04m
	{
		cout<<"\n  The 2 best table is:"<<endl;
		cout<<"    1. Oval Stefan"<<endl;
		cout<<"    2. Rectangle Shade"<<endl;
	}
	else if (arearoom>=19.27 && arearoom<26.04)  //condition suitable for room size between 19.27 until 26.04m
	{
		cout<<"\n  The 2 best table is:"<<endl;
		cout<<"    1. Rectangle Bertha"<<endl;
		cout<<"    2. Rectangle Niklas"<<endl;
	}
	else if (arearoom>=16.81 && arearoom<19.27)  //condition suitable for room size between 16.81 until 19.27m
	{
		cout<<"\n  The 2 best table is:"<<endl;
		cout<<"    1. Rectangle Heinrich"<<endl;
		cout<<"    2.  Square Lea"<<endl;
	}
	else if (arearoom>=15.68 && arearoom<16.81)  //condition suitable for room size between 15.68 until 16.81m
	{
		cout<<"\n  The 2 best table is:"<<endl;
		cout<<"    1. Rectangle Heinrich"<<endl;
		cout<<"    2. Square Finn"<<endl;
	}
	else
		cout<<"\n  Your room is too small";
	
	return 0;
}
