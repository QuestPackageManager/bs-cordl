#pragma once
// IWYU pragma private; include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Byte)
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
struct Byte;
}
// Write type traits
MARK_VAL_T(::System::Byte);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Byte
struct CORDL_TYPE Byte {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<uint8_t>"
  constexpr operator ::System::IComparable_1<uint8_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<uint8_t>"
  constexpr operator ::System::IEquatable_1<uint8_t>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x5a01cf8, size 0x78, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x5a01d70, size 0xc, virtual true, abstract: false, final true
  inline int32_t CompareTo(uint8_t value);

  /// @brief Method Equals, addr 0x5a01d7c, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5a01db0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(uint8_t obj);

  /// @brief Method GetHashCode, addr 0x5a01dc0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x5a025bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method Parse, addr 0x5a01dc8, size 0x7c, virtual false, abstract: false, final false
  static inline uint8_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x5a01fe0, size 0x8c, virtual false, abstract: false, final false
  static inline uint8_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x5a01e44, size 0x19c, virtual false, abstract: false, final false
  static inline uint8_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x5a025c4, size 0x60, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x5a02750, size 0x8, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x5a02630, size 0x5c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x5a02b38, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x5a02a80, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x5a02a18, size 0x5c, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x5a02758, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x5a02820, size 0x5c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x5a028e8, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x5a02694, size 0x5c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x5a029b0, size 0x5c, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x5a02bbc, size 0x98, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x5a027bc, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x5a02884, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x5a0294c, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5a0225c, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5a022f8, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x5a02458, size 0xbc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5a023b0, size 0xa8, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x5a02514, size 0xa8, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x5a0206c, size 0x84, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::ByRef<uint8_t> result);

  /// @brief Method TryParse, addr 0x5a021b0, size 0xac, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<uint8_t> result);

  /// @brief Method TryParse, addr 0x5a020f0, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::ByRef<uint8_t> result);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<uint8_t>"
  constexpr ::System::IComparable_1<uint8_t>* i___System__IComparable_1_uint8_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<uint8_t>"
  constexpr ::System::IEquatable_1<uint8_t>* i___System__IEquatable_1_uint8_t_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Byte();

  // Ctor Parameters [CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr Byte(uint8_t m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  uint8_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Byte, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Byte, 0x1>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Byte, "System", "Byte");
