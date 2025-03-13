#include<stdio.h>
#include<conio.h>
#include<math.h>
 int max(int,int);
 void warshal(int p[10][10],int n) {
 int i,j,k;
 for (k=1;k&lt;=n;k++)
 for (i=1;i&lt;=n;i++)
 for (j=1;j&lt;=n;j++)
 p[i][j]=max(p[i][j],p[i][k]&amp;&amp;p[k][j]);
 }
 int max(int a,int b) { ;
 if(a&gt;b)
 return(a); else
 return(b);
 }
 void main() {
 int p[10][10]= {

 }
 ,n,e,u,v,i,j;
 clrscr();
 printf(&quot;\n Enter the number of vertices:&quot;);
 scanf(&quot;%d&quot;,&amp;n);
 printf(&quot;\n Enter the number of edges:&quot;);
 scanf(&quot;%d&quot;,&amp;e);
 for (i=1;i&lt;=e;i++) {
 printf(&quot;\n Enter the end vertices of edge %d:&quot;,i);
 scanf(&quot;%d%d&quot;,&amp;u,&amp;v);
 p[u][v]=1;
 }
 printf(&quot;\n Matrix of input data: \n&quot;);
 for (i=1;i&lt;=n;i++) {
 for (j=1;j&lt;=n;j++)
 printf(&quot;%d\t&quot;,p[i][j]);
 printf(&quot;\n&quot;);
 }
 warshal(p,n);
 printf(&quot;\n Transitive closure: \n&quot;);
 for (i=1;i&lt;=n;i++) {

 for (j=1;j&lt;=n;j++)
 printf(&quot;%d\t&quot;,p[i][j]);
 printf(&quot;\n&quot;);
 }
 getch();
 }