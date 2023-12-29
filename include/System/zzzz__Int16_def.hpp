#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int16)
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
struct TypeCode;
}
namespace System {
struct Decimal;
}
namespace System {
class Type;
}
namespace System {
class ISpanFormattable;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System {
struct Int16;
}
// Write type traits
MARK_VAL_T(::System::Int16);
// Type: System::Int16
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2421))
// CS Name: ::System::Int16
struct CORDL_TYPE Int16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<int16_t>"
  constexpr operator ::System::IComparable_1<int16_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<int16_t>"
  constexpr operator ::System::IEquatable_1<int16_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo addr 0x244d0ac size 0xc0 virtual true final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo addr 0x244d16c size 0xc virtual true final true
  inline int32_t CompareTo(int16_t value);

  /// @brief Method Equals addr 0x244d178 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x244d1f0 size 0x10 virtual true final true
  inline bool Equals(int16_t obj);

  /// @brief Method GetHashCode addr 0x244d200 size 0xc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x244d20c size 0x94 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x244d660 size 0x98 virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x244d6f8 size 0x174 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat addr 0x244dbdc size 0x114 virtual true final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x244e4e8 size 0x8c virtual false final false
  static inline int16_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x244e718 size 0xa4 virtual false final false
  static inline int16_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x244e574 size 0x1a4 virtual false final false
  static inline int16_t Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method TryParse addr 0x244e994 size 0xa8 virtual false final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int16_t> result);

  /// @brief Method TryParse addr 0x244ea3c size 0xc4 virtual false final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<int16_t> result);

  /// @brief Method GetTypeCode addr 0x244ec8c size 0x8 virtual true final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x244ec94 size 0x5c virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x244ecf0 size 0x5c virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x244ed4c size 0x5c virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x244eda8 size 0x5c virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x244ee04 size 0x8 virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x244ee0c size 0x5c virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x244ee68 size 0x5c virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x244eec4 size 0x5c virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x244ef20 size 0x5c virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x244ef7c size 0x5c virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x244efd8 size 0x5c virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x244f034 size 0x5c virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x244f090 size 0x5c virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x244f0ec size 0x88 virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x244f198 size 0xac virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr Int16(int16_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int16();

  /// @brief Field m_value, offset: 0x0, size: 0x2, def value: None
  int16_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field MaxValue offset 0xffffffff size 0x2
  static constexpr int16_t MaxValue{ static_cast<int16_t>(0x7fff) };

  /// @brief Field MinValue offset 0xffffffff size 0x2
  static constexpr int16_t MinValue{ static_cast<int16_t>(0x8000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int16, 0x2>, "Size mismatch!");

static_assert(offsetof(::System::Int16, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int16, "System", "Int16");
