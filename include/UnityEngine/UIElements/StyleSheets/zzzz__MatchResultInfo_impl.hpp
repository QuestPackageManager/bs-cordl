#pragma once
#include "UnityEngine/UIElements/zzzz__PseudoStates_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::MatchResultInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::MatchResultInfo::*)(
    bool, ::UnityEngine::UIElements::PseudoStates, ::UnityEngine::UIElements::PseudoStates)>(&::UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x353e710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor(bool success, ::UnityEngine::UIElements::PseudoStates triggerPseudoMask,
                                                                         ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, triggerPseudoMask, dependencyPseudoMask);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "triggerPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "dependencyPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::MatchResultInfo(bool success, ::UnityEngine::UIElements::PseudoStates triggerPseudoMask,
                                                                                   ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask) noexcept {
  this->success = success;
  this->triggerPseudoMask = triggerPseudoMask;
  this->dependencyPseudoMask = dependencyPseudoMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultInfo::MatchResultInfo() {}
