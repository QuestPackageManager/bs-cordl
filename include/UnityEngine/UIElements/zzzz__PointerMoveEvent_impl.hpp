#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerMoveEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent___c::*)()>(&::UnityEngine::UIElements::PointerMoveEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da46a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerMoveEvent* (::UnityEngine::UIElements::PointerMoveEvent___c::*)()>(
    &::UnityEngine::UIElements::PointerMoveEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da46a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerMoveEvent___c::setStaticF___9(::UnityEngine::UIElements::PointerMoveEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PointerMoveEvent___c*, "<>9", ::UnityEngine::UIElements::PointerMoveEvent___c*>(
      std::forward<::UnityEngine::UIElements::PointerMoveEvent___c*>(value));
}
inline ::UnityEngine::UIElements::PointerMoveEvent___c* UnityEngine::UIElements::PointerMoveEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PointerMoveEvent___c*, "<>9", ::UnityEngine::UIElements::PointerMoveEvent___c*>();
}
inline void UnityEngine::UIElements::PointerMoveEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerMoveEvent* UnityEngine::UIElements::PointerMoveEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerMoveEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerMoveEvent___c* UnityEngine::UIElements::PointerMoveEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerMoveEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerMoveEvent___c::PointerMoveEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.get_isHandledByDraggable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::get_isHandledByDraggable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da40bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isHandledByDraggable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.set_isHandledByDraggable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)(bool)>(&::UnityEngine::UIElements::PointerMoveEvent::set_isHandledByDraggable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da40c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "set_isHandledByDraggable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.get_isPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::get_isPointerDown)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6da40cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isPointerDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.get_isPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::get_isPointerUp)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6da413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isPointerUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da41b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::LocalInit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6da4204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)()>(&::UnityEngine::UIElements::PointerMoveEvent::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da42b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.PreDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerMoveEvent::PreDispatch)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6da4308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerMoveEvent.PostDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerMoveEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerMoveEvent::PostDispatch)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6da4548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 9 }));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::PointerMoveEvent::__cordl_internal_get__isHandledByDraggable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHandledByDraggable_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PointerMoveEvent::__cordl_internal_get__isHandledByDraggable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHandledByDraggable_k__BackingField;
}
constexpr void UnityEngine::UIElements::PointerMoveEvent::__cordl_internal_set__isHandledByDraggable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isHandledByDraggable_k__BackingField = value;
}
inline bool UnityEngine::UIElements::PointerMoveEvent::get_isHandledByDraggable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isHandledByDraggable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerMoveEvent::set_isHandledByDraggable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "set_isHandledByDraggable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PointerMoveEvent::get_isPointerDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isPointerDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PointerMoveEvent::get_isPointerUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "get_isPointerUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerMoveEvent::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerMoveEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerMoveEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerMoveEvent::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerMoveEvent::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerMoveEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::UnityEngine::UIElements::PointerMoveEvent* UnityEngine::UIElements::PointerMoveEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerMoveEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerMoveEvent::PointerMoveEvent() {}
