#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\FocusEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FocusEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusEvent___c::*)()>(&::UnityEngine::UIElements::FocusEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusEvent* (::UnityEngine::UIElements::FocusEvent___c::*)()>(
    &::UnityEngine::UIElements::FocusEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9d3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::FocusEvent___c::setStaticF___9(::UnityEngine::UIElements::FocusEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusEvent___c*, "<>9", ::UnityEngine::UIElements::FocusEvent___c*>(std::forward<::UnityEngine::UIElements::FocusEvent___c*>(value));
}
inline ::UnityEngine::UIElements::FocusEvent___c* UnityEngine::UIElements::FocusEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusEvent___c*, "<>9", ::UnityEngine::UIElements::FocusEvent___c*>();
}
inline void UnityEngine::UIElements::FocusEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusEvent* UnityEngine::UIElements::FocusEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusEvent___c* UnityEngine::UIElements::FocusEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FocusEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusEvent___c::FocusEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::FocusEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusEvent::*)()>(&::UnityEngine::UIElements::FocusEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d9d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::FocusEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusEvent* UnityEngine::UIElements::FocusEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FocusEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusEvent::FocusEvent() {}
