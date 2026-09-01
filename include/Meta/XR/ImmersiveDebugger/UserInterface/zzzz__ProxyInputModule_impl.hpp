#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\ProxyInputModule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyInputModule_def.hpp"
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.get_InputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::get_InputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "get_InputModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.set_InputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::set_InputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                             { "set_InputModule", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRCursor*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRCursor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::Refresh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a57528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.SearchForEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SearchForEventSystem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a575e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "SearchForEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.SetupEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SetupEventSystem)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a576d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                                                           { "SetupEventSystem", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule.SetupInputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SetupInputModule)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a577b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                             { "SetupInputModule", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_set__owner(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____owner = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCursor>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__cursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursor;
}
constexpr ::UnityW<::GlobalNamespace::OVRCursor> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__cursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_set__cursor(::UnityW<::GlobalNamespace::OVRCursor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursor = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__eventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__eventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_set__eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventSystem = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__InputModule_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InputModule_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> const&
Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_get__InputModule_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InputModule_k__BackingField;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::__cordl_internal_set__InputModule_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InputModule_k__BackingField = value;
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::get_InputModule() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "get_InputModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::set_InputModule(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                           { "set_InputModule", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::_ctor(::UnityEngine::GameObject* owner, ::GlobalNamespace::OVRCursor* cursor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRCursor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, cursor);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SearchForEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(), { "SearchForEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SetupEventSystem(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                                                         { "SetupEventSystem", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::SetupInputModule(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* inputModule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(),
                                                           { "SetupInputModule", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputModule);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::New_ctor(::UnityEngine::GameObject* owner,
                                                                                                                                              ::GlobalNamespace::OVRCursor* cursor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*>(owner, cursor));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule::ProxyInputModule() {}
