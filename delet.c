#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int display() {

  for (int i = 0; i <= top; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
int insert(int val) {
  if (top >= n - 1) {
    printf("Array is full\n");
  } else {
    top++;
    a[top] = val;
  }
}
int delete() {
  if (top < 0) {
    printf("Array is empty\n");
  } else {
    a[top];
    top--;
    
  }
}

int main() {
  insert(100);
  insert(200); 
  insert(300); 
  insert(400); 
  insert(500); 
  insert(600); 
  display();
  delete(); 
  delete();
  display();

  return 0;
}

