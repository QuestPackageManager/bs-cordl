#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\KeyUpEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyUpEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyUpEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyUpEvent___c::*)()>(&::UnityEngine::UIElements::KeyUpEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9e64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyUpEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::KeyUpEvent* (::UnityEngine::UIElements::KeyUpEvent___c::*)()>(
    &::UnityEngine::UIElements::KeyUpEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9e650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::KeyUpEvent___c::setStaticF___9(::UnityEngine::UIElements::KeyUpEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::KeyUpEvent___c*, "<>9", ::UnityEngine::UIElements::KeyUpEvent___c*>(std::forward<::UnityEngine::UIElements::KeyUpEvent___c*>(value));
}
inline ::UnityEngine::UIElements::KeyUpEvent___c* UnityEngine::UIElements::KeyUpEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::KeyUpEvent___c*, "<>9", ::UnityEngine::UIElements::KeyUpEvent___c*>();
}
inline void UnityEngine::UIElements::KeyUpEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyUpEvent* UnityEngine::UIElements::KeyUpEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyUpEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyUpEvent___c* UnityEngine::UIElements::KeyUpEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyUpEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyUpEvent___c::KeyUpEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::KeyUpEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyUpEvent::*)()>(&::UnityEngine::UIElements::KeyUpEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d9e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::KeyUpEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyUpEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyUpEvent* UnityEngine::UIElements::KeyUpEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyUpEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyUpEvent::KeyUpEvent() {}
