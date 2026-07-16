#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuPopulateEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent___c::*)()>(&::UnityEngine::UIElements::ContextualMenuPopulateEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d9e48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c.__cctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextualMenuPopulateEvent* (::UnityEngine::UIElements::ContextualMenuPopulateEvent___c::*)()>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d9e490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent___c::setStaticF___9(::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*, "<>9", ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(
      std::forward<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(value));
}
inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* UnityEngine::UIElements::ContextualMenuPopulateEvent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*, "<>9", ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>();
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* UnityEngine::UIElements::ContextualMenuPopulateEvent___c::__cctor_b__0_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* UnityEngine::UIElements::ContextualMenuPopulateEvent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c::ContextualMenuPopulateEvent___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.get_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DropdownMenu* (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)()>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9da60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "get_menu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.set_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)(::UnityEngine::UIElements::DropdownMenu*)>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                           { "set_menu", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.get_triggerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)()>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent::get_triggerEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9da70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "get_triggerEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.set_triggerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent::set_triggerEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d9da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                           { "set_triggerEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::ContextualMenuPopulateEvent* (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DropdownMenu*, ::UnityEngine::UIElements::IEventHandler*,
                                                                            ::UnityEngine::UIElements::ContextualMenuManager*)>(&::UnityEngine::UIElements::ContextualMenuPopulateEvent::GetPooled)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x6d9da80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                { "GetPooled",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)()>(&::UnityEngine::UIElements::ContextualMenuPopulateEvent::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d9e278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.LocalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)()>(&::UnityEngine::UIElements::ContextualMenuPopulateEvent::LocalInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d9e2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "LocalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)()>(&::UnityEngine::UIElements::ContextualMenuPopulateEvent::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d9e320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuPopulateEvent.PostDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuPopulateEvent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::ContextualMenuPopulateEvent::PostDispatch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d9e394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::DropdownMenu*& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::UIElements::DropdownMenu* const& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_set__menu_k__BackingField(::UnityEngine::UIElements::DropdownMenu* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::EventBase*& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get__triggerEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerEvent_k__BackingField;
}
constexpr ::UnityEngine::UIElements::EventBase* const& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get__triggerEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerEvent_k__BackingField;
}
constexpr void UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_set__triggerEvent_k__BackingField(::UnityEngine::UIElements::EventBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerEvent_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::ContextualMenuManager*& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get_m_ContextualMenuManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextualMenuManager;
}
constexpr ::UnityEngine::UIElements::ContextualMenuManager* const& UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_get_m_ContextualMenuManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextualMenuManager;
}
constexpr void UnityEngine::UIElements::ContextualMenuPopulateEvent::__cordl_internal_set_m_ContextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContextualMenuManager = value;
}
inline ::UnityEngine::UIElements::DropdownMenu* UnityEngine::UIElements::ContextualMenuPopulateEvent::get_menu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "get_menu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DropdownMenu*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::set_menu(::UnityEngine::UIElements::DropdownMenu* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                         { "set_menu", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::ContextualMenuPopulateEvent::get_triggerEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "get_triggerEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::set_triggerEvent(::UnityEngine::UIElements::EventBase* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                                                         { "set_triggerEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* UnityEngine::UIElements::ContextualMenuPopulateEvent::GetPooled(::UnityEngine::UIElements::EventBase* triggerEvent,
                                                                                                                               ::UnityEngine::UIElements::DropdownMenu* menu,
                                                                                                                               ::UnityEngine::UIElements::IEventHandler* target,
                                                                                                                               ::UnityEngine::UIElements::ContextualMenuManager* menuManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(),
                                                           { "GetPooled",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(nullptr, ___internal_method, triggerEvent, menu, target, menuManager);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuPopulateEvent::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* UnityEngine::UIElements::ContextualMenuPopulateEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextualMenuPopulateEvent::ContextualMenuPopulateEvent() {}
