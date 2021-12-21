#include <iostream>
#include <vector>
using namespace std;
string a = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string encrypt(string str, int key) {
	srand(key);
	for (int i = 0; i < 256; i++)str += a[rand() % a.size()];
	string enc = "";
	for (int i = 0; i < str.size(); i++)enc += a[(str[i] + rand() % 20) % a.size()];
	return enc;
}
int main(void) {	
	string s;
	int key;
	cout << "Unesi rijec >> ";
	cin >> s;
	cout << "Unesi kljuc za sifriranje >> ";
	cin >> key;
	cout << encrypt(s, key);
}
