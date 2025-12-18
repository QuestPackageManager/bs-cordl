#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LanguageDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LanguageDirectionExtensions_def.hpp"
#include "UnityEngine/TextCore/zzzz__LanguageDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__LanguageDirection_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::LanguageDirectionExtensions.toTextCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LanguageDirection (*)(::UnityEngine::UIElements::LanguageDirection)>(
    &::UnityEngine::UIElements::LanguageDirectionExtensions::toTextCore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6afdb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::LanguageDirectionExtensions*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::LanguageDirection>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextCore::LanguageDirection UnityEngine::UIElements::LanguageDirectionExtensions::toTextCore(::UnityEngine::UIElements::LanguageDirection dir) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::LanguageDirectionExtensions*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::LanguageDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LanguageDirection, false>(nullptr, ___internal_method, dir);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LanguageDirectionExtensions::LanguageDirectionExtensions() {}
