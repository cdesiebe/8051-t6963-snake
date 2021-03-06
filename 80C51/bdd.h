#ifndef ___BDD_H
#define ___BDD_H

#ifdef TEST

#define BDD_SCREEN_X 19
#define BDD_SCREEN_Y 10
#define BDD_SCREEN_WIDTH 10
#define BDD_SCREEN_HEIGHT 5

typedef const unsigned char BddExpectedContent[BDD_SCREEN_HEIGHT][BDD_SCREEN_WIDTH + 1];

void BDD_clear();
int BDD_assert(BddExpectedContent expectedContent, char *testId);

#endif

#endif
