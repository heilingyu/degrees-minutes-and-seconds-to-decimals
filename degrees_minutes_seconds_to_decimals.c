#include<stdio.h>
#include<Windows.h>

int main(void)
{
	int ture_longitude = 0;
	float degree_longitude, minute_longitude, second_longitude, longitude;
	degree_longitude = 0; minute_longitude = 0; second_longitude = 0; longitude = 0;
	
	for (ture_longitude; ture_longitude < 1; ture_longitude * 1)
	{
		printf("请依次输入所求地点的经度的度、分、秒，并用回车隔开:\n");

		scanf_s("%f", &degree_longitude);
		//printf("%f\n", degree);

		scanf_s("%f", &minute_longitude);
		//printf("%f\n", minute);
		float minute_results_longitude = minute_longitude / 60;

		scanf_s("%f", &second_longitude);
		//printf("%f\n", second);
		float second_results_longitude = second_longitude / 3600;

		longitude = degree_longitude + minute_results_longitude + second_results_longitude + 1 / 1000000;
		
		if (longitude > -180 && longitude < 180) {
			ture_longitude = ture_longitude + 2;
		}
		else{
			system("cls");
			printf("错了，重来！\n");
		}
	}
	printf("经度=%f\n", longitude);

	int ture_latitude = 0;
	float degree_latitude, minute_latitude, second_latitude, latitude;
	degree_latitude = 0; minute_latitude = 0; second_latitude = 0; latitude = 0;
	for (ture_latitude; ture_latitude < 1; ture_latitude * 1)
	{
		printf("请依次输入所求地点的纬度的度、分、秒，并用回车隔开:\n");

		scanf_s("%f", &degree_latitude);
		//printf("%f\n", degree);

		scanf_s("%f", &minute_latitude);
		//printf("%f\n", minute);
		float minute_results_longitude = minute_latitude / 60;

		scanf_s("%f", &second_latitude);
		//printf("%f\n", second);
		float second_results__latitude = second_latitude / 3600;

		latitude = degree_latitude + minute_results_longitude + second_results__latitude + 1 / 1000000;

		if (longitude > -90 && longitude < 90) {
			ture_latitude = ture_latitude + 2;
		}
		else {
			system("cls");
			printf("错了，重来！\n");
		}
	}
	printf("纬度=%f\n\n", latitude);
	
	system("pause");
	return 0;
}