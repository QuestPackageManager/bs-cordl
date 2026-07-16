#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationLanguageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguageExtensions_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationLanguageExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BGLib::Polyglot::LocalizationLanguage)>(&::BGLib::Polyglot::LocalizationLanguageExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x331be74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                           { "ToSerializedName", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationLanguageExtensions.ToCultureInfoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BGLib::Polyglot::LocalizationLanguage)>(&::BGLib::Polyglot::LocalizationLanguageExtensions::ToCultureInfoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x331c134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                           { "ToCultureInfoName", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationLanguageExtensions.ToLocalizationLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (*)(::StringW)>(&::BGLib::Polyglot::LocalizationLanguageExtensions::ToLocalizationLanguage)> {
  constexpr static std::size_t size = 0x1458;
  constexpr static std::size_t addrs = 0x331c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(), { "ToLocalizationLanguage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationLanguageExtensions.ToLocalizationLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, ::BGLib::Polyglot::LocalizationLanguage> (*)(::UnityEngine::SystemLanguage)>(
    &::BGLib::Polyglot::LocalizationLanguageExtensions::ToLocalizationLanguage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x331d6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                           { "ToLocalizationLanguage", {}, { ::i2c::type_of<::UnityEngine::SystemLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationLanguageExtensions.GetLanguageDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LanguageDirection (*)(::BGLib::Polyglot::LocalizationLanguage)>(
    &::BGLib::Polyglot::LocalizationLanguageExtensions::GetLanguageDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x331d758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                           { "GetLanguageDirection", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::Polyglot::LocalizationLanguageExtensions::ToSerializedName(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                         { "ToSerializedName", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, language);
}
inline ::StringW BGLib::Polyglot::LocalizationLanguageExtensions::ToCultureInfoName(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                         { "ToCultureInfoName", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, language);
}
inline ::BGLib::Polyglot::LocalizationLanguage BGLib::Polyglot::LocalizationLanguageExtensions::ToLocalizationLanguage(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(), { "ToLocalizationLanguage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(nullptr, ___internal_method, serializedName);
}
inline ::System::ValueTuple_2<bool, ::BGLib::Polyglot::LocalizationLanguage> BGLib::Polyglot::LocalizationLanguageExtensions::ToLocalizationLanguage(::UnityEngine::SystemLanguage systemLanguage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(), { "ToLocalizationLanguage", {}, { ::i2c::type_of<::UnityEngine::SystemLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, ::BGLib::Polyglot::LocalizationLanguage>>(nullptr, ___internal_method, systemLanguage);
}
inline ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::LocalizationLanguageExtensions::GetLanguageDirection(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationLanguageExtensions*>(),
                                                                                         { "GetLanguageDirection", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LanguageDirection>(nullptr, ___internal_method, language);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationLanguageExtensions::LocalizationLanguageExtensions() {}
