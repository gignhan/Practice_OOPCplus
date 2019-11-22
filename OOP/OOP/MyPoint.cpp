#include "stdafx.h"
#include "MyPoint.h"


MyPoint::MyPoint()
{

}
MyPoint::MyPoint(int x,int y)
{
	mPosX = x;
	mPosY = y;
}

MyPoint::~MyPoint()
{
}

void MyPoint:: SetX(int x)
{
	mPosX = x;
}
int MyPoint::GetX()
{
	return mPosX;
}
void MyPoint::SetY(int y)
{
	mPosY = y;
}
int MyPoint::GetY()
{
	return mPosY;
}
void MyPoint::Dislay()
{
	cout << "X : " << mPosX << endl;
	cout << "Y : " << mPosY << endl;
}
float MyPoint::Distance(MyPoint m) 
{
	return sqrt(pow((m.mPosX - this->mPosX),2)+ pow((m.mPosY - this->mPosY), 2));
}