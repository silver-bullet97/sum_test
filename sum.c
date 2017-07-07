#include "sum.h"

int sum(int n){
	int re = 0;
	for(int i = 1; i<=n; i++){
		re = re + i;
	}
	return re;
}

