// see => https://monozukuri-c.com/langc-pointer-struct/
#include <stdio.h>

typedef struct
{
	double	latitude;
	double	longitude;
} S_Coordinate;


int	getTokyoTowerPosition(S_Coordinate *pPos)
{
	if (pPos == NULL)
		return -1;
	pPos->latitude = 35.658581;
	pPos->longitude = 139.745433;
	return 0;
}

int main(void)
{
	int				res;
	double			latitude, longitude;
	S_Coordinate	pos = {0};

	printf((res = getTokyoTowerPosition(&pos)) ? "ERROR" : "緯度：%lf 経度：%lf", pos.latitude, pos.longitude);
	return 0;
}
