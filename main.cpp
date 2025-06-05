#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

void print(string name){
	std::cout << name << endl;
}

void print(int name){
	std::cout << name << endl;
}

int main(){
	print("Test");
	print(10);
	return 0;
}