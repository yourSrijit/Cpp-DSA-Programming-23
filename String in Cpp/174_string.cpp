#include <iostream>
#include <cstring>
using namespace std;

void findFrequency(char str[])
{
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<"="<<count[i]<<endl;
        }

    }
}
int main()
{
    char str[20];
    cout << "Enter a string\n";
    cin >> str;
    findFrequency(str);
    return 0;
}