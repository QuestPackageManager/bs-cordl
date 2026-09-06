#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INavigationEvent.hpp"
#include "UnityEngine/UIElements/zzzz__INavigationEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::INavigationEvent.get_shiftKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::INavigationEvent::*)()>(&::UnityEngine::UIElements::INavigationEvent::get_shiftKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::INavigationEvent.get_altKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::INavigationEvent::*)()>(&::UnityEngine::UIElements::INavigationEvent::get_altKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), 1 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::INavigationEvent::get_shiftKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::INavigationEvent::get_altKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::INavigationEvent*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
