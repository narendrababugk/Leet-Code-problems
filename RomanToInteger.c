
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int romanToInt(char* s) {
   
    int map[256] = {0};
    map['M'] = 1000;
    map['D'] = 500;
    map['C'] = 100;
    map['L'] = 50;
    map['X'] = 10;
    map['V'] = 5;
    map['I'] = 1;
   int len=strlen(s);
int res=0;
    for(int i=0;i<len;i++){
        if(i+1<len && map[s[i]]< map[s[i+1]]){
            res-=map[s[i]];
        }
        else{
           res+=map[s[i]];  
        }
    }
    return res; 
}
void main(){
char s[200];
printf("Enter the Roman Number:");
scanf("%s",&s);
int result=romanToInt(s);
printf("Integer value:%d",result);
}