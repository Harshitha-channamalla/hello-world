#include <stdio.h>
int main() 
{   
int n, i;   
float m, v, c;
printf("Enter number of samples: ");
  scanf("%d", &n);
  for(i = 1; i <= n; i++) 
  { 
    printf("\nSample %d:\n", i);
    printf("Enter mass (m): ");
    scanf("%f", &m);
    printf("Enter volume (v): ");
    scanf("%f", &v);    
    if(v != 0)
    {
      c = m / v;  
      printf("Concentration (c) = %.2f\n", c);
    }
    else
    {         
      printf("Volume cannot be zero!\n"); 
    } 
  }   
  return 0;
}
out put 
Enter number of samples: 3

Sample 1:
Enter mass (m): 9
Enter volume (v): 55
Concentration (c) = 0.16

Sample 2:
Enter mass (m): 60
Enter volume (v): 33
Concentration (c) = 1.82

Sample 3:
Enter mass (m): 0
Enter volume (v): 23
Concentration (c) = 0.00


