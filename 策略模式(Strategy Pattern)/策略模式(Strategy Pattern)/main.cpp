#include "concrete_strategy.h"
#include "context.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) {delete(p); (p)=NULL;}}

#endif // !

int main()
{
	IStragegy *bike = new BikeStrategy();
	IStragegy *car = new CarStrategy();
	IStragegy *train = new TrainStrategy();

	Context *bikeContext = new Context(bike);
	Context *carContext = new Context(car);
	Context *trainContext = new Context(train);

	bikeContext->Travel();
	carContext->Travel();
	trainContext->Travel();

	SAFE_DELETE(bike);
	SAFE_DELETE(car);
	SAFE_DELETE(train);

	SAFE_DELETE(bikeContext);
	SAFE_DELETE(carContext);
	SAFE_DELETE(trainContext);
	getchar();
	return 0;
}