#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EditorPanelRootElement.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRootElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EditorPanelRootElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EditorPanelRootElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EditorPanelRootElement::*)()>(&::UnityEngine::UIElements::EditorPanelRootElement::_ctor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6db61c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EditorPanelRootElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EditorPanelRootElement.OnEventCompletedAtAnyTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EditorPanelRootElement::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::EditorPanelRootElement::OnEventCompletedAtAnyTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6db8004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EditorPanelRootElement*>(),
                                                                                           { "OnEventCompletedAtAnyTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EditorPanelRootElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EditorPanelRootElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EditorPanelRootElement::OnEventCompletedAtAnyTarget(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EditorPanelRootElement*>(),
                                                                                         { "OnEventCompletedAtAnyTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::EditorPanelRootElement* UnityEngine::UIElements::EditorPanelRootElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EditorPanelRootElement*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EditorPanelRootElement::EditorPanelRootElement() {}
