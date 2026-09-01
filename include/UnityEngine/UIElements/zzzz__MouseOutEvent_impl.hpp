#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MouseOutEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseOutEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseOutEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseOutEvent___c::*)()>(&::UnityEngine::UIElements::MouseOutEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da0438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseOutEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MouseOutEvent* (::UnityEngine::UIElements::MouseOutEvent___c::*)()>(
    &::UnityEngine::UIElements::MouseOutEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da043c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseOutEvent___c::setStaticF___9(::UnityEngine::UIElements::MouseOutEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::MouseOutEvent___c*, "<>9", ::UnityEngine::UIElements::MouseOutEvent___c*>(
      std::forward<::UnityEngine::UIElements::MouseOutEvent___c*>(value));
}
inline ::UnityEngine::UIElements::MouseOutEvent___c* UnityEngine::UIElements::MouseOutEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::MouseOutEvent___c*, "<>9", ::UnityEngine::UIElements::MouseOutEvent___c*>();
}
inline void UnityEngine::UIElements::MouseOutEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseOutEvent* UnityEngine::UIElements::MouseOutEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MouseOutEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseOutEvent___c* UnityEngine::UIElements::MouseOutEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseOutEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseOutEvent___c::MouseOutEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MouseOutEvent.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseOutEvent::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::MouseOutEvent::Dispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseOutEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseOutEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::MouseOutEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6da0310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseOutEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseOutEvent::*)()>(&::UnityEngine::UIElements::MouseOutEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6da0398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MouseOutEvent::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::MouseOutEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::MouseOutEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseOutEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseOutEvent* UnityEngine::UIElements::MouseOutEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseOutEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseOutEvent::MouseOutEvent() {}
