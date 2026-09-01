#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerOutEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOutEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOutEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerOutEvent___c::*)()>(&::UnityEngine::UIElements::PointerOutEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da5f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOutEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerOutEvent* (::UnityEngine::UIElements::PointerOutEvent___c::*)()>(
    &::UnityEngine::UIElements::PointerOutEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerOutEvent___c::setStaticF___9(::UnityEngine::UIElements::PointerOutEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PointerOutEvent___c*, "<>9", ::UnityEngine::UIElements::PointerOutEvent___c*>(
      std::forward<::UnityEngine::UIElements::PointerOutEvent___c*>(value));
}
inline ::UnityEngine::UIElements::PointerOutEvent___c* UnityEngine::UIElements::PointerOutEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PointerOutEvent___c*, "<>9", ::UnityEngine::UIElements::PointerOutEvent___c*>();
}
inline void UnityEngine::UIElements::PointerOutEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerOutEvent* UnityEngine::UIElements::PointerOutEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerOutEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerOutEvent___c* UnityEngine::UIElements::PointerOutEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerOutEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerOutEvent___c::PointerOutEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOutEvent.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerOutEvent::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::PointerOutEvent::Dispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da5e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOutEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerOutEvent::*)()>(&::UnityEngine::UIElements::PointerOutEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6da5e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerOutEvent::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerOutEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerOutEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerOutEvent* UnityEngine::UIElements::PointerOutEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerOutEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerOutEvent::PointerOutEvent() {}
