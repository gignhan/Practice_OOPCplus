#pragma once
class MyPoint
{

public:
protected: int mPosX, mPosY;
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

