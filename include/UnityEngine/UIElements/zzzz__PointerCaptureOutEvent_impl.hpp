#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerCaptureOutEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureOutEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureOutEvent___c::*)()>(&::UnityEngine::UIElements::PointerCaptureOutEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d95f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureOutEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerCaptureOutEvent* (::UnityEngine::UIElements::PointerCaptureOutEvent___c::*)()>(
    &::UnityEngine::UIElements::PointerCaptureOutEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d95f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerCaptureOutEvent___c::setStaticF___9(::UnityEngine::UIElements::PointerCaptureOutEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PointerCaptureOutEvent___c*, "<>9", ::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(
      std::forward<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(value));
}
inline ::UnityEngine::UIElements::PointerCaptureOutEvent___c* UnityEngine::UIElements::PointerCaptureOutEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PointerCaptureOutEvent___c*, "<>9", ::UnityEngine::UIElements::PointerCaptureOutEvent___c*>();
}
inline void UnityEngine::UIElements::PointerCaptureOutEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureOutEvent* UnityEngine::UIElements::PointerCaptureOutEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerCaptureOutEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureOutEvent___c* UnityEngine::UIElements::PointerCaptureOutEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerCaptureOutEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureOutEvent___c::PointerCaptureOutEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureOutEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureOutEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerCaptureOutEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d95dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureOutEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerCaptureOutEvent::*)()>(&::UnityEngine::UIElements::PointerCaptureOutEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d95e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerCaptureOutEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerCaptureOutEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerCaptureOutEvent* UnityEngine::UIElements::PointerCaptureOutEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerCaptureOutEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureOutEvent::PointerCaptureOutEvent() {}
