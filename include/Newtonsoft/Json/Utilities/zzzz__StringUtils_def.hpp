#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils)
namespace Newtonsoft::Json::Utilities {
struct StringUtils_SeparatedCaseState;
}
namespace Newtonsoft::Json::Utilities {
template <typename TSource> class StringUtils___c__DisplayClass14_0_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class StringWriter;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringUtils_SeparatedCaseState;
}
namespace Newtonsoft::Json::Utilities {
class StringUtils;
}
namespace Newtonsoft::Json::Utilities {
template <typename TSource> class StringUtils___c__DisplayClass14_0_1;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::StringUtils);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1);
// Dependencies
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.StringUtils/SeparatedCaseState
struct CORDL_TYPE StringUtils_SeparatedCaseState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StringUtils_SeparatedCaseState_Unwrapped
  enum struct __StringUtils_SeparatedCaseState_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Lower = static_cast<int32_t>(0x1),
    __E_Upper = static_cast<int32_t>(0x2),
    __E_NewWord = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StringUtils_SeparatedCaseState_Unwrapped() const noexcept {
    return static_cast<__StringUtils_SeparatedCaseState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringUtils_SeparatedCaseState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StringUtils_SeparatedCaseState(int32_t value__) noexcept;

  /// @brief Field Lower value: I32(1)
  static ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState const Lower;

  /// @brief Field NewWord value: I32(3)
  static ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState const NewWord;

  /// @brief Field Start value: I32(0)
  static ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState const Start;

  /// @brief Field Upper value: I32(2)
  static ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState const Upper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10272 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<TSource>
class CORDL_TYPE StringUtils___c__DisplayClass14_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field testValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_testValue, put = __cordl_internal_set_testValue)) ::StringW testValue;

  /// @brief Field valueSelector, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_valueSelector, put = __cordl_internal_set_valueSelector)) ::System::Func_2<TSource, ::StringW>* valueSelector;

  static inline ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>* New_ctor();

  /// @brief Method <ForgivingCaseSensitiveFind>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _ForgivingCaseSensitiveFind_b__0(TSource s);

  /// @brief Method <ForgivingCaseSensitiveFind>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _ForgivingCaseSensitiveFind_b__1(TSource s);

  constexpr ::StringW const& __cordl_internal_get_testValue() const;

  constexpr ::StringW& __cordl_internal_get_testValue();

  constexpr ::System::Func_2<TSource, ::StringW>* const& __cordl_internal_get_valueSelector() const;

  constexpr ::System::Func_2<TSource, ::StringW>*& __cordl_internal_get_valueSelector();

  constexpr void __cordl_internal_set_testValue(::StringW value);

  constexpr void __cordl_internal_set_valueSelector(::System::Func_2<TSource, ::StringW>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringUtils___c__DisplayClass14_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringUtils___c__DisplayClass14_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringUtils___c__DisplayClass14_0_1(StringUtils___c__DisplayClass14_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringUtils___c__DisplayClass14_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringUtils___c__DisplayClass14_0_1(StringUtils___c__DisplayClass14_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10273 };

  /// @brief Field valueSelector, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TSource, ::StringW>* ___valueSelector;

  /// @brief Field testValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___testValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.StringUtils
class CORDL_TYPE StringUtils : public ::System::Object {
public:
  // Declarations
  using SeparatedCaseState = ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState;

  template <typename TSource> using __c__DisplayClass14_0_1 = ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>;

  /// @brief Method CreateStringWriter, addr 0x3ed65b0, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::IO::StringWriter* CreateStringWriter(int32_t capacity);

  /// @brief Method EndsWith, addr 0x3ed6dc0, size 0x40, virtual false, abstract: false, final false
  static inline bool EndsWith(::StringW source, char16_t value);

  /// @brief Method ForgivingCaseSensitiveFind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline TSource ForgivingCaseSensitiveFind(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, ::StringW>* valueSelector, ::StringW testValue);

  /// @brief Method FormatWith, addr 0x3ed602c, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0);

  /// @brief Method FormatWith, addr 0x3ed6140, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method FormatWith, addr 0x3ed621c, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method FormatWith, addr 0x3ed6324, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3);

  /// @brief Method FormatWith, addr 0x3ed60d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method IndexOf, addr 0x3ed6d54, size 0x14, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::StringW s, char16_t c);

  /// @brief Method IsHighSurrogate, addr 0x3ed6ca4, size 0x58, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(char16_t c);

  /// @brief Method IsLowSurrogate, addr 0x3ed6cfc, size 0x58, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(char16_t c);

  /// @brief Method IsNullOrEmpty, addr 0x3ed6024, size 0x8, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::StringW value);

  /// @brief Method IsWhiteSpace, addr 0x3ed64ac, size 0x104, virtual false, abstract: false, final false
  static inline bool IsWhiteSpace(::StringW s);

  /// @brief Method Replace, addr 0x3ed6d68, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW s, ::StringW oldValue, ::StringW newValue);

  /// @brief Method StartsWith, addr 0x3ed6d7c, size 0x44, virtual false, abstract: false, final false
  static inline bool StartsWith(::StringW source, char16_t value);

  /// @brief Method ToCamelCase, addr 0x3ed6734, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ToCamelCase(::StringW s);

  /// @brief Method ToCharAsUnicode, addr 0x3ed6678, size 0xbc, virtual false, abstract: false, final false
  static inline void ToCharAsUnicode(char16_t c, ::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method ToKebabCase, addr 0x3ed6c9c, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW ToKebabCase(::StringW s);

  /// @brief Method ToLower, addr 0x3ed691c, size 0x90, virtual false, abstract: false, final false
  static inline char16_t ToLower(char16_t c);

  /// @brief Method ToSeparatedCase, addr 0x3ed69b4, size 0x2e8, virtual false, abstract: false, final false
  static inline ::StringW ToSeparatedCase(::StringW s, char16_t separator);

  /// @brief Method ToSnakeCase, addr 0x3ed69ac, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW ToSnakeCase(::StringW s);

  /// @brief Method Trim, addr 0x3ed6e00, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW Trim(::StringW s, int32_t start, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringUtils(StringUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringUtils(StringUtils const&) = delete;

  /// @brief Field CarriageReturn offset 0xffffffff size 0x2
  static constexpr char16_t CarriageReturn{ u'\r' };

  /// @brief Field CarriageReturnLineFeed offset 0xffffffff size 0x8
  static constexpr ::ConstString CarriageReturnLineFeed{ u"\r\n" };

  /// @brief Field Empty offset 0xffffffff size 0x8
  static constexpr ::ConstString Empty{ u"" };

  /// @brief Field LineFeed offset 0xffffffff size 0x2
  static constexpr char16_t LineFeed{ u'\n' };

  /// @brief Field Tab offset 0xffffffff size 0x2
  static constexpr char16_t Tab{ u'\t' };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState, "Newtonsoft.Json.Utilities", "StringUtils/SeparatedCaseState");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::StringUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringUtils*, "Newtonsoft.Json.Utilities", "StringUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1, "Newtonsoft.Json.Utilities", "StringUtils/<>c__DisplayClass14_0`1");
