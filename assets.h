#ifndef ASSETS_H
#define ASSETS_H



class assets{
 public:
  price getMktVal() const {return market_value;}
  price getBkVal() const {return book_value;}
  virtual void print()=0;
 private:
  string name;
  price market_value;
  price book_value;
  double ROI;
  vector<transaction> transactions;
  date purchase_date;
};
#endif
