#include<stdio.h>
#include<string.h>

void main(){

char firstName[20],lastName[20];
printf("Enter the first name :");
scanf("%s",firstName);

printf("Enter the last name :");
scanf("%s",lastName);

//--Finding the length of each string
int l1 = strlen(firstName);
printf("%d",l1);
int l2 = strlen(lastName);
printf("%d",l2);


//--Concatenating the string
printf(strcat(firstName,lastName));


//--copy the 1st string into 2nd string variable
char currentAddress[50] = "B-17, renuka niwas, jule solapur,solapur";
char parmanentAddress[50] = "";

strcpy(parmanentAddress,currentAddress);
printf("%s\n",parmanentAddress);


//--String comparison in c
//i) 0 is returned when two strings are the same
//ii) If str1<str2 (check the length) then a negative value is returned
//iii) If str1>str2 (check the length) then a positive value is returned

printf("%d",strcmp(parmanentAddress,currentAddress));


//--conversting string to lower and upper case
char string1[] = "THERe was RaIn Storm IS coMINg";

printf(strlwr(string1));
printf(strupr(string1));


//--Reversing the string
char string3[] = "evil";
printf(strrev(string3));


//--setting the string specific character
printf(strset(string3,'s'));


//finding the first occurance of that character
printf(strchr(string3,'i'));

}
