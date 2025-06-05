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

int len(string word){
	int count = 0;
	for(int i = 0;i < word.size();i++){
		count += 1;
	}
	return count;
}
void print(int name){
	std::cout << name << endl;
}

void sha256(string code){
	string bn = str_to_bin(code) + " 1";

}

//main - is a demo function 
int main(){
	print("Test");
	print(10);
	print(str_to_bin("hello word"));
	print(len("test"));
	return 0;
}