
#ifndef MONEY_H_
#define MONEY_H_

class Money {
private:
	//TODO: declare your variables here

	int DolR;	//create dollar and cent variables that are accessible within the class
	int cntS;

public:
	Money();
	Money(int dollars, int cents);

	int getDollars() const;
	int getCents() const;
	int asCents() const;

	void addDollars(int dollars);
	void addCents(int cents);
	void subtractDollars(int dollars);
	void subtractCents(int cents);

	void add(const Money &other);
	void subtract(const Money &other);
	void split(Money &other);

	virtual ~Money();
};

#endif /* MONEY_H_ */
