/*
 * acoursemath.cc
 *
 *  Created on: Feb 5, 2018
 *      Author: 210079572
 */

#include "acoursemath.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

namespace acourse {

acourse_math::acourse_math() {
	// TODO Auto-generated constructor stub

}

acourse_math::~acourse_math() {
	// TODO Auto-generated destructor stub
}

int acourse_math::random_add(int a, int b) {
	int rand_num =0;
	srand (time(NULL));
	rand_num = rand() % 10 + 1;
	return a+b+rand_num;
}

} /* namespace acourse */
