#include <iostream>
#include <cmath> // maths library connection 
using namespace std;
// task start
// an integer is given. If it is positive, subtract 8 from it; 
// if it is negative, add 6 to it; if it is zero, replace it with 10. 
// print the resulting number.
void task_if3 (); // task 1 function declaration
// the coordinates of the point on the plane (x, y) are given. 
// determine whether the point falls into a shape of a given colour 
// and print the corresponding message.
void task_geom35 (); // task 2 function declaration 
// calculate the area and perimeter of a plane figure. 
void task_sp35 (); // task 3 function declaration

int main () { // menu for moving between tasks
    int menu; // diclaration of the variable
    cout << "      *** Menu ***     " << endl;
    cout << " Task number: ";
    cin >> menu; // input the task number
    switch (menu)
    { // moving between tasks
        case 1: task_if3 (); break; // task_if3
        case 2: task_geom35 (); break; // task_geom35
        case 3: task_sp35 (); break; // task_sp35
        default: cout << " Wrong task! (Only 1-3)" << endl;
    // error notification
    } 
}

void task_if3 () // calculation task_if3
{
    int num; // declaration of the variable 
    cout << "      *** if3 ***      " << endl;
    cout << " Integer number: ";  
    cin >> num; // input number
     if (cin) { // condition if the number entered corretly 
        if (num > 0) { // number transformation
            num -= 8;
        }
        else if (num < 0) {
            num += 6;
        }
        else if (num == 0) {
            num = 10;
        }
        cout << " After transformation: " << num << endl; 
        // output result of the transformation
    }
    else 
       cout << " Wrong integer! " << endl;
    // error notification
}

void task_geom35 () // calculation task_geom35
{
    float x, y, r, xc, yc; // declaration of the variables
    bool ar1, ar2;
    cout << "      *** geom35 ***   " << endl;
    cout << " Input number of the radius: ";
    cin >> r; // input number for the radius
    if (cin && r > 0) // condition if the number entered corretly
    {
      cout << " Input number of x and y: "; 
      cin >> x >> y; // input numbers for x and y
      // colculation
      xc = x - r / sqrt(2);
      yc = y - r / sqrt(2);
      ar1 = x < 0 && pow(xc, 2) + pow(yc, 2) < pow(r, 2);
      ar2 = x > y-r*sqrt(2) && y < 0 && x < 0 && y > -1*r*sqrt(2) && x < y && y > -x-r*sqrt (2);
    if (ar1 || ar2) //displaying the notification
       cout << " In" << endl;
    else
       cout << " Out" << endl;
    }
    else // error notification
       cout << " Wrong information!";
} 

void task_sp35 () // calculation task_sp35
{
    float r, r90, Sc, Pc, St, Pt; // diclaration of the variables
    const double pi = 3.14; // diclaration pi = 3.14
    cout << "      *** sp35 ***   " << endl;
    cout << " Input number of the radius: ";
    cin >> r; // input number for the radius
    if (r > 0) // condition if the number entered corretly
    {
       r90 = (90.0*pi)/180.0; // convert degrees to radians
       Sc = 1.0/2.0 * pow(r,2)*(r90 - sin(r90)); // colculation S (part of the circle)
       Pc = (r * r90)+(2.0*r * sin (r90/2.0)); // colculation P (part of the circle)
       St = (r*r) / 2.0; // colculation S (triangle)
       Pt = r+r+sqrt((r*r)+(r*r)); // colculation P (triangle)
       cout << " S for the part of the circle: " << Sc << endl;
       cout << " P for the part of the circle: " << Pc << endl;
       cout << " S for the triangle: " << St << endl;
       cout << " P for the triangle: " << Pt << endl;
    } // output results of the calculation
    else // error notification
       cout << " Wrong information!";

}
//task finish
