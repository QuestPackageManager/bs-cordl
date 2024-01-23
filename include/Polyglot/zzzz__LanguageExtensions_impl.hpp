#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Polyglot/zzzz__LanguageExtensions_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&::Polyglot::LanguageExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2801d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToCultureInfoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&::Polyglot::LanguageExtensions::ToCultureInfoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2801ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToCultureInfoName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (*)(::StringW)>(&::Polyglot::LanguageExtensions::ToLanguage)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x2801fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToLanguage", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Polyglot::LanguageExtensions::ToSerializedName(::Polyglot::Language lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
inline ::StringW Polyglot::LanguageExtensions::ToCultureInfoName(::Polyglot::Language lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToCultureInfoName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
inline ::Polyglot::Language Polyglot::LanguageExtensions::ToLanguage(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions*>::get(), "ToLanguage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Polyglot::Language, false>(nullptr, ___internal_method, serializedName);
}
// Ctor Parameters []
constexpr ::Polyglot::LanguageExtensions::LanguageExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
