#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMouseEventInternal.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEventInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IMouseEventInternal.get_sourcePointerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPointerEvent* (::UnityEngine::UIElements::IMouseEventInternal::*)()>(
    &::UnityEngine::UIElements::IMouseEventInternal::get_sourcePointerEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMouseEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMouseEventInternal*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::IPointerEvent* UnityEngine::UIElements::IMouseEventInternal::get_sourcePointerEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMouseEventInternal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPointerEvent*>(this, ___internal_method);
}
