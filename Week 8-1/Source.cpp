#include<stdio.h>
int main()
{
	char str[80];
	int i = 0;
	printf("Enter number : ");
	gets_s(str);
	printf("\n");
	printf("Text : ");
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			switch	(str[i])
			{
			case '0': printf("zero ");break;
			case '1': printf("one ");break;
			case '2': printf("two ");break;
			case '3': printf("three ");break;
			case '4': printf("four ");break;
			case '5': printf("five ");break;
			case '6': printf("six ");break;
			case '7': printf("seven ");break;
			case '8': printf("eight ");break;
			case '9': printf("nine ");break;
			}
		}
		i++;
	}
	printf("\n");
	return 0;
}