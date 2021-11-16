#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
 
char* CaesarEncrypt(char* plaintext);
char* CaesarDecrypt(char* ciphertext);
char cc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char jj[26]={'I','L','O','V','E','M','Y','C','U','N','T','R','A','B','D','F','G','H','J','K','P','Q','S','W','X','Z'};
 
 
int main()
{
	char plaintext[105];
	printf("please input a string:\n");
	gets(plaintext);
	char *ciphertext1=CaesarEncrypt(plaintext);
	CaesarDecrypt(ciphertext1);
	getchar();
	getchar();
	return 0;
}
 
 
char* CaesarEncrypt(char plaintext[]){
	char ciphertext[105];
	int i=0;
 
	int sizeofplaintext=strlen(plaintext);
	for(i=0;i<sizeofplaintext;i++){
		int flag=0;
		for(int j=0;j<26;j++){
			if(plaintext[i]==cc[j]){
				ciphertext[i]=jj[j];
				flag=1;
			}
		}
		if(flag!=1){
			ciphertext[i]=' ';
		}
	}
	ciphertext[i]='\0';
	printf("the ciphertext is:" );
	printf("%s",ciphertext);
	char *str = new char[strlen(ciphertext) + 1];		 //分配存储空间  
	strcpy_s(str, strlen(ciphertext) + 1,ciphertext);	 //将s中字符串复制到str，最后一个空间为'\0'结束符  
	return str;
}
 
char* CaesarDecrypt(char* ciphertext){
	int sizeofciphertext=strlen(ciphertext);
	int i;
	char plaintext[105];
	for(i=0;i<sizeofciphertext;i++){
		int flag=0;
		for(int j=0;j<26;j++){
			if(ciphertext[i]==jj[j]){
				plaintext[i]=cc[j];
				flag=1;
			}
		}
		if(flag!=1){
			plaintext[i]=' ';
		}
	}
	plaintext[i]='\0';
	cout<<"\nthe plaintext is:"<<plaintext<<endl;
	return plaintext;
}
