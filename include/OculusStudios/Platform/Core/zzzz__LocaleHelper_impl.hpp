#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/LocaleHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__LocaleHelper_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::LocaleHelper.GetSystemLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::OculusStudios::Platform::Core::LocaleHelper::GetSystemLocale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f2c7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::LocaleHelper*>(), { "GetSystemLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::LocaleHelper.ToLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SystemLanguage)>(&::OculusStudios::Platform::Core::LocaleHelper::ToLocale)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5f2c820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::LocaleHelper*>(), { "ToLocale", {}, { ::i2c::type_of<::UnityEngine::SystemLanguage>() } })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::LocaleHelper::GetSystemLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::LocaleHelper*>(), { "GetSystemLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::LocaleHelper::ToLocale(::UnityEngine::SystemLanguage lang) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::LocaleHelper*>(), { "ToLocale", {}, { ::i2c::type_of<::UnityEngine::SystemLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, lang);
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::LocaleHelper::LocaleHelper() {}
