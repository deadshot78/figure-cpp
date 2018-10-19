#include <iostream>
#include "triangle.h"
#include "rectangle"
#include "disque.h"
#include "testfigure.h"
using namespace std;

int main (void) {

int a;

cout << "choisissez la figure: (1) traingle , (2) rectangle , (3) disque :"<< endl;
cin >> a;

triangle* triangle1 = new triangle ();
rectangle* rectangle1 = new rectangle ();
disque* disque1 = new disque ();

if (a==1)
{
cout << "perimetre du triangle =" << triangle1->ComputePerimeter(2,5,9) << endl;
cout << "aire du triangle =" << triangle1->ComputeArea(2,5) << endl;
}
if (a==2)
{
cout << "perimetre du rectangle =" << rectangle1->ComputePerimeter(2,5) << endl;
cout << "aire du rectangle =" << rectangle1->ComputeArea(2,5) << endl;
}
if (a==3)
{
cout << "perimetre du disque =" << disque1->ComputePerimeter(8) <<endl;
cout << "aire du disque =" << disque1->ComputeArea(8) << endl;
}

return 0;
}
