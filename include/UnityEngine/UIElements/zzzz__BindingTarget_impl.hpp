#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BindingTarget.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingTarget_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindingTarget::*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::BindingTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c30b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingTarget>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindingTarget::_ctor(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingTarget>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, bindingId);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingId", ty:
// "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingTarget::BindingTarget(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::BindingId bindingId) noexcept {
  this->element = element;
  this->bindingId = bindingId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingTarget::BindingTarget() {}
