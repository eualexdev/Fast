/*
 * helloworld.fast
 * Code Generated by Fast lang
 * Version language: (0.0.1)
 * Wednesday 2021-08-18 15:45:20.106456
*/

#include <locale.h>
#include <iostream>

char ** argv;

/*
 * Write in Terminal
*/
template <class printT>
std::string print(printT values){
std::cout << values << std::endl;
return "null";
};

long helloworld(){
print(std::string("Hello World!"));
};


int main(int _argc,char * _argv[]){
setlocale(LC_ALL,"");
argv = _argv;
helloworld();
return 0;
};