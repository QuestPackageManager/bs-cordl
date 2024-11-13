#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LanguageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LanguageExtensions_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LanguageExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGLib::Polyglot::Language)>(&::BGLib::Polyglot::LanguageExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22781a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageExtensions.ToCultureInfoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGLib::Polyglot::Language)>(&::BGLib::Polyglot::LanguageExtensions::ToCultureInfoName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2278354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToCultureInfoName", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageExtensions.ToLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (*)(::StringW)>(&::BGLib::Polyglot::LanguageExtensions::ToLanguage)> {
  constexpr static std::size_t size = 0x104c;
  constexpr static std::size_t addrs = 0x227840c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToLanguage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::Polyglot::LanguageExtensions::ToSerializedName(::BGLib::Polyglot::Language lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
inline ::StringW BGLib::Polyglot::LanguageExtensions::ToCultureInfoName(::BGLib::Polyglot::Language lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToCultureInfoName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
inline ::BGLib::Polyglot::Language BGLib::Polyglot::LanguageExtensions::ToLanguage(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LanguageExtensions*>::get(), "ToLanguage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(nullptr, ___internal_method, serializedName);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LanguageExtensions::LanguageExtensions() {}
