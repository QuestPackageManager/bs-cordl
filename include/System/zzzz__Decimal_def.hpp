#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal)
namespace GlobalNamespace {
struct __Decimal__DecCalc__Buf24;
}
namespace GlobalNamespace {
struct __Decimal__DecCalc__PowerOvfl;
}
namespace GlobalNamespace {
struct __Decimal__DecCalc__RoundingMode;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System {
struct MidpointRounding;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
struct __Decimal__DecCalc;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Decimal__DecCalc__RoundingMode;
}
namespace GlobalNamespace {
struct __Decimal__DecCalc__Buf24;
}
namespace GlobalNamespace {
struct __Decimal__DecCalc__PowerOvfl;
}
namespace System {
struct Decimal;
}
namespace System {
struct __Decimal__DecCalc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Decimal__DecCalc__RoundingMode);
MARK_VAL_T(::GlobalNamespace::__Decimal__DecCalc__Buf24);
MARK_VAL_T(::GlobalNamespace::__Decimal__DecCalc__PowerOvfl);
MARK_VAL_T(::System::Decimal);
MARK_VAL_T(::System::__Decimal__DecCalc);
// Type: ::RoundingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Decimal::DecCalc::RoundingMode
struct CORDL_TYPE __Decimal__DecCalc__RoundingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Decimal__DecCalc__RoundingMode_Unwrapped
  enum struct ____Decimal__DecCalc__RoundingMode_Unwrapped : int32_t {
    __E_ToEven = static_cast<int32_t>(0x0),
    __E_AwayFromZero = static_cast<int32_t>(0x1),
    __E_Truncate = static_cast<int32_t>(0x2),
    __E_Floor = static_cast<int32_t>(0x3),
    __E_Ceiling = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Decimal__DecCalc__RoundingMode_Unwrapped() const noexcept {
    return static_cast<____Decimal__DecCalc__RoundingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____Decimal__DecCalc__RoundingMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Decimal__DecCalc__RoundingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Decimal__DecCalc__RoundingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AwayFromZero value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Decimal__DecCalc__RoundingMode const AwayFromZero;

  /// @brief Field Ceiling value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Decimal__DecCalc__RoundingMode const Ceiling;

  /// @brief Field Floor value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Decimal__DecCalc__RoundingMode const Floor;

  /// @brief Field ToEven value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Decimal__DecCalc__RoundingMode const ToEven;

  /// @brief Field Truncate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Decimal__DecCalc__RoundingMode const Truncate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Decimal__DecCalc__RoundingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Decimal__DecCalc__RoundingMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PowerOvfl
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Decimal::DecCalc::PowerOvfl
struct CORDL_TYPE __Decimal__DecCalc__PowerOvfl {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2704044, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t hi, uint32_t mid, uint32_t lo);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Decimal__DecCalc__PowerOvfl();

  // Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __Decimal__DecCalc__PowerOvfl(uint32_t Hi, uint64_t MidLo) noexcept;

  /// @brief Field Hi, offset: 0x0, size: 0x4, def value: None
  uint32_t Hi;

  /// @brief Field MidLo, offset: 0x8, size: 0x8, def value: None
  uint64_t MidLo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, Hi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, MidLo) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Buf24
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Decimal::DecCalc::Buf24
struct CORDL_TYPE __Decimal__DecCalc__Buf24 {
public:
  // Declarations
  __declspec(property(put = set_High64)) uint64_t High64;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  __declspec(property(put = set_Mid64)) uint64_t Mid64;

  /// @brief Field U0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_U0, put = __cordl_internal_set_U0)) uint32_t U0;

  /// @brief Field U1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_U1, put = __cordl_internal_set_U1)) uint32_t U1;

  /// @brief Field U2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_U2, put = __cordl_internal_set_U2)) uint32_t U2;

  /// @brief Field U3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_U3, put = __cordl_internal_set_U3)) uint32_t U3;

  /// @brief Field U4, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_U4, put = __cordl_internal_set_U4)) uint32_t U4;

  /// @brief Field U5, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_U5, put = __cordl_internal_set_U5)) uint32_t U5;

  /// @brief Field uhigh64LE, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uhigh64LE, put = __cordl_internal_set_uhigh64LE)) uint64_t uhigh64LE;

  /// @brief Field ulo64LE, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ulo64LE, put = __cordl_internal_set_ulo64LE)) uint64_t ulo64LE;

  /// @brief Field umid64LE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_umid64LE, put = __cordl_internal_set_umid64LE)) uint64_t umid64LE;

  constexpr uint32_t const& __cordl_internal_get_U0() const;

  constexpr uint32_t& __cordl_internal_get_U0();

  constexpr uint32_t const& __cordl_internal_get_U1() const;

  constexpr uint32_t& __cordl_internal_get_U1();

  constexpr uint32_t const& __cordl_internal_get_U2() const;

  constexpr uint32_t& __cordl_internal_get_U2();

  constexpr uint32_t const& __cordl_internal_get_U3() const;

  constexpr uint32_t& __cordl_internal_get_U3();

  constexpr uint32_t const& __cordl_internal_get_U4() const;

  constexpr uint32_t& __cordl_internal_get_U4();

  constexpr uint32_t const& __cordl_internal_get_U5() const;

  constexpr uint32_t& __cordl_internal_get_U5();

  constexpr uint64_t const& __cordl_internal_get_uhigh64LE() const;

  constexpr uint64_t& __cordl_internal_get_uhigh64LE();

  constexpr uint64_t const& __cordl_internal_get_ulo64LE() const;

  constexpr uint64_t& __cordl_internal_get_ulo64LE();

  constexpr uint64_t const& __cordl_internal_get_umid64LE() const;

  constexpr uint64_t& __cordl_internal_get_umid64LE();

  constexpr void __cordl_internal_set_U0(uint32_t value);

  constexpr void __cordl_internal_set_U1(uint32_t value);

  constexpr void __cordl_internal_set_U2(uint32_t value);

  constexpr void __cordl_internal_set_U3(uint32_t value);

  constexpr void __cordl_internal_set_U4(uint32_t value);

  constexpr void __cordl_internal_set_U5(uint32_t value);

  constexpr void __cordl_internal_set_uhigh64LE(uint64_t value);

  constexpr void __cordl_internal_set_ulo64LE(uint64_t value);

  constexpr void __cordl_internal_set_umid64LE(uint64_t value);

  /// @brief Method get_Low64, addr 0x2703bc0, size 0x60, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method set_High64, addr 0x2703dac, size 0x7c, virtual false, abstract: false, final false
  inline void set_High64(uint64_t value);

  /// @brief Method set_Low64, addr 0x2703ac8, size 0x7c, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  /// @brief Method set_Mid64, addr 0x2703b44, size 0x7c, virtual false, abstract: false, final false
  inline void set_Mid64(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Decimal__DecCalc__Buf24();

  // Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U2", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U4", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "U5", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "umid64LE", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __Decimal__DecCalc__Buf24(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint32_t U4, uint32_t U5, uint64_t ulo64LE, uint64_t umid64LE, uint64_t uhigh64LE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___U0_padding[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___U0_padding_forAlignment[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___U1_padding[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___U1_padding_forAlignment[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___U2_padding[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___U2_padding_forAlignment[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___U3_padding[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___U3_padding_forAlignment[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___U4_padding[0x10];
      /// @brief Field U4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___U4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___U4_padding_forAlignment[0x10];
      /// @brief Field U4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___U4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___U5_padding[0x14];
      /// @brief Field U5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___U5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___U5_padding_forAlignment[0x14];
      /// @brief Field U5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___U5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ulo64LE_padding[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ulo64LE_padding_forAlignment[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___umid64LE_padding[0x8];
      /// @brief Field umid64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___umid64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___umid64LE_padding_forAlignment[0x8];
      /// @brief Field umid64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___umid64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___uhigh64LE_padding[0x10];
      /// @brief Field uhigh64LE, offset: 0x10, size: 0x8, def value: None
      uint64_t ___uhigh64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___uhigh64LE_padding_forAlignment[0x10];
      /// @brief Field uhigh64LE, offset: 0x10, size: 0x8, def value: None
      uint64_t ___uhigh64LE_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Decimal__DecCalc__Buf24, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DecCalc
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Decimal::DecCalc
struct CORDL_TYPE __Decimal__DecCalc {
public:
  // Declarations
  using Buf24 = ::GlobalNamespace::__Decimal__DecCalc__Buf24;

  using PowerOvfl = ::GlobalNamespace::__Decimal__DecCalc__PowerOvfl;

  using RoundingMode = ::GlobalNamespace::__Decimal__DecCalc__RoundingMode;

  __declspec(property(get = get_High, put = set_High)) uint32_t High;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Low, put = set_Low)) uint32_t Low;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  __declspec(property(get = get_Mid, put = set_Mid)) uint32_t Mid;

  /// @brief Field PowerOvflValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PowerOvflValues,
                             put = setStaticF_PowerOvflValues))::ArrayW<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, ::Array<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl>*> PowerOvflValues;

  /// @brief Field s_doublePowers10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_doublePowers10, put = setStaticF_s_doublePowers10))::ArrayW<double_t, ::Array<double_t>*> s_doublePowers10;

  /// @brief Field s_powers10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_powers10, put = setStaticF_s_powers10))::ArrayW<uint32_t, ::Array<uint32_t>*> s_powers10;

  /// @brief Field s_ulongPowers10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ulongPowers10, put = setStaticF_s_ulongPowers10))::ArrayW<uint64_t, ::Array<uint64_t>*> s_ulongPowers10;

  /// @brief Field uflags, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_uflags, put = __cordl_internal_set_uflags)) uint32_t uflags;

  /// @brief Field uhi, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_uhi, put = __cordl_internal_set_uhi)) uint32_t uhi;

  /// @brief Field ulo, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_ulo, put = __cordl_internal_set_ulo)) uint32_t ulo;

  /// @brief Field ulomidLE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ulomidLE, put = __cordl_internal_set_ulomidLE)) uint64_t ulomidLE;

  /// @brief Field umid, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_umid, put = __cordl_internal_set_umid)) uint32_t umid;

  /// @brief Method DecAddSub, addr 0x27012dc, size 0x694, virtual false, abstract: false, final false
  static inline void DecAddSub(ByRef<::System::__Decimal__DecCalc> d1, ByRef<::System::__Decimal__DecCalc> d2, bool sign);

  /// @brief Method DecDivMod1E9, addr 0x26fe0e4, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t DecDivMod1E9(ByRef<::System::__Decimal__DecCalc> value);

  /// @brief Method Div96ByConst, addr 0x2702b90, size 0x44, virtual false, abstract: false, final false
  static inline bool Div96ByConst(ByRef<uint64_t> high64, ByRef<uint32_t> low, uint32_t pow);

  /// @brief Method DivByConst, addr 0x2703a0c, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t DivByConst(::cordl_internals::Ptr<uint32_t> result, uint32_t hiRes, ByRef<uint32_t> quotient, ByRef<uint32_t> remainder, uint32_t power);

  /// @brief Method GetExponent, addr 0x2702a68, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t GetExponent(double_t d);

  /// @brief Method GetExponent, addr 0x2702a5c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t GetExponent(float_t f);

  /// @brief Method GetHashCode, addr 0x26ff1e0, size 0x290, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(ByRef<::System::Decimal> d);

  /// @brief Method InternalRound, addr 0x26ffd1c, size 0x284, virtual false, abstract: false, final false
  static inline void InternalRound(ByRef<::System::__Decimal__DecCalc> d, uint32_t scale, ::GlobalNamespace::__Decimal__DecCalc__RoundingMode mode);

  /// @brief Method LeadingZeroCount, addr 0x2703a60, size 0x68, virtual false, abstract: false, final false
  static inline int32_t LeadingZeroCount(uint32_t value);

  /// @brief Method ScaleResult, addr 0x2702e30, size 0xbdc, virtual false, abstract: false, final false
  static inline int32_t ScaleResult(::cordl_internals::Ptr<::GlobalNamespace::__Decimal__DecCalc__Buf24> bufRes, uint32_t hiRes, int32_t scale);

  /// @brief Method UInt32x32To64, addr 0x2702a74, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t UInt32x32To64(uint32_t a, uint32_t b);

  /// @brief Method UInt64x64To128, addr 0x2702a7c, size 0x114, virtual false, abstract: false, final false
  static inline void UInt64x64To128(uint64_t a, uint64_t b, ByRef<::System::__Decimal__DecCalc> result);

  /// @brief Method Unscale, addr 0x2702bd4, size 0x25c, virtual false, abstract: false, final false
  static inline void Unscale(ByRef<uint32_t> low, ByRef<uint64_t> high64, ByRef<int32_t> scale);

  /// @brief Method VarDecCmp, addr 0x26feeb8, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t VarDecCmp(ByRef<::System::Decimal> d1, ByRef<::System::Decimal> d2);

  /// @brief Method VarDecCmpSub, addr 0x2703c20, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t VarDecCmpSub(ByRef<::System::Decimal> d1, ByRef<::System::Decimal> d2);

  /// @brief Method VarDecFromR4, addr 0x26fe23c, size 0x404, virtual false, abstract: false, final false
  static inline void VarDecFromR4(float_t input, ByRef<::System::__Decimal__DecCalc> result);

  /// @brief Method VarDecFromR8, addr 0x26fe6c8, size 0x40c, virtual false, abstract: false, final false
  static inline void VarDecFromR8(double_t input, ByRef<::System::__Decimal__DecCalc> result);

  /// @brief Method VarDecMul, addr 0x2701ad4, size 0x468, virtual false, abstract: false, final false
  static inline void VarDecMul(ByRef<::System::__Decimal__DecCalc> d1, ByRef<::System::__Decimal__DecCalc> d2);

  /// @brief Method VarR4FromDec, addr 0x2700d20, size 0x5c, virtual false, abstract: false, final false
  static inline float_t VarR4FromDec(ByRef<::System::Decimal> value);

  /// @brief Method VarR8FromDec, addr 0x2700784, size 0xc8, virtual false, abstract: false, final false
  static inline double_t VarR8FromDec(ByRef<::System::Decimal> value);

  constexpr uint32_t const& __cordl_internal_get_uflags() const;

  constexpr uint32_t& __cordl_internal_get_uflags();

  constexpr uint32_t const& __cordl_internal_get_uhi() const;

  constexpr uint32_t& __cordl_internal_get_uhi();

  constexpr uint32_t const& __cordl_internal_get_ulo() const;

  constexpr uint32_t& __cordl_internal_get_ulo();

  constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

  constexpr uint64_t& __cordl_internal_get_ulomidLE();

  constexpr uint32_t const& __cordl_internal_get_umid() const;

  constexpr uint32_t& __cordl_internal_get_umid();

  constexpr void __cordl_internal_set_uflags(uint32_t value);

  constexpr void __cordl_internal_set_uhi(uint32_t value);

  constexpr void __cordl_internal_set_ulo(uint32_t value);

  constexpr void __cordl_internal_set_ulomidLE(uint64_t value);

  constexpr void __cordl_internal_set_umid(uint32_t value);

  static inline ::ArrayW<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, ::Array<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl>*> getStaticF_PowerOvflValues();

  static inline ::ArrayW<double_t, ::Array<double_t>*> getStaticF_s_doublePowers10();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_powers10();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_ulongPowers10();

  /// @brief Method get_High, addr 0x2702944, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_High();

  /// @brief Method get_IsNegative, addr 0x2702974, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsNegative();

  /// @brief Method get_Low, addr 0x2702954, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Low();

  /// @brief Method get_Low64, addr 0x2702980, size 0x60, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method get_Mid, addr 0x2702964, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Mid();

  static inline void setStaticF_PowerOvflValues(::ArrayW<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, ::Array<::GlobalNamespace::__Decimal__DecCalc__PowerOvfl>*> value);

  static inline void setStaticF_s_doublePowers10(::ArrayW<double_t, ::Array<double_t>*> value);

  static inline void setStaticF_s_powers10(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_ulongPowers10(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method set_High, addr 0x270294c, size 0x8, virtual false, abstract: false, final false
  inline void set_High(uint32_t value);

  /// @brief Method set_Low, addr 0x270295c, size 0x8, virtual false, abstract: false, final false
  inline void set_Low(uint32_t value);

  /// @brief Method set_Low64, addr 0x27029e0, size 0x7c, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  /// @brief Method set_Mid, addr 0x270296c, size 0x8, virtual false, abstract: false, final false
  inline void set_Mid(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Decimal__DecCalc();

  // Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value:
  // None }]
  constexpr __Decimal__DecCalc(uint32_t uflags, uint32_t uhi, uint32_t ulo, uint32_t umid, uint64_t ulomidLE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uflags_padding[0x0];
      /// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uflags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uflags_padding_forAlignment[0x0];
      /// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uflags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___uhi_padding[0x4];
      /// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uhi;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___uhi_padding_forAlignment[0x4];
      /// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uhi_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulo_padding[0x8];
      /// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulo;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulo_padding_forAlignment[0x8];
      /// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulo_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___umid_padding[0xc];
      /// @brief Field umid, offset: 0xc, size: 0x4, def value: None
      uint32_t ___umid;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___umid_padding_forAlignment[0xc];
      /// @brief Field umid, offset: 0xc, size: 0x4, def value: None
      uint32_t ___umid_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulomidLE_padding[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulomidLE_padding_forAlignment[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Decimal__DecCalc, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::Decimal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Decimal
struct CORDL_TYPE Decimal {
public:
  // Declarations
  using DecCalc = ::System::__Decimal__DecCalc;

  __declspec(property(get = get_High)) uint32_t High;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Low)) uint32_t Low;

  __declspec(property(get = get_Low64)) uint64_t Low64;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue))::System::Decimal MaxValue;

  __declspec(property(get = get_Mid)) uint32_t Mid;

  /// @brief Field MinValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue))::System::Decimal MinValue;

  /// @brief Field MinusOne, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MinusOne, put = setStaticF_MinusOne))::System::Decimal MinusOne;

  /// @brief Field One, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::System::Decimal One;

  __declspec(property(get = get_Scale)) int32_t Scale;

  /// @brief Field Zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::System::Decimal Zero;

  /// @brief Field flags, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) int32_t flags;

  /// @brief Field hi, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_hi, put = __cordl_internal_set_hi)) int32_t hi;

  /// @brief Field lo, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_lo, put = __cordl_internal_set_lo)) int32_t lo;

  /// @brief Field mid, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_mid, put = __cordl_internal_set_mid)) int32_t mid;

  /// @brief Field ulomidLE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ulomidLE, put = __cordl_internal_set_ulomidLE)) uint64_t ulomidLE;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
  constexpr operator ::System::IComparable_1<::System::Decimal>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
  constexpr operator ::System::IEquatable_1<::System::Decimal>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Method AsMutable, addr 0x26fe00c, size 0x4, virtual false, abstract: false, final false
  static inline ByRef<::System::__Decimal__DecCalc> AsMutable(ByRef<::System::Decimal> d);

  /// @brief Method CompareTo, addr 0x26fef88, size 0x90, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Decimal value);

  /// @brief Method CompareTo, addr 0x26fed98, size 0x120, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method DecDivMod1E9, addr 0x26fe010, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t DecDivMod1E9(ByRef<::System::Decimal> value);

  /// @brief Method Equals, addr 0x26ff0f4, size 0x98, virtual true, abstract: false, final true
  inline bool Equals(::System::Decimal value);

  /// @brief Method Equals, addr 0x26ff018, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetBits, addr 0x26ffa2c, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetBits(::System::Decimal d);

  /// @brief Method GetHashCode, addr 0x26ff18c, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x2702298, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsValid, addr 0x26fead4, size 0x20, virtual false, abstract: false, final false
  static inline bool IsValid(int32_t flags);

  /// @brief Method Negate, addr 0x26ffac8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Decimal Negate(::System::Decimal d);

  /// @brief Method Parse, addr 0x26ff77c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Decimal Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x26ff850, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Decimal Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Round, addr 0x26ffad0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::System::Decimal d, int32_t decimals);

  /// @brief Method Round, addr 0x26ffb64, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(ByRef<::System::Decimal> d, int32_t decimals, ::System::MidpointRounding mode);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x27022a0, size 0x60, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x27023ec, size 0x60, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2702300, size 0x8c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x2702758, size 0x8c, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x270274c, size 0xc, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x27026ec, size 0x60, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x270244c, size 0x60, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x270250c, size 0x60, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x27025cc, size 0x60, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x270238c, size 0x60, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x270268c, size 0x60, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x27027e4, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x27024ac, size 0x60, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x270256c, size 0x60, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x270262c, size 0x60, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x26fecd0, size 0xb8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToByte, addr 0x26fffa0, size 0x180, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x2700704, size 0x80, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal d);

  /// @brief Method ToInt16, addr 0x2700584, size 0x180, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x270040c, size 0x178, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal d);

  /// @brief Method ToInt64, addr 0x270084c, size 0x170, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal d);

  /// @brief Method ToSByte, addr 0x270028c, size 0x180, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x2700ca0, size 0x80, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal d);

  /// @brief Method ToString, addr 0x26ff470, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x26ff5d8, size 0xd8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x26ff51c, size 0xbc, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x27009bc, size 0x180, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x2700120, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal d);

  /// @brief Method ToUInt64, addr 0x2700b3c, size 0x164, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal d);

  /// @brief Method Truncate, addr 0x2700d7c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Decimal Truncate(::System::Decimal d);

  /// @brief Method Truncate, addr 0x2700e7c, size 0x98, virtual false, abstract: false, final false
  static inline void Truncate(ByRef<::System::Decimal> d);

  /// @brief Method TryFormat, addr 0x26ff6b0, size 0xcc, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x26ff934, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<::System::Decimal> result);

  constexpr int32_t const& __cordl_internal_get_flags() const;

  constexpr int32_t& __cordl_internal_get_flags();

  constexpr int32_t const& __cordl_internal_get_hi() const;

  constexpr int32_t& __cordl_internal_get_hi();

  constexpr int32_t const& __cordl_internal_get_lo() const;

  constexpr int32_t& __cordl_internal_get_lo();

  constexpr int32_t const& __cordl_internal_get_mid() const;

  constexpr int32_t& __cordl_internal_get_mid();

  constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

  constexpr uint64_t& __cordl_internal_get_ulomidLE();

  constexpr void __cordl_internal_set_flags(int32_t value);

  constexpr void __cordl_internal_set_hi(int32_t value);

  constexpr void __cordl_internal_set_lo(int32_t value);

  constexpr void __cordl_internal_set_mid(int32_t value);

  constexpr void __cordl_internal_set_ulomidLE(uint64_t value);

  /// @brief Method .ctor, addr 0x26feaf4, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> bits);

  /// @brief Method .ctor, addr 0x26fed88, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Decimal> d, int32_t flags);

  /// @brief Method .ctor, addr 0x26fec34, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);

  /// @brief Method .ctor, addr 0x26fe640, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x26fe1b4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x26fe14c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x26fe17c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x26fe170, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x26fe1a4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  static inline ::System::Decimal getStaticF_MaxValue();

  static inline ::System::Decimal getStaticF_MinValue();

  static inline ::System::Decimal getStaticF_MinusOne();

  static inline ::System::Decimal getStaticF_One();

  static inline ::System::Decimal getStaticF_Zero();

  /// @brief Method get_High, addr 0x26fdf80, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_High();

  /// @brief Method get_IsNegative, addr 0x26fdf98, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsNegative();

  /// @brief Method get_Low, addr 0x26fdf88, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Low();

  /// @brief Method get_Low64, addr 0x26fdfac, size 0x60, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method get_Mid, addr 0x26fdf90, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Mid();

  /// @brief Method get_Scale, addr 0x26fdfa4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Scale();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::Decimal>"
  constexpr ::System::IComparable_1<::System::Decimal>* i___System__IComparable_1___System__Decimal_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
  constexpr ::System::IEquatable_1<::System::Decimal>* i___System__IEquatable_1___System__Decimal_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Method op_Addition, addr 0x2701228, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Addition(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Equality, addr 0x2701f3c, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Explicit, addr 0x2700ff0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(double_t value);

  /// @brief Method op_Explicit, addr 0x2700fac, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(float_t value);

  /// @brief Method op_Explicit, addr 0x27011c4, size 0x64, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x2701160, size 0x64, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x2701034, size 0x64, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x2701098, size 0x64, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x27010fc, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::System::Decimal value);

  /// @brief Method op_GreaterThan, addr 0x2702178, size 0x90, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2702208, size 0x90, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Implicit, addr 0x2700f5c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(char16_t value);

  /// @brief Method op_Implicit, addr 0x2700f38, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int16_t value);

  /// @brief Method op_Implicit, addr 0x2700f68, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int32_t value);

  /// @brief Method op_Implicit, addr 0x2700f88, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int64_t value);

  /// @brief Method op_Implicit, addr 0x2700f20, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int8_t value);

  /// @brief Method op_Implicit, addr 0x2700f50, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint16_t value);

  /// @brief Method op_Implicit, addr 0x2700f7c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint32_t value);

  /// @brief Method op_Implicit, addr 0x2700fa0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint64_t value);

  /// @brief Method op_Implicit, addr 0x2700f14, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint8_t value);

  /// @brief Method op_Inequality, addr 0x2701fcc, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_LessThan, addr 0x270205c, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_LessThanOrEqual, addr 0x27020e8, size 0x90, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Multiply, addr 0x2701a24, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Multiply(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Subtraction, addr 0x2701970, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Subtraction(::System::Decimal d1, ::System::Decimal d2);

  static inline void setStaticF_MaxValue(::System::Decimal value);

  static inline void setStaticF_MinValue(::System::Decimal value);

  static inline void setStaticF_MinusOne(::System::Decimal value);

  static inline void setStaticF_One(::System::Decimal value);

  static inline void setStaticF_Zero(::System::Decimal value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Decimal();

  // Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lo", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None
  // }]
  constexpr Decimal(int32_t flags, int32_t hi, int32_t lo, int32_t mid, uint64_t ulomidLE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___flags_padding[0x0];
      /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
      int32_t ___flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___flags_padding_forAlignment[0x0];
      /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
      int32_t ___flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___hi_padding[0x4];
      /// @brief Field hi, offset: 0x4, size: 0x4, def value: None
      int32_t ___hi;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___hi_padding_forAlignment[0x4];
      /// @brief Field hi, offset: 0x4, size: 0x4, def value: None
      int32_t ___hi_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___lo_padding[0x8];
      /// @brief Field lo, offset: 0x8, size: 0x4, def value: None
      int32_t ___lo;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___lo_padding_forAlignment[0x8];
      /// @brief Field lo, offset: 0x8, size: 0x4, def value: None
      int32_t ___lo_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___mid_padding[0xc];
      /// @brief Field mid, offset: 0xc, size: 0x4, def value: None
      int32_t ___mid;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___mid_padding_forAlignment[0xc];
      /// @brief Field mid, offset: 0xc, size: 0x4, def value: None
      int32_t ___mid_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulomidLE_padding[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulomidLE_padding_forAlignment[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE_forAlignment;
    };
  };

public:
  /// @brief Field ScaleMask offset 0xffffffff size 0x4
  static constexpr int32_t ScaleMask{ static_cast<int32_t>(0xff0000) };

  /// @brief Field ScaleShift offset 0xffffffff size 0x4
  static constexpr int32_t ScaleShift{ static_cast<int32_t>(0x10) };

  /// @brief Field SignMask offset 0xffffffff size 0x4
  static constexpr int32_t SignMask{ static_cast<int32_t>(0x80000000) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Decimal, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Decimal__DecCalc__RoundingMode, "System", "Decimal/DecCalc/RoundingMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Decimal__DecCalc__Buf24, "System", "Decimal/DecCalc/Buf24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Decimal__DecCalc__PowerOvfl, "System", "Decimal/DecCalc/PowerOvfl");
DEFINE_IL2CPP_ARG_TYPE(::System::Decimal, "System", "Decimal");
DEFINE_IL2CPP_ARG_TYPE(::System::__Decimal__DecCalc, "System", "Decimal/DecCalc");
