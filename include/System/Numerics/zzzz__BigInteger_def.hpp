#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Numerics {
struct __BigInteger__GetBytesMode;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
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
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Numerics {
struct __BigInteger__GetBytesMode;
}
namespace System::Numerics {
struct BigInteger;
}
// Write type traits
MARK_VAL_T(::System::Numerics::__BigInteger__GetBytesMode);
MARK_VAL_T(::System::Numerics::BigInteger);
// Type: ::GetBytesMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: true
// CS Name: ::BigInteger::GetBytesMode
struct CORDL_TYPE __BigInteger__GetBytesMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BigInteger__GetBytesMode_Unwrapped
  enum struct ____BigInteger__GetBytesMode_Unwrapped : int32_t {
    __E_AllocateArray = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Span = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BigInteger__GetBytesMode_Unwrapped() const noexcept {
    return static_cast<____BigInteger__GetBytesMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__GetBytesMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BigInteger__GetBytesMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllocateArray value: static_cast<int32_t>(0x0)
  static ::System::Numerics::__BigInteger__GetBytesMode const AllocateArray;

  /// @brief Field Count value: static_cast<int32_t>(0x1)
  static ::System::Numerics::__BigInteger__GetBytesMode const Count;

  /// @brief Field Span value: static_cast<int32_t>(0x2)
  static ::System::Numerics::__BigInteger__GetBytesMode const Span;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::__BigInteger__GetBytesMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Numerics::__BigInteger__GetBytesMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Numerics
// Type: System.Numerics::BigInteger
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: true
// CS Name: ::System.Numerics::BigInteger
struct CORDL_TYPE BigInteger {
public:
  // Declarations
  using GetBytesMode = ::System::Numerics::__BigInteger__GetBytesMode;

  __declspec(property(get = get_IsZero)) bool IsZero;

  /// @brief Field s_bnMinInt, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_bnMinInt, put = setStaticF_s_bnMinInt))::System::Numerics::BigInteger s_bnMinInt;

  /// @brief Field s_bnMinusOneInt, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_bnMinusOneInt, put = setStaticF_s_bnMinusOneInt))::System::Numerics::BigInteger s_bnMinusOneInt;

  /// @brief Field s_bnOneInt, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_bnOneInt, put = setStaticF_s_bnOneInt))::System::Numerics::BigInteger s_bnOneInt;

  /// @brief Field s_bnZeroInt, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_bnZeroInt, put = setStaticF_s_bnZeroInt))::System::Numerics::BigInteger s_bnZeroInt;

  /// @brief Field s_success, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_success, put = setStaticF_s_success))::ArrayW<uint8_t, ::Array<uint8_t>*> s_success;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::Numerics::BigInteger>"
  constexpr operator ::System::IComparable_1<::System::Numerics::BigInteger>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::BigInteger>"
  constexpr operator ::System::IEquatable_1<::System::Numerics::BigInteger>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Add, addr 0x2d7d680, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger Add(::ArrayW<uint32_t, ::Array<uint32_t>*> leftBits, int32_t leftSign, ::ArrayW<uint32_t, ::Array<uint32_t>*> rightBits, int32_t rightSign);

  /// @brief Method CompareTo, addr 0x2d7cea8, size 0xd8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x2d7cd80, size 0x128, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Numerics::BigInteger other);

  /// @brief Method CompareTo, addr 0x2d7ccf0, size 0x90, virtual false, abstract: false, final false
  inline int32_t CompareTo(int64_t other);

  /// @brief Method Equals, addr 0x2d7cad8, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2d7cb50, size 0xbc, virtual true, abstract: false, final true
  inline bool Equals(::System::Numerics::BigInteger other);

  /// @brief Method Equals, addr 0x2d7cc0c, size 0x6c, virtual false, abstract: false, final false
  inline bool Equals(int64_t other);

  /// @brief Method GetDiffLength, addr 0x2d7cc88, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetDiffLength(::ArrayW<uint32_t, ::Array<uint32_t>*> rgu1, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgu2, int32_t cu);

  /// @brief Method GetHashCode, addr 0x2d7ca84, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPartsForBitManipulation, addr 0x2d7ed98, size 0xc0, virtual false, abstract: false, final false
  static inline bool GetPartsForBitManipulation(ByRef<::System::Numerics::BigInteger> x, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> xd, ByRef<int32_t> xl);

  /// @brief Method Parse, addr 0x2d7c918, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger Parse(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x2d7c9a0, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger Parse(::StringW value, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Subtract, addr 0x2d7da7c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> leftBits, int32_t leftSign, ::ArrayW<uint32_t, ::Array<uint32_t>*> rightBits, int32_t rightSign);

  /// @brief Method ToByteArray, addr 0x2d7cf80, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToByteArray, addr 0x2d7cfac, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(bool isUnsigned, bool isBigEndian);

  /// @brief Method ToString, addr 0x2d7d538, size 0x30, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2d7d648, size 0x38, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x2d7d614, size 0x34, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryGetBytes, addr 0x2d7cfd8, size 0x4ec, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TryGetBytes(::System::Numerics::__BigInteger__GetBytesMode mode, ::System::Span_1<uint8_t> destination, bool isUnsigned, bool isBigEndian,
                                                          ByRef<int32_t> bytesWritten);

  /// @brief Method TryWriteBytes, addr 0x2d7d4c4, size 0x40, virtual false, abstract: false, final false
  inline bool TryWriteBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian);

  /// @brief Method TryWriteOrCountBytes, addr 0x2d7d504, size 0x34, virtual false, abstract: false, final false
  inline bool TryWriteOrCountBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian);

  /// @brief Method .ctor, addr 0x2d7c6a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgu);

  /// @brief Method .ctor, addr 0x2d7c6b4, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> value, bool negative);

  /// @brief Method .ctor, addr 0x2d7c020, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2d7be4c, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal value);

  /// @brief Method .ctor, addr 0x2d7c0c0, size 0x52c, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> value, bool isUnsigned, bool isBigEndian);

  /// @brief Method .ctor, addr 0x2d7bac4, size 0x2e4, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x2d7babc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x2d7b7e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x2d7b8e8, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x2d7b864, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x2d7ba00, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  static inline ::System::Numerics::BigInteger getStaticF_s_bnMinInt();

  static inline ::System::Numerics::BigInteger getStaticF_s_bnMinusOneInt();

  static inline ::System::Numerics::BigInteger getStaticF_s_bnOneInt();

  static inline ::System::Numerics::BigInteger getStaticF_s_bnZeroInt();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_success();

  /// @brief Method get_IsZero, addr 0x2d7c908, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsZero();

  /// @brief Method get_MinusOne, addr 0x2d7c8b0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger get_MinusOne();

  /// @brief Method get_Zero, addr 0x2d7c858, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger get_Zero();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::Numerics::BigInteger>"
  constexpr ::System::IComparable_1<::System::Numerics::BigInteger>* i___System__IComparable_1___System__Numerics__BigInteger_();

  /// @brief Convert to "::System::IEquatable_1<::System::Numerics::BigInteger>"
  constexpr ::System::IEquatable_1<::System::Numerics::BigInteger>* i___System__IEquatable_1___System__Numerics__BigInteger_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x2d7ee60, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right);

  /// @brief Method op_Division, addr 0x2d7f324, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Division(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor);

  /// @brief Method op_Equality, addr 0x2d7f908, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Numerics::BigInteger left, int64_t right);

  /// @brief Method op_Explicit, addr 0x2d7e6e0, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e4c4, size 0x100, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e458, size 0x6c, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e120, size 0x90, virtual false, abstract: false, final false
  static inline int16_t op_Explicit_int16_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7dfb4, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e2ec, size 0xb0, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e090, size 0x90, virtual false, abstract: false, final false
  static inline int8_t op_Explicit_int8_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e1b0, size 0x90, virtual false, abstract: false, final false
  static inline uint16_t op_Explicit_uint16_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e240, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7e39c, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Explicit, addr 0x2d7df24, size 0x90, virtual false, abstract: false, final false
  static inline uint8_t op_Explicit_uint8_t(::System::Numerics::BigInteger value);

  /// @brief Method op_Implicit, addr 0x2d7de84, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int16_t value);

  /// @brief Method op_Implicit, addr 0x2d7ded4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int32_t value);

  /// @brief Method op_Implicit, addr 0x2d7d7cc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int64_t value);

  /// @brief Method op_Implicit, addr 0x2d7de5c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int8_t value);

  /// @brief Method op_Implicit, addr 0x2d7deac, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint16_t value);

  /// @brief Method op_Implicit, addr 0x2d7defc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint32_t value);

  /// @brief Method op_Implicit, addr 0x2d7be24, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint64_t value);

  /// @brief Method op_Implicit, addr 0x2d7de34, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint8_t value);

  /// @brief Method op_Inequality, addr 0x2d7f884, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right);

  /// @brief Method op_Inequality, addr 0x2d7f930, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Numerics::BigInteger left, int64_t right);

  /// @brief Method op_LeftShift, addr 0x2d7e848, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger value, int32_t shift);

  /// @brief Method op_LessThan, addr 0x2d7f8b4, size 0x28, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::Numerics::BigInteger left, int64_t right);

  /// @brief Method op_LessThan, addr 0x2d7f95c, size 0x30, virtual false, abstract: false, final false
  static inline bool op_LessThan(int64_t left, ::System::Numerics::BigInteger right);

  /// @brief Method op_LessThanOrEqual, addr 0x2d7f854, size 0x30, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right);

  /// @brief Method op_LessThanOrEqual, addr 0x2d7f8dc, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger left, int64_t right);

  /// @brief Method op_LessThanOrEqual, addr 0x2d7f98c, size 0x30, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(int64_t left, ::System::Numerics::BigInteger right);

  /// @brief Method op_Modulus, addr 0x2d7f5f4, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Modulus(::System::Numerics::BigInteger dividend, ::System::Numerics::BigInteger divisor);

  /// @brief Method op_Multiply, addr 0x2d7ef0c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right);

  /// @brief Method op_RightShift, addr 0x2d7ea94, size 0x304, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger value, int32_t shift);

  /// @brief Method op_Subtraction, addr 0x2d7d9d0, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger left, ::System::Numerics::BigInteger right);

  /// @brief Method op_UnaryNegation, addr 0x2d7ee58, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger value);

  static inline void setStaticF_s_bnMinInt(::System::Numerics::BigInteger value);

  static inline void setStaticF_s_bnMinusOneInt(::System::Numerics::BigInteger value);

  static inline void setStaticF_s_bnOneInt(::System::Numerics::BigInteger value);

  static inline void setStaticF_s_bnZeroInt(::System::Numerics::BigInteger value);

  static inline void setStaticF_s_success(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger();

  // Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None
  // }]
  constexpr BigInteger(int32_t _sign, ::ArrayW<uint32_t, ::Array<uint32_t>*> _bits) noexcept;

  /// @brief Field _sign, offset: 0x0, size: 0x4, def value: None
  int32_t _sign;

  /// @brief Field _bits, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _bits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigInteger, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Numerics::BigInteger, _sign) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::BigInteger, _bits) == 0x8, "Offset mismatch!");

} // namespace System::Numerics
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::__BigInteger__GetBytesMode, "System.Numerics", "BigInteger/GetBytesMode");
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigInteger, "System.Numerics", "BigInteger");
