#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIToolkitInteroperabilityBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIToolkitInteroperabilityBridge_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIToolkitInteroperabilityBridge_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes::UIToolkitInteroperabilityBridge_EventHandlerTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes::UIToolkitInteroperabilityBridge_EventHandlerTypes() {}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes::ScreenOverlay{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes::WorldSpace{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72b1afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0._CreatePanelGameObject_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::_CreatePanelGameObject_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x72b2870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*>(), { "<CreatePanelGameObject>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*& UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::__cordl_internal_set_panel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::_CreatePanelGameObject_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*>(), { "<CreatePanelGameObject>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0* UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge___c__DisplayClass37_0::UIToolkitInteroperabilityBridge___c__DisplayClass37_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_eventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_eventSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_eventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_eventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_eventSystem)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x72b1058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "set_eventSystem", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_overrideUIToolkitEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_overrideUIToolkitEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b10d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_overrideUIToolkitEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_overrideUIToolkitEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(bool)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_overrideUIToolkitEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b10dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_overrideUIToolkitEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_handlerTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_handlerTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_handlerTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_handlerTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(
    ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes)>(&::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_handlerTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                             { "set_handlerTypes", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_worldPickingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_worldPickingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b11e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_worldPickingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_worldPickingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(int32_t)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_worldPickingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b11f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_worldPickingLayers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_worldPickingMaxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_worldPickingMaxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b11f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_worldPickingMaxDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_worldPickingMaxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(float_t)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_worldPickingMaxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_worldPickingMaxDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_createDefaultPanelComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_createDefaultPanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_createDefaultPanelComponents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.set_createDefaultPanelComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(bool)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_createDefaultPanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b1210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_createDefaultPanelComponents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.get_shouldTrackPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_shouldTrackPanels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x72b1218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_shouldTrackPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.StartTrackingUIToolkitPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StartTrackingUIToolkitPanels)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x72b1248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "StartTrackingUIToolkitPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.StartTrackingPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StartTrackingPanel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x72b140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "StartTrackingPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.StopTrackingUIToolkitPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StopTrackingUIToolkitPanels)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x72b147c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "StopTrackingUIToolkitPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.UpdatePanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelGameObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x72b17b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "UpdatePanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.CreatePanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::CreatePanelGameObject)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x72b17e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "CreatePanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.DestroyPanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::DestroyPanelGameObject)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x72b1640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "DestroyPanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.CreateWorldSpacePanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::CreateWorldSpacePanelGameObject)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x72b1b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "CreateWorldSpacePanelGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.DestroyWorldSpacePanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::DestroyWorldSpacePanelGameObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x72b174c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "DestroyWorldSpacePanelGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(&::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x72b1e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(&::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::OnEnable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x72b1e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::OnDisable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x72b21f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(&::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72b2354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)(::UnityEngine::UIElements::PanelInputConfiguration*)>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Apply)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x72b2064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.ApplyOverrideUIToolkitEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyOverrideUIToolkitEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x72b10e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyOverrideUIToolkitEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.ApplyCameraProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyCameraProperties)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x72b1cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyCameraProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.ApplyOtherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyOtherProperties)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x72b11a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyOtherProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.UpdatePanelTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelTracking)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x72b266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "UpdatePanelTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge.UpdatePanelGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(
    &::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelGameObjects)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x72b2358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "UpdatePanelGameObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::*)()>(&::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x72b2694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_EventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_EventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventSystem = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OverrideUIToolkitEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideUIToolkitEvents;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OverrideUIToolkitEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideUIToolkitEvents;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OverrideUIToolkitEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverrideUIToolkitEvents = value;
}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_HandlerTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandlerTypes;
}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_HandlerTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandlerTypes;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_HandlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HandlerTypes = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldPickingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldPickingLayers;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldPickingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldPickingLayers;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_WorldPickingLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldPickingLayers = value;
}
constexpr float_t& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldPickingMaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldPickingMaxDistance;
}
constexpr float_t const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldPickingMaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldPickingMaxDistance;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_WorldPickingMaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldPickingMaxDistance = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_CreateDefaultPanelComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateDefaultPanelComponents;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_CreateDefaultPanelComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateDefaultPanelComponents;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_CreateDefaultPanelComponents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateDefaultPanelComponents = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_Started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_Started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_Started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Started = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_Enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_Enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_Enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enabled = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_IsTrackingPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTrackingPanels;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_IsTrackingPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTrackingPanels;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_IsTrackingPanels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTrackingPanels = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldSpaceGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_WorldSpaceGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceGo;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_WorldSpaceGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpaceGo = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>*& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_trackedPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackedPanels;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* const&
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_trackedPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackedPanels;
}
constexpr void
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_trackedPanels(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackedPanels = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>*&
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_destroyedActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyedActions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* const&
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_destroyedActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyedActions;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_destroyedActions(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BaseRuntimePanel*, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destroyedActions = value;
}
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_InputSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputSettings;
}
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_InputSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputSettings;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_InputSettings(::UnityEngine::UIElements::PanelInputConfiguration_Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputSettings = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldOverrideUIToolkitEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldOverrideUIToolkitEvents;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldOverrideUIToolkitEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldOverrideUIToolkitEvents;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OldOverrideUIToolkitEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldOverrideUIToolkitEvents = value;
}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldHandlerTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldHandlerTypes;
}
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldHandlerTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldHandlerTypes;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OldHandlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldHandlerTypes = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldCreateDefaultPanelComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldCreateDefaultPanelComponents;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldCreateDefaultPanelComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldCreateDefaultPanelComponents;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OldCreateDefaultPanelComponents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldCreateDefaultPanelComponents = value;
}
constexpr bool& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldDefaultEventCameraIsMainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDefaultEventCameraIsMainCamera;
}
constexpr bool const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldDefaultEventCameraIsMainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDefaultEventCameraIsMainCamera;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OldDefaultEventCameraIsMainCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldDefaultEventCameraIsMainCamera = value;
}
constexpr int64_t& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldEventCamerasHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldEventCamerasHash;
}
constexpr int64_t const& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_OldEventCamerasHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldEventCamerasHash;
}
constexpr void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_OldEventCamerasHash(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldEventCamerasHash = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*& UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_PanelsToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelsToRemove;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* const&
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_get_m_PanelsToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelsToRemove;
}
constexpr void
UnityEngine::UIElements::UIToolkitInteroperabilityBridge::__cordl_internal_set_m_PanelsToRemove(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PanelsToRemove = value;
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_eventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_eventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_eventSystem(::UnityEngine::EventSystems::EventSystem* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "set_eventSystem", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_overrideUIToolkitEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_overrideUIToolkitEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_overrideUIToolkitEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_overrideUIToolkitEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_handlerTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_handlerTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_handlerTypes(::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                           { "set_handlerTypes", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge_EventHandlerTypes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_worldPickingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_worldPickingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_worldPickingLayers(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_worldPickingLayers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_worldPickingMaxDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_worldPickingMaxDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_worldPickingMaxDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_worldPickingMaxDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_createDefaultPanelComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_createDefaultPanelComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::set_createDefaultPanelComponents(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "set_createDefaultPanelComponents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIToolkitInteroperabilityBridge::get_shouldTrackPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "get_shouldTrackPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StartTrackingUIToolkitPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "StartTrackingUIToolkitPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StartTrackingPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "StartTrackingPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::StopTrackingUIToolkitPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "StopTrackingUIToolkitPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "UpdatePanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::CreatePanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "CreatePanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::DestroyPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "DestroyPanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::CreateWorldSpacePanelGameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "CreateWorldSpacePanelGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::DestroyWorldSpacePanelGameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "DestroyWorldSpacePanelGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::Apply(::UnityEngine::UIElements::PanelInputConfiguration* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(),
                                                                                         { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyOverrideUIToolkitEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyOverrideUIToolkitEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyCameraProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyCameraProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::ApplyOtherProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "ApplyOtherProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelTracking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "UpdatePanelTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UpdatePanelGameObjects() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { "UpdatePanelGameObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIToolkitInteroperabilityBridge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge* UnityEngine::UIElements::UIToolkitInteroperabilityBridge::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIToolkitInteroperabilityBridge*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIToolkitInteroperabilityBridge::UIToolkitInteroperabilityBridge() {}
