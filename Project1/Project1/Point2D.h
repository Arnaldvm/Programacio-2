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
	// Tenim el +  i el += ara copy paste per fer el - i el -=

	Point2D operator+ (const Point2D& a) const{

		Point2D tmp;

		tmp.x = x + a.x;
		tmp.y = y + a.y;

		return tmp;
	}
	
	Point2D operator+= (const Point2D& a){

		x += a.x;
		y += a.y;

		return (*this);
	}

	Point2D operator- (const Point2D& a) const{

		Point2D tmp;

		tmp.x = x - a.x;
		tmp.y = y - a.y;

		return tmp;
	}

	Point2D operator-= (const Point2D& a){

		x -= a.x;
		y -= a.y;

		return (*this);
	}

	Point2D operator= (const Point2D& a){

		x = a.x;
		y = a.y;

		return (*this);
	}

	Point2D operator== (const Point2D& a){

		x == a.x;
		y == a.y;

		return (*this);
	}

	Point2D operator!= (const Point2D& a){

		x != a.x;
		y != a.y;

		return (*this);
	}



public: 

	float x, y;
	
};

#endif 