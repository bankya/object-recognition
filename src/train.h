#include <math.h>
#include "matrix.h"
#include <time.h>
#include <stdlib.h>

Matrix sigmoid(Matrix a);
Matrix mLog(Matrix a);
std::vector<Matrix> forwardProp(Matrix x, std::vector<Matrix> theta, unsigned numLayers);
float cost(std::vector<Matrix> x, Matrix y, std::vector<Matrix> theta, 
	float lambda, unsigned m, unsigned numOutNodes, unsigned numLayers);

