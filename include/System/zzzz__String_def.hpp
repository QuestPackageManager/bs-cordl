#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(String)
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> struct ValueListBuilder_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class ICloneable;
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
struct ParamsArray;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct StringComparison;
}
namespace System {
struct StringSplitOptions;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
struct __String__ProbabilisticMap;
}
namespace System {
struct __String__TrimType;
}
// Forward declare root types
namespace System {
struct __String__TrimType;
}
namespace System {
class String;
}
namespace System {
struct __String__ProbabilisticMap;
}
// Write type traits
MARK_VAL_T(::System::__String__TrimType);
MARK_REF_PTR_T(::System::String);
MARK_VAL_T(::System::__String__ProbabilisticMap);
// Type: ::TrimType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2310))
// CS Name: ::String::TrimType
struct CORDL_TYPE __String__TrimType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____String__TrimType_Unwrapped
  enum struct ____String__TrimType_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_Tail = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____String__TrimType_Unwrapped() const noexcept {
    return static_cast<____String__TrimType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __String__TrimType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __String__TrimType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Head value: static_cast<int32_t>(0x0)
  static ::System::__String__TrimType const Head;

  /// @brief Field Tail value: static_cast<int32_t>(0x1)
  static ::System::__String__TrimType const Tail;

  /// @brief Field Both value: static_cast<int32_t>(0x2)
  static ::System::__String__TrimType const Both;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__String__TrimType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__String__TrimType, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::ProbabilisticMap
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: Some(1), specified_packing: Some(0) }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2311))
// CS Name: ::String::ProbabilisticMap
#pragma pack(push, 0)
struct CORDL_TYPE __String__ProbabilisticMap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __String__ProbabilisticMap();

  /// @brief Size padding 0x20 - 0x0 = 0x20, packed as 0x20
  uint8_t _cordl_size_padding[0x20];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__String__ProbabilisticMap, 0x20>, "Size mismatch!");

} // namespace System
// Type: System::String
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 22, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2312))
// CS Name: ::System::String*
class CORDL_TYPE String : public ::System::Object {
public:
  // Declarations
  using ProbabilisticMap = ::System::__String__ProbabilisticMap;

  using TrimType = ::System::__String__TrimType;

  /// @brief Field _stringLength, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__stringLength, put = __cordl_internal_set__stringLength)) int32_t _stringLength;

  /// @brief Field _firstChar, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get__firstChar, put = __cordl_internal_set__firstChar)) char16_t _firstChar;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::StringW Empty;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Chars)) char16_t Chars[];

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::StringW>"
  constexpr operator ::System::IComparable_1<::StringW>*() noexcept;

  /// @brief Convert to "::System::IComparable_1<::StringW>"
  constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::StringW>"
  constexpr operator ::System::IEquatable_1<::StringW>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::StringW>"
  constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() noexcept;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*() noexcept;

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr int32_t& __cordl_internal_get__stringLength();

  constexpr int32_t const& __cordl_internal_get__stringLength() const;

  constexpr void __cordl_internal_set__stringLength(int32_t value);

  constexpr char16_t& __cordl_internal_get__firstChar();

  constexpr char16_t const& __cordl_internal_get__firstChar() const;

  constexpr void __cordl_internal_set__firstChar(char16_t value);

  static inline void setStaticF_Empty(::StringW value);

  static inline ::StringW getStaticF_Empty();

  /// @brief Method EqualsHelper, addr 0x244c8a8, size 0x2c, virtual false, abstract: false, final false
  static inline bool EqualsHelper(::StringW strA, ::StringW strB);

  /// @brief Method CompareOrdinalHelper, addr 0x244c8dc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalHelper(::StringW strA, int32_t indexA, int32_t countA, ::StringW strB, int32_t indexB, int32_t countB);

  /// @brief Method CompareOrdinalHelper, addr 0x244c914, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalHelper(::StringW strA, ::StringW strB);

  /// @brief Method Compare, addr 0x244cab8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, ::StringW strB);

  /// @brief Method Compare, addr 0x244cd58, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase);

  /// @brief Method Compare, addr 0x244cac0, size 0x298, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, ::System::StringComparison comparisonType);

  /// @brief Method Compare, addr 0x244cd7c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, ::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x244ce18, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Compare, addr 0x244ce28, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length);

  /// @brief Method Compare, addr 0x244ce30, size 0x140, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, bool ignoreCase);

  /// @brief Method Compare, addr 0x244cf70, size 0x428, virtual false, abstract: false, final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, ::System::StringComparison comparisonType);

  /// @brief Method CompareOrdinal, addr 0x244d398, size 0x44, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::StringW strA, ::StringW strB);

  /// @brief Method CompareOrdinal, addr 0x244d3dc, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB);

  /// @brief Method CompareOrdinal, addr 0x244d47c, size 0x208, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinal(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length);

  /// @brief Method CompareTo, addr 0x244d684, size 0xc0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x244d744, size 0x8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW strB);

  /// @brief Method EndsWith, addr 0x244d74c, size 0x8, virtual false, abstract: false, final false
  inline bool EndsWith(::StringW value);

  /// @brief Method EndsWith, addr 0x244d754, size 0x2a4, virtual false, abstract: false, final false
  inline bool EndsWith(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method EndsWith, addr 0x244d9f8, size 0x50, virtual false, abstract: false, final false
  inline bool EndsWith(char16_t value);

  /// @brief Method Equals, addr 0x244da48, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x244daec, size 0x40, virtual true, abstract: false, final true
  inline bool Equals(::StringW value);

  /// @brief Method Equals, addr 0x244db2c, size 0x284, virtual false, abstract: false, final false
  inline bool Equals(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method Equals, addr 0x244ddb0, size 0x4c, virtual false, abstract: false, final false
  static inline bool Equals(::StringW a, ::StringW b);

  /// @brief Method Equals, addr 0x244ddfc, size 0x284, virtual false, abstract: false, final false
  static inline bool Equals(::StringW a, ::StringW b, ::System::StringComparison comparisonType);

  /// @brief Method op_Equality, addr 0x244e080, size 0x4, virtual false, abstract: false, final false
  static inline bool op_Equality(::StringW a, ::StringW b);

  /// @brief Method op_Inequality, addr 0x244e084, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::StringW a, ::StringW b);

  /// @brief Method GetHashCode, addr 0x244e09c, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLegacyNonRandomizedHashCode, addr 0x244e0a0, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetLegacyNonRandomizedHashCode();

  /// @brief Method StartsWith, addr 0x244e0f0, size 0x5c, virtual false, abstract: false, final false
  inline bool StartsWith(::StringW value);

  /// @brief Method StartsWith, addr 0x244e14c, size 0x2bc, virtual false, abstract: false, final false
  inline bool StartsWith(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method CheckStringComparison, addr 0x244cd60, size 0x1c, virtual false, abstract: false, final false
  static inline void CheckStringComparison(::System::StringComparison comparisonType);

  /// @brief Method FillStringChecked, addr 0x244e408, size 0x7c, virtual false, abstract: false, final false
  static inline void FillStringChecked(::StringW dest, int32_t destPos, ::StringW src);

  /// @brief Method Concat, addr 0x244e490, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW Concat(::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Concat, addr 0x244e538, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW Concat(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Concat, addr 0x244e6dc, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW Concat(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Concat, addr 0x24453e8, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1);

  /// @brief Method Concat, addr 0x244e61c, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2);

  /// @brief Method Concat, addr 0x244e954, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2, ::StringW str3);

  /// @brief Method Concat, addr 0x244ea5c, size 0x210, virtual false, abstract: false, final false
  static inline ::StringW Concat(::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method Format, addr 0x2446040, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0);

  /// @brief Method Format, addr 0x244ed3c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Format, addr 0x244ed80, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Format, addr 0x244edc4, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Format, addr 0x244ee74, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0);

  /// @brief Method Format, addr 0x244eec8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Format, addr 0x244ef20, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Format, addr 0x244ef7c, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FormatHelper, addr 0x244ec6c, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW FormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args);

  /// @brief Method Insert, addr 0x244f034, size 0x144, virtual false, abstract: false, final false
  inline ::StringW Insert(int32_t startIndex, ::StringW value);

  /// @brief Method Join, addr 0x244f178, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW Join(char16_t separator, ::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW Join(char16_t separator, ::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method Join, addr 0x244f1f8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW Join(char16_t separator, ::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t startIndex, int32_t count);

  /// @brief Method Join, addr 0x244f5e0, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW Join(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method Join, addr 0x244f6c4, size 0x4d4, virtual false, abstract: false, final false
  static inline ::StringW Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method Join, addr 0x244f644, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW Join(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t startIndex, int32_t count);

  /// @brief Method JoinCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW JoinCore(::cordl_internals::Ptr<char16_t> separator, int32_t separatorLength, ::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method JoinCore, addr 0x244f220, size 0x3c0, virtual false, abstract: false, final false
  static inline ::StringW JoinCore(::cordl_internals::Ptr<char16_t> separator, int32_t separatorLength, ::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t startIndex, int32_t count);

  /// @brief Method PadLeft, addr 0x244fb98, size 0xe0, virtual false, abstract: false, final false
  inline ::StringW PadLeft(int32_t totalWidth, char16_t paddingChar);

  /// @brief Method PadRight, addr 0x244fc78, size 0xe8, virtual false, abstract: false, final false
  inline ::StringW PadRight(int32_t totalWidth, char16_t paddingChar);

  /// @brief Method Remove, addr 0x244fd60, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW Remove(int32_t startIndex, int32_t count);

  /// @brief Method Remove, addr 0x244ff08, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW Remove(int32_t startIndex);

  /// @brief Method Replace, addr 0x2450170, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW Replace(char16_t oldChar, char16_t newChar);

  /// @brief Method Replace, addr 0x2450248, size 0x338, virtual false, abstract: false, final false
  inline ::StringW Replace(::StringW oldValue, ::StringW newValue);

  /// @brief Method ReplaceHelper, addr 0x2450580, size 0x358, virtual false, abstract: false, final false
  inline ::StringW ReplaceHelper(int32_t oldValueLength, ::StringW newValue, ::System::ReadOnlySpan_1<int32_t> indices);

  /// @brief Method Split, addr 0x24508d8, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(char16_t separator, ::System::StringSplitOptions options);

  /// @brief Method Split, addr 0x2450c94, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator);

  /// @brief Method Split, addr 0x2450d08, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, int32_t count);

  /// @brief Method Split, addr 0x2450d80, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, ::System::StringSplitOptions options);

  /// @brief Method Split, addr 0x2450df8, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal, addr 0x2450938, size 0x35c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::System::ReadOnlySpan_1<char16_t> separators, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method Split, addr 0x2451860, size 0x14, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<::StringW, ::Array<::StringW>*> separator, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal, addr 0x2451874, size 0x440, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> separators, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal, addr 0x2451cb4, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::StringW separator, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitKeepEmptyEntries, addr 0x2451344, size 0x230, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitKeepEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count);

  /// @brief Method SplitOmitEmptyEntries, addr 0x2451574, size 0x2ec, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitOmitEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count);

  /// @brief Method MakeSeparatorList, addr 0x2450e7c, size 0x4c8, virtual false, abstract: false, final false
  inline void MakeSeparatorList(::System::ReadOnlySpan_1<char16_t> separators, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder);

  /// @brief Method MakeSeparatorList, addr 0x2452244, size 0x2e0, virtual false, abstract: false, final false
  inline void MakeSeparatorList(::StringW separator, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder);

  /// @brief Method MakeSeparatorList, addr 0x2451eb0, size 0x394, virtual false, abstract: false, final false
  inline void MakeSeparatorList(::ArrayW<::StringW, ::Array<::StringW>*> separators, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder,
                                ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> lengthListBuilder);

  /// @brief Method Substring, addr 0x2452524, size 0xc, virtual false, abstract: false, final false
  inline ::StringW Substring(int32_t startIndex);

  /// @brief Method Substring, addr 0x244ffc8, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW Substring(int32_t startIndex, int32_t length);

  /// @brief Method InternalSubString, addr 0x245261c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW InternalSubString(int32_t startIndex, int32_t length);

  /// @brief Method ToLower, addr 0x2452674, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToLower();

  /// @brief Method ToLower, addr 0x24526f0, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToLower(::System::Globalization::CultureInfo* culture);

  /// @brief Method ToLowerInvariant, addr 0x2452778, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToLowerInvariant();

  /// @brief Method ToUpper, addr 0x24527f4, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToUpper();

  /// @brief Method ToUpper, addr 0x2452870, size 0x88, virtual false, abstract: false, final false
  inline ::StringW ToUpper(::System::Globalization::CultureInfo* culture);

  /// @brief Method ToUpperInvariant, addr 0x24528f8, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToUpperInvariant();

  /// @brief Method Trim, addr 0x2452974, size 0x8, virtual false, abstract: false, final false
  inline ::StringW Trim();

  /// @brief Method Trim, addr 0x2452ab4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW Trim(char16_t trimChar);

  /// @brief Method Trim, addr 0x2452c0c, size 0x34, virtual false, abstract: false, final false
  inline ::StringW Trim(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimStart, addr 0x2452c40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW TrimStart();

  /// @brief Method TrimStart, addr 0x2452c48, size 0x20, virtual false, abstract: false, final false
  inline ::StringW TrimStart(char16_t trimChar);

  /// @brief Method TrimStart, addr 0x2452c68, size 0x34, virtual false, abstract: false, final false
  inline ::StringW TrimStart(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimEnd, addr 0x2452c9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW TrimEnd();

  /// @brief Method TrimEnd, addr 0x2452ca4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW TrimEnd(char16_t trimChar);

  /// @brief Method TrimEnd, addr 0x2452cc4, size 0x34, virtual false, abstract: false, final false
  inline ::StringW TrimEnd(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimWhiteSpaceHelper, addr 0x245297c, size 0x138, virtual false, abstract: false, final false
  inline ::StringW TrimWhiteSpaceHelper(::System::__String__TrimType trimType);

  /// @brief Method TrimHelper, addr 0x2452ad4, size 0x138, virtual false, abstract: false, final false
  inline ::StringW TrimHelper(::cordl_internals::Ptr<char16_t> trimChars, int32_t trimCharsLength, ::System::__String__TrimType trimType);

  /// @brief Method CreateTrimmedString, addr 0x2452cf8, size 0x90, virtual false, abstract: false, final false
  inline ::StringW CreateTrimmedString(int32_t start, int32_t end);

  /// @brief Method Contains, addr 0x2452d88, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(::StringW value);

  /// @brief Method Contains, addr 0x2452dbc, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method Contains, addr 0x2452de0, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(char16_t value);

  /// @brief Method IndexOf, addr 0x2452e04, size 0x10, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value);

  /// @brief Method IndexOf, addr 0x2452e14, size 0xc, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex);

  /// @brief Method IndexOf, addr 0x2452e20, size 0xe0, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny, addr 0x2452f00, size 0xc, virtual false, abstract: false, final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method IndexOfAny, addr 0x24530d0, size 0xc, virtual false, abstract: false, final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex);

  /// @brief Method IndexOfAny, addr 0x2452f0c, size 0x1c4, virtual false, abstract: false, final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny, addr 0x24530dc, size 0x84, virtual false, abstract: false, final false
  inline int32_t IndexOfAny(char16_t value1, char16_t value2, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny, addr 0x2453160, size 0x54, virtual false, abstract: false, final false
  inline int32_t IndexOfAny(char16_t value1, char16_t value2, char16_t value3, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfCharArray, addr 0x24531b4, size 0x168, virtual false, abstract: false, final false
  inline int32_t IndexOfCharArray(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method InitializeProbabilisticMap, addr 0x2452530, size 0xc8, virtual false, abstract: false, final false
  static inline void InitializeProbabilisticMap(::cordl_internals::Ptr<uint32_t> charMap, ::System::ReadOnlySpan_1<char16_t> anyOf);

  /// @brief Method ArrayContains, addr 0x245331c, size 0x4c, virtual false, abstract: false, final false
  static inline bool ArrayContains(char16_t searchChar, ::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method IsCharBitSet, addr 0x24525f8, size 0x24, virtual false, abstract: false, final false
  static inline bool IsCharBitSet(::cordl_internals::Ptr<uint32_t> charMap, uint8_t value);

  /// @brief Method SetCharBit, addr 0x2453368, size 0x24, virtual false, abstract: false, final false
  static inline void SetCharBit(::cordl_internals::Ptr<uint32_t> charMap, uint8_t value);

  /// @brief Method IndexOf, addr 0x245338c, size 0x10, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value);

  /// @brief Method IndexOf, addr 0x245339c, size 0x10, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex);

  /// @brief Method IndexOf, addr 0x2452dac, size 0x10, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method IndexOf, addr 0x24533ac, size 0x10, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex, ::System::StringComparison comparisonType);

  /// @brief Method IndexOf, addr 0x24533bc, size 0x338, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType);

  /// @brief Method LastIndexOf, addr 0x24536f4, size 0x10, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value);

  /// @brief Method LastIndexOf, addr 0x2453704, size 0x8, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex);

  /// @brief Method LastIndexOf, addr 0x245370c, size 0xec, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfAny, addr 0x24537f8, size 0xc, virtual false, abstract: false, final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method LastIndexOfAny, addr 0x245393c, size 0x8, virtual false, abstract: false, final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex);

  /// @brief Method LastIndexOfAny, addr 0x2453804, size 0x138, virtual false, abstract: false, final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfCharArray, addr 0x2453944, size 0x168, virtual false, abstract: false, final false
  inline int32_t LastIndexOfCharArray(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf, addr 0x2453aac, size 0x10, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(::StringW value);

  /// @brief Method LastIndexOf, addr 0x2453e50, size 0x10, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method LastIndexOf, addr 0x2453abc, size 0x394, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType);

  static inline ::System::String* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor, addr 0x2453e60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Ctor, addr 0x2453e64, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::System::String* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor, addr 0x2453ef4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor, addr 0x2453ef8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor, addr 0x24540b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor, addr 0x24540b8, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<char16_t> ptr, int32_t startIndex, int32_t length);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor, addr 0x2454248, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor, addr 0x245424c, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateStringForSByteConstructor, addr 0x24543d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW CreateStringForSByteConstructor(::cordl_internals::Ptr<uint8_t> pb, int32_t numBytes);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method .ctor, addr 0x2454450, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method Ctor, addr 0x2454454, size 0x1e4, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  static inline ::System::String* New_ctor(char16_t c, int32_t count);

  /// @brief Method .ctor, addr 0x2454648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(char16_t c, int32_t count);

  /// @brief Method Ctor, addr 0x245464c, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW Ctor(char16_t c, int32_t count);

  static inline ::System::String* New_ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method .ctor, addr 0x245476c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Ctor, addr 0x2454770, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW Ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline ::StringW Create(int32_t length, TState state, ::System::Buffers::SpanAction_2<char16_t, TState>* action);

  /// @brief Method op_Implicit, addr 0x2454830, size 0x50, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> op_Implicit___System__ReadOnlySpan_1_char16_t_(::StringW value);

  /// @brief Method Clone, addr 0x2454880, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Copy, addr 0x2454884, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW Copy(::StringW str);

  /// @brief Method CopyTo, addr 0x245491c, size 0x188, virtual false, abstract: false, final false
  inline void CopyTo(int32_t sourceIndex, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ToCharArray, addr 0x2454aa4, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ToCharArray();

  /// @brief Method IsNullOrEmpty, addr 0x244e938, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::StringW value);

  /// @brief Method IsNullOrWhiteSpace, addr 0x2454b80, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsNullOrWhiteSpace(::StringW value);

  /// @brief Method GetRawStringData, addr 0x244c8d4, size 0x8, virtual false, abstract: false, final false
  inline ByRef<char16_t> GetRawStringData();

  /// @brief Method CreateStringFromEncoding, addr 0x2454c30, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW CreateStringFromEncoding(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteLength, ::System::Text::Encoding* encoding);

  /// @brief Method CreateFromChar, addr 0x2454cf8, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW CreateFromChar(char16_t c);

  /// @brief Method wstrcpy, addr 0x244e484, size 0xc, virtual false, abstract: false, final false
  static inline void wstrcpy(::cordl_internals::Ptr<char16_t> dmem, ::cordl_internals::Ptr<char16_t> smem, int32_t charCount);

  /// @brief Method ToString, addr 0x2454d1c, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2454d20, size 0x4, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0x2454d24, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2454d88, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method wcslen, addr 0x2454dec, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t wcslen(::cordl_internals::Ptr<char16_t> ptr);

  /// @brief Method GetTypeCode, addr 0x2454ef8, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x2454f00, size 0x68, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2454f68, size 0x68, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x2454fd0, size 0x68, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x2455038, size 0x68, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x24550a0, size 0x68, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2455108, size 0x68, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x2455170, size 0x68, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x24551d8, size 0x68, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x2455240, size 0x68, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x24552a8, size 0x68, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x2455310, size 0x68, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x2455378, size 0x68, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x24553e0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x2455448, size 0x68, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x24554b0, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method Normalize, addr 0x2455520, size 0x68, virtual false, abstract: false, final false
  inline ::StringW Normalize(::System::Text::NormalizationForm normalizationForm);

  /// @brief Method get_Length, addr 0x2455588, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method IndexOfUnchecked, addr 0x2455590, size 0xd4, virtual false, abstract: false, final false
  inline int32_t IndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfUncheckedIgnoreCase, addr 0x2455664, size 0x1a0, virtual false, abstract: false, final false
  inline int32_t IndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfUnchecked, addr 0x2455804, size 0xd0, virtual false, abstract: false, final false
  inline int32_t LastIndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfUncheckedIgnoreCase, addr 0x24558d4, size 0x18c, virtual false, abstract: false, final false
  inline int32_t LastIndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method StartsWithOrdinalUnchecked, addr 0x2455a60, size 0x58, virtual false, abstract: false, final false
  inline bool StartsWithOrdinalUnchecked(::StringW value);

  /// @brief Method FastAllocateString, addr 0x244e934, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW FastAllocateString(int32_t length);

  /// @brief Method InternalIsInterned, addr 0x2455ab8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW InternalIsInterned(::StringW str);

  /// @brief Method InternalIntern, addr 0x2455abc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW InternalIntern(::StringW str);

  /// @brief Method memset, addr 0x2455ac0, size 0xbc, virtual false, abstract: false, final false
  static inline void memset(::cordl_internals::Ptr<uint8_t> dest, int32_t val, int32_t len);

  /// @brief Method memcpy, addr 0x2455b7c, size 0xc, virtual false, abstract: false, final false
  static inline void memcpy(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method bzero, addr 0x2455b88, size 0xc, virtual false, abstract: false, final false
  static inline void _cordl_bzero(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_1, addr 0x2455b94, size 0x8, virtual false, abstract: false, final false
  static inline void bzero_aligned_1(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_2, addr 0x2455b9c, size 0x8, virtual false, abstract: false, final false
  static inline void bzero_aligned_2(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_4, addr 0x2455ba4, size 0x8, virtual false, abstract: false, final false
  static inline void bzero_aligned_4(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_8, addr 0x2455bac, size 0x8, virtual false, abstract: false, final false
  static inline void bzero_aligned_8(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method memcpy_aligned_1, addr 0x2455bb4, size 0xc, virtual false, abstract: false, final false
  static inline void memcpy_aligned_1(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_2, addr 0x2455bc0, size 0xc, virtual false, abstract: false, final false
  static inline void memcpy_aligned_2(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_4, addr 0x2455bcc, size 0xc, virtual false, abstract: false, final false
  static inline void memcpy_aligned_4(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_8, addr 0x2455bd8, size 0xc, virtual false, abstract: false, final false
  static inline void memcpy_aligned_8(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method CreateString, addr 0x2454638, size 0x10, virtual false, abstract: false, final false
  inline ::StringW CreateString(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateString, addr 0x2455be4, size 0x10, virtual false, abstract: false, final false
  inline ::StringW CreateString(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateString, addr 0x2455bf4, size 0x10, virtual false, abstract: false, final false
  inline ::StringW CreateString(::ArrayW<char16_t, ::Array<char16_t>*> val, int32_t startIndex, int32_t length);

  /// @brief Method CreateString, addr 0x244c8a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW CreateString(::ArrayW<char16_t, ::Array<char16_t>*> val);

  /// @brief Method CreateString, addr 0x2455c04, size 0xc, virtual false, abstract: false, final false
  inline ::StringW CreateString(char16_t c, int32_t count);

  /// @brief Method CreateString, addr 0x2455c10, size 0x14, virtual false, abstract: false, final false
  inline ::StringW CreateString(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method CreateString, addr 0x2455c24, size 0xc, virtual false, abstract: false, final false
  inline ::StringW CreateString(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method get_Chars, addr 0x2449b38, size 0x3c, virtual false, abstract: false, final false
  inline char16_t get_Chars(int32_t index);

  /// @brief Method Intern, addr 0x2455c30, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW Intern(::StringW str);

  /// @brief Method IsInterned, addr 0x2455c88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW IsInterned(::StringW str);

  // Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  String(String&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  String(String const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr String();

public:
  /// @brief Field _stringLength, offset: 0x10, size: 0x4, def value: None
  int32_t ____stringLength;

  /// @brief Field _firstChar, offset: 0x14, size: 0x2, def value: None
  char16_t ____firstChar;

  /// @brief Field StackallocIntBufferSizeLimit offset 0xffffffff size 0x4
  static constexpr int32_t StackallocIntBufferSizeLimit{ static_cast<int32_t>(0x80) };

  /// @brief Field PROBABILISTICMAP_BLOCK_INDEX_MASK offset 0xffffffff size 0x4
  static constexpr int32_t PROBABILISTICMAP_BLOCK_INDEX_MASK{ static_cast<int32_t>(0x7) };

  /// @brief Field PROBABILISTICMAP_BLOCK_INDEX_SHIFT offset 0xffffffff size 0x4
  static constexpr int32_t PROBABILISTICMAP_BLOCK_INDEX_SHIFT{ static_cast<int32_t>(0x3) };

  /// @brief Field PROBABILISTICMAP_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t PROBABILISTICMAP_SIZE{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::String, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::String, ____stringLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::String, ____firstChar) == 0x14, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__String__TrimType, "System", "String/TrimType");
NEED_NO_BOX(::System::String);
DEFINE_IL2CPP_ARG_TYPE(::System::String*, "System", "String");
DEFINE_IL2CPP_ARG_TYPE(::System::__String__ProbabilisticMap, "System", "String/ProbabilisticMap");
