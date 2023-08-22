#include <iostream>
using namespace std;

void circleArea(){
  int r;
  cout<<"Enter the radius: "<<endl;
  cin>>r;
  float area = 3.14*r*r;
  cout<<"Area of circle is: "<<area<<" units"<<endl;
}

void sumOf(float a, float b){
  cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

int main() {
circleArea();
sumOf(50,200);
}
