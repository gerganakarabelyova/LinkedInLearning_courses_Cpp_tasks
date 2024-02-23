#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h>

std::string reverse(std::string str){
    std::string strRev;
        for (int i = str.length() - 1; i >= 0; i--){
        strRev.push_back(str[i]);
        }
        return strRev;
}

int main(){
    std::string pal;
    std::cout<<"Enter word: ";
    std::getline(std::cin, pal);

    for (int i = pal.length() - 1; i >= 0; i--)
    {
        pal[i]=(char)tolower(pal[i]);
    }

    std::string rev=reverse(pal);
    if(pal==rev) std::cout<<"PALINDROME"<<std::endl;
    if(pal!=rev) std::cout<<"not a palindrome"<<std::endl;
}