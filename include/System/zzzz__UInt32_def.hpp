#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32)
namespace System {
class IFormatProvider;
}
namespace System {
class IComparable;
}
namespace System {
class IFormattable;
}
namespace System {
struct TypeCode;
}
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
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct DateTime;
}
namespace System {
class ISpanFormattable;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct UInt32;
}
// Write type traits
MARK_VAL_T(::System::UInt32);
// Type: System::UInt32
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2497))
// CS Name: ::System::UInt32
struct CORDL_TYPE UInt32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<uint32_t>"
  constexpr operator ::System::IComparable_1<uint32_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<uint32_t>"
  constexpr operator ::System::IEquatable_1<uint32_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo addr 0x246f420 size 0xd0 virtual true final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo addr 0x246f4f0 size 0x1c virtual true final true
  inline int32_t CompareTo(uint32_t value);

  /// @brief Method Equals addr 0x246f50c size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x246f584 size 0x10 virtual true final true
  inline bool Equals(uint32_t obj);

  /// @brief Method GetHashCode addr 0x246f594 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x246f59c size 0x98 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x246f634 size 0x9c virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x246f6d0 size 0xb8 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat addr 0x246f788 size 0xa4 virtual true final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x246f82c size 0xb4 virtual false final false
  static inline uint32_t Parse(::StringW s);

  /// @brief Method Parse addr 0x246f8e0 size 0xc4 virtual false final false
  static inline uint32_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x246f9a4 size 0xd4 virtual false final false
  static inline uint32_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method TryParse addr 0x246fa78 size 0xf8 virtual false final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<uint32_t> result);

  /// @brief Method GetTypeCode addr 0x246fb70 size 0x8 virtual true final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x246fb78 size 0x5c virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x246fbd4 size 0x5c virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x246fc30 size 0x5c virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x246fc8c size 0x5c virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x246fce8 size 0x5c virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x246fd44 size 0x5c virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x246fda0 size 0x5c virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x246fdfc size 0x8 virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x246fe04 size 0x5c virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x246fe60 size 0x5c virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x246febc size 0x5c virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x246ff18 size 0x5c virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x246ff74 size 0x5c virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x246ffd0 size 0x8c virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x247005c size 0xac virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr UInt32(uint32_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt32();

  /// @brief Field m_value, offset: 0x0, size: 0x4, def value: None
  uint32_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxValue offset 0xffffffff size 0x4
  static constexpr uint32_t MaxValue{ static_cast<uint32_t>(0xffff00ffu) };

  /// @brief Field MinValue offset 0xffffffff size 0x4
  static constexpr uint32_t MinValue{ static_cast<uint32_t>(0xffffff00u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt32, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UInt32, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32, "System", "UInt32");
