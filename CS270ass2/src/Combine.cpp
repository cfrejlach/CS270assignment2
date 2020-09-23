#include "Combine.h"

#include <iostream>

using namespace std;

Combine::Combine()
{
    //ctor
}

Combine::~Combine()
{
    //dtor
}

deleteElement(char *arr2[], char letter)
{
   // Search x in array
   cout << "q in deleteElement() beginning: "<< letter << ".  "<< endl;
   int i;
   int t;
   for (i=0; i < sizeof(arr2); i++)
   {
       cout << "arr2 at " << i <<"  "<< arr2[i]<<endl;
        if (arr2[i] == letter)
        {
            t = i;
            while(t <= sizeof(arr2))
            {
                arr2[t]= arr2[t+1];
                t++;
            }
        }
   }
}

int main()
{
    char arr1 [] = {"abcde"};
    char arr2 [] = {"efghi"};
    int n = sizeof(arr1);
    int m = sizeof(arr2);
    char bigArr[n][m];
    int i = 0;
    int j = 0;
    char letter;
    int q = 0;

    for(int z = 0; z < n; z++)
    {

        for(int y = 0; y< n; y++)
        {
            if(arr1[y] == '\0')
            {
                break;
            }
            if(bigArr[z][y] == '\0')
            {
                break;
            }else
            {
                bigArr[z][y] = arr1[y];
            }
        }

        for(int y = 0; y< m; y++)
        {
           if(arr2[y]=='\0')
           {
               break;
           }
           if(bigArr[z][y] == '\0')
            {
                break;
            }else
            {
                bigArr[z][y] = arr2[y];
            }
        }

    }

     while(i <= sizeof(arr1))
    {
        if(arr1[i] == arr2[j])
        {
         letter = arr2[j];
         arr2.deleteElement(arr2, letter));
         cout << "q var first compare: " << q<< "  ____ ";
        }
        if(arr1[i]== arr2[j++])
        {
         letter = arr2[j++];
         arr2.remove(letter);
         cout << "q var second compare: " << q<< "  ____ ";
        }
        if(arr1[i]== arr2[j+2])
        {
          letter = arr2[j+2];
          arr2.remove(letter);
          cout << "q var third compare: " << q<< "  ____ ";
        }
        if(arr1[i]== arr2[j+3])
        {
           letter = arr2[j+3];
           arr2.remove(letter);
           cout << "q var fourth compare: " << q<< "  ____ ";
        }
        if(arr1[i]== arr2[j+4])
        {
           letter = arr2[j+4];
           arr2.remove(letter);
           cout << "q var fifth compare: " << q<< "  ____ ";
        }
        i++;

        cout << "size of arr2: " << sizeof(arr2);


    }

    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < m; c++)
        {
            if(bigArr[r][c]== '\0')
            {
                break;
            }else
            cout  << bigArr[r][c] <<"   "<< endl;
        }
    }
    return 0;
}
