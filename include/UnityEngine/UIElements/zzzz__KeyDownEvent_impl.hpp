#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyDownEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyDownEvent___c::*)()>(&::UnityEngine::UIElements::KeyDownEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9ae98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::KeyDownEvent* (::UnityEngine::UIElements::KeyDownEvent___c::*)()>(
    &::UnityEngine::UIElements::KeyDownEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9ae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::KeyDownEvent___c::setStaticF___9(::UnityEngine::UIElements::KeyDownEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::KeyDownEvent___c*, "<>9", ::UnityEngine::UIElements::KeyDownEvent___c*>(
      std::forward<::UnityEngine::UIElements::KeyDownEvent___c*>(value));
}
inline ::UnityEngine::UIElements::KeyDownEvent___c* UnityEngine::UIElements::KeyDownEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::KeyDownEvent___c*, "<>9", ::UnityEngine::UIElements::KeyDownEvent___c*>();
}
inline void UnityEngine::UIElements::KeyDownEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyDownEvent* UnityEngine::UIElements::KeyDownEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyDownEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyDownEvent___c* UnityEngine::UIElements::KeyDownEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyDownEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyDownEvent___c::KeyDownEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent.GetEquivalentImguiEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyDownEvent::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::KeyDownEvent::GetEquivalentImguiEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6d9a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), { "GetEquivalentImguiEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent.PostDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyDownEvent::*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::KeyDownEvent::PostDispatch)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d9a390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent.SendEquivalentNavigationEventIfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyDownEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::KeyDownEvent::SendEquivalentNavigationEventIfAny)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x6d9a4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(),
                                                                                           { "SendEquivalentNavigationEventIfAny", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyDownEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyDownEvent::*)()>(&::UnityEngine::UIElements::KeyDownEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d9adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::KeyDownEvent::GetEquivalentImguiEvent(::UnityEngine::Event* outImguiEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), { "GetEquivalentImguiEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outImguiEvent);
}
inline void UnityEngine::UIElements::KeyDownEvent::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::KeyDownEvent::SendEquivalentNavigationEventIfAny(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(),
                                                                                         { "SendEquivalentNavigationEventIfAny", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::KeyDownEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyDownEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::KeyDownEvent* UnityEngine::UIElements::KeyDownEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyDownEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyDownEvent::KeyDownEvent() {}
