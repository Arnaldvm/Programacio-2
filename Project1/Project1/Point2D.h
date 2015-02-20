#ifndef __Point2D_H__
#define __Point2D_H__

class Point2D{

public:

	void setZero(){

		x = y = 0.0f;

	}


	bool areZero()const{

		return x == 0.0f && y == 0.0f;

	}

	void inversor(){

		x = -x;
		y = -y;

	}


	float x, y;
	
};

#endif 