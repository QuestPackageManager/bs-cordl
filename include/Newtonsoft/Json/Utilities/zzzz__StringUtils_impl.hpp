#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::StringUtils_SeparatedCaseState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::StringUtils_SeparatedCaseState() {}
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::Start{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::Lower{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::Upper{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState Newtonsoft::Json::Utilities::StringUtils_SeparatedCaseState::NewWord{ static_cast<int32_t>(0x3) };
template <typename TSource> constexpr ::System::Func_2<TSource, ::StringW>*& Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_get_valueSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueSelector;
}
template <typename TSource>
constexpr ::System::Func_2<TSource, ::StringW>* const& Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_get_valueSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueSelector;
}
template <typename TSource> constexpr void Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_set_valueSelector(::System::Func_2<TSource, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueSelector = value;
}
template <typename TSource> constexpr ::StringW& Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_get_testValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testValue;
}
template <typename TSource> constexpr ::StringW const& Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_get_testValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testValue;
}
template <typename TSource> constexpr void Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::__cordl_internal_set_testValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___testValue = value;
}
template <typename TSource> inline void Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource> inline bool Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::_ForgivingCaseSensitiveFind_b__0(TSource s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>*>(),
                                                                                         { "<ForgivingCaseSensitiveFind>b__0", {}, { ::i2c::type_of<TSource>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
template <typename TSource> inline bool Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::_ForgivingCaseSensitiveFind_b__1(TSource s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>*>(),
                                                                                         { "<ForgivingCaseSensitiveFind>b__1", {}, { ::i2c::type_of<TSource>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
template <typename TSource> inline ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>* Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>*>());
}
// Ctor Parameters []
template <typename TSource> constexpr ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>::StringUtils___c__DisplayClass14_0_1() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsNullOrEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d31840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*)>(&::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d3185c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
            { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d31a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                             { "FormatWith",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d31b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                             { "FormatWith",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::ArrayW<::System::Object*>)>(&::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d31908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::IsWhiteSpace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.CreateStringWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StringWriter* (*)(int32_t)>(&::Newtonsoft::Json::Utilities::StringUtils::CreateStringWriter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d31dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "CreateStringWriter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToCharAsUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t, ::ArrayW<char16_t>)>(&::Newtonsoft::Json::Utilities::StringUtils::ToCharAsUnicode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d31e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                                                           { "ToCharAsUnicode", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToCamelCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::ToCamelCase)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5d31f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToCamelCase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToLower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::ToLower)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d32104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToLower", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToSnakeCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::ToSnakeCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d32188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToSnakeCase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToKebabCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::ToKebabCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToKebabCase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToSeparatedCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::ToSeparatedCase)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5d32190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToSeparatedCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsHighSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::IsHighSurrogate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d32434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsHighSurrogate", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsLowSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::IsLowSurrogate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d32468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsLowSurrogate", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::IndexOf)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3249c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::Replace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d324b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                             { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::StartsWith)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d324cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::EndsWith)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d324fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::StringUtils::Trim)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d32530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                                                           { "Trim", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Utilities::StringUtils::IsNullOrEmpty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                           { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, provider, arg0);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                       { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, provider, arg0, arg1);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                           { "FormatWith",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, provider, arg0, arg1, arg2);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2,
                                                                      ::System::Object* arg3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                           { "FormatWith",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, provider, arg0, arg1, arg2, arg3);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                              { "FormatWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, provider, args);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsWhiteSpace(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline ::System::IO::StringWriter* Newtonsoft::Json::Utilities::StringUtils::CreateStringWriter(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "CreateStringWriter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StringWriter*>(nullptr, ___internal_method, capacity);
}
inline void Newtonsoft::Json::Utilities::StringUtils::ToCharAsUnicode(char16_t c, ::ArrayW<char16_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                                                         { "ToCharAsUnicode", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, buffer);
}
template <typename TSource>
inline TSource Newtonsoft::Json::Utilities::StringUtils::ForgivingCaseSensitiveFind(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, ::StringW>* valueSelector,
                                                                                    ::StringW testValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                          { "ForgivingCaseSensitiveFind",
                            { ::i2c::class_of<TSource>() },
                            { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, ::StringW>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>() })));
  return ::cordl_internals::RunMethodRethrow<TSource>(nullptr, ___internal_method, source, valueSelector, testValue);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::ToCamelCase(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToCamelCase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline char16_t Newtonsoft::Json::Utilities::StringUtils::ToLower(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToLower", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::ToSnakeCase(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToSnakeCase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::ToKebabCase(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToKebabCase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::ToSeparatedCase(::StringW s, char16_t separator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "ToSeparatedCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, separator);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsHighSurrogate(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsHighSurrogate", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsLowSurrogate(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IsLowSurrogate", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline int32_t Newtonsoft::Json::Utilities::StringUtils::IndexOf(::StringW s, char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, c);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::Replace(::StringW s, ::StringW oldValue, ::StringW newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                           { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, oldValue, newValue);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::StartsWith(::StringW source, char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::EndsWith(::StringW source, char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::Trim(::StringW s, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringUtils*>(),
                                                                                         { "Trim", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, start, length);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::StringUtils::StringUtils() {}
