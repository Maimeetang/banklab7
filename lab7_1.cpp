#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string s;
    cout << "Input text: ";
    cin >> s;
    string r = func1(s);
    cout << "Reversed text: " << r << endl;
    string s2 = func2(s);
	string r2 = func2(r);
	if(s2 == r2){
		cout << "Palindrome: Yes";
	}else{
		cout << "Palindrome: No";
	}
    return 0;
}
