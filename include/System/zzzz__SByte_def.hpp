#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SByte)
namespace System {
class Object;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IConvertible;
}
namespace System {
class IComparable;
}
namespace System {
struct TypeCode;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System {
struct SByte;
}
// Write type traits
MARK_VAL_T(::System::SByte);
// Type: System::SByte
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2467))
// CS Name: ::System::SByte
struct CORDL_TYPE SByte {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<int8_t>"
  constexpr operator ::System::IComparable_1<int8_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<int8_t>"
  constexpr operator ::System::IEquatable_1<int8_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x25c04f0, size 0xc0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x25c05b0, size 0xc, virtual true, abstract: false, final true
  inline int32_t CompareTo(int8_t value);

  /// @brief Method Equals, addr 0x25c05bc, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x25c0634, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(int8_t obj);

  /// @brief Method GetHashCode, addr 0x25c0644, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x25c0650, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25c06e8, size 0x9c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x25c0784, size 0x17c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x25c0900, size 0x11c, virtual true, abstract: false, final true
  /// @param format: ::System::ReadOnlySpan_1<char16_t> (default: {})
  /// @param provider: ::System::IFormatProvider* (default: nullptr)
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format = {}, ::System::IFormatProvider* provider = nullptr);

  /// @brief Method Parse, addr 0x25c0a1c, size 0x78, virtual false, abstract: false, final false
  static inline int8_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x25c0c58, size 0x90, virtual false, abstract: false, final false
  static inline int8_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x25c0ab8, size 0x1a0, virtual false, abstract: false, final false
  static inline int8_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryParse, addr 0x25c0ce8, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int8_t> result);

  /// @brief Method TryParse, addr 0x25c0d90, size 0xc8, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<int8_t> result);

  /// @brief Method GetTypeCode, addr 0x25c0e58, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x25c0e60, size 0x5c, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x25c0ebc, size 0x5c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x25c0f18, size 0x8, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x25c0f20, size 0x5c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x25c0f7c, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x25c0fd8, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x25c1034, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x25c103c, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x25c1098, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x25c10f4, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x25c1150, size 0x5c, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x25c11ac, size 0x5c, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x25c1208, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x25c1264, size 0x8c, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x25c12f0, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr SByte(int8_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SByte();

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  int8_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field MaxValue offset 0xffffffff size 0x1
  static constexpr int8_t MaxValue{ static_cast<int8_t>(0x7f) };

  /// @brief Field MinValue offset 0xffffffff size 0x1
  static constexpr int8_t MinValue{ static_cast<int8_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SByte, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::SByte, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::SByte, "System", "SByte");
