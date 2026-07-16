#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WheelEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WheelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__WheelEvent_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent___c::*)()>(&::UnityEngine::UIElements::WheelEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9c510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent___c.__cctor_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WheelEvent* (::UnityEngine::UIElements::WheelEvent___c::*)()>(
    &::UnityEngine::UIElements::WheelEvent___c::__cctor_b__1_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9c514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent___c*>(), { "<.cctor>b__1_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::WheelEvent___c::setStaticF___9(::UnityEngine::UIElements::WheelEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::WheelEvent___c*, "<>9", ::UnityEngine::UIElements::WheelEvent___c*>(std::forward<::UnityEngine::UIElements::WheelEvent___c*>(value));
}
inline ::UnityEngine::UIElements::WheelEvent___c* UnityEngine::UIElements::WheelEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::WheelEvent___c*, "<>9", ::UnityEngine::UIElements::WheelEvent___c*>();
}
inline void UnityEngine::UIElements::WheelEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::WheelEvent* UnityEngine::UIElements::WheelEvent___c::__cctor_b__1_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent___c*>(), { "<.cctor>b__1_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WheelEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::WheelEvent___c* UnityEngine::UIElements::WheelEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::WheelEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WheelEvent___c::WheelEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.get_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::WheelEvent::*)()>(&::UnityEngine::UIElements::WheelEvent::get_delta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "get_delta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.set_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::WheelEvent::set_delta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d9c144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WheelEvent* (*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::WheelEvent::GetPooled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d9c150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WheelEvent* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::WheelEvent::GetPooled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d9c1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(),
                            { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WheelEvent* (*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::WheelEvent::GetPooled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d9c2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(),
                                                             { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent::*)()>(&::UnityEngine::UIElements::WheelEvent::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent::*)()>(&::UnityEngine::UIElements::WheelEvent::LocalInit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d9c378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent::*)()>(&::UnityEngine::UIElements::WheelEvent::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9c3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WheelEvent.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WheelEvent::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::WheelEvent::Dispatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d9c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::WheelEvent::__cordl_internal_get__delta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::WheelEvent::__cordl_internal_get__delta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta_k__BackingField;
}
constexpr void UnityEngine::UIElements::WheelEvent::__cordl_internal_set__delta_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta_k__BackingField = value;
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::WheelEvent::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::UIElements::WheelEvent::set_delta(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "set_delta", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::WheelEvent* UnityEngine::UIElements::WheelEvent::GetPooled(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WheelEvent*>(nullptr, ___internal_method, systemEvent);
}
inline ::UnityEngine::UIElements::WheelEvent* UnityEngine::UIElements::WheelEvent::GetPooled(::UnityEngine::Vector3 delta, ::UnityEngine::Vector3 mousePosition,
                                                                                             ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(),
                                       { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WheelEvent*>(nullptr, ___internal_method, delta, mousePosition, modifiers);
}
inline ::UnityEngine::UIElements::WheelEvent* UnityEngine::UIElements::WheelEvent::GetPooled(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::IPointerEvent* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(),
                                                           { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WheelEvent*>(nullptr, ___internal_method, delta, pointerEvent);
}
inline void UnityEngine::UIElements::WheelEvent::Init() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::WheelEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::WheelEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::WheelEvent::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::WheelEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::UnityEngine::UIElements::WheelEvent* UnityEngine::UIElements::WheelEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::WheelEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WheelEvent::WheelEvent() {}
