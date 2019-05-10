#include <string>
#include <iostream>
#include <vector>
using namespace std;



class vehicle
{

	string color;
	size_t maxSpeed;
	size_t cntPass;
public:
	void setColor(string color) { this->color = color; }
	void getColor()const { cout << this->color << endl; }
	void setMaxSpeed(size_t maxSpeed) { this->maxSpeed = maxSpeed; }
	size_t getMaxSpeed()const {return this->maxSpeed; }
	void setcntPass(size_t cntPass) { this->cntPass = cntPass; }
	size_t getcntPass()const { return cntPass; }
	void getInfo()const { getcntPass(); getMaxSpeed(); getColor(); }
};
class groundVehicle :public vehicle {
public:
	string body;
	size_t numofWheels;
	string typeOfEngine;
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void  setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { cout << this->numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }

};
class car : public groundVehicle {
public:
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void  setBody(string body) { this->body = body; }
	string getBody()const { return body; }
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { return numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const {return typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getWheels(); }
};
class train : public groundVehicle {
public:
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void  setBody(string body) { this->body = body; }
	string getBody()const { return body; }
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { return numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { return typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getWheels(); }
};
class bike : public groundVehicle {
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { return numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { return typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getWheels(); }
};
class waterVehicle :public vehicle {
public:
	string body;
	string typeOfEngine;
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { return body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody();}
};
class boat :public waterVehicle {
public:
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); }
};
class ship :public waterVehicle {
public:
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); }
};
class submarine :public waterVehicle {
public:
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); }
};
class aircraft :public vehicle {
public:
	string body;
	size_t numOfPropeller;
	string typeOfEngine;
	void start() {
		cout << "vehicle has started on air\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setProp(size_t prop) { this->numOfPropeller = prop; }
	size_t getProp()const { cout << this->numOfPropeller; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getProp(); }
};
class plane :public aircraft {
public:
	void start() {
		cout << "vehicle has started on air\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setProp(size_t prop) { this->numOfPropeller = prop; }
	size_t getProp()const { cout << this->numOfPropeller; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getProp(); }
};
class helicopter :public aircraft {
public:
	void start() {
		cout << "vehicle has started on air\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setProp(size_t prop) { this->numOfPropeller = prop; }
	size_t getProp()const { cout << this->numOfPropeller; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()const { getEngineType(); getBody(); getProp(); }
};



void main() {
	car c;
	c.setColor("black");
	c.setBody("sedan");
	c.setEngine("gas");
	c.getInfo();

	system("pause");
}