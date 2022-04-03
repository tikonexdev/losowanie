#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;
int liczba;
int strzal;
int proby;
int main()
{
cout <<"witaj zgadnij liczbe w zakresie od 1 do 100" << endl;
srand(time(NULL));
int liczba = rand
()%101;
cout << liczba;
while(strzal != liczba){
    cout<< "proba numer " << proby <<endl <<"zgadnij jaka liczba:" ;
    cin >> strzal;
if (liczba == strzal){
    cout << "wygrales w: " << proby << " probie"<<  endl;



}
else if (liczba > strzal){
    cout<<"to za malo"<< endl;
    proby++;
}
if (liczba < strzal){
    cout<<"to za duzo"<<endl;
    proby++;
}
}
getchar();

           }

