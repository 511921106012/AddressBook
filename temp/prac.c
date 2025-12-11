/* gcd greatest commen divise && highest commen factor:
#include<stdio.h>
int main()
{
    int m,n,i=1,gcd;
    scanf("%d %d",&m,&n);
    while(i<=m && i<=n)
    {
        if(m%i==0 && n%i==0)
        {
            gcd=i;
        }
        i++;
    }
    printf("%d",gcd);
}/* lcd least common diviese

#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    if(m>n)
    {
        i=m;
    }
    else
    {
        i=n;
    }
    while(1)
    {
        if(i%m==0 && i%n==0)
        {
            printf("%d",i);
            break;
            
        }
        
        i++;
    }
}/* function usiing qution tha number is whether chaarchter is upper case or lower case or numaric albahabit; 
#include<stdio.h>
int john(char n)
{
    if(n>='a' && n<='z'|| n>='A'  && n<='Z'|| n>='0' && n<='9')
    {
        return 1;

    }
    else{
        return 0;
    }
    
}
int main()
{
    char n;
    printf("enter the number");
    scanf("%c",&n);
    int ret=john(n);
    if(ret==1)
    {
        printf("it is albabit numaric ");
    }
    else{
        printf("it is not albabit numaric");
    }
}

/* prime number using funcition;
#include<stdio.h>
int john(int n)
{
    int i=2;
    int flag=0;
    if(n<=1)
    {
        return 0;
    }
    
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if (flag==0)
    {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int ret=john(n);
    if(ret==1)
    {
        printf("it is prime number");
    }
    else{
        printf("it is not prime number");
    }
}
/* it prime number or nnot
#include<stdio.h>
int main()
{
    int i=2,n,falg=0;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("it is not prime number");
        return 0;
    }
    while(i<n)
    {
        if(n%i==0)
        {
            falg=1;
            break;
        }
    }
    if (falg==0)
    {
        printf("it is prime number");
        
    }
    else
    {
        printf("it isnot prime number");
    }
}
    


/* even and odd number:
#include<stdio.h>



int checkeven(int n)
{
    if(n%2==0)
{
    return 1;
}
else{
    return 0;
}
}
int main()
{
    int num;
    scanf("%d",&num);
    int ret=checkeven(num);
    if(ret==1)

     
     {  
        printf("even");

    }
    else{
        printf("odd");
    }

}

/*function;
#include<stdio.h>
int add(int x,int y)
{
    /*
    int sum=0;
    sum=x+y;
    return sum;
    */
/* return x+y;
}
int main()
{
    int a=10,b=20;
    int ret=add(a,b);
    printf("%d\n",ret);
  //  printf("%d\n",add(5,15));
}






/*
 diment
#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        if(i==1||i==n)
        {
            for(int j=1;j<=n;j++)
            {printf("* ");
            }
            
        }
        else{
        for( j=1;j<=n;j++)
        {
            if((j==1)||(i==j)||(j==n)||(i+j)==n+1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
         }
        printf("\n");
    }
}














/*
#include<stdio.h>
int main()
{
    int size,i,j;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
    if(arr[i]>size)
    {
        printf("%d",size);
    }
}
}
















/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr [32]={0};
     int  rem=0;
     int i=0;
    while (n!=0)

    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;


    }
    for(i=31;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
*/



















/*
#include<stdio.h>
int  main()
{
    int size1,size2,i,j;
   //  printf("enter the size1");
     //printf("enter the size2");
    scanf("%d %d",&size1,&size2);
    
    int arr1[size1];

    int arr2[size2];
    printf("enter the element 1: ");
    for(i=0;i<size1;i++);
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the element 2: ");
    for(j=0;j<size2;j++)
    {
        scanf("%d",&arr2[j]);
    }
for(i=0;i<size1;i++)
{
    for(j=0;j<size2;j++)
    {
    if(arr1[i]==arr2[j])
    {
        break;
    }
   
      }
       if(j==size2)
    {
      break;
    }
   
}
if(i<size1)
{
    printf("it is equal");
}
else if (i==size1)
{
    printf("it is not equal");
}
}



















/* reverse the elements in array :
#include<stdio.h>
int main()
{
    int size,i,j,temp;
    printf("enter the size");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];//5-0-1=4: 5-1-1=3: 
        arr[size-i-1]=temp;
    }
     for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    
    
}









/*
#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter the size");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr2[i]);
    }
    
}















/* array size + pannanum;
#include<stdio.h>
int main()
{
    int sum,size,j,i;
    float avg;
    printf("enter the size ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elemnts ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    avg=(float)sum/size;

       
    printf("%d\n",sum);
    printf("%.2f",avg);
}



















/* PATTAN DIMAN                                                                                                                                                                  
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if( (i+j)>=n+1 )
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        for(j=2;j<=i;j++)
        {
            
            
                 printf("*");   
             
            
        }
        printf("\n");
        
        
        
    }
      for(i=n-1;i>=1;i--)
      {
        for(j=1;j<=n;j++)
        {
            if((i+j)>=n+1)
            {
                printf("*");

            }
            else 
            {
                printf(" ");
            }
        }
        
        for(j=2;j<=i;j++)
        {
            
            
                 printf("*");   
              
            
        }
        printf("\n");
      }
}



























/* size cheking compiler:
#include<stdio.h>
int main()
{
    int x;
    short int y;
    long long int z;

    printf("%lu",sizeof( long long int));

}


























/* assing ment array:
#include<stdio.h>
int main()
{
    int size1,size2,i,j,temp;
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&size1);
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&size2);
    
    int arr1[size1];
    int arr2[size2];
    
    printf("Enter the elements one by one for Array A:");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
   
    printf("Enter the elements one by one for Array B:");
    for(j=0;j<size2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    
    for(i=0;i<size1-1;i++)
    {
        for(j=0;j<size1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<size2-1;i++)
    {
        for(j=0;j<size2-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    
    float m1,m2,median;
    
    if(size1%2==0)
        m1=(arr1[size1/2-1]+arr1[size1/2])/2.0;
    else
        m1=arr1[size1/2];
   
    if(size2%2==0)
        m2=(arr2[size2/2-1]+arr2[size2/2])/2.0;
    else
        m2=arr2[size2/2];
            
    median=(m1+m2)/2.0;
    
    printf("Median of array1 : %g\n",m1);
    printf("Median of array2 : %g\n",m2);
    printf("Median of both arrays : %g",median);
    
}















/*
#include<stdio.h>
int main()
{
    int i,j,n,size;
    scanf("%d",&size);
    int arr[size];
    for(i=1;i<size;i++)
    {
        scanf("%d",arr[i]);

    }
    for(i=0;i<n;i++)
    {
        tem=a[n-1];
        for(i=size=-1;)
    }


}











/* same number
#include<stdio.h>
int main()
{
    int size,k;
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<size;i++)
    {
        for(int j=1;j<size;j++)
        {

        
        if(arr[i]==arr[j])
        {
            break;
        }
    
        if(j<i)
        {
            continue;
        }
        }
        for( k=i+1;k<size;k++)
        {
            if(arr[i]==arr[k])
            {
                break;
            }

        }
        if (k<size)
        {
            printf("%d",arr[i]);
        }
    }
}



















/* unique value
#include<stdio.h>
int main ()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<size;i++)
    {
        int j;
        for(j=0;j<size;j++)
        {
            if(i==j){
        continue;
            }
            if(arr[i]==arr[j])
            {
                break;
            }

        }
        if (j==size)
        {
            printf("%d",arr[i]);
        }
    }
    
}

















/*
#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr2[i]);
    }


}
















/*
#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=1;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }



}








/*
#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5,};
    int arr2[5];
    for(int i=1;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=1;i<5;i++)
    {
        printf("%d",arr2[i]);
    }
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(arr2[i]!=arr1[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("")
    }
}




















/*
#include<stdio.h>
int main()
{
    int size,i,sum=0;
    printf("enter the number");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for( i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}


























/*
#include<stdio.h>
int main()
{
    int size;
    printf("enter the numbeer");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("%d",large);
}



























/*
#include<stdio.h>
int main()
{
    int i,size;
    printf("enter the size");
    scanf("%d",&size)
    int arr(size);
    for(i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=size;i++)
    {
        printf("%d",arr[i]);
    }
}













/*
#include<stdio.h>
int main()
{
    int a,b,result=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        result+=a;
    }
    printf("%d",result);

}























/* ithu pattan using $$****$$
#include<stdio.h>
int main()
{
    int n,m,x;
    
    scanf("%d %d",&n,&m);
    x=(n-m)/2;
    
    
        for(int j=1;j<=x;j++)
        {
            printf("$");
        }
        for(int j=1;j<=m;j++)
        {
            printf("*");
        }
        for(int j=1;j<=x;j++)
        {
            printf("$");
        }
    
}


















/*
#include<stdio.h>
int main()
{
    int arr[3];
    scanf("%d",&arr[0]);
    printf("%d",arr[0]);

}







/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=2;i=i-2)
    {
        for(j=n;j>=2;j=j-2)
        {
            if(j<=i)
            {
                 if (j%2==0)
                {
                    printf("%d ",j);

                }
                
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}



















/*#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=2;i--)
    {
        for(j=n;j>=2;j--)
        {
            if(j<=i)
            {
                 if (j%2==0)
                {
                    printf("%d",j);

                }
                else{
                    printf(" ");
                }
            
                
                
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}






/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}











/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                 if (j%2==0)
                {
                    printf("0");

                }
                else{
                    printf("1");
                }
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}


























/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}



























/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            if( (j<=i))
            {
                printf("%d ",j);
            }
            else{
             printf("  ");
            
            }
                                                                        
        }
        printf("\n");
    }
}




















/*
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for( j=1;j<=n;j++)
        {
            if((i+j)>=n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        if(i!=1)
            {
                for(j=1;j<=i-1;j++)
                {
                    printf("*");
                }
                
            }
        printf("\n");
    }
}




















/* pattan opppsite cross;
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
























/* oppsite cross:
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n+1)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}




















/* cross patan 1
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


















/* //revrse pramid

#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    //int k=n ;

    for(int i=1;i<=n;i++)
     
    {
        int k=n ;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k--;
            
            
            
            
        }
         
        printf("\n");
    }
}





















/*small letter anfd captial letters using

#include<stdio.h>
int main()
{
    int n;
    char k='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%2==0)
            {
                printf("%c ",k);
            }
            else{
                printf("%c ",k+32);
            }
        
        
            k++;
        }
        printf("\n");
    }
}







/* //revrse pramid

#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    

    for(int i=1;i<=4;i++)
     
    {
        int k=n ;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k--;
            
            
            
            
        }
         
        printf("\n");
    }
}














 //small letter anfd captial letters using

#include<stdio.h>
int main()
{
    int n;
    char k='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%2==0)
            {
                printf("%c ",k);
            }
            else{
                printf("%c ",k+32);
            }
        
        
            k++;
        }
        printf("\n");
    }
}








/* numbers afn letters;
#include<stdio.h>
int main()
{
    char k='A';
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c ",k);
            k++;


        }
        printf("\n");
    }
}










/* patan 010101
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%2==0)
            {
                printf("1");

            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    
}














//reverse numer 54321:




/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)

    {
        for(int j=5;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}







/* star pattan
#include<stdio.h>
int main()
{
    char n,a,i,j;
    scanf("%c",&n);
    
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        printf("*");
    }
    printf("\n");


}
}











/* star patan:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++){
        printf("*");
        }
         printf("\n");

    }
    
}












/*#include<stdio.h>
int main()
{
    char n,a,i,j;
    scanf("%c",&n);
    
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("")
    }


}
    
}












/* patan numbers
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /* patton
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}










/* pattan;
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


/*ap serous upto n:
#include<stdio.h>
int main()
{
    int a,d,n;
    scanf("%d %d %d",&a,&d,&n);
    while(a<=n)
    {
        a=a*d;
        
         printf("%d ",a);
        
    }
    

}




















/* the print the LCM = large common multipleh 
#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int large,small;
    if(num1>num2)
    {
        large=num1;
        small=num2;

    }else{
        large=num2;
        small=num1;
    }
    int i=1;
    while(1)

    
    {
        if((large*i)%small==0)
        break;
       i++;

    }
     
    printf("the lcm is %d",large*i);

}






















/*



#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int large,small;
    if(num1>num2)
    {
        large=num1;
        small=num2;

    }else{
        large=num2;
        small=num1;
    }
    int i=1;
    while(1)

    
    {
        if((large*i)%small==0)
        break;
       i++;

    }
     
    printf("the lcm is %d",large*i);

}








/* break using methed: 
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }if(i*i<=num)
    {
        printf("%d it is  not prime number");                                                     

    }
    else{
        printf("it si prime number");
    }
}










/* positve number
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    int co=1;



    while(co<=n)
    {
        printf("%d ",a);
        a=a*2;
        co++;
      

    }
    
}





/* convert the all zero in 2s in  loop
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem ;
    int place=1;
    int result=0;
    while(n!=0)
    {
        rem=n%10;
        if(rem==0)
        rem=2;
        result=rem*place+result;
        place=place*10;
        n=n/10;
    }
    printf("%d",result);

}







  count the zero ;
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem;

    while(n>0)
    {
        rem=n%10;
        if(rem==0)
        {
            printf("2");
        }
        else{
            printf("%d",rem);}
          n=n/10;
        
         

    }
    
        
     
    
}

    















sum of digit 
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=0;
    int sum=0;

    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        n=n/10;

        
    }
    printf("%d",sum);
    
}








palintrom;
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem=0;
    int rev=0;
    int x;
    x=n;


   while(n!=0)
   {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;


   } 
   if(x==rev)
   printf("palantrom");
   else 
   {
    printf("not palantrom");
   }

}












#include<stdio.h>
int main()
{
    int a, d, n;
    scanf("%d %d %d",&a,&d,&n);
    while(a<=n)
    {
        a=a+d;
        printf("%d ",a);
    }
}



















#include<stdio.h>
int main()
{
    int a,d,n;
    scanf("%d %d %d",&a,&d,&n);
    while(a<=n)
    {
         
        a=a+d;
        printf("%d ",a);

    
        
    }
}






#include<stdio.h>
int main()
{
    int a,d,n;
    scanf("%d %d %d",&a,&d,&n);
     int count=1;
    while(count!=n)
    {
         

        a=a+d;
        count++;

    }
    printf("%d ",a);
       
} */