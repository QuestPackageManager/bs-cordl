#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MouseCaptureOutEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureOutEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureOutEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseCaptureOutEvent___c::*)()>(&::UnityEngine::UIElements::MouseCaptureOutEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d96398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureOutEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MouseCaptureOutEvent* (::UnityEngine::UIElements::MouseCaptureOutEvent___c::*)()>(
    &::UnityEngine::UIElements::MouseCaptureOutEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9639c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseCaptureOutEvent___c::setStaticF___9(::UnityEngine::UIElements::MouseCaptureOutEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::MouseCaptureOutEvent___c*, "<>9", ::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(
      std::forward<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(value));
}
inline ::UnityEngine::UIElements::MouseCaptureOutEvent___c* UnityEngine::UIElements::MouseCaptureOutEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::MouseCaptureOutEvent___c*, "<>9", ::UnityEngine::UIElements::MouseCaptureOutEvent___c*>();
}
inline void UnityEngine::UIElements::MouseCaptureOutEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureOutEvent* UnityEngine::UIElements::MouseCaptureOutEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MouseCaptureOutEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureOutEvent___c* UnityEngine::UIElements::MouseCaptureOutEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseCaptureOutEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureOutEvent___c::MouseCaptureOutEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureOutEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseCaptureOutEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::MouseCaptureOutEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d962a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureOutEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseCaptureOutEvent::*)()>(&::UnityEngine::UIElements::MouseCaptureOutEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d962ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseCaptureOutEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::MouseCaptureOutEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseCaptureOutEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseCaptureOutEvent* UnityEngine::UIElements::MouseCaptureOutEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseCaptureOutEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureOutEvent::MouseCaptureOutEvent() {}
