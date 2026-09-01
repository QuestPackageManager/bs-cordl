#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerCaptureEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureEvent___c::*)()>(&::UnityEngine::UIElements::PointerCaptureEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d96158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerCaptureEvent* (::UnityEngine::UIElements::PointerCaptureEvent___c::*)()>(
    &::UnityEngine::UIElements::PointerCaptureEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerCaptureEvent___c::setStaticF___9(::UnityEngine::UIElements::PointerCaptureEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PointerCaptureEvent___c*, "<>9", ::UnityEngine::UIElements::PointerCaptureEvent___c*>(
      std::forward<::UnityEngine::UIElements::PointerCaptureEvent___c*>(value));
}
inline ::UnityEngine::UIElements::PointerCaptureEvent___c* UnityEngine::UIElements::PointerCaptureEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PointerCaptureEvent___c*, "<>9", ::UnityEngine::UIElements::PointerCaptureEvent___c*>();
}
inline void UnityEngine::UIElements::PointerCaptureEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureEvent* UnityEngine::UIElements::PointerCaptureEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerCaptureEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureEvent___c* UnityEngine::UIElements::PointerCaptureEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerCaptureEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureEvent___c::PointerCaptureEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerCaptureEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d96054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureEvent::*)()>(&::UnityEngine::UIElements::PointerCaptureEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d960b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerCaptureEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerCaptureEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureEvent* UnityEngine::UIElements::PointerCaptureEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerCaptureEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureEvent::PointerCaptureEvent() {}
