#include <iostream>
#include <memory>
class Player{
public:
	virtual void play(std::string song) = 0;

};

class Mp3Player{
public:	
	void playmp3(std::string song){ 
		std::cout << song << std::endl;
}

};
class PlayAdapter : public Player {
private:
	Mp3Player pl;
public:
	void play(std::string song) override {
		pl.playmp3(song);


}

};

class Coffee{
public:
	virtual std::string description() = 0;
	virtual int cost() = 0;	
	};
	
class SimpleCoffee : public Coffee{
public:
	
	virtual std::string description() override {
		return  "Coffee";
	}	
	virtual int cost(){return 500;}

};
class Decorator : public Coffee{
protected:
	std::unique_ptr<Coffee> cof;
public:
	Decorator(std::unique_ptr<Coffee> type) : cof(std::move(type)) {}
};
class Milk : public Decorator {
	public:
	Milk(std::unique_ptr<Coffee> type) : Decorator(std::move (type)){}
	virtual std::string description() override {
		return cof->description() + " + Milk";
	}	
	virtual int cost(){return cof->cost() + 200;}
	
};
class Sugar : public Decorator {
	public:
	Sugar(std::unique_ptr<Coffee> type) : Decorator(std::move (type)){}
	virtual std::string description() override {
		return cof->description() + " + Sugar";
	}	
	virtual int cost(){return cof->cost() + 200;}
	
};
int main(){
	Player* p = new PlayAdapter();
	p->play("Song");
	std::unique_ptr<Coffee> coffee = std::make_unique<SimpleCoffee>();
	coffee = std::make_unique<Milk>(std::move(coffee));
	coffee = std::make_unique<Sugar>(std::move(coffee));
	std::cout << coffee->description() << std::endl;
	std::cout << coffee->cost() << std::endl;
	return 0;

};
