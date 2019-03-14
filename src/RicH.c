#include <stdio.h>

int FarToCel (int far);



int main(){
	int i;
	for(i  = 0; i < 300; i += 20)
		FarToCel(i);
}



int FarToCel(int far){
		printf("%3d %6.1f\n",far, (5.0/9.0)*(far - 32));

}
