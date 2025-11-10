#include <stdio.h>
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) { 
// Base case: If there is only one disk, move it directly.
if (n == 1) {
printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);return;}
// Step 1: Move (n-1) disks from the 'from_rod' to the 'aux_rod',
towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
// Step 2: Move the nth (largest) disk from 'from_rod' to 'to_rod'.
printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
// Step 3: Move the (n-1) disks from the 'aux_rod' to the 'to_rod',// using 'from_rod' as the auxiliary.
towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main(){
    int n;
    char from,to,aux;
    scanf("%d %c %c %c",&n,&from,&to,&aux);
    towerOfHanoi(n,from,to,aux);
}
