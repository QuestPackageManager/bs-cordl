#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sendEvents", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig::EventSystem_UIToolkitOverrideConfig(::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem, bool sendEvents,
                                                                                                                bool createPanelGameObjectsOnStart) noexcept {
  this->activeEventSystem = activeEventSystem;
  this->sendEvents = sendEvents;
  this->createPanelGameObjectsOnStart = createPanelGameObjectsOnStart;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig::EventSystem_UIToolkitOverrideConfig() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::*)()>(
    &::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e172ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0._CreateUIToolkitPanelGameObject_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::*)()>(
    &::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::_CreateUIToolkitPanelGameObject_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e17c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0*>(), { "<CreateUIToolkitPanelGameObject>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::__cordl_internal_get_go() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___go;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::__cordl_internal_get_go() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___go;
}
constexpr void UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::__cordl_internal_set_go(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___go = value;
}
inline void UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::_CreateUIToolkitPanelGameObject_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0*>(), { "<CreateUIToolkitPanelGameObject>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0* UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::EventSystem___c__DisplayClass56_0::EventSystem___c__DisplayClass56_0() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (*)()>(&::UnityEngine::EventSystems::EventSystem::get_current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e15c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::EventSystem*)>(&::UnityEngine::EventSystems::EventSystem::set_current)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6e15d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_sendNavigationEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_sendNavigationEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_sendNavigationEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(bool)>(&::UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_sendNavigationEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_pixelDragThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_pixelDragThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_pixelDragThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(int32_t)>(&::UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_pixelDragThreshold", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_currentInputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInputModule> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_currentInputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_currentInputModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_firstSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_firstSelectedGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_firstSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_firstSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_currentSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_currentSelectedGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_lastSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_lastSelectedGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_isFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_isFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e15f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.UpdateModules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::UpdateModules)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e15ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "UpdateModules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_alreadySelecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_alreadySelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e16158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_alreadySelecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6e148f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                { "SetSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_baseEventDataCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::BaseEventData* (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_baseEventDataCache)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e16160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_baseEventDataCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e11cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "SetSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.RaycastComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(
    &::UnityEngine::EventSystems::EventSystem::RaycastComparer)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6e161bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                         { "RaycastComparer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::EventSystem::RaycastAll)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e166d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                             { "RaycastAll",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e168f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "IsPointerOverGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)(int32_t)>(&::UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e168f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "IsPointerOverGameObject", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_isUIToolkitActiveEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e169a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_isUIToolkitActiveEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_sendUIToolkitEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e16a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_sendUIToolkitEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_createUIToolkitPanelGameObjectsOnStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e16b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_createUIToolkitPanelGameObjectsOnStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetUITookitEventSystemOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::EventSystem*, bool, bool)>(&::UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6e16b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                         { "SetUITookitEventSystemOverride", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.StartTrackingUIToolkitPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::StartTrackingUIToolkitPanels)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6e16d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "StartTrackingUIToolkitPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.StopTrackingUIToolkitPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::StopTrackingUIToolkitPanels)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e171f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "StopTrackingUIToolkitPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.CreateUIToolkitPanelGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6e16f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                             { "CreateUIToolkitPanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e172b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6e172c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e173f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.TickModules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::TickModules)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e17510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "TickModules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(bool)>(&::UnityEngine::EventSystems::EventSystem::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e17620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6e17630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.ChangeEventModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::EventSystems::BaseInputModule*)>(
    &::UnityEngine::EventSystems::EventSystem::ChangeEventModule)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e178a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                                                           { "ChangeEventModule", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseInputModule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e179a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SystemInputModules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemInputModules;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* const&
UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SystemInputModules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemInputModules;
}
constexpr void
UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_SystemInputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SystemInputModules = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_CurrentInputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentInputModule;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_CurrentInputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentInputModule;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_CurrentInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentInputModule = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_FirstSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstSelected;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_FirstSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstSelected;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_FirstSelected(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstSelected = value;
}
constexpr bool& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_sendNavigationEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sendNavigationEvents;
}
constexpr bool const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_sendNavigationEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sendNavigationEvents;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_sendNavigationEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_sendNavigationEvents = value;
}
constexpr int32_t& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_DragThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragThreshold;
}
constexpr int32_t const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_DragThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragThreshold;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_DragThreshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragThreshold = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_CurrentSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSelected;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_CurrentSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSelected;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_CurrentSelected(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentSelected = value;
}
constexpr bool& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_HasFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFocus;
}
constexpr bool const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_HasFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFocus;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_HasFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFocus = value;
}
constexpr bool& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SelectionGuard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionGuard;
}
constexpr bool const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SelectionGuard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionGuard;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_SelectionGuard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionGuard = value;
}
constexpr ::UnityEngine::EventSystems::BaseEventData*& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_DummyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DummyData;
}
constexpr ::UnityEngine::EventSystems::BaseEventData* const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_DummyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DummyData;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_DummyData(::UnityEngine::EventSystems::BaseEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DummyData = value;
}
constexpr bool& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_Started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr bool const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_Started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_Started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Started = value;
}
constexpr bool& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_IsTrackingUIToolkitPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTrackingUIToolkitPanels;
}
constexpr bool const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_IsTrackingUIToolkitPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTrackingUIToolkitPanels;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_IsTrackingUIToolkitPanels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTrackingUIToolkitPanels = value;
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_m_EventSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*, "m_EventSystems", ::UnityEngine::EventSystems::EventSystem*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* UnityEngine::EventSystems::EventSystem::getStaticF_m_EventSystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*, "m_EventSystems", ::UnityEngine::EventSystems::EventSystem*>();
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_s_RaycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "s_RaycastComparer", ::UnityEngine::EventSystems::EventSystem*>(
      std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* UnityEngine::EventSystems::EventSystem::getStaticF_s_RaycastComparer() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "s_RaycastComparer", ::UnityEngine::EventSystems::EventSystem*>();
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_s_UIToolkitOverride(::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig, "s_UIToolkitOverride", ::UnityEngine::EventSystems::EventSystem*>(
      std::forward<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig>(value));
}
inline ::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig UnityEngine::EventSystems::EventSystem::getStaticF_s_UIToolkitOverride() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::EventSystem_UIToolkitOverrideConfig, "s_UIToolkitOverride", ::UnityEngine::EventSystems::EventSystem*>();
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::EventSystems::EventSystem::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_current(::UnityEngine::EventSystems::EventSystem* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_sendNavigationEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_sendNavigationEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_pixelDragThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_pixelDragThreshold", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> UnityEngine::EventSystems::EventSystem::get_currentInputModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_currentInputModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_firstSelectedGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "set_firstSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_currentSelectedGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_lastSelectedGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_isFocused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_isFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::UpdateModules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "UpdateModules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_alreadySelecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_alreadySelecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(::UnityEngine::GameObject* selected, ::UnityEngine::EventSystems::BaseEventData* pointer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                              { "SetSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected, pointer);
}
inline ::UnityEngine::EventSystems::BaseEventData* UnityEngine::EventSystems::EventSystem::get_baseEventDataCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_baseEventDataCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseEventData*>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(::UnityEngine::GameObject* selected) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "SetSelectedGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline int32_t UnityEngine::EventSystems::EventSystem::RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                       { "RaycastComparer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>(), ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lhs, rhs);
}
inline void UnityEngine::EventSystems::EventSystem::RaycastAll(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                           { "RaycastAll",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, raycastResults);
}
inline bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "IsPointerOverGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "IsPointerOverGameObject", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_isUIToolkitActiveEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_sendUIToolkitEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "get_createUIToolkitPanelGameObjectsOnStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride(::UnityEngine::EventSystems::EventSystem* activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                       { "SetUITookitEventSystemOverride", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, activeEventSystem, sendEvents, createPanelGameObjectsOnStart);
}
inline void UnityEngine::EventSystems::EventSystem::StartTrackingUIToolkitPanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "StartTrackingUIToolkitPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::StopTrackingUIToolkitPanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "StopTrackingUIToolkitPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "CreateUIToolkitPanelGameObject", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::EventSystems::EventSystem::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::TickModules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), { "TickModules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnApplicationFocus(bool hasFocus) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void UnityEngine::EventSystems::EventSystem::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(),
                                                                                         { "ChangeEventModule", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseInputModule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline ::StringW UnityEngine::EventSystems::EventSystem::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::EventSystem*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::EventSystem* UnityEngine::EventSystems::EventSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::EventSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::EventSystem::EventSystem() {}
