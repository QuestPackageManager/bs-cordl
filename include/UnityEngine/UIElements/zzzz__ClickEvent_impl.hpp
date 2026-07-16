#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClickEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickEvent___c::*)()>(&::UnityEngine::UIElements::ClickEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da1fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ClickEvent* (::UnityEngine::UIElements::ClickEvent___c::*)()>(
    &::UnityEngine::UIElements::ClickEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da1fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ClickEvent___c::setStaticF___9(::UnityEngine::UIElements::ClickEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ClickEvent___c*, "<>9", ::UnityEngine::UIElements::ClickEvent___c*>(std::forward<::UnityEngine::UIElements::ClickEvent___c*>(value));
}
inline ::UnityEngine::UIElements::ClickEvent___c* UnityEngine::UIElements::ClickEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ClickEvent___c*, "<>9", ::UnityEngine::UIElements::ClickEvent___c*>();
}
inline void UnityEngine::UIElements::ClickEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClickEvent* UnityEngine::UIElements::ClickEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClickEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClickEvent___c* UnityEngine::UIElements::ClickEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ClickEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickEvent___c::ClickEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickEvent::*)()>(&::UnityEngine::UIElements::ClickEvent::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6da1e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickEvent::*)()>(&::UnityEngine::UIElements::ClickEvent::LocalInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6da1eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ClickEvent::*)()>(&::UnityEngine::UIElements::ClickEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6da1eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClickEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ClickEvent* (*)(::UnityEngine::UIElements::IPointerEvent*, int32_t)>(
    &::UnityEngine::UIElements::ClickEvent::GetPooled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6da1f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(),
                                                             { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ClickEvent::Init() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ClickEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClickEvent* UnityEngine::UIElements::ClickEvent::GetPooled(::UnityEngine::UIElements::IPointerEvent* pointerEvent, int32_t clickCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClickEvent*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClickEvent*>(nullptr, ___internal_method, pointerEvent, clickCount);
}
inline ::UnityEngine::UIElements::ClickEvent* UnityEngine::UIElements::ClickEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ClickEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ClickEvent::ClickEvent() {}
