#pragma once
// IWYU pragma private; include "System/UInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16)
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
struct UInt16;
}
// Write type traits
MARK_VAL_T(::System::UInt16);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UInt16
struct CORDL_TYPE UInt16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<uint16_t>"
  constexpr operator ::System::IComparable_1<uint16_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<uint16_t>"
  constexpr operator ::System::IEquatable_1<uint16_t>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x5ab3da0, size 0x7c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x5ab3e1c, size 0xc, virtual true, abstract: false, final true
  inline int32_t CompareTo(uint16_t value);

  /// @brief Method Equals, addr 0x5ab3e28, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5ab3e5c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(uint16_t obj);

  /// @brief Method GetHashCode, addr 0x5ab3e6c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x5ab46c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method Parse, addr 0x5ab41d4, size 0x68, virtual false, abstract: false, final false
  static inline uint16_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x5ab43d0, size 0x78, virtual false, abstract: false, final false
  static inline uint16_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x5ab4448, size 0x88, virtual false, abstract: false, final false
  static inline uint16_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x5ab423c, size 0x194, virtual false, abstract: false, final false
  static inline uint16_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x5ab46c8, size 0x60, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x5ab47e4, size 0x60, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x5ab4728, size 0x5c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x5ab4b34, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x5ab4ad4, size 0x60, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x5ab4a78, size 0x5c, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x5ab4844, size 0x60, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x5ab48ac, size 0x5c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x5ab4964, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x5ab4784, size 0x60, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x5ab4a1c, size 0x5c, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x5ab4bb8, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x5ab48a4, size 0x8, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x5ab4908, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x5ab49c0, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5ab3e74, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5ab3fb8, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x5ab4070, size 0xbc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5ab3f10, size 0xa8, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x5ab412c, size 0xa8, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x5ab44d0, size 0x84, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::ByRef<uint16_t> result);

  /// @brief Method TryParse, addr 0x5ab4614, size 0xac, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<uint16_t> result);

  /// @brief Method TryParse, addr 0x5ab4554, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint16_t> result);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<uint16_t>"
  constexpr ::System::IComparable_1<uint16_t>* i___System__IComparable_1_uint16_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<uint16_t>"
  constexpr ::System::IEquatable_1<uint16_t>* i___System__IEquatable_1_uint16_t_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt16();

  // Ctor Parameters [CppParam { name: "m_value", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr UInt16(uint16_t m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2503 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field m_value, offset: 0x0, size: 0x2, def value: None
  uint16_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UInt16, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UInt16, 0x2>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt16, "System", "UInt16");
