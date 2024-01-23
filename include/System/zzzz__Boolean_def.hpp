#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: System::Boolean
// SizeInfo { instance_size: 1, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2359))
// CS Name: ::System::Boolean
struct CORDL_TYPE Boolean {
public:
  // Declarations
  /// @brief Field TrueString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TrueString, put = setStaticF_TrueString))::StringW TrueString;

  /// @brief Field FalseString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FalseString, put = setStaticF_FalseString))::StringW FalseString;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert operator to "::System::IComparable_1<bool>"
  constexpr operator ::System::IComparable_1<bool>*();

  /// @brief Convert to "::System::IComparable_1<bool>"
  constexpr ::System::IComparable_1<bool>* i___System__IComparable_1_bool_();

  /// @brief Convert operator to "::System::IEquatable_1<bool>"
  constexpr operator ::System::IEquatable_1<bool>*();

  /// @brief Convert to "::System::IEquatable_1<bool>"
  constexpr ::System::IEquatable_1<bool>* i___System__IEquatable_1_bool_();

  static inline void setStaticF_TrueString(::StringW value);

  static inline ::StringW getStaticF_TrueString();

  static inline void setStaticF_FalseString(::StringW value);

  static inline ::StringW getStaticF_FalseString();

  /// @brief Method GetHashCode, addr 0x2522638, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2522648, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25226b4, size 0x4, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method Equals, addr 0x25226b8, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2522730, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(bool obj);

  /// @brief Method CompareTo, addr 0x2522744, size 0xd8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x252281c, size 0x28, virtual true, abstract: false, final true
  inline int32_t CompareTo(bool value);

  /// @brief Method Parse, addr 0x2522844, size 0xdc, virtual false, abstract: false, final false
  static inline bool Parse(::StringW value);

  /// @brief Method Parse, addr 0x2522920, size 0xc4, virtual false, abstract: false, final false
  static inline bool Parse(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method TryParse, addr 0x2522cd8, size 0xbc, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW value, ByRef<bool> result);

  /// @brief Method TryParse, addr 0x25229e4, size 0x2f4, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> value, ByRef<bool> result);

  /// @brief Method TrimWhiteSpaceAndNull, addr 0x2522d94, size 0x154, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimWhiteSpaceAndNull(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method GetTypeCode, addr 0x2522fa0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x2522fa8, size 0x10, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2522fb8, size 0x8c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x2523044, size 0x5c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x25230a8, size 0x5c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x252310c, size 0x5c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2523170, size 0x5c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x25231d4, size 0x5c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x2523238, size 0x5c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x252329c, size 0x5c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x2523300, size 0x5c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x2523364, size 0x64, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x25233dc, size 0x64, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x2523454, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x252350c, size 0x8c, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x2523598, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "bool", modifiers: "", def_value: None }]
  constexpr Boolean(bool m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Boolean();

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  bool m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field True offset 0xffffffff size 0x4
  static constexpr int32_t True{ static_cast<int32_t>(0x1) };

  /// @brief Field False offset 0xffffffff size 0x4
  static constexpr int32_t False{ static_cast<int32_t>(0x0) };

  /// @brief Field TrueLiteral offset 0xffffffff size 0x8
  static constexpr ::ConstString TrueLiteral{ u"True" };

  /// @brief Field FalseLiteral offset 0xffffffff size 0x8
  static constexpr ::ConstString FalseLiteral{ u"False" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Boolean, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Boolean, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Boolean, "System", "Boolean");
