#pragma once
// IWYU pragma private; include "System/Math.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::System::Math*);
DEFINE_IL2CPP_CLASS(::System::Math*, "System", "Math");
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
  __declspec(property(get = getStaticF_roundPower10Double, put = setStaticF_roundPower10Double)) ::ArrayW<double_t> roundPower10Double;

  /// @brief Method Abs, addr 0x609ee2c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Decimal Abs(::System::Decimal value);

  /// @brief Method Abs, addr 0x609f988, size 0x8, virtual false, abstract: false, final false
  static inline double_t Abs(double_t value);

  /// @brief Method Abs, addr 0x609f990, size 0x8, virtual false, abstract: false, final false
  static inline float_t Abs(float_t value);

  /// @brief Method Abs, addr 0x609ed10, size 0x68, virtual false, abstract: false, final false
  static inline int32_t Abs(int32_t value);

  /// @brief Method Abs, addr 0x609edc4, size 0x68, virtual false, abstract: false, final false
  static inline int64_t Abs(int64_t value);

  /// @brief Method Acos, addr 0x609f998, size 0x4, virtual false, abstract: false, final false
  static inline double_t Acos(double_t d);

  /// @brief Method Asin, addr 0x609f99c, size 0x4, virtual false, abstract: false, final false
  static inline double_t Asin(double_t d);

  /// @brief Method Atan, addr 0x609f9a0, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan(double_t d);

  /// @brief Method Atan2, addr 0x609f9a4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan2(double_t y, double_t x);

  /// @brief Method Ceiling, addr 0x609f9a8, size 0x8, virtual false, abstract: false, final false
  static inline double_t Ceiling(double_t a);

  /// @brief Method Clamp, addr 0x609ef4c, size 0xb8, virtual false, abstract: false, final false
  static inline float_t Clamp(float_t value, float_t min, float_t max);

  /// @brief Method Clamp, addr 0x609eea8, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max);

  /// @brief Method Cos, addr 0x609f9b0, size 0x4, virtual false, abstract: false, final false
  static inline double_t Cos(double_t d);

  /// @brief Method Cosh, addr 0x609f9b4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Cosh(double_t value);

  /// @brief Method DivRem, addr 0x609ee94, size 0x14, virtual false, abstract: false, final false
  static inline int32_t DivRem(int32_t a, int32_t b, ::by_ref<int32_t> result);

  /// @brief Method Exp, addr 0x609f9b8, size 0x4, virtual false, abstract: false, final false
  static inline double_t Exp(double_t d);

  /// @brief Method Floor, addr 0x609f9bc, size 0x8, virtual false, abstract: false, final false
  static inline double_t Floor(double_t d);

  /// @brief Method Log, addr 0x609f004, size 0xe0, virtual false, abstract: false, final false
  static inline double_t Log(double_t a, double_t newBase);

  /// @brief Method Log, addr 0x609f9c4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log(double_t d);

  /// @brief Method Log10, addr 0x609f9c8, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log10(double_t d);

  /// @brief Method Max, addr 0x609f0f8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Decimal Max(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Max, addr 0x609f194, size 0x1c, virtual false, abstract: false, final false
  static inline double_t Max(double_t val1, double_t val2);

  /// @brief Method Max, addr 0x609f1f0, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Max(float_t val1, float_t val2);

  /// [NonVersionable]
  /// @brief Method Max, addr 0x609f1b0, size 0x14, virtual false, abstract: false, final false
  static inline int16_t Max(int16_t val1, int16_t val2);

  /// [NonVersionable]
  /// @brief Method Max, addr 0x609f1c4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Max(int32_t val1, int32_t val2);

  /// [NonVersionable]
  /// @brief Method Max, addr 0x609f1d0, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Max(int64_t val1, int64_t val2);

  /// [NonVersionable]
  /// [CLSCompliant(false)]
  /// @brief Method Max, addr 0x609f1dc, size 0x14, virtual false, abstract: false, final false
  static inline int8_t Max(int8_t val1, int8_t val2);

  /// [NonVersionable]
  /// [CLSCompliant(false)]
  /// @brief Method Max, addr 0x609f20c, size 0x14, virtual false, abstract: false, final false
  static inline uint16_t Max(uint16_t val1, uint16_t val2);

  /// [NonVersionable]
  /// [CLSCompliant(false)]
  /// @brief Method Max, addr 0x609f220, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Max(uint32_t val1, uint32_t val2);

  /// [CLSCompliant(false)]
  /// [NonVersionable]
  /// @brief Method Max, addr 0x609f22c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Max(uint64_t val1, uint64_t val2);

  /// [NonVersionable]
  /// @brief Method Max, addr 0x609f0e4, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t Max(uint8_t val1, uint8_t val2);

  /// @brief Method Min, addr 0x609f24c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Decimal Min(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Min, addr 0x609f2e8, size 0x1c, virtual false, abstract: false, final false
  static inline double_t Min(double_t val1, double_t val2);

  /// @brief Method Min, addr 0x609f344, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Min(float_t val1, float_t val2);

  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f304, size 0x14, virtual false, abstract: false, final false
  static inline int16_t Min(int16_t val1, int16_t val2);

  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f318, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Min(int32_t val1, int32_t val2);

  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f324, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Min(int64_t val1, int64_t val2);

  /// [CLSCompliant(false)]
  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f330, size 0x14, virtual false, abstract: false, final false
  static inline int8_t Min(int8_t val1, int8_t val2);

  /// [CLSCompliant(false)]
  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f360, size 0x14, virtual false, abstract: false, final false
  static inline uint16_t Min(uint16_t val1, uint16_t val2);

  /// [CLSCompliant(false)]
  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f374, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Min(uint32_t val1, uint32_t val2);

  /// [CLSCompliant(false)]
  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f380, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Min(uint64_t val1, uint64_t val2);

  /// [NonVersionable]
  /// @brief Method Min, addr 0x609f238, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t Min(uint8_t val1, uint8_t val2);

  /// @brief Method ModF, addr 0x609f80c, size 0x4, virtual false, abstract: false, final false
  static inline double_t ModF(double_t x, double_t* intptr);

  /// @brief Method Pow, addr 0x609f9cc, size 0x4, virtual false, abstract: false, final false
  static inline double_t Pow(double_t x, double_t y);

  /// @brief Method Round, addr 0x609f38c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::System::Decimal d);

  /// @brief Method Round, addr 0x609f3fc, size 0x84, virtual false, abstract: false, final false
  static inline double_t Round(double_t a);

  /// @brief Method Round, addr 0x609f480, size 0x6c, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, int32_t digits);

  /// @brief Method Round, addr 0x609f4ec, size 0x2b4, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, int32_t digits, ::System::MidpointRounding mode);

  /// @brief Method Round, addr 0x609f7a0, size 0x6c, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, ::System::MidpointRounding mode);

  /// @brief Method Sign, addr 0x609f810, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Sign(double_t value);

  /// @brief Method Sign, addr 0x609f888, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Sign(int32_t value);

  /// @brief Method Sign, addr 0x609f898, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Sign(int64_t value);

  /// @brief Method Sin, addr 0x609f9d0, size 0x4, virtual false, abstract: false, final false
  static inline double_t Sin(double_t a);

  /// @brief Method Sinh, addr 0x609f9d4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Sinh(double_t value);

  /// @brief Method Sqrt, addr 0x609f9d8, size 0x8, virtual false, abstract: false, final false
  static inline double_t Sqrt(double_t d);

  /// @brief Method Tan, addr 0x609f9e0, size 0x4, virtual false, abstract: false, final false
  static inline double_t Tan(double_t a);

  /// @brief Method Tanh, addr 0x609f9e4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Tanh(double_t value);

  /// [StackTraceHidden]
  /// @brief Method ThrowAbsOverflow, addr 0x609ed78, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowAbsOverflow();

  /// @brief Method ThrowMinMaxException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ThrowMinMaxException(T min, T max);

  /// @brief Method Truncate, addr 0x609f8ac, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Decimal Truncate(::System::Decimal d);

  /// @brief Method Truncate, addr 0x609f918, size 0x70, virtual false, abstract: false, final false
  static inline double_t Truncate(double_t d);

  static inline double_t getStaticF_doubleRoundLimit();

  static inline ::ArrayW<double_t> getStaticF_roundPower10Double();

  static inline void setStaticF_doubleRoundLimit(double_t value);

  static inline void setStaticF_roundPower10Double(::ArrayW<double_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Math(Math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Math(Math const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Math) == 0x10, "Size mismatch!");

} // namespace System
