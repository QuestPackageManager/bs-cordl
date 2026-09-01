#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MouseCaptureEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseCaptureEvent___c::*)()>(&::UnityEngine::UIElements::MouseCaptureEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MouseCaptureEvent* (::UnityEngine::UIElements::MouseCaptureEvent___c::*)()>(
    &::UnityEngine::UIElements::MouseCaptureEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d96590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseCaptureEvent___c::setStaticF___9(::UnityEngine::UIElements::MouseCaptureEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::MouseCaptureEvent___c*, "<>9", ::UnityEngine::UIElements::MouseCaptureEvent___c*>(
      std::forward<::UnityEngine::UIElements::MouseCaptureEvent___c*>(value));
}
inline ::UnityEngine::UIElements::MouseCaptureEvent___c* UnityEngine::UIElements::MouseCaptureEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::MouseCaptureEvent___c*, "<>9", ::UnityEngine::UIElements::MouseCaptureEvent___c*>();
}
inline void UnityEngine::UIElements::MouseCaptureEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureEvent* UnityEngine::UIElements::MouseCaptureEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MouseCaptureEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureEvent___c* UnityEngine::UIElements::MouseCaptureEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseCaptureEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureEvent___c::MouseCaptureEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseCaptureEvent::*)()>(&::UnityEngine::UIElements::MouseCaptureEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d964e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseCaptureEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureEvent* UnityEngine::UIElements::MouseCaptureEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseCaptureEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureEvent::MouseCaptureEvent() {}
