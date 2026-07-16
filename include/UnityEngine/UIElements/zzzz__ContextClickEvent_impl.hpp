#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextClickEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextClickEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextClickEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ContextClickEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextClickEvent___c::*)()>(&::UnityEngine::UIElements::ContextClickEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9bff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextClickEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextClickEvent* (::UnityEngine::UIElements::ContextClickEvent___c::*)()>(
    &::UnityEngine::UIElements::ContextClickEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9bff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ContextClickEvent___c::setStaticF___9(::UnityEngine::UIElements::ContextClickEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ContextClickEvent___c*, "<>9", ::UnityEngine::UIElements::ContextClickEvent___c*>(
      std::forward<::UnityEngine::UIElements::ContextClickEvent___c*>(value));
}
inline ::UnityEngine::UIElements::ContextClickEvent___c* UnityEngine::UIElements::ContextClickEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ContextClickEvent___c*, "<>9", ::UnityEngine::UIElements::ContextClickEvent___c*>();
}
inline void UnityEngine::UIElements::ContextClickEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextClickEvent* UnityEngine::UIElements::ContextClickEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextClickEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextClickEvent___c* UnityEngine::UIElements::ContextClickEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ContextClickEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextClickEvent___c::ContextClickEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ContextClickEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextClickEvent::*)()>(&::UnityEngine::UIElements::ContextClickEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d9bf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ContextClickEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextClickEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextClickEvent* UnityEngine::UIElements::ContextClickEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ContextClickEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextClickEvent::ContextClickEvent() {}
