#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerOrMouseEvent.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerOrMouseEvent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerOrMouseEvent.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::IPointerOrMouseEvent::*)()>(&::UnityEngine::UIElements::IPointerOrMouseEvent::get_position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerOrMouseEvent.set_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IPointerOrMouseEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::IPointerOrMouseEvent::set_deltaPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerOrMouseEvent.get_panelRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Ray> (::UnityEngine::UIElements::IPointerOrMouseEvent::*)()>(
    &::UnityEngine::UIElements::IPointerOrMouseEvent::get_panelRay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::UIElements::IPointerOrMouseEvent::get_position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IPointerOrMouseEvent::set_deltaPosition(::UnityEngine::Vector3 value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::Ray> UnityEngine::UIElements::IPointerOrMouseEvent::get_panelRay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Ray>>(this, ___internal_method);
}
