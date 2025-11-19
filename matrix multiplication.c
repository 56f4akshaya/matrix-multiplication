void main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,k,r1,c1,r2,c2;
	printf("\nenter number of rows and columnes in matrix A\n");
	scanf("%d%d",&r1,&c1);
	printf("\nenter number of rows and columnes in matrix b\n");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nincompatiable matrices...multiplication cannot be done\n");
		exit(0);
	}
	else
	{
		//code to read input into matrix A and B.
		printf("\nenter elementsof matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);	
		}
		printf("\nenter elementsof matrix B\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		}
	}
	//code to multiply A and B matrices
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<r2;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	//code to print product
	printf("\nproduct of two matrices is ....\n");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
			printf("%d\t",c[i][j]);
	}
	getch();
}	
