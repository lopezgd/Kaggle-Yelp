#ifndef ACCUMULATOR_HXX_SEEN
#define ACCUMULATOR_HXX_SEEN

namespace util{

  class Accumulator{
  public:
    Accumulator() : fCount(0), fData(0) {}
    ~Accumulator(){}

    void Add(const double& val){
      fData   += val;
      fData_2 += val*val;
      fCount++;
    }

  private:
    int    fCount;  // Count of items in the accumulator
    double fData;   // Accumulated items
    double fData_2; // Square of items

  };

}

#endif
