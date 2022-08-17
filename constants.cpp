#include <cstdint>
#include <cstdlib>

static constexpr uint32_t kGlobalConstantExpr = 1;
static const uint32_t kGlobalConstant = rand();
  
class ClassWithConstant 
{
public: 
  static constexpr uint32_t kConstantExpr = 2;
  static const uint32_t kConstant;
};
const uint32_t ClassWithConstant::kConstant = kGlobalConstant * 2;
