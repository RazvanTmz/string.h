 ///Determinati modificarea unui text prin transformarea in majuscula a ultimei si primei litere a fiecarui cuvant.

 #include <iostream>
 #include <string.h>

 using namespace std;

 int main()
 {
     char s[151];
     int i, l;
     cout<<"Sir  : ";cin.get(s,150);
     l = strlen(s);
     s[0] = toupper(s[0]);
     s[l- 1]= toupper(s[l- 1]);
     for(i = 0; i < l; i++)
        if(s[i] == ' ')
         {
             s[i - 1] = toupper(s[i - 1]);
             s[i + 1] = toupper(s[i + 1]);
             while(s[i] == ' ')
                {
                    i++;
                    if(s[i - 1] == ' ' && s[i] !=' ')
                        s[i]=toupper(s[i]);
                }


         }


    cout<<s;

 }
