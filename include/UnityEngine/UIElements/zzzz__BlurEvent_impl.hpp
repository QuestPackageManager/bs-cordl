#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BlurEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BlurEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BlurEvent___c::*)()>(&::UnityEngine::UIElements::BlurEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d99974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BlurEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BlurEvent* (::UnityEngine::UIElements::BlurEvent___c::*)()>(
    &::UnityEngine::UIElements::BlurEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d99978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BlurEvent___c::setStaticF___9(::UnityEngine::UIElements::BlurEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BlurEvent___c*, "<>9", ::UnityEngine::UIElements::BlurEvent___c*>(std::forward<::UnityEngine::UIElements::BlurEvent___c*>(value));
}
inline ::UnityEngine::UIElements::BlurEvent___c* UnityEngine::UIElements::BlurEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BlurEvent___c*, "<>9", ::UnityEngine::UIElements::BlurEvent___c*>();
}
inline void UnityEngine::UIElements::BlurEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BlurEvent* UnityEngine::UIElements::BlurEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BlurEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BlurEvent___c* UnityEngine::UIElements::BlurEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BlurEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BlurEvent___c::BlurEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BlurEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BlurEvent::*)()>(&::UnityEngine::UIElements::BlurEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d998d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BlurEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BlurEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BlurEvent* UnityEngine::UIElements::BlurEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BlurEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BlurEvent::BlurEvent() {}
