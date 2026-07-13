// to check whether the given character is constant or vowel
#include<stdio.h>
void main(){
    char ch;
    printf("Enter the character of your choice:");
    scanf("%c",&ch);
    //A= 65, E=69, I=73, O=79,U=85 and a=97,e=101,i=105,o= 111,u= 117
    if (ch==65 || ch==97){
        printf("Given character is vowel.");
    }else if(ch==69 || ch== 101){
        printf("Given character is vowel");
    }else if(ch==73 || ch==105){
        printf("Given character is vowel.");
    }else if(ch==79 || ch==111){
        printf("Given character is vowel.");
    }else if(ch==85 || ch==117){
        printf("Given character is vowel.");
    }else {
        printf("Given character is consonant");
    }
}