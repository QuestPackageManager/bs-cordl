#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/LanguageHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__LanguageHelper_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::LanguageHelper.GetDefaultLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (*)()>(&::BeatSaber::GameSettings::LanguageHelper::GetDefaultLanguage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1066ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LanguageHelper*>::get(),
                                                                               "GetDefaultLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::BGLib::Polyglot::Language BeatSaber::GameSettings::LanguageHelper::GetDefaultLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LanguageHelper*>::get(),
                                                                             "GetDefaultLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::LanguageHelper::LanguageHelper() {}
