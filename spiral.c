int a[20][20],i,j,n,m,p,q,k=0; 

 scanf("%d%d",&m,&n); 
 for(i=1;i<=m;i++) 
 
 {
  for(j=1;j<=n;j++) 
  scanf("%d",&a[i][j]); 
 }
 p=m; 
 q=n; 
 i=j=1; 


 while(k<p*q) 
 { 
   for(;j<=n&&k<p*q;j++) 
   { 
     if((i==1)&&(j==1))
     printf("%d",a[1][1]);
     else
     printf(" %d",a[i][j]); 
     k++; 
   } 
   j--; 
   i++; 
   for(;i<=m && k<p*q;i++) 
   { 
     printf(" %d",a[i][j]); 
     k++; 
   } 
   i--; 
   j--; 
   for(;j>=i-m+1 && k<p*q;j--) 
   { 
     printf(" %d",a[i][j]); 
     k++; 
   } 
   j++; 
   i--; 
   for(;i>1 && k<p*q;i--) 
   { 
     printf(" %d",a[i][j]); 
     k++; 
   } 
   if(k<p*q) 
   { 
     j++;  
     i++; 
     n--; 
     m--; 
   } 
 }  
 return 0;
}
