#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ExecuteCommandEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ExecuteCommandEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ExecuteCommandEvent___c::*)()>(&::UnityEngine::UIElements::ExecuteCommandEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9695c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ExecuteCommandEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ExecuteCommandEvent* (::UnityEngine::UIElements::ExecuteCommandEvent___c::*)()>(
    &::UnityEngine::UIElements::ExecuteCommandEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d96960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ExecuteCommandEvent___c::setStaticF___9(::UnityEngine::UIElements::ExecuteCommandEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ExecuteCommandEvent___c*, "<>9", ::UnityEngine::UIElements::ExecuteCommandEvent___c*>(
      std::forward<::UnityEngine::UIElements::ExecuteCommandEvent___c*>(value));
}
inline ::UnityEngine::UIElements::ExecuteCommandEvent___c* UnityEngine::UIElements::ExecuteCommandEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ExecuteCommandEvent___c*, "<>9", ::UnityEngine::UIElements::ExecuteCommandEvent___c*>();
}
inline void UnityEngine::UIElements::ExecuteCommandEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ExecuteCommandEvent* UnityEngine::UIElements::ExecuteCommandEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ExecuteCommandEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ExecuteCommandEvent___c* UnityEngine::UIElements::ExecuteCommandEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ExecuteCommandEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ExecuteCommandEvent___c::ExecuteCommandEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ExecuteCommandEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ExecuteCommandEvent::*)()>(&::UnityEngine::UIElements::ExecuteCommandEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d968bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ExecuteCommandEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ExecuteCommandEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ExecuteCommandEvent* UnityEngine::UIElements::ExecuteCommandEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ExecuteCommandEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ExecuteCommandEvent::ExecuteCommandEvent() {}
