/*
 * EEPROMTimeDB.h
 *
 *  Created on: 16 Aug 2020
 *      Author: arifainchtein
 */

#ifndef EEPROMTIMEDB_H_
#define EEPROMTIMEDB_H_

class EEPROMTimeDB {
public:
	EEPROMTimeDB();


	bool store(XXX);
	XXX[] getRecords(unsigned long,unsigned long, XXX);

	getRecords(unsigned long,unsigned long,XXX);

	float  getAvailableSpace();
	bool delete(unsigned long,XXX);
	bool delete(unsigned long,unsigned long,XXX);
	bool delete(XXX);
	void initialize();


	unsigned long  recordsInPeriod(unsigned long,unsigned long);
	unsigned long  recordsInPeriod(XXX);
	unsigned long  recordsInPeriod(unsigned long,XXX);
	unsigned long  recordsInPeriod(unsigned long,unsigned long,XXX);
	unsigned long  recordsInPeriod(unsigned long,XXX);

	virtual ~EEPROMTimeDB();
};

#endif /* EEPROMTIMEDB_H_ */
