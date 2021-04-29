#include<stdio.h>
#include<conio.h>

int main()
{ int a[3][3];  //array of integer(3x3 matrix)
  int *ptr=a;
  int diag1=0,diag2=0;   //2 possible diagnals in 3x3 matrix
  int i,j;      
  //reading input
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
   { printf("element-[%d][%d]",i,j);
     scanf("%d",ptr);  //pointer usage
     ptr++;            //change pointer
}
   
}
//printing inputs
ptr=a; //reseting the pointer to base address
 printf("The matrix is: ");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
   { printf(" %d ",*ptr);  //a[i][j]
    
    if(i==j)      //diagonal 1 sum condition
    { diag1+=*ptr;
	}
	if((i+j)==2)   //here 2 is length of matrix(n-1) for 3x3
    { diag2+=*ptr;	} //diagonal 2 sum condition
    ptr++;
   }
  }
  printf("\n\nSum of diagnal 1 is: %d",diag1);
  printf("\n\nSum of diagnal 2 is: %d",diag2); 
  return 0;
}

