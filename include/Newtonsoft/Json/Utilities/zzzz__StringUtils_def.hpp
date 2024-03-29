#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils)
namespace Newtonsoft::Json::Utilities {
template <typename TSource> class __StringUtils____c__DisplayClass15_0_1;
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class StringUtils;
}
namespace Newtonsoft::Json::Utilities {
template <typename TSource> class __StringUtils____c__DisplayClass15_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::StringUtils);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1);
// Type: ::<>c__DisplayClass15_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: ::StringUtils::<>c__DisplayClass15_0`1<TSource>*
class CORDL_TYPE __StringUtils____c__DisplayClass15_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field testValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_testValue, put = __cordl_internal_set_testValue))::StringW testValue;

  /// @brief Field valueSelector, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_valueSelector, put = __cordl_internal_set_valueSelector))::System::Func_2<TSource, ::StringW>* valueSelector;

  static inline ::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>* New_ctor();

  /// @brief Method <ForgivingCaseSensitiveFind>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _ForgivingCaseSensitiveFind_b__0(TSource s);

  /// @brief Method <ForgivingCaseSensitiveFind>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _ForgivingCaseSensitiveFind_b__1(TSource s);

  constexpr ::StringW const& __cordl_internal_get_testValue() const;

  constexpr ::StringW& __cordl_internal_get_testValue();

  constexpr ::System::Func_2<TSource, ::StringW>*& __cordl_internal_get_valueSelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::StringW>*> const& __cordl_internal_get_valueSelector() const;

  constexpr void __cordl_internal_set_testValue(::StringW value);

  constexpr void __cordl_internal_set_valueSelector(::System::Func_2<TSource, ::StringW>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StringUtils____c__DisplayClass15_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StringUtils____c__DisplayClass15_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StringUtils____c__DisplayClass15_0_1(__StringUtils____c__DisplayClass15_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StringUtils____c__DisplayClass15_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StringUtils____c__DisplayClass15_0_1(__StringUtils____c__DisplayClass15_0_1 const&) = delete;

  /// @brief Field valueSelector, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TSource, ::StringW>* ___valueSelector;

  /// @brief Field testValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___testValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::StringUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::StringUtils*
class CORDL_TYPE StringUtils : public ::System::Object {
public:
  // Declarations
  template <typename TSource> using __c__DisplayClass15_0_1 = ::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>;

  /// @brief Method CreateStringWriter, addr 0x27b6d10, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::IO::StringWriter* CreateStringWriter(int32_t capacity);

  /// @brief Method EndsWith, addr 0x27bc9d4, size 0x40, virtual false, abstract: false, final false
  static inline bool EndsWith(::StringW source, char16_t value);

  /// @brief Method ForgivingCaseSensitiveFind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline TSource ForgivingCaseSensitiveFind(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, ::StringW>* valueSelector, ::StringW testValue);

  /// @brief Method FormatWith, addr 0x27ab5dc, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0);

  /// @brief Method FormatWith, addr 0x27a93e0, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method FormatWith, addr 0x27bc67c, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method FormatWith, addr 0x27bc784, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3);

  /// @brief Method FormatWith, addr 0x27bc610, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW FormatWith(::StringW format, ::System::IFormatProvider* provider, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetLength, addr 0x27b6ca8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> GetLength(::StringW value);

  /// @brief Method IsHighSurrogate, addr 0x27bc8e0, size 0x58, virtual false, abstract: false, final false
  static inline bool IsHighSurrogate(char16_t c);

  /// @brief Method IsLowSurrogate, addr 0x27bc938, size 0x58, virtual false, abstract: false, final false
  static inline bool IsLowSurrogate(char16_t c);

  /// @brief Method IsWhiteSpace, addr 0x27ab844, size 0x100, virtual false, abstract: false, final false
  static inline bool IsWhiteSpace(::StringW s);

  /// @brief Method NullEmptyString, addr 0x27bc8c0, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW NullEmptyString(::StringW s);

  /// @brief Method StartsWith, addr 0x27bc990, size 0x44, virtual false, abstract: false, final false
  static inline bool StartsWith(::StringW source, char16_t value);

  /// @brief Method ToCamelCase, addr 0x27b5100, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW ToCamelCase(::StringW s);

  /// @brief Method ToCharAsUnicode, addr 0x27b69a4, size 0xb8, virtual false, abstract: false, final false
  static inline void ToCharAsUnicode(char16_t c, ::ArrayW<char16_t, ::Array<char16_t>*> buffer);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::StringUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringUtils*, "Newtonsoft.Json.Utilities", "StringUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1, "Newtonsoft.Json.Utilities", "StringUtils/<>c__DisplayClass15_0`1");
