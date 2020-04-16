#include <stdio.h>
#include <stdlib.h>
void anotherFunChallenge(input);
int funChallenge(input);
void compressBoxesTwice(boxes);
void compressBoxesTwice2(boxes);
void logAllPairsOfArray();
void printAllNumberThenAllPairsSum();
int main()
{
    printAllNumberThenAllPairsSum();
    return 0;
}
//BIG(0)
void anotherFunChallenge(input)// o(4+5n)----->o(n)
{

    int a =5;
    int b =10;
    int c =50;
    for(int i=0;i<input;i++)
    {
        int x = i + 1;
        int y = i + 2;
        int z = i + 3;
    }
    for (int j = 0; j < input; j++)
    {
        int p = j * 2;
        int q = j * 2;
    }
  printf("I don't know") ;
}


int funChallenge(input) //o(3+3n)--->o(n)
{

    int a = 10;
    a = 50 + 3;

  for (int i = 0; i < 500/*input length*/; i++)
    {
       // anotherFunction();
        int stranger = 1;
        a++;
    }
  return a;
}

void compressBoxesTwice(boxes) // o(2n)--->o(n)
{
//    for(int i=0;i<len(boxes);i++)
    {
        printf("crushed");
    }
//    for(int i=0;i<len(boxes);i++)
    {
        printf("crushed");
    }
}

void compressBoxesTwice2(boxes,boxes2) // o(n+m)
{
//    for(int i=0;i<len(boxes);i++)
    {
        printf("crushed");
    }
   // for(int i=0;i<len(boxes2);i++)
    {
        printf("crushed");
    }
}

//log all pairs of array
void logAllPairsOfArray()   //o(n^2) //we use multipication in
{
    int i,j;
    int box[]={1,2,3,4,5};
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d%d\n",i,j);
        }
    }
}

void printAllNumberThenAllPairsSum()    // o(n^2+n)---->o(n^2)
{
    int box[]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        printf("%d",box[i]);
    }
    printf("and sum of each element is");
    for (int i=0;i<5;i++)
    {
        int j=i+1;
     for (int j=0;j<5;j++)
        {
        printf("%d\n",box[i]+box[j]);
        }
    }
}

