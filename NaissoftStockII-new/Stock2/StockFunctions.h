/*
 * Header file : StockFunctions.h
 * Stock 기능 함수 선언
 * Remark : 2018.04.29 조경제.
 * 
 * issue#12 BuyStock 함수의 반환값 변경 void -> bool
 * Modify : 2018.05.16 조경제
 */
 
#include "Arts.h"

#define DEF_STOCK 9000
#define DEF_MONEY 50000
#define COM_MONEY 50000
#define MAX_COMPANY 10

extern int companyOrder[MAX_COMPANY];
extern int GraphData[MAX_COMPANY][48];

void ChangeStockPrice();

void ShowStockPrice(int);

void PrintStockPrice(int);

void Loan(int);

void Interest();

void Payback();

bool BuyStock(int, int);

void SellStock(int);

void ShowStockList();

void UpdateGraphData();