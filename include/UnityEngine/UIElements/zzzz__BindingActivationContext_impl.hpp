#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingActivationContext.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingActivationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingActivationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindingActivationContext::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>)>(&::UnityEngine::UIElements::BindingActivationContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c2d54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingActivationContext>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindingActivationContext::_ctor(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingActivationContext>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, property);
}
// Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingId", ty:
// "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingActivationContext::BindingActivationContext(::UnityEngine::UIElements::VisualElement* m_TargetElement,
                                                                                        ::UnityEngine::UIElements::BindingId m_BindingId) noexcept {
  this->m_TargetElement = m_TargetElement;
  this->m_BindingId = m_BindingId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingActivationContext::BindingActivationContext() {}
