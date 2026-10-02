#pragma once
// IWYU pragma private; include "System/Boolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Boolean)
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
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Boolean;
}
// Write type traits
MARK_VAL_T(::System::Boolean);
DEFINE_IL2CPP_CLASS(::System::Boolean, "System", "Boolean");
// [IsReadOnly]
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Boolean
struct CORDL_TYPE Boolean {
public:
  // Declarations
  /// @brief Field FalseString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FalseString, put = setStaticF_FalseString)) ::StringW FalseString;

  /// @brief Field TrueString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TrueString, put = setStaticF_TrueString)) ::StringW TrueString;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<bool>"
  constexpr operator ::System::IComparable_1<bool>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<bool>"
  constexpr operator ::System::IEquatable_1<bool>*();

  /// @brief Method CompareTo, addr 0x5fc8654, size 0x88, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x5fc86dc, size 0x20, virtual true, abstract: false, final true
  inline int32_t CompareTo(bool value);

  /// @brief Method Equals, addr 0x5fc860c, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [NonVersionable]
  /// @brief Method Equals, addr 0x5fc8640, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(bool obj);

  /// @brief Method GetHashCode, addr 0x5fc8554, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x5fc8db0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method Parse, addr 0x5fc86fc, size 0xa8, virtual false, abstract: false, final false
  static inline bool Parse(::StringW value);

  /// @brief Method Parse, addr 0x5fc87a4, size 0x94, virtual false, abstract: false, final false
  static inline bool Parse(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x5fc8db8, size 0x10, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x5fc8eb4, size 0x60, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x5fc8dc8, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x5fc9340, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x5fc9284, size 0x60, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x5fc9208, size 0x68, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x5fc8f1c, size 0x60, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x5fc8fec, size 0x60, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x5fc90bc, size 0x60, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x5fc8e4c, size 0x60, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x5fc918c, size 0x68, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x5fc93c4, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x5fc8f84, size 0x60, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x5fc9054, size 0x60, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x5fc9124, size 0x60, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x5fc8564, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5fc85e0, size 0x2c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TrimWhiteSpaceAndNull, addr 0x5fc8bdc, size 0x144, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimWhiteSpaceAndNull(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method TryParse, addr 0x5fc8b54, size 0x88, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW value, ::by_ref<bool> result);

  /// @brief Method TryParse, addr 0x5fc8838, size 0x31c, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> value, ::by_ref<bool> result);

  static inline ::StringW getStaticF_FalseString();

  static inline ::StringW getStaticF_TrueString();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<bool>"
  constexpr ::System::IComparable_1<bool>* i___System__IComparable_1_bool_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<bool>"
  constexpr ::System::IEquatable_1<bool>* i___System__IEquatable_1_bool_();

  static inline void setStaticF_FalseString(::StringW value);

  static inline void setStaticF_TrueString(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Boolean();

  // Ctor Parameters [CppParam { name: "m_value", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr Boolean(bool m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  bool m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Boolean, m_value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Boolean) == 0x1, "Size mismatch!");

} // namespace System
