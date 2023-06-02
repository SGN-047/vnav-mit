#include <iostream> 
#include <cmath>
class Circle{
double rad;
public:
	Circle(double r){
		rad = r;
	}
	double circumference(){return 2*M_PI*rad; }
	double area(){return M_PI*std::pow(rad,2);}
};

int main(){
	Circle c(3);
	std::cout<<"Circum: "<<c.circumference() << std::endl;
	std::cout<<"area:"<<c.area() <<std::endl;
return 0;}
