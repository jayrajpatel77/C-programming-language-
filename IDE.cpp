#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int isKeyword(char buffer[]) {
	char keywords[32][10] = { "auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while" };
	int i, flag = 0;
	for (i = 0; i < 32; ++i) {
		if (strcmp(keywords[i], buffer) == 0) {
			flag = 1;
			break;
		}
	}
	return flag;

}
int main() {
	
	char ch,buffer[20];
	char buffer[20];
	ifstream fin("code.txt");
	int i = 0;
	int j = 0;
	if (fin.is_open()) {
		for (i; i < 10; i++) {
			if (ch =! ";") {
				cout << ch << "Semicolon is missing\n";
			}
			if (isKeyword(buffer) = !0) {
				cout << buffer << "Keyword is missing";

			}
		}
		fin.close();
		return 0;
	}
	else if(!fin.is_open() {
		cout<<"error while opening the code.";

	}


	
}