///Scrieti un program care citeste de la tastatura doua siruri de caractere si afiseaza cel mai
///lung sufix comun al celor doua siruri. De exemplu, daca a : marina si b: elena, se va afisa 'na'

#include <iostream>
#include <string.h>

using namespace std;






int main()
{
    char s1[51], s2[51], s3[21];
    cout<<"Sirul 1 : ";cin>>s1;
    cout<<"sirul 2 : ";cin>>s2;
    int l, i, k = 0;
    l= strlen(s1);
    for(i = strlen(s1); i>= 0; i--)
          {
              if(strstr(s2, s1 + i))
                {
                    strcpy(s3, s1 + i);
                    k++;


                }



          }


    if(k > 2) cout<<"Sufixul comun : "<<s3;
    else cout<<"Nu exista sufixe comune!";
}
