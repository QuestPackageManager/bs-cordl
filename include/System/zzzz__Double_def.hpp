#pragma once
// IWYU pragma private; include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Double)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct DateTime;
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
// Forward declare root types
namespace System {
struct Double;
}
// Write type traits
MARK_VAL_T(::System::Double);
// Type: System::Double
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Double
struct CORDL_TYPE Double {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<double_t>"
  constexpr operator ::System::IComparable_1<double_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<double_t>"
  constexpr operator ::System::IEquatable_1<double_t>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x3d7232c, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x3d72430, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(double_t value);

  /// @brief Method Equals, addr 0x3d7248c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d72538, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(double_t obj);

  /// @brief Method GetHashCode, addr 0x3d72584, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x3d72ee0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsFinite, addr 0x3d722b4, size 0x14, virtual false, abstract: false, final false
  static inline bool IsFinite(double_t d);

  /// @brief Method IsInfinity, addr 0x3d722c8, size 0x18, virtual false, abstract: false, final false
  static inline bool IsInfinity(double_t d);

  /// @brief Method IsNaN, addr 0x3d722e0, size 0x18, virtual false, abstract: false, final false
  static inline bool IsNaN(double_t d);

  /// @brief Method IsNegative, addr 0x3d722f8, size 0xc, virtual false, abstract: false, final false
  static inline bool IsNegative(double_t d);

  /// @brief Method IsNegativeInfinity, addr 0x3d72304, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeInfinity(double_t d);

  /// @brief Method IsPositiveInfinity, addr 0x3d72318, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPositiveInfinity(double_t d);

  /// @brief Method Parse, addr 0x3d72884, size 0xc4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x3d72948, size 0xd4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x3d72a1c, size 0xe4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x3d72ee8, size 0x64, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x3d73034, size 0x64, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x3d72f4c, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x3d733c0, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x3d7335c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x3d73354, size 0x8, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x3d73098, size 0x64, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x3d73160, size 0x64, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x3d73228, size 0x64, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x3d72fd0, size 0x64, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x3d732f0, size 0x64, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x3d73444, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x3d730fc, size 0x64, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x3d731c4, size 0x64, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x3d7328c, size 0x64, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3d725a4, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3d72620, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x3d72734, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3d726a8, size 0x8c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x3d727c4, size 0xc0, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x3d72b00, size 0x80, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ByRef<double_t> result);

  /// @brief Method TryParse, addr 0x3d72e38, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<double_t> result);

  /// @brief Method TryParse, addr 0x3d72b80, size 0x2b8, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<double_t> result);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<double_t>"
  constexpr ::System::IComparable_1<double_t>* i___System__IComparable_1_double_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<double_t>"
  constexpr ::System::IEquatable_1<double_t>* i___System__IEquatable_1_double_t_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Double();

  // Ctor Parameters [CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: None }]
  constexpr Double(double_t m_value) noexcept;

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  double_t m_value;

  /// @brief Field Epsilon offset 0xffffffff size 0x8
  static constexpr double_t Epsilon{
    0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005
  };

  /// @brief Field MaxValue offset 0xffffffff size 0x8
  static constexpr double_t MaxValue{
    179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
  };

  /// @brief Field MinValue offset 0xffffffff size 0x8
  static constexpr double_t MinValue{
    -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
  };

  /// @brief Field NaN offset 0xffffffff size 0x8
  static constexpr double_t NaN{ NAN };

  /// @brief Field NegativeInfinity offset 0xffffffff size 0x8
  static constexpr double_t NegativeInfinity{ -INFINITY };

  /// @brief Field NegativeZero offset 0xffffffff size 0x8
  static constexpr double_t NegativeZero{ -0.0 };

  /// @brief Field PositiveInfinity offset 0xffffffff size 0x8
  static constexpr double_t PositiveInfinity{ INFINITY };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Double, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Double, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Double, "System", "Double");
