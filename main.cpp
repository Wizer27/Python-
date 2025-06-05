#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bitset>

using namespace std;



string str_to_bin(string word){
	string bin_out;
	for(char i : word){
		bin_out += std::bitset<8>(i).to_string() + " ";
	}
	return bin_out;
}
void print(string name){
	std::cout << name << endl;
}

void print(int name){
	std::cout << name << endl;
}




int main(){
	print("Test");
	print(10);
	print(str_to_bin("AB"));
	return 0;
}