#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IPointerOrMouseEvent.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerOrMouseEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerOrMouseEvent.get_pointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::IPointerOrMouseEvent::*)()>(&::UnityEngine::UIElements::IPointerOrMouseEvent::get_pointerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerOrMouseEvent.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::IPointerOrMouseEvent::*)()>(&::UnityEngine::UIElements::IPointerOrMouseEvent::get_position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 1 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::IPointerOrMouseEvent::get_pointerId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::IPointerOrMouseEvent::get_position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerOrMouseEvent*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
