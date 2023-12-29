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
namespace System {
class IFormatProvider;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System::Collections::Generic {
template <typename T> struct ValueListBuilder_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
struct DateTime;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System {
struct StringComparison;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct __String__ProbabilisticMap;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct TypeCode;
}
namespace System {
struct __String__TrimType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct StringSplitOptions;
}
namespace System {
struct ParamsArray;
}
namespace System::Text {
class Encoding;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
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
// Dependencies: {}
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
// Dependencies: {}
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2312))
// CS Name: ::System::String*
class CORDL_TYPE String : public ::System::Object {
public:
  // Declarations
  using ProbabilisticMap = ::System::__String__ProbabilisticMap;

  using TrimType = ::System::__String__TrimType;

  /// @brief Field _stringLength, offset 0x10, size 0x4
  __declspec(property(get = __get__stringLength, put = __set__stringLength)) int32_t _stringLength;

  /// @brief Field _firstChar, offset 0x14, size 0x2
  __declspec(property(get = __get__firstChar, put = __set__firstChar)) char16_t _firstChar;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::StringW Empty;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Chars)) char16_t Chars[];

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::StringW>"
  constexpr operator ::System::IComparable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::StringW>"
  constexpr operator ::System::IEquatable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr int32_t& __get__stringLength();

  constexpr int32_t const& __get__stringLength() const;

  constexpr void __set__stringLength(int32_t value);

  constexpr char16_t& __get__firstChar();

  constexpr char16_t const& __get__firstChar() const;

  constexpr void __set__firstChar(char16_t value);

  static inline void setStaticF_Empty(::StringW value);

  static inline ::StringW getStaticF_Empty();

  /// @brief Method EqualsHelper addr 0x22d2fd0 size 0x2c virtual false final false
  static inline bool EqualsHelper(::StringW strA, ::StringW strB);

  /// @brief Method CompareOrdinalHelper addr 0x22d3004 size 0x38 virtual false final false
  static inline int32_t CompareOrdinalHelper(::StringW strA, int32_t indexA, int32_t countA, ::StringW strB, int32_t indexB, int32_t countB);

  /// @brief Method CompareOrdinalHelper addr 0x22d303c size 0x1a4 virtual false final false
  static inline int32_t CompareOrdinalHelper(::StringW strA, ::StringW strB);

  /// @brief Method Compare addr 0x22d31e0 size 0x8 virtual false final false
  static inline int32_t Compare(::StringW strA, ::StringW strB);

  /// @brief Method Compare addr 0x22d3480 size 0x8 virtual false final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase);

  /// @brief Method Compare addr 0x22d31e8 size 0x298 virtual false final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, ::System::StringComparison comparisonType);

  /// @brief Method Compare addr 0x22d34a4 size 0x9c virtual false final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, ::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare addr 0x22d3540 size 0x10 virtual false final false
  static inline int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Compare addr 0x22d3550 size 0x8 virtual false final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length);

  /// @brief Method Compare addr 0x22d3558 size 0x140 virtual false final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, bool ignoreCase);

  /// @brief Method Compare addr 0x22d3698 size 0x428 virtual false final false
  static inline int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, ::System::StringComparison comparisonType);

  /// @brief Method CompareOrdinal addr 0x22d3ac0 size 0x44 virtual false final false
  static inline int32_t CompareOrdinal(::StringW strA, ::StringW strB);

  /// @brief Method CompareOrdinal addr 0x22d3b04 size 0xa0 virtual false final false
  static inline int32_t CompareOrdinal(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB);

  /// @brief Method CompareOrdinal addr 0x22d3ba4 size 0x208 virtual false final false
  static inline int32_t CompareOrdinal(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length);

  /// @brief Method CompareTo addr 0x22d3dac size 0xc0 virtual true final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo addr 0x22d3e6c size 0x8 virtual true final true
  inline int32_t CompareTo(::StringW strB);

  /// @brief Method EndsWith addr 0x22d3e74 size 0x8 virtual false final false
  inline bool EndsWith(::StringW value);

  /// @brief Method EndsWith addr 0x22d3e7c size 0x2a4 virtual false final false
  inline bool EndsWith(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method EndsWith addr 0x22d4120 size 0x50 virtual false final false
  inline bool EndsWith(char16_t value);

  /// @brief Method Equals addr 0x22d4170 size 0xa4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x22d4214 size 0x40 virtual true final true
  inline bool Equals(::StringW value);

  /// @brief Method Equals addr 0x22d4254 size 0x284 virtual false final false
  inline bool Equals(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method Equals addr 0x22d44d8 size 0x4c virtual false final false
  static inline bool Equals(::StringW a, ::StringW b);

  /// @brief Method Equals addr 0x22d4524 size 0x284 virtual false final false
  static inline bool Equals(::StringW a, ::StringW b, ::System::StringComparison comparisonType);

  /// @brief Method op_Equality addr 0x22d47a8 size 0x4 virtual false final false
  static inline bool op_Equality(::StringW a, ::StringW b);

  /// @brief Method op_Inequality addr 0x22d47ac size 0x18 virtual false final false
  static inline bool op_Inequality(::StringW a, ::StringW b);

  /// @brief Method GetHashCode addr 0x22d47c4 size 0x4 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetLegacyNonRandomizedHashCode addr 0x22d47c8 size 0x50 virtual false final false
  inline int32_t GetLegacyNonRandomizedHashCode();

  /// @brief Method StartsWith addr 0x22d4818 size 0x5c virtual false final false
  inline bool StartsWith(::StringW value);

  /// @brief Method StartsWith addr 0x22d4874 size 0x2bc virtual false final false
  inline bool StartsWith(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method CheckStringComparison addr 0x22d3488 size 0x1c virtual false final false
  static inline void CheckStringComparison(::System::StringComparison comparisonType);

  /// @brief Method FillStringChecked addr 0x22d4b30 size 0x7c virtual false final false
  static inline void FillStringChecked(::StringW dest, int32_t destPos, ::StringW src);

  /// @brief Method Concat addr 0x22d4bb8 size 0xa8 virtual false final false
  static inline ::StringW Concat(::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Concat addr 0x22d4c60 size 0xe4 virtual false final false
  static inline ::StringW Concat(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Concat addr 0x22d4e04 size 0x258 virtual false final false
  static inline ::StringW Concat(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Concat addr 0x22cbb10 size 0xe8 virtual false final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1);

  /// @brief Method Concat addr 0x22d4d44 size 0xc0 virtual false final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2);

  /// @brief Method Concat addr 0x22d507c size 0x108 virtual false final false
  static inline ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2, ::StringW str3);

  /// @brief Method Concat addr 0x22d5184 size 0x210 virtual false final false
  static inline ::StringW Concat(::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method Format addr 0x22cc768 size 0x44 virtual false final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0);

  /// @brief Method Format addr 0x22d5464 size 0x44 virtual false final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Format addr 0x22d54a8 size 0x44 virtual false final false
  static inline ::StringW Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Format addr 0x22d54ec size 0xb0 virtual false final false
  static inline ::StringW Format(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Format addr 0x22d559c size 0x54 virtual false final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0);

  /// @brief Method Format addr 0x22d55f0 size 0x58 virtual false final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method Format addr 0x22d5648 size 0x5c virtual false final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Format addr 0x22d56a4 size 0xb8 virtual false final false
  static inline ::StringW Format(::System::IFormatProvider* provider, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FormatHelper addr 0x22d5394 size 0xd0 virtual false final false
  static inline ::StringW FormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args);

  /// @brief Method Insert addr 0x22d575c size 0x144 virtual false final false
  inline ::StringW Insert(int32_t startIndex, ::StringW value);

  /// @brief Method Join addr 0x22d58a0 size 0x64 virtual false final false
  static inline ::StringW Join(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method Join addr 0x22d5984 size 0x4d4 virtual false final false
  static inline ::StringW Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method Join addr 0x22d5904 size 0x80 virtual false final false
  static inline ::StringW Join(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t startIndex, int32_t count);

  /// @brief Method JoinCore addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW JoinCore(::cordl_internals::Ptr<char16_t> separator, int32_t separatorLength, ::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method JoinCore addr 0x22d5e58 size 0x3c0 virtual false final false
  static inline ::StringW JoinCore(::cordl_internals::Ptr<char16_t> separator, int32_t separatorLength, ::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t startIndex, int32_t count);

  /// @brief Method PadLeft addr 0x22d6218 size 0xe0 virtual false final false
  inline ::StringW PadLeft(int32_t totalWidth, char16_t paddingChar);

  /// @brief Method PadRight addr 0x22d62f8 size 0xe8 virtual false final false
  inline ::StringW PadRight(int32_t totalWidth, char16_t paddingChar);

  /// @brief Method Remove addr 0x22d63e0 size 0x1a8 virtual false final false
  inline ::StringW Remove(int32_t startIndex, int32_t count);

  /// @brief Method Remove addr 0x22d6588 size 0xc0 virtual false final false
  inline ::StringW Remove(int32_t startIndex);

  /// @brief Method Replace addr 0x22d67f0 size 0xd8 virtual false final false
  inline ::StringW Replace(char16_t oldChar, char16_t newChar);

  /// @brief Method Replace addr 0x22d68c8 size 0x338 virtual false final false
  inline ::StringW Replace(::StringW oldValue, ::StringW newValue);

  /// @brief Method ReplaceHelper addr 0x22d6c00 size 0x358 virtual false final false
  inline ::StringW ReplaceHelper(int32_t oldValueLength, ::StringW newValue, ::System::ReadOnlySpan_1<int32_t> indices);

  /// @brief Method Split addr 0x22d6f58 size 0x60 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(char16_t separator, ::System::StringSplitOptions options);

  /// @brief Method Split addr 0x22d7314 size 0x74 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator);

  /// @brief Method Split addr 0x22d7388 size 0x78 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, int32_t count);

  /// @brief Method Split addr 0x22d7400 size 0x78 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, ::System::StringSplitOptions options);

  /// @brief Method Split addr 0x22d7478 size 0x84 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<char16_t, ::Array<char16_t>*> separator, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal addr 0x22d6fb8 size 0x35c virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::System::ReadOnlySpan_1<char16_t> separators, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method Split addr 0x22d7ee0 size 0x14 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::ArrayW<::StringW, ::Array<::StringW>*> separator, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal addr 0x22d7ef4 size 0x440 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::StringW separator, ::ArrayW<::StringW, ::Array<::StringW>*> separators, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitInternal addr 0x22d8334 size 0x1fc virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitInternal(::StringW separator, int32_t count, ::System::StringSplitOptions options);

  /// @brief Method SplitKeepEmptyEntries addr 0x22d79c4 size 0x230 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitKeepEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count);

  /// @brief Method SplitOmitEmptyEntries addr 0x22d7bf4 size 0x2ec virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitOmitEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count);

  /// @brief Method MakeSeparatorList addr 0x22d74fc size 0x4c8 virtual false final false
  inline void MakeSeparatorList(::System::ReadOnlySpan_1<char16_t> separators, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder);

  /// @brief Method MakeSeparatorList addr 0x22d88c4 size 0x2e0 virtual false final false
  inline void MakeSeparatorList(::StringW separator, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder);

  /// @brief Method MakeSeparatorList addr 0x22d8530 size 0x394 virtual false final false
  inline void MakeSeparatorList(::ArrayW<::StringW, ::Array<::StringW>*> separators, ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder,
                                ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>> lengthListBuilder);

  /// @brief Method Substring addr 0x22d8ba4 size 0xc virtual false final false
  inline ::StringW Substring(int32_t startIndex);

  /// @brief Method Substring addr 0x22d6648 size 0x1a8 virtual false final false
  inline ::StringW Substring(int32_t startIndex, int32_t length);

  /// @brief Method InternalSubString addr 0x22d8c9c size 0x58 virtual false final false
  inline ::StringW InternalSubString(int32_t startIndex, int32_t length);

  /// @brief Method ToLower addr 0x22d8cf4 size 0x7c virtual false final false
  inline ::StringW ToLower();

  /// @brief Method ToLower addr 0x22d8d70 size 0x88 virtual false final false
  inline ::StringW ToLower(::System::Globalization::CultureInfo* culture);

  /// @brief Method ToLowerInvariant addr 0x22d8df8 size 0x7c virtual false final false
  inline ::StringW ToLowerInvariant();

  /// @brief Method ToUpper addr 0x22d8e74 size 0x7c virtual false final false
  inline ::StringW ToUpper();

  /// @brief Method ToUpper addr 0x22d8ef0 size 0x88 virtual false final false
  inline ::StringW ToUpper(::System::Globalization::CultureInfo* culture);

  /// @brief Method ToUpperInvariant addr 0x22d8f78 size 0x7c virtual false final false
  inline ::StringW ToUpperInvariant();

  /// @brief Method Trim addr 0x22d8ff4 size 0x8 virtual false final false
  inline ::StringW Trim();

  /// @brief Method Trim addr 0x22d9134 size 0x20 virtual false final false
  inline ::StringW Trim(char16_t trimChar);

  /// @brief Method Trim addr 0x22d928c size 0x34 virtual false final false
  inline ::StringW Trim(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimStart addr 0x22d92c0 size 0x8 virtual false final false
  inline ::StringW TrimStart();

  /// @brief Method TrimStart addr 0x22d92c8 size 0x20 virtual false final false
  inline ::StringW TrimStart(char16_t trimChar);

  /// @brief Method TrimStart addr 0x22d92e8 size 0x34 virtual false final false
  inline ::StringW TrimStart(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimEnd addr 0x22d931c size 0x8 virtual false final false
  inline ::StringW TrimEnd();

  /// @brief Method TrimEnd addr 0x22d9324 size 0x20 virtual false final false
  inline ::StringW TrimEnd(char16_t trimChar);

  /// @brief Method TrimEnd addr 0x22d9344 size 0x34 virtual false final false
  inline ::StringW TrimEnd(::ArrayW<char16_t, ::Array<char16_t>*> trimChars);

  /// @brief Method TrimWhiteSpaceHelper addr 0x22d8ffc size 0x138 virtual false final false
  inline ::StringW TrimWhiteSpaceHelper(::System::__String__TrimType trimType);

  /// @brief Method TrimHelper addr 0x22d9154 size 0x138 virtual false final false
  inline ::StringW TrimHelper(::cordl_internals::Ptr<char16_t> trimChars, int32_t trimCharsLength, ::System::__String__TrimType trimType);

  /// @brief Method CreateTrimmedString addr 0x22d9378 size 0x90 virtual false final false
  inline ::StringW CreateTrimmedString(int32_t start, int32_t end);

  /// @brief Method Contains addr 0x22d9408 size 0x24 virtual false final false
  inline bool Contains(::StringW value);

  /// @brief Method Contains addr 0x22d943c size 0x24 virtual false final false
  inline bool Contains(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method Contains addr 0x22d9460 size 0x24 virtual false final false
  inline bool Contains(char16_t value);

  /// @brief Method IndexOf addr 0x22d9484 size 0x10 virtual false final false
  inline int32_t IndexOf(char16_t value);

  /// @brief Method IndexOf addr 0x22d9494 size 0xc virtual false final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex);

  /// @brief Method IndexOf addr 0x22d94a0 size 0xe0 virtual false final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny addr 0x22d9580 size 0xc virtual false final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method IndexOfAny addr 0x22d9750 size 0xc virtual false final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex);

  /// @brief Method IndexOfAny addr 0x22d958c size 0x1c4 virtual false final false
  inline int32_t IndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny addr 0x22d975c size 0x84 virtual false final false
  inline int32_t IndexOfAny(char16_t value1, char16_t value2, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfAny addr 0x22d97e0 size 0x54 virtual false final false
  inline int32_t IndexOfAny(char16_t value1, char16_t value2, char16_t value3, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfCharArray addr 0x22d9834 size 0x168 virtual false final false
  inline int32_t IndexOfCharArray(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method InitializeProbabilisticMap addr 0x22d8bb0 size 0xc8 virtual false final false
  static inline void InitializeProbabilisticMap(::cordl_internals::Ptr<uint32_t> charMap, ::System::ReadOnlySpan_1<char16_t> anyOf);

  /// @brief Method ArrayContains addr 0x22d999c size 0x4c virtual false final false
  static inline bool ArrayContains(char16_t searchChar, ::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method IsCharBitSet addr 0x22d8c78 size 0x24 virtual false final false
  static inline bool IsCharBitSet(::cordl_internals::Ptr<uint32_t> charMap, uint8_t value);

  /// @brief Method SetCharBit addr 0x22d99e8 size 0x24 virtual false final false
  static inline void SetCharBit(::cordl_internals::Ptr<uint32_t> charMap, uint8_t value);

  /// @brief Method IndexOf addr 0x22d9a0c size 0x10 virtual false final false
  inline int32_t IndexOf(::StringW value);

  /// @brief Method IndexOf addr 0x22d9a1c size 0x10 virtual false final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex);

  /// @brief Method IndexOf addr 0x22d942c size 0x10 virtual false final false
  inline int32_t IndexOf(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method IndexOf addr 0x22d9a2c size 0x10 virtual false final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex, ::System::StringComparison comparisonType);

  /// @brief Method IndexOf addr 0x22d9a3c size 0x338 virtual false final false
  inline int32_t IndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType);

  /// @brief Method LastIndexOf addr 0x22d9d74 size 0x10 virtual false final false
  inline int32_t LastIndexOf(char16_t value);

  /// @brief Method LastIndexOf addr 0x22d9d84 size 0x8 virtual false final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex);

  /// @brief Method LastIndexOf addr 0x22d9d8c size 0xec virtual false final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfAny addr 0x22d9e78 size 0xc virtual false final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf);

  /// @brief Method LastIndexOfAny addr 0x22d9fbc size 0x8 virtual false final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex);

  /// @brief Method LastIndexOfAny addr 0x22d9e84 size 0x138 virtual false final false
  inline int32_t LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfCharArray addr 0x22d9fc4 size 0x168 virtual false final false
  inline int32_t LastIndexOfCharArray(::ArrayW<char16_t, ::Array<char16_t>*> anyOf, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf addr 0x22da12c size 0x10 virtual false final false
  inline int32_t LastIndexOf(::StringW value);

  /// @brief Method LastIndexOf addr 0x22da4d0 size 0x10 virtual false final false
  inline int32_t LastIndexOf(::StringW value, ::System::StringComparison comparisonType);

  /// @brief Method LastIndexOf addr 0x22da13c size 0x394 virtual false final false
  inline int32_t LastIndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType);

  static inline ::System::String* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method .ctor addr 0x22da4e0 size 0x4 virtual false final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Ctor addr 0x22da4e4 size 0x90 virtual false final false
  static inline ::StringW Ctor(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::System::String* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor addr 0x22da574 size 0x4 virtual false final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor addr 0x22da578 size 0x1bc virtual false final false
  static inline ::StringW Ctor(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t length);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor addr 0x22da734 size 0x4 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor addr 0x22da738 size 0x190 virtual false final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<char16_t> ptr, int32_t startIndex, int32_t length);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method .ctor addr 0x22da8c8 size 0x4 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method Ctor addr 0x22da8cc size 0x188 virtual false final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateStringForSByteConstructor addr 0x22daa54 size 0x7c virtual false final false
  static inline ::StringW CreateStringForSByteConstructor(::cordl_internals::Ptr<uint8_t> pb, int32_t numBytes);

  static inline ::System::String* New_ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method .ctor addr 0x22daad0 size 0x4 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method Ctor addr 0x22daad4 size 0x1e4 virtual false final false
  static inline ::StringW Ctor(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  static inline ::System::String* New_ctor(char16_t c, int32_t count);

  /// @brief Method .ctor addr 0x22dacc8 size 0x4 virtual false final false
  inline void _ctor(char16_t c, int32_t count);

  /// @brief Method Ctor addr 0x22daccc size 0x120 virtual false final false
  static inline ::StringW Ctor(char16_t c, int32_t count);

  static inline ::System::String* New_ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method .ctor addr 0x22dadec size 0x4 virtual false final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Ctor addr 0x22dadf0 size 0xc0 virtual false final false
  static inline ::StringW Ctor(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TState> static inline ::StringW Create(int32_t length, TState state, ::System::Buffers::SpanAction_2<char16_t, TState>* action);

  /// @brief Method op_Implicit addr 0x22daeb0 size 0x50 virtual false final false
  static inline ::System::ReadOnlySpan_1<char16_t> op_Implicit___System__ReadOnlySpan_1_char16_t_(::StringW value);

  /// @brief Method Clone addr 0x22daf00 size 0x4 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method Copy addr 0x22daf04 size 0x98 virtual false final false
  static inline ::StringW Copy(::StringW str);

  /// @brief Method CopyTo addr 0x22daf9c size 0x188 virtual false final false
  inline void CopyTo(int32_t sourceIndex, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ToCharArray addr 0x22db124 size 0xdc virtual false final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ToCharArray();

  /// @brief Method IsNullOrEmpty addr 0x22d5060 size 0x1c virtual false final false
  static inline bool IsNullOrEmpty(::StringW value);

  /// @brief Method IsNullOrWhiteSpace addr 0x22db200 size 0xb0 virtual false final false
  static inline bool IsNullOrWhiteSpace(::StringW value);

  /// @brief Method GetRawStringData addr 0x22d2ffc size 0x8 virtual false final false
  inline ByRef<char16_t> GetRawStringData();

  /// @brief Method CreateStringFromEncoding addr 0x22db2b0 size 0xc8 virtual false final false
  static inline ::StringW CreateStringFromEncoding(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteLength, ::System::Text::Encoding* encoding);

  /// @brief Method CreateFromChar addr 0x22db378 size 0x24 virtual false final false
  static inline ::StringW CreateFromChar(char16_t c);

  /// @brief Method wstrcpy addr 0x22d4bac size 0xc virtual false final false
  static inline void wstrcpy(::cordl_internals::Ptr<char16_t> dmem, ::cordl_internals::Ptr<char16_t> smem, int32_t charCount);

  /// @brief Method ToString addr 0x22db39c size 0x4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x22db3a0 size 0x4 virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator addr 0x22db3a4 size 0x64 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x22db408 size 0x64 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method wcslen addr 0x22db46c size 0x10c virtual false final false
  static inline int32_t wcslen(::cordl_internals::Ptr<char16_t> ptr);

  /// @brief Method GetTypeCode addr 0x22db578 size 0x8 virtual true final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x22db580 size 0x68 virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x22db5e8 size 0x68 virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x22db650 size 0x68 virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x22db6b8 size 0x68 virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x22db720 size 0x68 virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x22db788 size 0x68 virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x22db7f0 size 0x68 virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x22db858 size 0x68 virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x22db8c0 size 0x68 virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x22db928 size 0x68 virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x22db990 size 0x68 virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x22db9f8 size 0x68 virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x22dba60 size 0x68 virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x22dbac8 size 0x68 virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x22dbb30 size 0x70 virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method Normalize addr 0x22dbba0 size 0x68 virtual false final false
  inline ::StringW Normalize(::System::Text::NormalizationForm normalizationForm);

  /// @brief Method get_Length addr 0x22dbc08 size 0x8 virtual false final false
  inline int32_t get_Length();

  /// @brief Method IndexOfUnchecked addr 0x22dbc10 size 0xd4 virtual false final false
  inline int32_t IndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfUncheckedIgnoreCase addr 0x22dbce4 size 0x1a0 virtual false final false
  inline int32_t IndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfUnchecked addr 0x22dbe84 size 0xd0 virtual false final false
  inline int32_t LastIndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfUncheckedIgnoreCase addr 0x22dbf54 size 0x18c virtual false final false
  inline int32_t LastIndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method StartsWithOrdinalUnchecked addr 0x22dc0e0 size 0x58 virtual false final false
  inline bool StartsWithOrdinalUnchecked(::StringW value);

  /// @brief Method FastAllocateString addr 0x22d505c size 0x4 virtual false final false
  static inline ::StringW FastAllocateString(int32_t length);

  /// @brief Method InternalIsInterned addr 0x22dc138 size 0x4 virtual false final false
  static inline ::StringW InternalIsInterned(::StringW str);

  /// @brief Method InternalIntern addr 0x22dc13c size 0x4 virtual false final false
  static inline ::StringW InternalIntern(::StringW str);

  /// @brief Method memset addr 0x22dc140 size 0xbc virtual false final false
  static inline void memset(::cordl_internals::Ptr<uint8_t> dest, int32_t val, int32_t len);

  /// @brief Method memcpy addr 0x22dc1fc size 0xc virtual false final false
  static inline void memcpy(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method bzero addr 0x22dc208 size 0xc virtual false final false
  static inline void _cordl_bzero(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_1 addr 0x22dc214 size 0x8 virtual false final false
  static inline void bzero_aligned_1(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_2 addr 0x22dc21c size 0x8 virtual false final false
  static inline void bzero_aligned_2(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_4 addr 0x22dc224 size 0x8 virtual false final false
  static inline void bzero_aligned_4(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method bzero_aligned_8 addr 0x22dc22c size 0x8 virtual false final false
  static inline void bzero_aligned_8(::cordl_internals::Ptr<uint8_t> dest, int32_t len);

  /// @brief Method memcpy_aligned_1 addr 0x22dc234 size 0xc virtual false final false
  static inline void memcpy_aligned_1(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_2 addr 0x22dc240 size 0xc virtual false final false
  static inline void memcpy_aligned_2(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_4 addr 0x22dc24c size 0xc virtual false final false
  static inline void memcpy_aligned_4(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy_aligned_8 addr 0x22dc258 size 0xc virtual false final false
  static inline void memcpy_aligned_8(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method CreateString addr 0x22dacb8 size 0x10 virtual false final false
  inline ::StringW CreateString(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateString addr 0x22dc264 size 0x10 virtual false final false
  inline ::StringW CreateString(::cordl_internals::Ptr<char16_t> value, int32_t startIndex, int32_t length);

  /// @brief Method CreateString addr 0x22dc274 size 0x10 virtual false final false
  inline ::StringW CreateString(::ArrayW<char16_t, ::Array<char16_t>*> val, int32_t startIndex, int32_t length);

  /// @brief Method CreateString addr 0x22d2fc8 size 0x8 virtual false final false
  inline ::StringW CreateString(::ArrayW<char16_t, ::Array<char16_t>*> val);

  /// @brief Method CreateString addr 0x22dc284 size 0xc virtual false final false
  inline ::StringW CreateString(char16_t c, int32_t count);

  /// @brief Method CreateString addr 0x22dc290 size 0x14 virtual false final false
  inline ::StringW CreateString(::cordl_internals::Ptr<int8_t> value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc);

  /// @brief Method CreateString addr 0x22dc2a4 size 0xc virtual false final false
  inline ::StringW CreateString(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method get_Chars addr 0x22d0260 size 0x3c virtual false final false
  inline char16_t get_Chars(int32_t index);

  /// @brief Method Intern addr 0x22dc2b0 size 0x58 virtual false final false
  static inline ::StringW Intern(::StringW str);

  /// @brief Method IsInterned addr 0x22dc308 size 0x58 virtual false final false
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
