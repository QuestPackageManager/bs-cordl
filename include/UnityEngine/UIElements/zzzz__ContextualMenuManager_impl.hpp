#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.get_displayMenuHandledOSX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ContextualMenuManager::*)()>(&::UnityEngine::UIElements::ContextualMenuManager::get_displayMenuHandledOSX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70a0c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "get_displayMenuHandledOSX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.set_displayMenuHandledOSX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(bool)>(
    &::UnityEngine::UIElements::ContextualMenuManager::set_displayMenuHandledOSX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70a0c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "set_displayMenuHandledOSX", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.CheckIfEventMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ContextualMenuManager::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ContextualMenuManager::CheckIfEventMatches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70a0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DisplayMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::ContextualMenuManager::DisplayMenu)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x70a0c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(),
                                                { "DisplayMenu", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DisplayMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IEventHandler*, ::UnityEngine::UIElements::DropdownMenu*)>(&::UnityEngine::UIElements::ContextualMenuManager::DisplayMenu)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x70a0cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(),
                                                             { "DisplayMenu",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DoDisplayMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(::UnityEngine::UIElements::DropdownMenu*, ::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ContextualMenuManager::DoDisplayMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.ResetPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::ContextualMenuManager::ResetPointerDown)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x70a1028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "ResetPointerDown", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.BeforePointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)()>(&::UnityEngine::UIElements::ContextualMenuManager::BeforePointerDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70a1084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "BeforePointerDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.AfterPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)()>(&::UnityEngine::UIElements::ContextualMenuManager::AfterPointerUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70a108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "AfterPointerUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)()>(&::UnityEngine::UIElements::ContextualMenuManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x70a1094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_get__displayMenuHandledOSX_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayMenuHandledOSX_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_get__displayMenuHandledOSX_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayMenuHandledOSX_k__BackingField;
}
constexpr void UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_set__displayMenuHandledOSX_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayMenuHandledOSX_k__BackingField = value;
}
inline bool UnityEngine::UIElements::ContextualMenuManager::get_displayMenuHandledOSX() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "get_displayMenuHandledOSX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuManager::set_displayMenuHandledOSX(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "set_displayMenuHandledOSX", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ContextualMenuManager::CheckIfEventMatches(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DisplayMenu(::UnityEngine::UIElements::EventBase* triggerEvent, ::UnityEngine::UIElements::IEventHandler* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(),
                                              { "DisplayMenu", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerEvent, target);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DisplayMenu(::UnityEngine::UIElements::EventBase* triggerEvent, ::UnityEngine::UIElements::IEventHandler* target,
                                                                        ::UnityEngine::UIElements::DropdownMenu* menu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(),
                                                           { "DisplayMenu",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::DropdownMenu*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerEvent, target, menu);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DoDisplayMenu(::UnityEngine::UIElements::DropdownMenu* menu, ::UnityEngine::UIElements::EventBase* triggerEvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menu, triggerEvent);
}
inline void UnityEngine::UIElements::ContextualMenuManager::ResetPointerDown(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "ResetPointerDown", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::ContextualMenuManager::BeforePointerDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "BeforePointerDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuManager::AfterPointerUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { "AfterPointerUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ContextualMenuManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextualMenuManager* UnityEngine::UIElements::ContextualMenuManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ContextualMenuManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextualMenuManager::ContextualMenuManager() {}
