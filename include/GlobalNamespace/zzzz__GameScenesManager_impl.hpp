#pragma once
#include "GlobalNamespace/zzzz__GameScenesManager_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
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
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.get_sceneNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)()>(
    &::GlobalNamespace::__GameScenesManager__ScenesStackData::get_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                                                                               "get_sceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.set_sceneNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::set_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "set_sceneNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.get_container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)()>(
    &::GlobalNamespace::__GameScenesManager__ScenesStackData::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                                                                               "get_container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.set_container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager__ScenesStackData::set_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "set_container", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe86e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.SetDiContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager__ScenesStackData::SetDiContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "SetDiContainer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_get__sceneNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_get__sceneNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNames_k__BackingField;
}
constexpr void GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_set__sceneNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_get__container_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_get__container_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container_k__BackingField;
}
constexpr void GlobalNamespace::__GameScenesManager__ScenesStackData::__cordl_internal_set__container_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager__ScenesStackData::get_sceneNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                                                                             "get_sceneNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "set_sceneNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::__GameScenesManager__ScenesStackData::get_container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                                                                             "get_container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::set_container(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "set_container", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager__ScenesStackData::New_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(sceneNames));
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneNames);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::SetDiContainer(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(), "SetDiContainer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData::__GameScenesManager__ScenesStackData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType::__GameScenesManager__ScenePresentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType::__GameScenesManager__ScenePresentType() {}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType GlobalNamespace::__GameScenesManager__ScenePresentType::DoNotLoad{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType GlobalNamespace::__GameScenesManager__ScenePresentType::Load{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType GlobalNamespace::__GameScenesManager__ScenePresentType::Activate{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType::__GameScenesManager__SceneDismissType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType::__GameScenesManager__SceneDismissType() {}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType GlobalNamespace::__GameScenesManager__SceneDismissType::DoNotUnload{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType GlobalNamespace::__GameScenesManager__SceneDismissType::Unload{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType GlobalNamespace::__GameScenesManager__SceneDismissType::Deactivate{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe86d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._PushScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_PushScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe89330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), "<PushScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._PushScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_PushScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe894c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), "<PushScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_PushScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), "<PushScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_PushScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(), "<PushScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__GameScenesManager____c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8713c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0._PopScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_PopScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe89540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(), "<PopScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0* GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_PopScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(), "<PopScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__GameScenesManager____c__DisplayClass35_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8749c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0._ReplaceScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe895e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0._ReplaceScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe89710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0._ReplaceScenes_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe8977c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newSceneNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyTransitionSceneNameList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0* GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__0(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::_ReplaceScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*>::get(), "<ReplaceScenes>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0::__GameScenesManager____c__DisplayClass36_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe87ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0._ClearAndOpenScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe897f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0._ClearAndOpenScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe8991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0._ClearAndOpenScenes_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe89988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newSceneNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyTransitionSceneNameList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0* GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::_ClearAndOpenScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*>::get(), "<ClearAndOpenScenes>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0::__GameScenesManager____c__DisplayClass37_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe87e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._AppendScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_AppendScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe89a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), "<AppendScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._AppendScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_AppendScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe89a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), "<AppendScenes>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesStackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_AppendScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), "<AppendScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_AppendScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(), "<AppendScenes>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__GameScenesManager____c__DisplayClass38_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8823c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0._RemoveScenes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_RemoveScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe89ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), "<RemoveScenes>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0._RemoveScenes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::*)(::StringW)>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_RemoveScenes_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe89b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), "<RemoveScenes>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get_sceneNamesToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_get_sceneNamesToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__cordl_internal_set_sceneNamesToRemove(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneNamesToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0* GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_RemoveScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), "<RemoveScenes>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline bool GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::_RemoveScenes_b__1(::StringW scene) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*>::get(), "<RemoveScenes>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scene);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0::__GameScenesManager____c__DisplayClass39_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)(int32_t)>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe88244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe89bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xffc;
  constexpr static std::size_t addrs = 0xe89c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe8ac2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe8ac7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                                 "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8accc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe8acd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::*)()>(
    &::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8ad14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_scenesToDismiss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_scenesToDismiss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_scenesToDismiss(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesToDismiss)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_scenesToPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_scenesToPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_scenesToPresent(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenesToPresent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_minDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr float_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_minDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_minDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDuration = value;
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_presentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_presentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_presentType(::GlobalNamespace::__GameScenesManager__ScenePresentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presentType = value;
}
constexpr ::System::Action*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_afterMinDurationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_afterMinDurationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_afterMinDurationCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___afterMinDurationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_newScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_newScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_newScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_extraBindingsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_extraBindingsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extraBindingsCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_dismissType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_dismissType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_dismissType(::GlobalNamespace::__GameScenesManager__SceneDismissType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dismissType = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__eventSystem_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem_5__2;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__eventSystem_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem_5__2;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set__eventSystem_5__2(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventSystem_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__beforeLoadTask_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeLoadTask_5__3;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__beforeLoadTask_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeLoadTask_5__3;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set__beforeLoadTask_5__3(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beforeLoadTask_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__sceneName_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__4;
}
constexpr ::StringW const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__sceneName_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__4;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set__sceneName_5__4(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneName_5__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__loadSceneOperationHandle_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__5;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__loadSceneOperationHandle_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__5;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set__loadSceneOperationHandle_5__5(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadSceneOperationHandle_5__5 = value;
}
constexpr int32_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__sceneNum_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__6;
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get__sceneNum_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__6;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set__sceneNum_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneNum_5__6 = value;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___7__wrap6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_get___7__wrap6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__cordl_internal_set___7__wrap6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap6 = value;
}
inline ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>(__1__state));
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                               "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42::__GameScenesManager___ScenesTransitionCoroutine_d__42() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8ad1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0._WaitUntilTaskCompleted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::*)()>(
    &::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::_WaitUntilTaskCompleted_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe8ad24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*>::get(),
                                                 "<WaitUntilTaskCompleted>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::_WaitUntilTaskCompleted_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*>::get(),
                                               "<WaitUntilTaskCompleted>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0::__GameScenesManager____c__DisplayClass43_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)(int32_t)>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe882d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)()>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe8ad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)()>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xe8ad44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)()>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8af54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)()>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe8af5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::*)()>(
    &::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8af9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*& GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*> const&
GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__cordl_internal_set___8__1(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43* GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>(__1__state));
}
inline void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43::__GameScenesManager___WaitUntilTaskCompleted_d__43() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::GameScenesManager::add_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe8626c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe8631c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe861bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_beforeDismissingScenesEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action*)>(
    &::GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe85360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_beforeDismissingScenesEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe863cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe8647c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_installEarlyBindingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe8652c;

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
  constexpr static std::size_t addrs = 0xe865dc;

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
  constexpr static std::size_t addrs = 0xe8668c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "get_currentScenesContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_isInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe866e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                                                                               "get_isInTransition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_waitUntilSceneTransitionFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe866ec;

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
  constexpr static std::size_t addrs = 0xe86798;

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
  constexpr static std::size_t addrs = 0xe86164;

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
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe867a0;

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
  constexpr static std::size_t addrs = 0xe86954;

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
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PushScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PushScenes)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xe869d8;

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
  constexpr static std::size_t addrs = 0xe86f54;

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
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xe87144;

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
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0xe874a4;

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
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::AppendScenes)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xe87ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AppendScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::RemoveScenes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xe87e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ScenesTransitionCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::System::Collections::Generic::List_1<::StringW>*,
                                             ::GlobalNamespace::__GameScenesManager__ScenePresentType, ::System::Collections::Generic::List_1<::StringW>*,
                                             ::GlobalNamespace::__GameScenesManager__SceneDismissType, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*,
                                             ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xe86e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ScenesTransitionCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__ScenePresentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneDismissType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.WaitUntilTaskCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Threading::Tasks::Task*)>(
    &::GlobalNamespace::GameScenesManager::WaitUntilTaskCompleted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe8826c;

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
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xe882fc;

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
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xe885fc;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe88a14;

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
  constexpr static std::size_t addrs = 0xe88760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "IsSceneInStack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SceneNamesFromSceneInfoArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::GlobalNamespace::GameScenesManager::*)(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>)>(&::GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe86d34;

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
  constexpr static std::size_t addrs = 0xe88a1c;

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
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xe88b9c;

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
  constexpr static std::size_t addrs = 0xe88e20;

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
  constexpr static std::size_t addrs = 0xe8919c;

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
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe891f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._get_waitUntilSceneTransitionFinish_b__22_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe892f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "<get_waitUntilSceneTransitionFinish>b__22_0",
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
constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSceneLoader*> const& GlobalNamespace::GameScenesManager::__cordl_internal_get__zenjectSceneLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenjectSceneLoader;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zenjectSceneLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidStartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidStartEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_transitionDidStartEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionDidStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_beforeDismissingScenesEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beforeDismissingScenesEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*> const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr void
GlobalNamespace::GameScenesManager::__cordl_internal_set_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*> const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr void
GlobalNamespace::GameScenesManager::__cordl_internal_set_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installEarlyBindingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameScenesManager::__cordl_internal_get__inTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr bool const& GlobalNamespace::GameScenesManager::__cordl_internal_get__inTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__inTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inTransition = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get__scenesStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*> const&
GlobalNamespace::GameScenesManager::__cordl_internal_get__scenesStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesStack;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::GameScenesManager::__cordl_internal_get__neverUnloadScenes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neverUnloadScenes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::GameScenesManager::__cordl_internal_get__neverUnloadScenes() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*> const&
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
inline void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidStartEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_beforeDismissingScenesEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_beforeDismissingScenesEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "add_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "remove_transitionDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*>::get() })));
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
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
inline void GlobalNamespace::GameScenesManager::PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PushScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
inline void GlobalNamespace::GameScenesManager::PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "PopScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param beforeNewScenesActivateRoutines: ::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*> (default: nullptr)
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
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
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
/// @param unloadAllScenes: bool (default: true)
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
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
inline void GlobalNamespace::GameScenesManager::AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                             ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "AppendScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: nullptr)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: nullptr)
inline void GlobalNamespace::GameScenesManager::RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupDataSo, float_t minDuration,
                                                             ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "RemoveScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupDataSo, minDuration, afterMinDurationCallback, finishCallback);
}
inline ::System::Collections::IEnumerator*
GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData,
                                                              ::System::Collections::Generic::List_1<::StringW>* scenesToPresent, ::GlobalNamespace::__GameScenesManager__ScenePresentType presentType,
                                                              ::System::Collections::Generic::List_1<::StringW>* scenesToDismiss, ::GlobalNamespace::__GameScenesManager__SceneDismissType dismissType,
                                                              float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback,
                                                              ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "ScenesTransitionCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__ScenePresentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneDismissType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newScenesTransitionSetupData, scenesToPresent, presentType, scenesToDismiss,
                                                                                         dismissType, minDuration, afterMinDurationCallback, extraBindingsCallback, finishCallback);
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
inline ::GlobalNamespace::GameScenesManager* GlobalNamespace::GameScenesManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameScenesManager*>());
}
inline void GlobalNamespace::GameScenesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(), "<get_waitUntilSceneTransitionFinish>b__22_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager::GameScenesManager() {}
