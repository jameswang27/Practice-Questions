#pragma once

const double epsilon = 0.000001;

class Line
{
public:
	Line(double slope, double intercept);
	double getSlope();
	double getIntercept();
private:
	double m_slope;
	double m_intercept;

};

bool intersects(Line l1, Line l2);