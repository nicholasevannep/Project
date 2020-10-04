#include <stdio.h>

int main() {

	int lit;

	scanf("%d", &lit); fflush(stdin);

	for (int i = 1; i <= lit; i++) {

		int totalInput;
		scanf("%d", &totalInput); fflush(stdin);

		int quadrantFound[10] = { 0 };

		for (int j = 0; j < totalInput; j++) {

			int x, y;
			scanf("%d %d", &x, &y); fflush(stdin);

			if (x > 0 && y > 0) quadrantFound[1]++;
			else if (x < 0 && y > 0) quadrantFound[2]++;
			else if (x < 0 && y < 0) quadrantFound[3]++;
			else if (x > 0 && y < 0) quadrantFound[4]++;

		}
		

		if (totalInput == 1 || totalInput == 2) { printf("Case #%d: YES\n", i); continue; }
		
		quadrantFound[1] -= 1;
		quadrantFound[2] -= 1;
		quadrantFound[3] -= 1;
		quadrantFound[4] -= 1;

		int totalZero = 0;

		for (int x = 1; x <= 4; x++) {
			if (quadrantFound[x] < 0) quadrantFound[x]++;
			if (quadrantFound[x] == 0) totalZero++;
		}

		if (totalZero == 3) printf("Case #%d: YES\n", i);
		else printf("Case #%d: NO\n", i);

	}

	getchar();
	getchar();
	return 0;
}
