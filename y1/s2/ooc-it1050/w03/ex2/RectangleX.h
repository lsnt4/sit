#pragma once
class RectangleX
{
private:
	int length;
	int width;
public:
	RectangleX(void);
	void setLength(int l);
	void setWidth(int w);
	int area();
	
	~RectangleX(void);
};

