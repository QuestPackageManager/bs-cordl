#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Single)
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
struct Single;
}
// Write type traits
MARK_VAL_T(::System::Single);
// Type: System::Single
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Single
struct CORDL_TYPE Single {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<float_t>"
  constexpr operator ::System::IComparable_1<float_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<float_t>"
  constexpr operator ::System::IEquatable_1<float_t>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x2713df0, size 0x17c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x2713f6c, size 0xe4, virtual true, abstract: false, final true
  inline int32_t CompareTo(float_t value);

  /// @brief Method Equals, addr 0x2714050, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2714168, size 0xd0, virtual true, abstract: false, final true
  inline bool Equals(float_t obj);

  /// @brief Method GetHashCode, addr 0x2714238, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x2714d98, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsInfinity, addr 0x2713cf0, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsInfinity(float_t f);

  /// @brief Method IsNaN, addr 0x2713d5c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsNaN(float_t f);

  /// @brief Method IsNegativeInfinity, addr 0x2713dc8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeInfinity(float_t f);

  /// @brief Method IsPositiveInfinity, addr 0x2713ddc, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPositiveInfinity(float_t f);

  /// @brief Method Parse, addr 0x2714580, size 0xb4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x2714634, size 0xc4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x27146f8, size 0xd4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x2714da0, size 0x64, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x2714ef4, size 0x64, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2714e04, size 0x8c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x2715280, size 0x8c, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x271521c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x27151b8, size 0x64, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x2714f58, size 0x64, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x2715020, size 0x64, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x27150e8, size 0x64, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x2714e90, size 0x64, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x27151b0, size 0x8, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x271530c, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2714fbc, size 0x64, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x2715084, size 0x64, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x271514c, size 0x64, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x27142a0, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x27143a8, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2714430, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x271431c, size 0x8c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x27144c0, size 0xc0, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x27147cc, size 0x80, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x2714cf0, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x271484c, size 0x4a4, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<float_t> result);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<float_t>"
  constexpr ::System::IComparable_1<float_t>* i___System__IComparable_1_float_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<float_t>"
  constexpr ::System::IEquatable_1<float_t>* i___System__IEquatable_1_float_t_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Single();

  // Ctor Parameters [CppParam { name: "m_value", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Single(float_t m_value) noexcept;

  /// @brief Field m_value, offset: 0x0, size: 0x4, def value: None
  float_t m_value;

  /// @brief Field Epsilon offset 0xffffffff size 0x4
  static constexpr float_t Epsilon{ 0.000000000000000000000000000000000000000000001 };

  /// @brief Field MaxValue offset 0xffffffff size 0x4
  static constexpr float_t MaxValue{ 340282350000000000000000000000000000000.0 };

  /// @brief Field MinValue offset 0xffffffff size 0x4
  static constexpr float_t MinValue{ -340282350000000000000000000000000000000.0 };

  /// @brief Field NaN offset 0xffffffff size 0x4
  static constexpr float_t NaN{ NAN };

  /// @brief Field NegativeInfinity offset 0xffffffff size 0x4
  static constexpr float_t NegativeInfinity{ -INFINITY };

  /// @brief Field NegativeZero offset 0xffffffff size 0x4
  static constexpr float_t NegativeZero{ -0.0 };

  /// @brief Field PositiveInfinity offset 0xffffffff size 0x4
  static constexpr float_t PositiveInfinity{ INFINITY };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Single, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Single, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Single, "System", "Single");
