#pragma once
// IWYU pragma private; include "GlobalNamespace/GameScenesManager.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType::GameScenesManager_SceneTransitionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType::GameScenesManager_SceneTransitionType() {}
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Push{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Pop{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Replace{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::ClearAndOpen{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Append{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Activate{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Remove{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager_SceneTransitionType::Deactivate{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.get_sceneNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::GameScenesManager_ScenesStackData::*)()>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::get_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2299728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(),
                                                                               "get_sceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.set_sceneNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::set_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2299730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "set_sceneNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.get_container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::GameScenesManager_ScenesStackData::*)()>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2299738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(),
                                                                               "get_container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.set_container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::set_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2299740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "set_container", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2296614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.SetDiContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::SetDiContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2299748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "SetDiContainer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get__sceneNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNames_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get__sceneNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNames_k__BackingField;
}
constexpr void GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_set__sceneNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get__container_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container_k__BackingField;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get__container_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container_k__BackingField;
}
constexpr void GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_set__container_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::GameScenesManager_ScenesStackData::get_sceneNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(),
                                                                             "get_sceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "set_sceneNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::GameScenesManager_ScenesStackData::get_container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(),
                                                                             "get_container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::set_container(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "set_container", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneNames);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::SetDiContainer(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager_ScenesStackData*>::get(), "SetDiContainer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager_ScenesStackData* GlobalNamespace::GameScenesManager_ScenesStackData::New_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager_ScenesStackData*>(sceneNames));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData::GameScenesManager_ScenesStackData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType::GameScenesManager_ScenePresentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType::GameScenesManager_ScenePresentType() {}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::DoNotLoad{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::Load{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::LoadAndDoNotActivate{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::Activate{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType::GameScenesManager_SceneDismissType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType::GameScenesManager_SceneDismissType() {}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::DoNotUnload{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::Unload{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::Deactivate{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2296d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass40_0._PushScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_PushScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2299750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(), "<PushScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass40_0._PushScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_PushScenes_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22998e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(), "<PushScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_PushScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(), "<PushScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass40_0::_PushScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>::get(), "<PushScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass40_0* GlobalNamespace::GameScenesManager___c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass40_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass40_0::GameScenesManager___c__DisplayClass40_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass41_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass41_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2297120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass41_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass41_0._PopScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass41_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass41_0::_PopScenes_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2299964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass41_0*>::get(), "<PopScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass41_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass41_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass41_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass41_0::_PopScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass41_0*>::get(), "<PopScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass41_0* GlobalNamespace::GameScenesManager___c__DisplayClass41_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass41_0::GameScenesManager___c__DisplayClass41_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2297474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0._ReplaceScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2299a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0._ReplaceScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2299b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0._ReplaceScenes_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2299b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newSceneNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyTransitionSceneNameList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::__cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__0(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass42_0::_ReplaceScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>::get(), "<ReplaceScenes>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0* GlobalNamespace::GameScenesManager___c__DisplayClass42_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass42_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass42_0::GameScenesManager___c__DisplayClass42_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2297abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0._ClearAndOpenScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2299c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0._ClearAndOpenScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2299d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0._ClearAndOpenScenes_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2299da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newSceneNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyTransitionSceneNameList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::__cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass43_0::_ClearAndOpenScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>::get(), "<ClearAndOpenScenes>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0* GlobalNamespace::GameScenesManager___c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0::GameScenesManager___c__DisplayClass43_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2297e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0._AppendScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_AppendScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2299e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(), "<AppendScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0._AppendScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_AppendScenes_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2299e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(), "<AppendScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_AppendScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(), "<AppendScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass44_0::_AppendScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>::get(), "<AppendScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0* GlobalNamespace::GameScenesManager___c__DisplayClass44_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0::GameScenesManager___c__DisplayClass44_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229821c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0._RemoveScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_RemoveScenes_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2299f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(), "<RemoveScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0._RemoveScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_RemoveScenes_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2299fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(), "<RemoveScenes>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get_sceneNamesToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_get_sceneNamesToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass45_0::__cordl_internal_set_sceneNamesToRemove(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneNamesToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_RemoveScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(), "<RemoveScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline bool GlobalNamespace::GameScenesManager___c__DisplayClass45_0::_RemoveScenes_b__1(::StringW scene) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>::get(), "<RemoveScenes>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scene);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0* GlobalNamespace::GameScenesManager___c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0::GameScenesManager___c__DisplayClass45_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22983d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0._ActivateScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ActivateScenes_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x229a018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>::get(), "<ActivateScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ActivateScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>::get(), "<ActivateScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0* GlobalNamespace::GameScenesManager___c__DisplayClass46_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::GameScenesManager___c__DisplayClass46_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229858c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0._DeactivateScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_DeactivateScenes_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x229a08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>::get(), "<DeactivateScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_DeactivateScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>::get(), "<DeactivateScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0* GlobalNamespace::GameScenesManager___c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::GameScenesManager___c__DisplayClass47_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229a100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0._WaitUntilTaskCompleted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_WaitUntilTaskCompleted_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229a108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>::get(),
                                                 "<WaitUntilTaskCompleted>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_WaitUntilTaskCompleted_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>::get(),
                                                                             "<WaitUntilTaskCompleted>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0* GlobalNamespace::GameScenesManager___c__DisplayClass55_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::GameScenesManager___c__DisplayClass55_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2298594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229a124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x229a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229a240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x229a248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229a280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get_sceneName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_get_sceneName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::__cordl_internal_set_sceneName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__LoadOneScene_d__50::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__LoadOneScene_d__50::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50* GlobalNamespace::GameScenesManager__LoadOneScene_d__50::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager__LoadOneScene_d__50*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__50::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__LoadOneScene_d__50::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__50::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__LoadOneScene_d__50::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__50::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__LoadOneScene_d__50::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__LoadOneScene_d__50::GameScenesManager__LoadOneScene_d__50() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22985e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x229a288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x1140;
  constexpr static std::size_t addrs = 0x229a2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "<>m__Finally2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x229b4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_scenesToDismiss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_scenesToDismiss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_scenesToDismiss(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesToDismiss)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_scenesToPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_scenesToPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_scenesToPresent(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesToPresent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_minDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr float_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_minDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_minDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDuration = value;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_presentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_presentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_presentType(::GlobalNamespace::GameScenesManager_ScenePresentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presentType = value;
}
constexpr ::System::Action*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_afterMinDurationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr ::System::Action* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_afterMinDurationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_afterMinDurationCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___afterMinDurationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_newScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_newScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_newScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_extraBindingsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_extraBindingsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extraBindingsCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_dismissType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_dismissType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_dismissType(::GlobalNamespace::GameScenesManager_SceneDismissType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dismissType = value;
}
constexpr bool& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_canTriggerGarbageCollector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canTriggerGarbageCollector;
}
constexpr bool const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_canTriggerGarbageCollector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canTriggerGarbageCollector;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_canTriggerGarbageCollector(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canTriggerGarbageCollector = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__allEventSystems_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEventSystems_5__2;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* const&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__allEventSystems_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEventSystems_5__2;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set__allEventSystems_5__2(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allEventSystems_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__sceneName_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__3;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__sceneName_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__3;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set__sceneName_5__3(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneName_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__loadSceneOperationHandle_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__4;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__loadSceneOperationHandle_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__4;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set__loadSceneOperationHandle_5__4(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadSceneOperationHandle_5__4 = value;
}
constexpr int32_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__sceneNum_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__5;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get__sceneNum_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__5;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set__sceneNum_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneNum_5__5 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW>& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___7__wrap5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap5;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW> const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_get___7__wrap5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap5;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__cordl_internal_set___7__wrap5(::System::Collections::Generic::List_1_Enumerator<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap5 = value;
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__52::GameScenesManager__ScenesTransitionCoroutine_d__52() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22985bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229b4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x229b4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x229b628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get_sceneName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_get_sceneName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::__cordl_internal_set_sceneName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51* GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__51::GameScenesManager__UnloadOneScene_d__51() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2298860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229b668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x229b66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x229b878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::__cordl_internal_set___8__1(::GlobalNamespace::GameScenesManager___c__DisplayClass55_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__55::GameScenesManager__WaitUntilTaskCompleted_d__55() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*)>(&::GlobalNamespace::GameScenesManager::add_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*)>(&::GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*)>(&::GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22953e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_beforeDismissingScenesEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*)>(&::GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22948b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_beforeDismissingScenesEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_installEarlyBindingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_installEarlyBindingsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_installEarlyBindingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2295cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_installEarlyBindingsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_currentScenesContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_currentScenesContainer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2295da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "get_currentScenesContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_isInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_isInTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2294b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "get_isInTransition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_currentSceneTransitionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameScenesManager_SceneTransitionType (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_currentSceneTransitionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "get_currentSceneTransitionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_waitUntilSceneTransitionFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2295e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "get_waitUntilSceneTransitionFinish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_sceneNameToSceneOperationHandlesDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* (
    ::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_sceneNameToSceneOperationHandlesDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "get_sceneNameToSceneOperationHandlesDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MarkSceneAsPersistent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::MarkSceneAsPersistent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2295388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "MarkSceneAsPersistent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.GetCurrentlyLoadedSceneNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2295eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "GetCurrentlyLoadedSceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RegisterExternallyLoadedScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::GlobalNamespace::GameScenesManager::RegisterExternallyLoadedScene)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2296068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RegisterExternallyLoadedScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.LoadSingleScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::SceneInfo*)>(
    &::GlobalNamespace::GameScenesManager::LoadSingleScene)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x22960ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "LoadSingleScene", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.UnloadSingleScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::SceneInfo*)>(
    &::GlobalNamespace::GameScenesManager::UnloadSingleScene)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x22966a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "UnloadSingleScene", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneActiveOrLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::SceneInfo*)>(
    &::GlobalNamespace::GameScenesManager::IsSceneActiveOrLoading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22969cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsSceneActiveOrLoading", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PushScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PushScenes)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x22969e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PushScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PopScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameScenesManager::*)(float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PopScenes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2296f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PopScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReplaceScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*>, float_t, ::System::Action*,
    ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ReplaceScenes)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2297128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ReplaceScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ClearAndOpenScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, bool)>(&::GlobalNamespace::GameScenesManager::ClearAndOpenScenes)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x229747c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ClearAndOpenScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AppendScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, bool, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::AppendScenes)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2297ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AppendScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::RemoveScenes)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2297e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ActivateScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ActivateScenes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2298224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ActivateScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.DeactivateScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::DeactivateScenes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22983dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "DeactivateScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.LoadOneScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::LoadOneScene)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x229663c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "LoadOneScene", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.UnloadOneScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::UnloadOneScene)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2296960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "UnloadOneScene", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ScenesTransitionCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::GameScenesManager_ScenePresentType,
                                             ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::GameScenesManager_SceneDismissType, float_t, bool, ::System::Action*,
                                             ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2296e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ScenesTransitionCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_ScenePresentType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneDismissType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ShouldUnloadUnusedAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::ShouldUnloadUnusedAssets)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x229860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ShouldUnloadUnusedAssets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.BackupToListAndDisableCurrentEventSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>)>(&::GlobalNamespace::GameScenesManager::BackupToListAndDisableCurrentEventSystem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x22986b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "BackupToListAndDisableCurrentEventSystem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.WaitUntilTaskCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Threading::Tasks::Task*)>(
    &::GlobalNamespace::GameScenesManager::WaitUntilTaskCompleted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2298800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "WaitUntilTaskCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ActivatePresentedSceneRootObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2298888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ActivatePresentedSceneRootObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsAnySceneInStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::IsAnySceneInStack)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2298b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsAnySceneInStack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AreAllScenesInStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::AreAllScenesInStack)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2298cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AreAllScenesInStack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneInStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::IsSceneInStack)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2296360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsSceneInStack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveSceneFromStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::RemoveSceneFromStack)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x22967e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveSceneFromStack",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SceneNamesFromSceneInfoArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::GlobalNamespace::GameScenesManager::*)(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>)>(&::GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2296d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "SceneNamesFromSceneInfoArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SetActiveRootObjectsInScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*, bool)>(
    &::GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2298e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "SetActiveRootObjectsInScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReparentRootGameObjectsToDisabledGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2298fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ReparentRootGameObjectsToDisabledGameObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MoveGameObjectsFromContainerToSceneRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2299238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "MoveGameObjectsFromContainerToSceneRoot",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GameScenesManager::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22995b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x229960c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._get_waitUntilSceneTransitionFinish_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__24_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2299718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "<get_waitUntilSceneTransitionFinish>b__24_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::GameScenesManager::__cordl_internal_get__emptyTransitionSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyTransitionSceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::GameScenesManager::__cordl_internal_get__emptyTransitionSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyTransitionSceneInfo;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__emptyTransitionSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyTransitionSceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::ZenjectSceneLoader*& GlobalNamespace::GameScenesManager::__cordl_internal_get__zenjectSceneLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenjectSceneLoader;
}
constexpr ::Zenject::ZenjectSceneLoader* const& GlobalNamespace::GameScenesManager::__cordl_internal_get__zenjectSceneLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenjectSceneLoader;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zenjectSceneLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidStartEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidStartEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionDidStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beforeDismissingScenesEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*&
GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr void
GlobalNamespace::GameScenesManager::__cordl_internal_set_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installEarlyBindingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType& GlobalNamespace::GameScenesManager::__cordl_internal_get__currentSceneTransitionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSceneTransitionType;
}
constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType const& GlobalNamespace::GameScenesManager::__cordl_internal_get__currentSceneTransitionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSceneTransitionType;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__currentSceneTransitionType(::GlobalNamespace::GameScenesManager_SceneTransitionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSceneTransitionType = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get__scenesStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesStack;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get__scenesStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesStack;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::GameScenesManager::__cordl_internal_get__neverUnloadScenes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neverUnloadScenes;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get__neverUnloadScenes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neverUnloadScenes;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__neverUnloadScenes(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____neverUnloadScenes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*&
GlobalNamespace::GameScenesManager::__cordl_internal_get__sceneNameToSceneOperationHandlesDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNameToSceneOperationHandlesDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get__sceneNameToSceneOperationHandlesDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNameToSceneOperationHandlesDictionary;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__sceneNameToSceneOperationHandlesDictionary(
    ::System::Collections::Generic::Dictionary_2<
        ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneNameToSceneOperationHandlesDictionary)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_beforeDismissingScenesEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_beforeDismissingScenesEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_installEarlyBindingsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_installEarlyBindingsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::GameScenesManager::get_currentScenesContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                             "get_currentScenesContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "get_isInTransition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager::get_currentSceneTransitionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                             "get_currentSceneTransitionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameScenesManager_SceneTransitionType, false>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "get_waitUntilSceneTransitionFinish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
GlobalNamespace::GameScenesManager::get_sceneNameToSceneOperationHandlesDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "get_sceneNameToSceneOperationHandlesDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                                                         ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,
                                             false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager::MarkSceneAsPersistent(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "MarkSceneAsPersistent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                             "GetCurrentlyLoadedSceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager::RegisterExternallyLoadedScene(
    ::StringW sceneName, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> asyncOperationHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RegisterExternallyLoadedScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName, asyncOperationHandle);
}
inline void GlobalNamespace::GameScenesManager::LoadSingleScene(::GlobalNamespace::SceneInfo* sceneInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "LoadSingleScene", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneInfo);
}
inline void GlobalNamespace::GameScenesManager::UnloadSingleScene(::GlobalNamespace::SceneInfo* sceneInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "UnloadSingleScene", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneInfo);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneActiveOrLoading(::GlobalNamespace::SceneInfo* sceneInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsSceneActiveOrLoading", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sceneInfo);
}
inline void GlobalNamespace::GameScenesManager::PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PushScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PopScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                                                              ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*> beforeNewScenesActivateRoutines,
                                                              float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ReplaceScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, beforeNewScenesActivateRoutines, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration,
                                                                   ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool unloadAllScenes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ClearAndOpenScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback, unloadAllScenes);
}
inline void GlobalNamespace::GameScenesManager::AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, bool activateScenes, float_t minDuration,
                                                             ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AppendScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, activateScenes, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupDataSo, float_t minDuration,
                                                             ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupDataSo, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ActivateScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration,
                                                               ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ActivateScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::DeactivateScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration,
                                                                 ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "DeactivateScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::LoadOneScene(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "LoadOneScene", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::UnloadOneScene(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "UnloadOneScene", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator*
GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData,
                                                              ::System::Collections::Generic::List_1<::StringW>* scenesToPresent, ::GlobalNamespace::GameScenesManager_ScenePresentType presentType,
                                                              ::System::Collections::Generic::List_1<::StringW>* scenesToDismiss, ::GlobalNamespace::GameScenesManager_SceneDismissType dismissType,
                                                              float_t minDuration, bool canTriggerGarbageCollector, ::System::Action* afterMinDurationCallback,
                                                              ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ScenesTransitionCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_ScenePresentType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneDismissType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newScenesTransitionSetupData, scenesToPresent, presentType, scenesToDismiss,
                                                                                         dismissType, minDuration, canTriggerGarbageCollector, afterMinDurationCallback, extraBindingsCallback,
                                                                                         finishCallback);
}
inline bool GlobalNamespace::GameScenesManager::ShouldUnloadUnusedAssets(::System::Collections::Generic::List_1<::StringW>* scenesToDismiss) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ShouldUnloadUnusedAssets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scenesToDismiss);
}
inline void GlobalNamespace::GameScenesManager::BackupToListAndDisableCurrentEventSystem(::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "BackupToListAndDisableCurrentEventSystem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::WaitUntilTaskCompleted(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "WaitUntilTaskCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, task);
}
inline void GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects(::System::Collections::Generic::List_1<::StringW>* scenesToPresent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ActivatePresentedSceneRootObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scenesToPresent);
}
inline bool GlobalNamespace::GameScenesManager::IsAnySceneInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsAnySceneInStack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::AreAllScenesInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AreAllScenesInStack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneInStack(::StringW searchSceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsSceneInStack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, searchSceneName);
}
inline void GlobalNamespace::GameScenesManager::RemoveSceneFromStack(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveSceneFromStack",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName);
}
inline ::System::Collections::Generic::List_1<::StringW>*
GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> sceneInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "SceneNamesFromSceneInfoArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, sceneInfos);
}
inline void GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes(::System::Collections::Generic::List_1<::StringW>* sceneNames, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "SetActiveRootObjectsInScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneNames, value);
}
inline void GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ReparentRootGameObjectsToDisabledGameObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "MoveGameObjectsFromContainerToSceneRoot",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::GameScenesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__24_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "<get_waitUntilSceneTransitionFinish>b__24_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager* GlobalNamespace::GameScenesManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager::GameScenesManager() {}
