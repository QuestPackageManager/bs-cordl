#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/LocaleHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__LocaleHelper_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::LocaleHelper.GetSystemLocale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::OculusStudios::Platform::Core::LocaleHelper::GetSystemLocale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d8048c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::LocaleHelper*>::get(),
                                                                               "GetSystemLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::LocaleHelper.ToLocale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::SystemLanguage)>(&::OculusStudios::Platform::Core::LocaleHelper::ToLocale)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5d804fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::LocaleHelper*>::get(), "ToLocale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get() })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::LocaleHelper::GetSystemLocale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::LocaleHelper*>::get(),
                                                                             "GetSystemLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::LocaleHelper::ToLocale(::UnityEngine::SystemLanguage lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::LocaleHelper*>::get(), "ToLocale", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::LocaleHelper::LocaleHelper() {}
