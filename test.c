 #include <stdio.h>

int main(){
	int arr[5] = {1,5,3,9,7};
	int max, mean, i;
	max = 0;
	mean = 0;
	
	//scanf("%d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	
	mean = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
	for (i=0; i<5; i++){
		if (arr[i] > max) max =  arr[i];
	}
	
	printf("mean is %d and best is %d", mean, max );

	return 0;
}