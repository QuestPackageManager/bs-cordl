#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int32)
namespace System {
struct Decimal;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class IConvertible;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
class IComparable;
}
namespace System {
struct TypeCode;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
class IFormattable;
}
namespace System {
class Type;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace System {
struct Int32;
}
// Write type traits
MARK_VAL_T(::System::Int32);
// Type: System::Int32
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2424))
// CS Name: ::System::Int32
struct CORDL_TYPE Int32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<int32_t>"
  constexpr operator ::System::IComparable_1<int32_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<int32_t>"
  constexpr operator ::System::IEquatable_1<int32_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x25ab134, size 0xd0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x25ab204, size 0x1c, virtual true, abstract: false, final true
  inline int32_t CompareTo(int32_t value);

  /// @brief Method Equals, addr 0x25ab220, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x25ab298, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(int32_t obj);

  /// @brief Method GetHashCode, addr 0x25ab2a8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x25ab2b0, size 0x94, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25ab344, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x25ab3f4, size 0x98, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x25ab48c, size 0xb4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x25ab540, size 0xa0, virtual true, abstract: false, final true
  /// @param format: ::System::ReadOnlySpan_1<char16_t> (default: {})
  /// @param provider: ::System::IFormatProvider* (default: nullptr)
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format = {}, ::System::IFormatProvider* provider = nullptr);

  /// @brief Method Parse, addr 0x25ab5e0, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x25ab6a0, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t Parse(::StringW s, ::System::Globalization::NumberStyles style);

  /// @brief Method Parse, addr 0x25ab778, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x25ab848, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x25ab928, size 0x9c, virtual false, abstract: false, final false
  /// @param style: ::System::Globalization::NumberStyles (default: static_cast<int32_t>(0x7))
  /// @param provider: ::System::IFormatProvider* (default: nullptr)
  static inline int32_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style = static_cast<int32_t>(0x7), ::System::IFormatProvider* provider = nullptr);

  /// @brief Method TryParse, addr 0x25ab9c4, size 0xd0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ByRef<int32_t> result);

  /// @brief Method TryParse, addr 0x25aba94, size 0x84, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> result);

  /// @brief Method TryParse, addr 0x25abb18, size 0xf4, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int32_t> result);

  /// @brief Method TryParse, addr 0x25abc0c, size 0xa4, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int32_t> result);

  /// @brief Method GetTypeCode, addr 0x25abcb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x25abcb8, size 0x5c, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x25abd14, size 0x5c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x25abd70, size 0x5c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x25abdcc, size 0x5c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x25abe28, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x25abe84, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x25abee0, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x25abee8, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x25abf44, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x25abfa0, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x25abffc, size 0x5c, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x25ac058, size 0x5c, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x25ac0b4, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x25ac110, size 0x88, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x25ac198, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Int32(int32_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int32();

  /// @brief Field m_value, offset: 0x0, size: 0x4, def value: None
  int32_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxValue offset 0xffffffff size 0x4
  static constexpr int32_t MaxValue{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field MinValue offset 0xffffffff size 0x4
  static constexpr int32_t MinValue{ static_cast<int32_t>(0x80000000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int32, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Int32, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int32, "System", "Int32");
