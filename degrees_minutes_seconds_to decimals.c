#include<stdio.h>
#include<Windows.h>

int main(void)
{
	int again = 1;
	for (again; again ==1; again * 1)
	{
		int ture_longitude = 0;
		float degree_longitude, minute_longitude, second_longitude, longitude;
		degree_longitude = 0; minute_longitude = 0; second_longitude = 0; longitude = 0;

		for (ture_longitude; ture_longitude < 1; ture_longitude * 1)
		{
			printf("请依次输入所求地点的经度的度、分、秒，并用回车隔开（东经为正，西经为负）:\n");

			//输入数据
			scanf_s("%f", &degree_longitude);

			scanf_s("%f", &minute_longitude);
			float minute_results_longitude = minute_longitude / 60;

			scanf_s("%f", &second_longitude);
			float second_results_longitude = second_longitude / 3600;

			//计算
			longitude = degree_longitude + minute_results_longitude + second_results_longitude + 1 / 1000000;

			//判断合法性
			if (longitude > -180 && longitude < 180) {
				ture_longitude = ture_longitude + 2;
			}
			else {
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
			printf("请依次输入所求地点的纬度的度、分、秒，并用回车隔开（北纬为正，南纬为负）:\n");

			scanf_s("%f", &degree_latitude);

			scanf_s("%f", &minute_latitude);
			float minute_results_latitude = minute_latitude / 60;

			scanf_s("%f", &second_latitude);
			float second_results__latitude = second_latitude / 3600;

			latitude = degree_latitude + minute_results_latitude + second_results__latitude + 1 / 1000000;

			if (latitude > -90 && latitude < 90) {
				ture_latitude = ture_latitude + 2;
			}
			else {
				system("cls");
				printf("请依次输入所求地点的经度的度、分、秒，并用回车隔开（东经为正，西经为负）:\n%f\n%f\n%f\n经度=%f\n", degree_longitude, minute_longitude, second_longitude, longitude);
				printf("错了，重来！\n");
			}
		}
		printf("纬度=%f\n\n", latitude);
		printf("是否退出（退出输入0，继续输入1）\n");
		scanf_s("%d", &again);
	}
	system("pause");
	return 0;
}