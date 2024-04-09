#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System::Math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Math*
class CORDL_TYPE Math : public ::System::Object {
public:
  // Declarations
  /// @brief Field doubleRoundLimit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_doubleRoundLimit, put = setStaticF_doubleRoundLimit)) double_t doubleRoundLimit;

  /// @brief Field roundPower10Double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_roundPower10Double, put = setStaticF_roundPower10Double))::ArrayW<double_t, ::Array<double_t>*> roundPower10Double;

  /// @brief Method Abs, addr 0x282f8bc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Decimal Abs(::System::Decimal value);

  /// @brief Method Abs, addr 0x283043c, size 0x8, virtual false, abstract: false, final false
  static inline double_t Abs(double_t value);

  /// @brief Method Abs, addr 0x2830444, size 0x8, virtual false, abstract: false, final false
  static inline float_t Abs(float_t value);

  /// @brief Method Abs, addr 0x282f7b4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Abs(int32_t value);

  /// @brief Method Abs, addr 0x282f860, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t Abs(int64_t value);

  /// @brief Method Acos, addr 0x283044c, size 0x4, virtual false, abstract: false, final false
  static inline double_t Acos(double_t d);

  /// @brief Method Asin, addr 0x2830450, size 0x4, virtual false, abstract: false, final false
  static inline double_t Asin(double_t d);

  /// @brief Method Atan, addr 0x2830454, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan(double_t d);

  /// @brief Method Atan2, addr 0x2830458, size 0x4, virtual false, abstract: false, final false
  static inline double_t Atan2(double_t y, double_t x);

  /// @brief Method Ceiling, addr 0x283045c, size 0x8, virtual false, abstract: false, final false
  static inline double_t Ceiling(double_t a);

  /// @brief Method Clamp, addr 0x282f954, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max);

  /// @brief Method Cos, addr 0x2830464, size 0x4, virtual false, abstract: false, final false
  static inline double_t Cos(double_t d);

  /// @brief Method DivRem, addr 0x282f940, size 0x14, virtual false, abstract: false, final false
  static inline int32_t DivRem(int32_t a, int32_t b, ByRef<int32_t> result);

  /// @brief Method Floor, addr 0x2830468, size 0x8, virtual false, abstract: false, final false
  static inline double_t Floor(double_t d);

  /// @brief Method Log, addr 0x282f9f8, size 0x150, virtual false, abstract: false, final false
  static inline double_t Log(double_t a, double_t newBase);

  /// @brief Method Log, addr 0x2830470, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log(double_t d);

  /// @brief Method Log10, addr 0x2830474, size 0x4, virtual false, abstract: false, final false
  static inline double_t Log10(double_t d);

  /// @brief Method Max, addr 0x282fb58, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal Max(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Max, addr 0x282fbf0, size 0x78, virtual false, abstract: false, final false
  static inline double_t Max(double_t val1, double_t val2);

  /// @brief Method Max, addr 0x282fca0, size 0x78, virtual false, abstract: false, final false
  static inline float_t Max(float_t val1, float_t val2);

  /// @brief Method Max, addr 0x282fc68, size 0x10, virtual false, abstract: false, final false
  static inline int16_t Max(int16_t val1, int16_t val2);

  /// @brief Method Max, addr 0x282fc78, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Max(int32_t val1, int32_t val2);

  /// @brief Method Max, addr 0x282fc84, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Max(int64_t val1, int64_t val2);

  /// @brief Method Max, addr 0x282fc90, size 0x10, virtual false, abstract: false, final false
  static inline int8_t Max(int8_t val1, int8_t val2);

  /// @brief Method Max, addr 0x282fd18, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Max(uint16_t val1, uint16_t val2);

  /// @brief Method Max, addr 0x282fd28, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Max(uint32_t val1, uint32_t val2);

  /// @brief Method Max, addr 0x282fd34, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Max(uint64_t val1, uint64_t val2);

  /// @brief Method Max, addr 0x282fb48, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Max(uint8_t val1, uint8_t val2);

  /// @brief Method Min, addr 0x282fd50, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Decimal Min(::System::Decimal val1, ::System::Decimal val2);

  /// @brief Method Min, addr 0x282fde8, size 0x78, virtual false, abstract: false, final false
  static inline double_t Min(double_t val1, double_t val2);

  /// @brief Method Min, addr 0x282fe98, size 0x78, virtual false, abstract: false, final false
  static inline float_t Min(float_t val1, float_t val2);

  /// @brief Method Min, addr 0x282fe60, size 0x10, virtual false, abstract: false, final false
  static inline int16_t Min(int16_t val1, int16_t val2);

  /// @brief Method Min, addr 0x282fe70, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Min(int32_t val1, int32_t val2);

  /// @brief Method Min, addr 0x282fe7c, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Min(int64_t val1, int64_t val2);

  /// @brief Method Min, addr 0x282fe88, size 0x10, virtual false, abstract: false, final false
  static inline int8_t Min(int8_t val1, int8_t val2);

  /// @brief Method Min, addr 0x282ff10, size 0x10, virtual false, abstract: false, final false
  static inline uint16_t Min(uint16_t val1, uint16_t val2);

  /// @brief Method Min, addr 0x282ff20, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Min(uint32_t val1, uint32_t val2);

  /// @brief Method Min, addr 0x282ff2c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t Min(uint64_t val1, uint64_t val2);

  /// @brief Method Min, addr 0x282fd40, size 0x10, virtual false, abstract: false, final false
  static inline uint8_t Min(uint8_t val1, uint8_t val2);

  /// @brief Method ModF, addr 0x28302d4, size 0x4, virtual false, abstract: false, final false
  static inline double_t ModF(double_t x, ::cordl_internals::Ptr<double_t> intptr);

  /// @brief Method Pow, addr 0x2830478, size 0x4, virtual false, abstract: false, final false
  static inline double_t Pow(double_t x, double_t y);

  /// @brief Method Round, addr 0x282ff38, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::System::Decimal d);

  /// @brief Method Round, addr 0x282ffa4, size 0x84, virtual false, abstract: false, final false
  static inline double_t Round(double_t a);

  /// @brief Method Round, addr 0x2830028, size 0x2ac, virtual false, abstract: false, final false
  static inline double_t Round(double_t value, int32_t digits, ::System::MidpointRounding mode);

  /// @brief Method Sign, addr 0x28302d8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Sign(double_t value);

  /// @brief Method Sign, addr 0x2830354, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Sign(int64_t value);

  /// @brief Method Sin, addr 0x283047c, size 0x4, virtual false, abstract: false, final false
  static inline double_t Sin(double_t a);

  /// @brief Method Sqrt, addr 0x2830480, size 0x8, virtual false, abstract: false, final false
  static inline double_t Sqrt(double_t d);

  /// @brief Method Tan, addr 0x2830488, size 0x4, virtual false, abstract: false, final false
  static inline double_t Tan(double_t a);

  /// @brief Method ThrowAbsOverflow, addr 0x282f810, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowAbsOverflow();

  /// @brief Method ThrowMinMaxException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ThrowMinMaxException(T min, T max);

  /// @brief Method Truncate, addr 0x2830368, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Decimal Truncate(::System::Decimal d);

  /// @brief Method Truncate, addr 0x28303d0, size 0x6c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Math, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Math);
DEFINE_IL2CPP_ARG_TYPE(::System::Math*, "System", "Math");
