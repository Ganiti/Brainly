cout<<"\n\n\n\n\t\t\t2048 GAME\n\n\n\t\tPress any key to continue";
	getch();
	system("cls");
	int i1,i2,i3,i4,i,j;
	int a[4][4]={0},tmp[4][4]={0};
	srand(time(0));
	i1=rand()%4;
	i2=rand()%4;
	while(1)
	{
		i3=rand()%4;
		i4=rand()%4;
		if(i3!=i1 && i4!=i2) break;
	}
	a[i1][i2]=2;
	a[i3][i4]=4;
	disp(a);
	
	int ch;
	while (1)
    {
    	for(i=0;i<4;i++)
    		for(j=0;j<4;j++)
    			tmp[i][j]=a[i][j];
    	ch=getch();
    	system("cls");
    	if(ch==72) upmove(a);
    	if(ch==80) downmove(a);
    	if(ch==75) leftmove(a);
    	if(ch==77) rightmove(a);
		if(ch==27) break;
		
		if(!check(tmp,a))
			addblock(a);
		disp(a);
			
		if(!checkover(a))
		{
			cout<<"\n\n\t\t\tGAME OVER!!\n\n\n";
			getch();
			break;
		}	
	}
	return 0;