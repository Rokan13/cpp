#include<iostream>
using namespace std;

int main()
{
    string sentence;
    int count=0;

    cout<<"enter a sentence= ";
    getline(cin,sentence);

    bool inword=false;

    for(int i=0; i<sentence.length(); i++)

    {
        if(sentence[i]!=' ' && !inword)
        {
            inword=true;
            count++;
        }
        else if(sentence[i]==' ')
                {
                    inword=false;
                }
    }

cout<<"total count= "<<count<<endl;
}




/*another way to count
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string sen,words;
    cout<<"enter a sentence= ";
    getline(cin,sen);
    int count=0;

    stringstream ss(sen);
    while(ss >> words){
        count++;
    }

    cout<<"total word= "<<count<<endl;
}
*/

