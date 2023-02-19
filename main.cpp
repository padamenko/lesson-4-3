#include <stdio.h>

main()
{
	int mas[100];
	int n;
	printf("Enter the number of items: ");
	scanf("%i",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("\nEnter item number %i: ", i+1);
		scanf("%i",&mas[i]);
	}
	printf("\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%2i", mas[i]);
	}
	
	bool fl=true;
	int ch=0;
	while(fl)
	{
		fl=false;
		for(int i=0; i<n-1; i++)
		{
			if(mas[i]>mas[i+1])
			{
				int z=mas[i];
				mas[i]=mas[i+1];
				mas[i+1]=z;
				fl=true;
			}
		}
		ch++;
	}
	
	printf("\n");
	for(int i=0; i<n; i++)
	{
		printf("%2i", mas[i]);
	}
	printf("\nRepeats: %i", ch);
}
