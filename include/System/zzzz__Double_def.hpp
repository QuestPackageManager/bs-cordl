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
CORDL_MODULE_EXPORT(Double)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IComparable;
}
namespace System {
class IFormattable;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
struct TypeCode;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System {
struct Double;
}
// Write type traits
MARK_VAL_T(::System::Double);
// Type: System::Double
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2374))
// CS Name: ::System::Double
struct CORDL_TYPE Double {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<double_t>"
  constexpr operator ::System::IComparable_1<double_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<double_t>"
  constexpr operator ::System::IEquatable_1<double_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method IsFinite, addr 0x2595714, size 0x68, virtual false, abstract: false, final false
  static inline bool IsFinite(double_t d);

  /// @brief Method IsInfinity, addr 0x259577c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsInfinity(double_t d);

  /// @brief Method IsNaN, addr 0x25957e8, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsNaN(double_t d);

  /// @brief Method IsNegative, addr 0x2595854, size 0x60, virtual false, abstract: false, final false
  static inline bool IsNegative(double_t d);

  /// @brief Method IsNegativeInfinity, addr 0x25958b4, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeInfinity(double_t d);

  /// @brief Method IsPositiveInfinity, addr 0x25958c8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPositiveInfinity(double_t d);

  /// @brief Method CompareTo, addr 0x25958dc, size 0x17c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x2595a58, size 0xe4, virtual true, abstract: false, final true
  inline int32_t CompareTo(double_t value);

  /// @brief Method Equals, addr 0x2595b3c, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2595c54, size 0xd0, virtual true, abstract: false, final true
  inline bool Equals(double_t obj);

  /// @brief Method GetHashCode, addr 0x2595d24, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2595d94, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2595e10, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2595e98, size 0x8c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x2595f24, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x2595fb4, size 0xc0, virtual true, abstract: false, final true
  /// @param format: ::System::ReadOnlySpan_1<char16_t> (default: {})
  /// @param provider: ::System::IFormatProvider* (default: nullptr)
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format = {}, ::System::IFormatProvider* provider = nullptr);

  /// @brief Method Parse, addr 0x2596074, size 0xc4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x2596138, size 0xd4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x259620c, size 0xe4, virtual false, abstract: false, final false
  static inline double_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x25962f0, size 0x80, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ByRef<double_t> result);

  /// @brief Method TryParse, addr 0x2596820, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<double_t> result);

  /// @brief Method TryParse, addr 0x2596370, size 0x4b0, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<double_t> result);

  /// @brief Method GetTypeCode, addr 0x25968c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x25968d0, size 0x64, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2596934, size 0x8c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x25969c0, size 0x64, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x2596a24, size 0x64, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x2596a88, size 0x64, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2596aec, size 0x64, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x2596b50, size 0x64, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x2596bb4, size 0x64, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x2596c18, size 0x64, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x2596c7c, size 0x64, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x2596ce0, size 0x64, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x2596d44, size 0x8, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x2596d4c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x2596db0, size 0x8c, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x2596e3c, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: None }]
  constexpr Double(double_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Double();

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  double_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field MinValue offset 0xffffffff size 0x8
  static constexpr double_t MinValue{
    -179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
  };

  /// @brief Field MaxValue offset 0xffffffff size 0x8
  static constexpr double_t MaxValue{
    179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
  };

  /// @brief Field Epsilon offset 0xffffffff size 0x8
  static constexpr double_t Epsilon{
    0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005
  };

  /// @brief Field NegativeInfinity offset 0xffffffff size 0x8
  static constexpr double_t NegativeInfinity{ -INFINITY };

  /// @brief Field PositiveInfinity offset 0xffffffff size 0x8
  static constexpr double_t PositiveInfinity{ INFINITY };

  /// @brief Field NaN offset 0xffffffff size 0x8
  static constexpr double_t NaN{ NAN };

  /// @brief Field NegativeZero offset 0xffffffff size 0x8
  static constexpr double_t NegativeZero{ -0.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Double, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Double, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Double, "System", "Double");
