#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "head.h"

int main()
{
	welcome();

	while (1)
	{
		switch(menu())
		{
			case '1':
				display(); break;
			case '2':
				search();break;
			case '3':
				append();break;
			case '4':
				modify();break;
			case '5':
				dele(); break;
			case '6':
				score();break;
			case '0' :
				printf("欢迎下次使用\n");
				exit(0);
		}
	}

	return 0;
}
