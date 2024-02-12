#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_impl.hpp"
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
// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sendEvents", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig::__EventSystem__UIToolkitOverrideConfig(::UnityW<::UnityEngine::EventSystems::EventSystem> activeEventSystem,
                                                                                                                      bool sendEvents, bool createPanelGameObjectsOnStart) noexcept {
  this->activeEventSystem = activeEventSystem;
  this->sendEvents = sendEvents;
  this->createPanelGameObjectsOnStart = createPanelGameObjectsOnStart;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig::__EventSystem__UIToolkitOverrideConfig() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::*)()>(
    &::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db5e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0._CreateUIToolkitPanelGameObject_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::*)()>(
    &::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::_CreateUIToolkitPanelGameObject_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2db6a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*>::get(),
                                                 "<CreateUIToolkitPanelGameObject>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::__cordl_internal_get_go() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___go;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::__cordl_internal_get_go() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___go;
}
constexpr void UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::__cordl_internal_set_go(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___go)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0* UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*>());
}
inline void UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::_CreateUIToolkitPanelGameObject_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0*>::get(),
                                               "<CreateUIToolkitPanelGameObject>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__EventSystem____c__DisplayClass52_0::__EventSystem____c__DisplayClass52_0() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (*)()>(&::UnityEngine::EventSystems::EventSystem::get_current)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2db4cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::EventSystem*)>(&::UnityEngine::EventSystems::EventSystem::set_current)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2db4d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_current", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_sendNavigationEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_sendNavigationEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_sendNavigationEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(bool)>(
    &::UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2db4f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_sendNavigationEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_pixelDragThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_pixelDragThreshold", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_pixelDragThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(int32_t)>(
    &::UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_pixelDragThreshold",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_currentInputModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInputModule> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_currentInputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_currentInputModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_firstSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_firstSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.set_firstSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_firstSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_currentSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_currentSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_lastSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_lastSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_isFocused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db4f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_isFocused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2db4f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.UpdateModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::UpdateModules)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2db5000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "UpdateModules", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_alreadySelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_alreadySelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db5140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_alreadySelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2db3888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_baseEventDataCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseEventData* (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_baseEventDataCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2db5148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_baseEventDataCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2db0ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.RaycastComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(
    &::UnityEngine::EventSystems::EventSystem::RaycastComparer)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2db51b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "RaycastComparer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::EventSystem::RaycastAll)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2db55d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "RaycastAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db57c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "IsPointerOverGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)(int32_t)>(
    &::UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2db57cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "IsPointerOverGameObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_isUIToolkitActiveEventSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2db5870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_isUIToolkitActiveEventSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_sendUIToolkitEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2db5960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                               "get_sendUIToolkitEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.get_createUIToolkitPanelGameObjectsOnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::EventSystem::*)()>(
    &::UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2db59d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_createUIToolkitPanelGameObjectsOnStart",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.SetUITookitEventSystemOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::EventSystem*, bool, bool)>(
    &::UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2db5a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetUITookitEventSystemOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.CreateUIToolkitPanelGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2db5be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "CreateUIToolkitPanelGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::Start)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2db5e88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2db60c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2db6170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2db6280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.TickModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::TickModules)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2db6388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "TickModules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(bool)>(
    &::UnityEngine::EventSystems::EventSystem::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2db6488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::Update)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2db649c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.ChangeEventModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::EventSystem::*)(::UnityEngine::EventSystems::BaseInputModule*)>(
    &::UnityEngine::EventSystems::EventSystem::ChangeEventModule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2db66fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "ChangeEventModule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseInputModule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::EventSystem.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::EventSystem::*)()>(&::UnityEngine::EventSystems::EventSystem::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2db67f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SystemInputModules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemInputModules;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*> const&
UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_SystemInputModules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SystemInputModules;
}
constexpr void
UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_SystemInputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SystemInputModules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentInputModule)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstSelected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentSelected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseEventData*> const& UnityEngine::EventSystems::EventSystem::__cordl_internal_get_m_DummyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DummyData;
}
constexpr void UnityEngine::EventSystems::EventSystem::__cordl_internal_set_m_DummyData(::UnityEngine::EventSystems::BaseEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DummyData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_m_EventSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*, "m_EventSystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* UnityEngine::EventSystems::EventSystem::getStaticF_m_EventSystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*, "m_EventSystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>();
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_s_RaycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "s_RaycastComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* UnityEngine::EventSystems::EventSystem::getStaticF_s_RaycastComparer() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "s_RaycastComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>();
}
inline void UnityEngine::EventSystems::EventSystem::setStaticF_s_UIToolkitOverride(::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, "s_UIToolkitOverride",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>(
      std::forward<::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig>(value));
}
inline ::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig UnityEngine::EventSystems::EventSystem::getStaticF_s_UIToolkitOverride() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__EventSystem__UIToolkitOverrideConfig, "s_UIToolkitOverride",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get>();
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::EventSystems::EventSystem::get_current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_current(::UnityEngine::EventSystems::EventSystem* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_current", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_sendNavigationEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_sendNavigationEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_pixelDragThreshold", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_pixelDragThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> UnityEngine::EventSystems::EventSystem::get_currentInputModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_currentInputModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInputModule>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_firstSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "set_firstSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_currentSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_lastSelectedGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_isFocused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_isFocused",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::EventSystem* UnityEngine::EventSystems::EventSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EventSystems::EventSystem*>());
}
inline void UnityEngine::EventSystems::EventSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::UpdateModules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "UpdateModules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_alreadySelecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_alreadySelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(::UnityEngine::GameObject* selected, ::UnityEngine::EventSystems::BaseEventData* pointer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selected, pointer);
}
inline ::UnityEngine::EventSystems::BaseEventData* UnityEngine::EventSystems::EventSystem::get_baseEventDataCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_baseEventDataCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseEventData*, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(::UnityEngine::GameObject* selected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetSelectedGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selected);
}
inline int32_t UnityEngine::EventSystems::EventSystem::RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "RaycastComparer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline void UnityEngine::EventSystems::EventSystem::RaycastAll(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "RaycastAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, raycastResults);
}
inline bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "IsPointerOverGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "IsPointerOverGameObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_isUIToolkitActiveEventSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(),
                                                                             "get_sendUIToolkitEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "get_createUIToolkitPanelGameObjectsOnStart",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param sendEvents: bool (default: true)
/// @param createPanelGameObjectsOnStart: bool (default: true)
inline void UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride(::UnityEngine::EventSystems::EventSystem* activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "SetUITookitEventSystemOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, activeEventSystem, sendEvents, createPanelGameObjectsOnStart);
}
inline void UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "CreateUIToolkitPanelGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::EventSystems::EventSystem::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::TickModules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "TickModules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::OnApplicationFocus(bool hasFocus) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void UnityEngine::EventSystems::EventSystem::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::EventSystem::ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), "ChangeEventModule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseInputModule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_module);
}
inline ::StringW UnityEngine::EventSystems::EventSystem::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::EventSystem*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::EventSystem::EventSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
