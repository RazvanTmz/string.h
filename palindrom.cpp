#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    char s[51];
    cout<<"Sir 1 : ";cin>>s;
    int l = strlen(s), c = 0, i;
    for(i = 0; i < l; i++)
       if(s[i] == s[l - i - 1])
        c++;


    if(c > 1)
        cout<<"sirul este palindrom!";
    else cout<<"sirul nu este palindrom!";
}
