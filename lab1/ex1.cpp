#include <iostream>
#include <vector>
#include <cstdlib>

int main(){
	std::srand(314159);
	std::vector<int> vec;

	for(auto i=1;i<=5;++i)
		vec.push_back(rand() % 100);
	
	std::cout<<"size of vector: "<<vec.size()<<std::endl;

	std::cout<<"all elements in the vector: ";
	for(auto &num: vec)
		std::cout<<num<<" ";
	std::cout<<std::endl;	
	return 0; }
