#pragma once
#include "Line.h"
#include <cmath>

Line::Line(double slope, double intercept)
{
	m_slope = slope;
	m_intercept = intercept;
}

double Line::getSlope()
{
	return m_slope;
}

double Line::getIntercept()
{
	return m_intercept;
}

//Returns true if the two input lines intersect, false otherwise
//Two identical lines are defined to intersect
bool intersects(Line l1, Line l2)
{
	return (abs(l1.getSlope() - l2.getSlope()) > epsilon) || (abs(l1.getIntercept() - l2.getIntercept()) < epsilon);
}
