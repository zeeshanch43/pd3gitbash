#include<iostream>
using namespace std;
main()
{
float matric,inter,ecat,aggregate;
cout<<"enter matric marks:";
cin>>matric;
cout<<"enter inter marks:";
cin>>inter;
cout<<"enter ecat marks:";
cin>>ecat;
aggregate=((matric/1100)*100*0.10)+((inter/1200)*100*0.50)+((ecat/400)*100*0.40);
cout<<"aggregate is:"<<aggregate;

}