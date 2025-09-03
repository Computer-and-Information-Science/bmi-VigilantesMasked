#include <iostream>
using namespace std;

int main() {
    int height = 61;
 int weight= 130;
//Convert pounds to kilograms:
double kg = weight*0.453592;
//Convert inches to meters:
double m=height*0.0254;
//compute bmi
double bmi = kg / (m*m);

cout<< "The bmi for this person is : " << bmi << "."<< endl;
}
