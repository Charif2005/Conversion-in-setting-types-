#include <stdio.h>
#include <math.h>
int main(){
	int i,octal,decimal,x;
	long binary,a,b,n;
	long int rmd,d2,d1,dn=0,m,l;
	int j,tmp,dic,oct,bin;
        char s;
	 printf("hello,this program takes a numbers in any base and convert to any base ");
  printf("\n___________________________\n");
  while(x==1){
	 printf("enter a nember\n");
  printf("this nember in: \n"
         "1..binery\n"
         "2..decimal\n"
         "3..octal\n"
         "4..hexadisimal\n");
         scanf("%d",&a);
   printf("convert to : \n"
         "1..binery\n"
         "2..decimal\n"
         "3..octal\n"
         "4..hexadisimal\n"
         "5..complimant a1 , complimant a2\n");
         scanf("%d",&b);
         
         if(a==1 && b==2){
         	int f;
         printf ("entrer la numero :\n");
scanf("%d",&bin);
f=bin;
dic=0;j=0;
while(bin!=0){
	dic=dic+(bin%10)*pow(2,j);
j++;
bin=bin/10;}
printf("conversion from binery to decimal is :(%d)2=(%d)10",f,dic);
         }else if(a==1 && b==3){
         	int f;
         	printf ("entrer la numero :\n");
scanf("%d",&bin);
f=bin;
oct=0;
dic=0;j=0;
while(bin!=0){
	dic=dic+(bin%10)*pow(2,j);
j++;
bin=bin/10;}
i=0;
while(dic!=0){
	oct=oct+(dic%8)*pow(10,i);
	i++;
	dic=dic/8;}
	printf("conversion from binery to octal is :(%d)2=(%d)8",f,oct);
         }else if(a==1 && b==4){
  int hex ,bin,j,f,dic;
	printf("enter a nember:\n");
	scanf("%d",&bin);
	f=bin;
dic=0;j=0;
while(bin!=0){
	dic=dic+(bin%10)*pow(2,j);
j++;
bin=bin/10;}
printf("on dicimal :%d",dic);
printf("conversion from binery to hexadecimal is :(%d)2=(%x)16",f,dic);
           }else if(a==1&& b==5){
         int dic,i,j,a,b,c,e,d,l,r,g,h,k;
int bin;
printf ("entrer la numero :\n");
scanf("%d",&bin);
e=r=bin;
d=0;
while(bin!=0){
		bin=bin/10;
		d=d+1;}
		g=8-d;
if (e<=1111111 && e>=-1111111){
	if(e<=0){k=0;
	h=-r;
	c=0;
		while(h!=0){
			b=h%10;
			if(b==1)
			{b=0;}
			else{b=1;}
			c=c+b*pow(10,k);
			h=h/10;
			k++;}
			for(l=(k);l<8;l++){				
			c=c+pow(10,l);}
			printf("conversion from binery to complemet a1 is :(%d)2=(%d)ca1\n",e,c);
			if(c%10==0){c=c+1;}
			else{c=c+9;};
			printf("conversion from binery to complemet a2 is :(%d)2=(%d)ca2",e,c);}
		else{
			printf("on ca1:");
			switch(g){
				case 1 : printf("0");break;	
				case 2 : printf("00");break;
				case 3 : printf("000");break;
				case 4 : printf("0000");break;
				case 5 : printf("00000");break;
				case 6 : printf("000000");break;
				case 7 : printf("0000000");break;
				case 8 : printf("00000000");break;
				default : printf("over flou");}
			printf("%d\n",e);
			printf("on ca2:");
			switch(g){
				case 1 : printf("0");break;	
				case 2 : printf("00");break;
				case 3 : printf("000");break;
				case 4 : printf("0000");break;
				case 5 : printf("00000");break;
				case 6 : printf("000000");break;
				case 7 : printf("0000000");break;
				case 8 : printf("00000000");break;
				default : printf("over flou");}
			printf("%d\n",e);}
			
}
         	}
         else if(a==2 && b==1){
         	int dic,i,oct,j,f;
long bin;
printf ("entrer la numero :\n");
scanf("%d",&dic);
f=dic;
bin=0;j=0;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,j);
j++;
dic=dic/2;}
printf("conversion from decimalto binery is :(%d)10=(%d)2",f,bin);
         }else if(a==2 && b==3){
         	int f;
         	printf ("entrer la numero on decimal\n");
scanf("%d",&dic);
f=dic;
oct=0;i=0;
while(dic!=0){
	oct=oct+(dic%8)*pow(10,i);
	i++;
	dic=dic/8;}
	printf("conversion from decimal to octal is :(%d)10=(%d)8",f,oct);
         }else if(a==2 && b==4){
         	int dic,f,i;
int exa;
printf ("entrer la numero on decimal\n");
scanf("%d",&dic);
printf("conversion from decimal to hexadecimal is :(%d)10=(%x)16",dic,dic);
         }else if(a==2 && b==5){
         	int dic,i,j,a,b,c,e,l,h,k;
long bin;
printf ("entrer lr numero in decimal :\n");
scanf("%d",&dic);
c=0;
bin=0;j=0;
a=dic;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,j);
j++;
dic=dic/2;}
printf("on binery :%d\n",bin);
e=bin;
if (a<=127 && a>=-128){
	if(a<=0){k=0;
	h=-bin;
		while(h!=0){
			b=h%10;
			if(b==1)
			{b=0;}
			else{b=1;}
			c=c+b*pow(10,k);
			h=h/10;
			k++;}
	for(l=(k);l<8;l++){
		c=c+pow(10,l);}
			printf("conversion from decimal to complemet a1 is :(%d)10=(%d)ca1\n",e,c);
			c=c+1;
			printf("conversion from decimal to complemet a2 is :(%d)10=(%d)ca2\n",e,c);}
		else{	
			printf("conversion from decimal to complemet a1 is :(%d)10=(%d)ca1\n",e,c);
			printf("conversion from decimal to complemet a2 is :(%d)10=(%d)ca2\n",e,c);}
			
}
         	}
         else if(a==3 && b==1){
printf ("entrer la numero on octal :\n");
scanf("%d",&oct);
int f;
f=oct;
dic=0;j=0;
while(oct!=0){
	dic=dic+(oct%10)*pow(8,j);
j++;
oct=oct/10;}
bin=0;i=0;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,i);
	i++;
	dic=dic/2;}
	printf("conversion from octal  to bineryis :(%d)8=(%d)2",f,bin);
         }else if(a==3 && b==2){
printf ("entrer la numero on octal :\n");
scanf("%d",&oct);
int f; 
f=oct;
dic=0;j=0;
while(oct!=0){
	dic=dic+(oct%10)*pow(8,j);
j++;
oct=oct/10;}
printf("conversion from octal to decimal is :(%d)8=(%d)10",f,dic);
         }else if(a==3 && b==4){
         	int dic,i,oct,j,exa;
printf ("entrer la numero on octal :\n");
scanf("%d",&oct);
int f;
f=oct;
dic=0;j=0;
while(oct!=0){
	dic=dic+(oct%10)*pow(8,j);
j++;
oct=oct/10;}
printf("on dicimal :%d\n",dic);
exa=dic;
printf("conversion from octal to hexa decimal is :(%d)8=(%x)16",f,exa);
         }else if(a==3 && b==5){
         	int dic,i,j,a,b,c,e,l,h,k,oct;
long bin;
printf ("entrer la numero on octal :\n");
scanf("%d",&oct);
dic=0;j=0;
while(oct!=0){
	dic=dic+(oct%10)*pow(8,j);
j++;
oct=oct/10;}
bin=0;i=0;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,i);
	i++;
	dic=dic/2;}
	printf("on binery: %d\n",bin);
c=0;
e=bin;
if (e<=1111111 && e>=-1111111){
	if(e<=0){k=0;
	h=-bin;
		while(h!=0){
			b=h%10;
			if(b==1)
			{b=0;}
			else{b=1;}
			c=c+b*pow(10,k);
			h=h/10;
			k++;}
			for(l=(k);l<8;l++){				
			c=c+pow(10,l);}
			printf("conversion from octal to complemet a1 is :(%d)8=(%d)ca1\n",e,c);
			if(c%10==0){c=c+1;}
			else{c=c+9;}
			printf("conversion from octal to complemet a2 is :(%d)8=(%d)ca2\n",e,c);}
		else{	
			printf("conversion from octal to complemet a1 is :(%d)8=(%d)ca1\n",e,e);
			printf("conversion from octal to complemet a2 is :(%d)8=(%d)ca2\n",e,e);}			
}
         	}
         else if(a==4 && b==1){
         	int hex,dic,bin,f,j;
	printf ("entere a nember hexa decimal:\n");
	scanf("%x",&hex);
	printf ("this nembr in decimal:%d\n",hex);
	dic=hex;
	bin=0;j=0;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,j);
j++;
dic=dic/2;}
printf("conversion from hexadecimal to binery is :(%x)16=(%d)2",hex,bin);
         }else if(a==4 && b==2){
         		int hex;
	printf ("entere a nember on hexa decimal\n");
	scanf("%x",&hex);
	printf("conversion from hexadecimal to decimal is :(%x)16=(%d)10",hex,hex);
         }else if(a==4 && b==3){
         	int hex,oct,i,dic;
	printf ("entere a nember on hexa decimal:\n");
	scanf("%x",&hex);
	printf ("this nembr in decimal:%d",hex);oct=0;i=0; dic=hex;
while(dic!=0){
	oct=oct+(dic%8)*pow(10,i);
	i++;
	dic=dic/8;}
	printf("conversion from hexadecimal to octal is :(%x)16=(%d)8",hex,oct);
         }else if(a==4 && b==5){
         		int hex,dic,bin,j,i,a,b,c,e,l,h,k;
	printf ("entere a nember\n");
	scanf("%x",&hex);
	printf ("this nembr in hexadecimal:%d\n",hex);
	dic=hex;
	bin=0;j=0;
while(dic!=0){
	bin=bin+(dic%2)*pow(10,j);
j++;
dic=dic/2;}
printf("on binery :%d\n",bin);
c=0;
e=bin;
if (e<=1111111 && e>=-1111111){
	if(e<=0){k=0;
	h=-bin;
		while(h!=0){
			b=h%10;
			if(b==1)
			{b=0;}
			else{b=1;}
			c=c+b*pow(10,k);
			h=h/10;
			k++;}
			for(l=(k);l<8;l++){
				
			c=c+pow(10,l);}
			printf("conversion from octal to complemet a1 is :(%d)16=(%d)ca1\n",e,c);
			c=c+1;
			printf("conversion from octal to complemet a2 is :(%d)16=(%d)ca2\n",e,c);}
		else{	
			printf("conversion from octal to complemet a1 is :(%d)16=(%d)ca1\n",e,e);
			printf("conversion from octal to complemet a1 is :(%d)16=(%d)ca2\n",e,e);}}}
printf("________________________________\n");
printf("Do you want to repeat the process? \n");
printf("Click on the number one 1:\n");
scanf("%d",&x);
         }        	
      return 0;   
}