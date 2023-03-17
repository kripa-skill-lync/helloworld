/*
 * 2 program.c
 *
 *  Created on: 22-Aug-2022
 *      Author: Skill-Lync
 */
#include<stdio.h>
int a=10;
int submain();
int main()
{
	char x='H';
	printf("the value of global variable a is %d\n",a);
	printf("the value of local variable x is %c\n",x);
	submain();
 return 0;
}
int submain()
{
	printf("printing the value from the submain function a:%d",a);
	return 0;
}
