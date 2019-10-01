#include<stdio.h>
void Input(int (*a)[30],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void Display(int (*a)[30],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");	
	}
}
void Rotation(int(*a)[30],int n,int choice)
{
	int i,j,t=0,k;
	for(k=0;k<choice;k++)
	{
	for(i=0;i<n/2;i++)
	{
		for(j=i;j<n-1-i;j++)
		{
			t=a[i][j];
			a[i][j]=a[n-1-j][i];
			a[n-1-j][i]=a[n-1-i][n-1-j];
			a[n-1-i][n-1-j]=a[j][n-1-i];
			a[j][n-1-i]=t;
		}
	}
	}
}
int main()
{
	int n,a[30][30],choice;
	printf("Enter No of Rows AND Column:\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix:\n");
	Input(a,n);
	printf("Your Entered MAtrix is:\n");
	Display(a,n);
	printf("1.90 clock\n2. 180 clock\n");
	printf("Enter Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Rotation(a,n,1);
			break;
		case 2:
			Rotation(a,n,2);
			break;
	}
	printf("Rotated Matrix is:\n");
	Display(a,n);
}
