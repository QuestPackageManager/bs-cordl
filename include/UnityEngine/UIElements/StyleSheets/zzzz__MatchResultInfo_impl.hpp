#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResultInfo.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::MatchResultInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::MatchResultInfo::*)(
    bool, ::UnityEngine::UIElements::PseudoStates, ::UnityEngine::UIElements::PseudoStates)>(&::UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d13840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>(),
                            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::PseudoStates>(), ::i2c::type_of<::UnityEngine::UIElements::PseudoStates>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::MatchResultInfo::_ctor(bool success, ::UnityEngine::UIElements::PseudoStates triggerPseudoMask,
                                                                         ::UnityEngine::UIElements::PseudoStates dependencyPseudoMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>(),
                          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::PseudoStates>(), ::i2c::type_of<::UnityEngine::UIElements::PseudoStates>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, success, triggerPseudoMask, dependencyPseudoMask);
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
