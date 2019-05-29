class Basket {
public:
	int quantity;
	Basket(){
		quantity =0;
	}
	Basket(int number){
		quantity = number;
	}
	void addToBasket(int number){
		quantity = quantity+ number;
	}
	bool isEqualTo(Basket* instance){
		if(quantity == instance->quantity){
			return true;
		}
		else{
			return false;
		}
	}
	int getNumItems(){
		return quantity;
	}

};
