#ifndef HELPER_OBJ
#define HELPER_OBJ

class date{
 public:
  date(unsigned char month, unsigned char day, unsigned int year);
  void print();

 private:
  date();
  unsigned char numDaysInMonth(unsigned char month, unsigned int year);
  unsigned int numDaysInMonthHlpr(unsigned char month,  unsigned int year);
  unsigned char month_;
  unsigned char day_;
  unsigned int  year_;
};

class price{
 public:
 price(double dollar_val):value_(dollar_val) {}
  void print();

 private:
  double value_;
};

class transaction{
 public:
 transaction(date Date, price cost):date_(Date),cost_(cost){}
  date getDate() const {return date_;}
  price getCost() const {return cost_;}
private:
  transaction();
  date date_;
  price cost_;
};

#endif
