#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bitset>
#include <cstdint>
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

void sha256v(){
	const int k = 31,mod = 1e9+7;
	string s = "ajdfkljfklsdf";
	long long h = 0, m = 1;
	for (char c : s) {
	    int x = (int) (c - 'a' + 1);
	    h = (h + m * x) % mod;
	    m = (m * k) % mod;
	}
	std::cout << m << endl;  
}


//main - is a demo function 
int main(){
	print("Test");
	print(10);
	print(str_to_bin("hello word"));
	print(len("test"));
	return 0;
}