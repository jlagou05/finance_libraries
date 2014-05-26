#include "helper_objs.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <sstream>

date::date(unsigned char month, unsigned char day, unsigned int year)
{

  if(month > 12) {
    std::ostringstream convert;
    convert<<(int)month;
    std::string err_msg = "Invalid argument: date: month ("+convert.str()+") > 12";
    throw std::invalid_argument(err_msg);
   
  }
  if(day > numDaysInMonth(month,year)) {
    std::ostringstream convertday; std::ostringstream convertmonth;
    convertday<<(int)day; convertmonth<<(int)month;
    std::string err_msg = "Invalid argument: date: invalid day ("+convertday.str()+") in month ("+convertmonth.str()+")";
    throw std::invalid_argument(err_msg);
  }
  if(year > 2100 || year < 2000)
  {
    std::ostringstream convertyear;
    convertyear<<(int)year;
    std::string err_msg = "Invalid argument: date: invalid year ("+convertyear.str()+") must be 2000 < year < 2100";
    throw std::invalid_argument(err_msg);
  }

  month_ = month;
  day_ = day;
  year_ = year;

}

unsigned int date::numDaysInMonthHlpr(unsigned char month, unsigned int year)
{
  
  if(month == 1 || month == 2){
    month += 12;
    year -= 1;
  } 
  
  //365*year + year/4 - year/100 + year/400 + date + (153*month+8)/5
  return (unsigned int)(365*year+floor((double)year/4)-floor((double)year/100)+floor((double)year/400)+1+floor((153*(double)month+8)/5));
}

unsigned char date::numDaysInMonth(unsigned char month, unsigned int year)
{
  return (numDaysInMonthHlpr(month+1,year)-numDaysInMonthHlpr(month,year));
}

void date::print()
{
  printf("%d/%d/%d\n",month_,day_,year_);
}

