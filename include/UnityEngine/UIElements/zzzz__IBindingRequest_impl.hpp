#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IBindingRequest.hpp"
#include "UnityEngine/UIElements/zzzz__IBindingRequest_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IBindingRequest.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IBindingRequest::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::IBindingRequest::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IBindingRequest*>(), { ::i2c::class_of<::UnityEngine::UIElements::IBindingRequest*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IBindingRequest::Bind(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IBindingRequest*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
