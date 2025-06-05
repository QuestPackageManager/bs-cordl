#pragma once
// IWYU pragma private; include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Single)
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
class IFormatProvider;
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
struct Single;
}
// Write type traits
MARK_VAL_T(::System::Single);
// Dependencies System.IComparable, System.IComparable`1<T>, System.IConvertible, System.IEquatable`1<T>, System.IFormattable, System.ISpanFormattable
namespace System {
// Is value type: true
// CS Name: System.Single
struct CORDL_TYPE Single {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<float_t>"
  constexpr operator ::System::IComparable_1<float_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<float_t>"
  constexpr operator ::System::IEquatable_1<float_t>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x3dfda34, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x3dfdb38, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(float_t value);

  /// @brief Method Equals, addr 0x3dfdb94, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3dfdc40, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(float_t obj);

  /// @brief Method GetHashCode, addr 0x3dfdc8c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x3dfe648, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsFinite, addr 0x3dfd9c8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsFinite(float_t f);

  /// @brief Method IsInfinity, addr 0x3dfd9dc, size 0x18, virtual false, abstract: false, final false
  static inline bool IsInfinity(float_t f);

  /// @brief Method IsNaN, addr 0x3dfd9f4, size 0x18, virtual false, abstract: false, final false
  static inline bool IsNaN(float_t f);

  /// @brief Method IsNegativeInfinity, addr 0x3dfda0c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeInfinity(float_t f);

  /// @brief Method IsPositiveInfinity, addr 0x3dfda20, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPositiveInfinity(float_t f);

  /// @brief Method Parse, addr 0x3dfdf84, size 0xb4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s);

  /// @brief Method Parse, addr 0x3dfe038, size 0xc4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x3dfe0fc, size 0xd4, virtual false, abstract: false, final false
  static inline float_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x3dfe650, size 0x64, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x3dfe79c, size 0x64, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x3dfe6b4, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x3dfeb28, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x3dfeac4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x3dfea60, size 0x64, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x3dfe800, size 0x64, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x3dfe8c8, size 0x64, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x3dfe990, size 0x64, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x3dfe738, size 0x64, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x3dfea58, size 0x8, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x3dfebac, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x3dfe864, size 0x64, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x3dfe92c, size 0x64, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x3dfe9f4, size 0x64, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3dfdca4, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3dfddac, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x3dfde34, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3dfdd20, size 0x8c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x3dfdec4, size 0xc0, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x3dfe1d0, size 0x80, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x3dfe544, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x3dfe508, size 0x3c, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x3dfe250, size 0x2b8, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::ByRef<float_t> result);

  /// @brief Method TryParse, addr 0x3dfe5ec, size 0x5c, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<float_t> result);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<float_t>"
  constexpr ::System::IComparable_1<float_t>* i___System__IComparable_1_float_t_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<float_t>"
  constexpr ::System::IEquatable_1<float_t>* i___System__IEquatable_1_float_t_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Single();

  // Ctor Parameters [CppParam { name: "m_value", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Single(float_t m_value) noexcept;

  /// @brief Field Epsilon offset 0xffffffff size 0x4
  static constexpr float_t Epsilon{ static_cast<float_t>(1e-45f) };

  /// @brief Field MaxValue offset 0xffffffff size 0x4
  static constexpr float_t MaxValue{ static_cast<float_t>(3.4028235e38f) };

  /// @brief Field MinValue offset 0xffffffff size 0x4
  static constexpr float_t MinValue{ static_cast<float_t>(-3.4028235e38f) };

  /// @brief Field NaN offset 0xffffffff size 0x4
  static constexpr float_t NaN{ NAN };

  /// @brief Field NegativeInfinity offset 0xffffffff size 0x4
  static constexpr float_t NegativeInfinity{ -INFINITY };

  /// @brief Field NegativeZero offset 0xffffffff size 0x4
  static constexpr float_t NegativeZero{ static_cast<float_t>(-0.0f) };

  /// @brief Field PositiveInfinity offset 0xffffffff size 0x4
  static constexpr float_t PositiveInfinity{ INFINITY };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2468 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_value, offset: 0x0, size: 0x4, def value: None
  float_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Single, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Single, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Single, "System", "Single");
