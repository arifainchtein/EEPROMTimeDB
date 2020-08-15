/*
 * EEPROMTimeDB.h
 *
 *  Created on: 16 Aug 2020
 *      Author: arifainchtein
 */

#ifndef EEPROMTIMEDB_H_
#define EEPROMTIMEDB_H_
#include <DiscreteRecord.h>
class EEPROMTimeDB {
public:
	EEPROMTimeDB();

//	void initialize();
//	bool store(DiscreteRecord);
//	float  getAvailableSpace();

	void getRecords(DiscreteRecord returnRecords[], unsigned long, unsigned long, DiscreteRecord);
	void getRecords(DiscreteRecord returnRecords[], unsigned long, DiscreteRecord);

	bool deleteRecords(unsigned long, DiscreteRecord);
	bool deleteRecords(unsigned long, unsigned long,DiscreteRecord);
	bool deleteRecords(DiscreteRecord);
//


	unsigned long  recordsInPeriod(unsigned long,unsigned long);
	unsigned long  recordsInPeriod(DiscreteRecord);
	unsigned long  recordsInPeriod(unsigned long,DiscreteRecord);
	unsigned long  recordsInPeriod(unsigned long,unsigned long,DiscreteRecord);
	unsigned long  recordsInPeriod(unsigned long,DiscreteRecord);

	virtual ~EEPROMTimeDB();
};

#endif /* EEPROMTIMEDB_H_ */
