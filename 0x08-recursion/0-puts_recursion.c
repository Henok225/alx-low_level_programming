#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
 */

void _puts_recursion(char *s){

	if(*s == '\0'){
		return;}
	_putchar(*s);
	_puts_recursion(s+1);
}

int main(){
	char *nlc = "\n";
	_puts_recursion("Hey bro");
	_putchar(*nlc);
	return 0;
}
