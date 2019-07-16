#include "concrete_strategy.h"
#include "context.h"
#include <memory>
using namespace std;

int main()
{
	unique_ptr<IStragegy> bike(new BikeStrategy());
	unique_ptr<IStragegy> car (new CarStrategy());
	unique_ptr<IStragegy> train (new TrainStrategy());

	unique_ptr<Context> bikeContext( new Context(bike.get()));
	unique_ptr<Context> carContext (new Context(car.get()));
	unique_ptr<Context> trainContext (new Context(train.get()));

	bikeContext->Travel();
	carContext->Travel();
	trainContext->Travel();

	getchar();
	return 0;
}