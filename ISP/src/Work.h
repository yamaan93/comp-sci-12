/*
 * Work.h
 *
 *  Created on: Jun 14, 2019
 *      Author: Yamaan
 */

#ifndef WORK_H_
#define WORK_H_

#include "Book.h"

namespace std {

class Work: public  Book {
public:
	Work(string name);
	virtual ~Work();
};

} /* namespace std */

#endif /* WORK_H_ */
