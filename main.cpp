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

/*void sha256v(){
	const int k = 31,mod = 1e9+7;
	string s = "ajdfkljfklsdf";
	long long h = 0, m = 1;
	for (char c : s) {
	    int x = (int) (c - 'a' + 1);
	    h = (h + m * x) % mod;
	    m = (m * k) % mod;
	}
	const int maxn = 1e5+5;
	int p[maxn];
	p[0] = 1;
	for (int i = 1; i < maxn; i++){
		p[i] = (p[i-1] * k) % mod;
	}
    //double  h[maxn];
	h[0] = 0; 



	for (int i = 0; i < n; i++) 
    	h[i+1] = (h[i] + p[i] * s[i]) % mod;

	//std::cout << m << endl; 
	//std::cout << (h[r+1] - h[l]) * p[n-l] % mod << endl;
	std::cout << h << endl;

}
*/
unsigned long  hash_test(const string str){
	unsigned long hash = 5381;  // начальное значение
    for (char c : str) {
      hash = ((hash << 5) + hash) + c;  // умножение на 33
    }
    return hash;
}
//main - is a demo function 
int main(){
	std::cout << hash_test("testr") << endl;
	return 0;
}