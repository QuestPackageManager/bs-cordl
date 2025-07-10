#pragma once
// IWYU pragma private; include "System/Boolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Dependencies System.IComparable, System.IComparable`1<T>, System.IConvertible, System.IEquatable`1<T>
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

  /// @brief Method CompareTo, addr 0x3d57a10, size 0xd4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x3d57ae4, size 0x28, virtual true, abstract: false, final true
  inline int32_t CompareTo(bool value);

  /// @brief Method Equals, addr 0x3d57984, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d579fc, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(bool obj);

  /// @brief Method GetHashCode, addr 0x3d578b4, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x3d58284, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method Parse, addr 0x3d57b0c, size 0xd8, virtual false, abstract: false, final false
  static inline bool Parse(::StringW value);

  /// @brief Method Parse, addr 0x3d57be4, size 0xc0, virtual false, abstract: false, final false
  static inline bool Parse(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x3d5828c, size 0x10, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x3d58384, size 0x5c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x3d5829c, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x3d587e4, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x3d58730, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x3d586b8, size 0x64, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x3d583e8, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x3d584b0, size 0x5c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x3d58578, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x3d58320, size 0x5c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x3d58640, size 0x64, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x3d58868, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x3d5844c, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x3d58514, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x3d585dc, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3d578c4, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3d57930, size 0x54, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TrimWhiteSpaceAndNull, addr 0x3d58068, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimWhiteSpaceAndNull(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method TryParse, addr 0x3d57fac, size 0xbc, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW value, ::ByRef<bool> result);

  /// @brief Method TryParse, addr 0x3d57ca4, size 0x308, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> value, ::ByRef<bool> result);

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

  // Ctor Parameters [CppParam { name: "m_value", ty: "bool", modifiers: "", def_value: None }]
  constexpr Boolean(bool m_value) noexcept;

  /// @brief Field False offset 0xffffffff size 0x4
  static constexpr int32_t False{ static_cast<int32_t>(0x0) };

  /// @brief Field FalseLiteral offset 0xffffffff size 0x8
  static constexpr ::ConstString FalseLiteral{ u"False" };

  /// @brief Field True offset 0xffffffff size 0x4
  static constexpr int32_t True{ static_cast<int32_t>(0x1) };

  /// @brief Field TrueLiteral offset 0xffffffff size 0x8
  static constexpr ::ConstString TrueLiteral{ u"True" };

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

static_assert(::cordl_internals::size_check_v<::System::Boolean, 0x1>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Boolean, "System", "Boolean");
