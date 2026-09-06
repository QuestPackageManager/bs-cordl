#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerEventInternal.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEventInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.get_triggeredByOS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IPointerEventInternal::*)()>(&::UnityEngine::UIElements::IPointerEventInternal::get_triggeredByOS)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.set_triggeredByOS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IPointerEventInternal::*)(bool)>(&::UnityEngine::UIElements::IPointerEventInternal::set_triggeredByOS)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.get_compatibilityMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IMouseEvent* (::UnityEngine::UIElements::IPointerEventInternal::*)()>(
    &::UnityEngine::UIElements::IPointerEventInternal::get_compatibilityMouseEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.set_compatibilityMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IPointerEventInternal::*)(::UnityEngine::UIElements::IMouseEvent*)>(
    &::UnityEngine::UIElements::IPointerEventInternal::set_compatibilityMouseEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerEventInternal.set_displayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IPointerEventInternal::*)(int32_t)>(&::UnityEngine::UIElements::IPointerEventInternal::set_displayIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 4 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IPointerEventInternal::get_triggeredByOS() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IPointerEventInternal::set_triggeredByOS(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IMouseEvent* UnityEngine::UIElements::IPointerEventInternal::get_compatibilityMouseEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMouseEvent*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IPointerEventInternal::set_compatibilityMouseEvent(::UnityEngine::UIElements::IMouseEvent* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::IPointerEventInternal::set_displayIndex(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IPointerEventInternal*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
