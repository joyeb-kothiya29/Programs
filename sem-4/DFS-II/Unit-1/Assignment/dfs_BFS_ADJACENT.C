#include<stdio.h>
#include<stdlib.h>

int nv=0; // used to add the number of vertex
int rv; // used to remove the vertex
int e1,e2; // used for edges
int k; // used for switch case
int i,j,a[100][100]; // used in for loops
char ch; // used to continue to add edges condtion
int visited[100]; // used for the  BFS and DFS Function
int queue[100]; // used for the BFS Function 
int start,front=0,rear=0,v; // used for the BFS Function 
	
void ADD_VERTEX();
void DISPLAY();
void ADD_EDGE();
void REMOVE_VERTEX();
void REMOVE_EDGE();
void BFS_INPUT();
void BFS_DISPLAY();
void exit();

int main()
{
	while(1)
	{
		printf("\n1. ADD VERTEX");
		printf("\n2. DISPLAY GRAPH");
		printf("\n3. EXIT");
		printf("\n4. ADD EDGE");
		printf("\n5. REMOVE VERTEX");
		printf("\n6. REMOVE EDGE ");
		printf("\n7. BFS Traversal \n");
		printf("\n   Enter Condition: ");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				ADD_VERTEX();
				break;
			
			case 2:
				DISPLAY();
				break;
				
			case 3:
				exit(0);
			
			case 4:
				ADD_EDGE();
				break;
				
				
			case 5:
				REMOVE_VERTEX();
				break;				
			
			case 6:
				REMOVE_EDGE();
				break;
				
			case 7:
				printf("\n 1.BFS INPUT");
				printf("\n 2.BFS DISPLAY");
				printf("\n Choose the Condtion: ");
				scanf("%d",&k);
				
				if(k==1)
				{
					BFS_INPUT();
				}
				else if(k==2)
				{
					BFS_DISPLAY();
				}
				else
				{
					printf("\n Invalid Choice \n");
				}
				break;
				
			default:
				printf("\n INvalid Condtion\n");
				break;
		}
	}
	return 0;
}

void ADD_VERTEX()
{
	printf("Enter Vertex To ADD: ");
	scanf("%d",&nv);
	
	for(i=0;i<nv;i++)
	{
		for(j=0;j<nv;j++)
		{
			a[i][j]=0;
		}
	}
	printf("\nAll Vertex Added SuccessFully\n");
}

void DISPLAY()
{
	if(nv==NULL)
	{
		printf("\nGraph is Empty\n");
	}
		
	else
	{
		for(i=0;i<nv;i++)
		{
			for(j=0;j<nv;j++)
			{
				printf("%d",a[i][j]);
			}
			printf("\n");
		}	
	}		
}

void ADD_EDGE()
{
	if(nv==NULL)
	{
		printf("\n Graph is Empty \n");
	}	
	else
	{
		do
		{
			printf("\nEnter Edge 1: ");
			scanf("%d",&e1);
			printf("Enter Edge 2: ");
			scanf("%d",&e2);
			
			if(e1>=nv || e1<0 || e2>=nv || e2<0)
			{
				printf("\n Invalid EDGE Enter Valid Edge\n");
				ADD_EDGE();
			}
			else
			{
				a[e1][e2]=1;
				a[e2][e1]=1;
			}
			
			printf("\nDo You want to contine (y/n): ");
			scanf("%s",&ch);
		}while(ch=='y' || ch=='Y');
		
		printf("\n Edges ADDED SucessFully \n");
	}		
}

void REMOVE_VERTEX()
{
	if(nv==NULL)
	{
		printf("\n Graph is Empty");	
	}	
	else
	{
		printf("Enter The Vertex Want to Delete: ");
		scanf("%d",&rv);
		
		if(rv<0 || rv>=nv)
		{
			printf("\n Invalid Vertex Enter The Valid Vertex \n");
			REMOVE_VERTEX();
		}
		else
		{
			if(rv==nv-1)
			{
				nv--;
				printf("\n The %dth Vertex Is Deleted \n",rv);
			}
			else
			{
				// shifting rows Upward
				for(i=rv;i<nv-1;i++)
				{
					for(j=rv;j<nv-1;j++)
					{
						a[i][j]=a[i+1][j];
					}
				}
				
				// shifting colmns left
				for(i=rv;i<nv-1;i++)
				{
					for(j=rv;j<nv-1;j++)
					{
						a[i][j]=a[i][j+1];
					}
				}
				
				nv--;
				printf("\n The %dth Vertex Deleted SucessFully \n",rv);
			}
		}
	}
}

void REMOVE_EDGE()
{
	do
	{
		printf("Remove Edge 1: ");
		scanf("%d",&e1);
		printf("Remove Edge 2: ");
		scanf("%d",&e2);
		
		if(e1>=nv || e1<0 || e2>=nv || e2<0)
		{
			printf("\n Invalid EDGE Enter Valid Edge\n");
			REMOVE_EDGE();
		}
		else
		{
			a[e1][e2]=0;
			a[e2][e1]=0;
		}
		
		printf("Do You want to contine (y/n): ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	
	printf("\n Edge Removed SucessFully \n");
}

void BFS_INPUT()
{
	if(nv==NULL)
	{
		printf("\n Graph is Empty");
	}
	else
	{
		for(i=0;i<nv;i++)
		{
			visited[i]=0;
		}
		front=0;
		rear=0;
		
		printf("\nEnter Starting Vertex For BFS: ");
		scanf("%d",&start);
		
		if(start<0 || start>=nv)
		{
			printf("\n Invalid Start Vertex\n");
		}
		else
		{
			queue[rear++]=start;
			visited[start]=1;
		}
		printf("\n BFS Vertex Stored SuccessFully\n");
		
		printf("Want to Display The Output Of BFS Travelling(y/n): ");
		scanf("%s",&ch);
		
		if(ch=='y' || ch=='Y')
		{
			BFS_DISPLAY();
		}
	}
}

void BFS_DISPLAY()
{
	if(nv==NULL)
	{
		printf("\n Graph is Empty");	
	}	
	else
	{
		printf("\n BFS Travelling \n ");
		
		while(front<rear)
		{
			v=queue[front++];
			printf("%d",v);
			
			for(i=0;i<nv;i++)
			{
				if(a[v][i]==1 && visited[i]==0)
				{
					queue[rear++]=i;
					visited[i]=1;	
				}	
			}	
		}
		printf("\n");
	}
}
