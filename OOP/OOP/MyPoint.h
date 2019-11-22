#pragma once
class MyPoint
{
protected: int mPosX, mPosY;
public:
	MyPoint();
	~MyPoint();
	MyPoint(int, int);
	void Dislay();
	void SetX(int);
	int GetX();
	void SetY(int);
	int GetY();
	float Distance(MyPoint);

};

