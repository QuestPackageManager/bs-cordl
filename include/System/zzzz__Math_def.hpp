#pragma once
// IWYU pragma private; include "System/Math.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Math)
namespace System {
struct Decimal;
}
namespace System {
struct MidpointRounding;
}
// Forward declare root types
namespace System {
class Math;
}
// Write type traits
MARK_REF_PTR_T(::System::Math);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Math
class CORDL_TYPE Math : public ::System::Object {
public:
  // Declarations
  /// @brief Field doubleRoundLimit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_doubleRoundLimit, put = setStaticF_doubleRoundLimit)) double_t doubleRoundLimit;

  /// @brief Field roundPower10Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_roundPower10Double, put = setStaticF_roundPower10Double)) ::ArrayW<double_t, ::Array<double_t>*> roundPower10Double;

  /// @brief Method Abs, addr 0x3decac8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Decimal Abs(::System::Decimal value);

  /// @brief Method Abs, addr 0x3ded538, size 0x8, virtual false, abstract: false, final false
  static inline double_t Abs(double_t value);

  /// @brief Method Abs, addr 0x3ded540, size 0x8, virtual false, abstract: false, final false
  static inline float_t Abs(float_t value);

  /// @brief Method Abs, addr 0x3dec9c4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Abs(int32_t value);

  /// @brief Method Abs, addr 0x3deca6c, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t Abs(int64_t value);

  /// @brief Method Acos, addr 0x3ded548, size 0x4, virtual false, abstract: false, final false
  static inline double_t Acos(double_t d);

  /// @brief Method Asin, addr 0x3ded54c, size 0x4, virtual false, abstract: false, final false
  static inline double_t Asin(double_t d);

  /// @brief Method Atan, addr 0x3ded550, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan(double_t d);

  /// @brief Method Atan2, addr 0x3ded554, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan2(double_t y, double_t x);

  /// @brief Method Ceiling, addr 0x3ded558, size 0x8, virtual false, abstract: false, final false
  static inline double_t Ceiling(double_t a);

  /// @brief Method Clamp, addr 0x3decb60, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max);

  /// @brief Method Cos, addr 0x3ded560, size 0x4, virtual false, abstract: false, final false
  static inline double_t Cos(double_t d);

  /// @brief Method Cosh, addr 0x3ded564, size 0x4, virtual false, abstract: false, final false
  static inline double_t Cosh(double_t value);

  /// @brief Method DivRem, addr 0x3decb4c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t DivRem(int32_t a, int32_t b, ::ByRef<int32_t> result);

  /// @brief Method Exp, addr 0x3ded568, size 0x4, virtual false, abstract: false, final false
  static inline double_t Exp(double_t d);

  /// @brief Method Floor, addr 0x3ded56c, size 0x8, virtual false, abstract: false, final false
  static inline double_t Floor(double_t d);

  /// @brief Method Log, addr 0x3decc04, size 0xe0, virtual false, abstract: false, final false
  static inline double_t Log(double_t a, double_t newBase);

  /// @brief Method Log, addr 0x3ded574, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log(double_t d);

  /// @brief Method Log10, addr 0x3ded578, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log10(double_t d);

  /// @brief Method Max, addr 0x3deccf4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal Max(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Max, addr 0x3decd8c, size 0x20, virtual false, abstract: false, final false
  static inline double_t Max(double_t val1, double_t val2);

  /// @brief Method Max, addr 0x3decde4, size 0x20, virtual false, abstract: false, final false
  static inline float_t Max(float_t val1, float_t val2);

  /// @brief Method Max, addr 0x3decdac, size 0x10, virtual false, abstract: false, final false
  static inline int16_t Max(int16_t val1, int16_t val2);

  /// @brief Method Max, addr 0x3decdbc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Max(int32_t val1, int32_t val2);

  /// @brief Method Max, addr 0x3decdc8, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Max(int64_t val1, int64_t val2);

  /// @brief Method Max, addr 0x3decdd4, size 0x10, virtual false, abstract: false, final false
  static inline int8_t Max(int8_t val1, int8_t val2);

  /// @brief Method Max, addr 0x3dece04, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Max(uint16_t val1, uint16_t val2);

  /// @brief Method Max, addr 0x3dece14, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Max(uint32_t val1, uint32_t val2);

  /// @brief Method Max, addr 0x3dece20, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Max(uint64_t val1, uint64_t val2);

  /// @brief Method Max, addr 0x3decce4, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Max(uint8_t val1, uint8_t val2);

  /// @brief Method Min, addr 0x3dece3c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal Min(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Min, addr 0x3deced4, size 0x20, virtual false, abstract: false, final false
  static inline double_t Min(double_t val1, double_t val2);

  /// @brief Method Min, addr 0x3decf2c, size 0x20, virtual false, abstract: false, final false
  static inline float_t Min(float_t val1, float_t val2);

  /// @brief Method Min, addr 0x3decef4, size 0x10, virtual false, abstract: false, final false
  static inline int16_t Min(int16_t val1, int16_t val2);

  /// @brief Method Min, addr 0x3decf04, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Min(int32_t val1, int32_t val2);

  /// @brief Method Min, addr 0x3decf10, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Min(int64_t val1, int64_t val2);

  /// @brief Method Min, addr 0x3decf1c, size 0x10, virtual false, abstract: false, final false
  static inline int8_t Min(int8_t val1, int8_t val2);

  /// @brief Method Min, addr 0x3decf4c, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Min(uint16_t val1, uint16_t val2);

  /// @brief Method Min, addr 0x3decf5c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Min(uint32_t val1, uint32_t val2);

  /// @brief Method Min, addr 0x3decf68, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Min(uint64_t val1, uint64_t val2);

  /// @brief Method Min, addr 0x3dece2c, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Min(uint8_t val1, uint8_t val2);

  /// @brief Method ModF, addr 0x3ded3d4, size 0x4, virtual false, abstract: false, final false
  static inline double_t ModF(double_t x, ::cordl_internals::Ptr<double_t> intptr);

  /// @brief Method Pow, addr 0x3ded57c, size 0x4, virtual false, abstract: false, final false
  static inline double_t Pow(double_t x, double_t y);

  /// @brief Method Round, addr 0x3decf74, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::System::Decimal d);

  /// @brief Method Round, addr 0x3decfe0, size 0x84, virtual false, abstract: false, final false
  static inline double_t Round(double_t a);

  /// @brief Method Round, addr 0x3ded064, size 0x68, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, int32_t digits);

  /// @brief Method Round, addr 0x3ded0cc, size 0x2a0, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, int32_t digits, ::System::MidpointRounding mode);

  /// @brief Method Round, addr 0x3ded36c, size 0x68, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, ::System::MidpointRounding mode);

  /// @brief Method Sign, addr 0x3ded3d8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Sign(double_t value);

  /// @brief Method Sign, addr 0x3ded450, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Sign(int64_t value);

  /// @brief Method Sin, addr 0x3ded580, size 0x4, virtual false, abstract: false, final false
  static inline double_t Sin(double_t a);

  /// @brief Method Sinh, addr 0x3ded584, size 0x4, virtual false, abstract: false, final false
  static inline double_t Sinh(double_t value);

  /// @brief Method Sqrt, addr 0x3ded588, size 0x8, virtual false, abstract: false, final false
  static inline double_t Sqrt(double_t d);

  /// @brief Method Tan, addr 0x3ded590, size 0x4, virtual false, abstract: false, final false
  static inline double_t Tan(double_t a);

  /// @brief Method Tanh, addr 0x3ded594, size 0x4, virtual false, abstract: false, final false
  static inline double_t Tanh(double_t value);

  /// @brief Method ThrowAbsOverflow, addr 0x3deca20, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowAbsOverflow();

  /// @brief Method ThrowMinMaxException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ThrowMinMaxException(T min, T max);

  /// @brief Method Truncate, addr 0x3ded464, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Decimal Truncate(::System::Decimal d);

  /// @brief Method Truncate, addr 0x3ded4cc, size 0x6c, virtual false, abstract: false, final false
  static inline double_t Truncate(double_t d);

  static inline double_t getStaticF_doubleRoundLimit();

  static inline ::ArrayW<double_t, ::Array<double_t>*> getStaticF_roundPower10Double();

  static inline void setStaticF_doubleRoundLimit(double_t value);

  static inline void setStaticF_roundPower10Double(::ArrayW<double_t, ::Array<double_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Math(Math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Math(Math const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Math, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Math);
DEFINE_IL2CPP_ARG_TYPE(::System::Math*, "System", "Math");
