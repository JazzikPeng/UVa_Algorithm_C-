//Zhejian Peng


#include <cstdio>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main() {
    int numCase, r, median, arr[501], dis=0;
    
    scanf("%d", &numCase);
    while (numCase--) {
        scanf("%d", &r);
        
        for (int i = 0; i < r; i++) {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + r);
        median = arr[r / 2];
        
        for (int i = 0; i < r; i++) {
            dis += abs(median - arr[i]);
        }
        
        printf("%d\n", dis);
        dis = 0;
    }
    
    return 0;
}




