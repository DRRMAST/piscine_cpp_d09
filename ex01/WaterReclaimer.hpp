#ifndef WATER_RECLAIMER_HPP
#define WATER_RECLAIMER_HPP

#include <cstddef>
#include "BaseComponent.hpp"

class WaterReclaimer : public BaseComponent {
public:
	WaterReclaimer();
	virtual ~WaterReclaimer() {}

	void start();
	void generateWater();
	void useWater(int water);

private:
	int _water;
	bool _started;
};

#endif
