///Se citeste un cuvant de cel mult 20 de caractere. Sa se transforme toate vocalele din
///litera mica in litera mare corespunzatoare.
#include <iostream>
#include <string.h>
using namespace std;



void cuv(char s[], int i)
{

    if(i == 0)
        cout<<"";
    else
    {
        if(strchr("aeiou", s[i]))
        {
            s[i]=toupper(s[i]);
            cuv(s, i - 1);
        }
        else cuv(s, i - 1);

    }
}



int main()
{
    char s[121];
    cout<<"Introduceti un cuvant : ";cin>>s;
    int i = strlen(s);
    cout<<"\nCuvantul modificat : ";
    cuv(s, i);
    cout<<s;




}
