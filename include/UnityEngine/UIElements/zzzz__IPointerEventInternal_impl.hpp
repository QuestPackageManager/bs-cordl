#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerEventInternal.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEventInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.get_compatibilityMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IMouseEvent* (::UnityEngine::UIElements::IPointerEventInternal::*)()>(
    &::UnityEngine::UIElements::IPointerEventInternal::get_compatibilityMouseEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::IMouseEvent* UnityEngine::UIElements::IPointerEventInternal::get_compatibilityMouseEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMouseEvent*>(this, ___internal_method);
}
