#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
    char* arr;
    int i=0, freq[26]={0},temp=0;
    if(argc!=2)
    {
        exit(1);
    }
    arr = argv[1];
  
    while(arr[i]!='\0')
    {
        temp = arr[i]-'a';
        freq[temp]++;
        i++;
    }
   
    for(i=0;i<26;i++){
        if(freq[i]!=0)
            printf("frequency of %c is %d \n",i+'a',freq[i]);
    }
    return 0;
}
