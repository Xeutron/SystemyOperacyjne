#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void* wypisz(void* _arg) {
  puts("Hello thread!");
  return NULL;
  }
  
  int main() {
    pthread_t id;
    pthread_create(&id, NULL, wypisz, NULL);
    
    pthread_join(id,NULL);
    return 0;
    }
    
