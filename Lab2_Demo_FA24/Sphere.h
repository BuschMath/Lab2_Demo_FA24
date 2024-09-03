#ifndef SPHERE_H
#define SPHERE_H

class Sphere
{
public:

	// Constructor and Destructor
	Sphere();
	~Sphere();

	// Setters
	void setRadius(double r);

	// Getters
	double getRadius();

	double calculateVolume();

private:
	double radius;
};

#endif // !SPHERE_H

