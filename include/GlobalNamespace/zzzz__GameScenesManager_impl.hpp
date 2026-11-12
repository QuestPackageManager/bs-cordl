#pragma once
// IWYU pragma private; include "GlobalNamespace/GameScenesManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.get_container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::GameScenesManager_ScenesStackData::*)()>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b41bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "get_container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.set_container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::set_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b41c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "set_container", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35afe04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager_ScenesStackData.SetDiContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager_ScenesStackData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager_ScenesStackData::SetDiContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b41cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "SetDiContainer", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get_sceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_get_sceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNames;
}
constexpr void GlobalNamespace::GameScenesManager_ScenesStackData::__cordl_internal_set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneNames = value;
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
  this->____container_k__BackingField = value;
}
inline ::Zenject::DiContainer* GlobalNamespace::GameScenesManager_ScenesStackData::get_container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "get_container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::set_container(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "set_container", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneNames);
}
inline void GlobalNamespace::GameScenesManager_ScenesStackData::SetDiContainer(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager_ScenesStackData*>(), { "SetDiContainer", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager_ScenesStackData* GlobalNamespace::GameScenesManager_ScenesStackData::New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager_ScenesStackData*>(sceneNames));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData::GameScenesManager_ScenesStackData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType::GameScenesManager_ScenePresentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType::GameScenesManager_ScenePresentType() {}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::DoNotLoad{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::Load{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::LoadAndDoNotActivate{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType GlobalNamespace::GameScenesManager_ScenePresentType::Activate{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType::GameScenesManager_SceneDismissType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType::GameScenesManager_SceneDismissType() {}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::DoNotUnload{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::Unload{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType GlobalNamespace::GameScenesManager_SceneDismissType::Deactivate{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c::*)()>(&::GlobalNamespace::GameScenesManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b4228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c._PreloadScene_b__41_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::GlobalNamespace::GameScenesManager___c::_PreloadScene_b__41_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::GameScenesManager___c*>(),
                         { "<PreloadScene>b__41_0",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameScenesManager___c::setStaticF___9(::GlobalNamespace::GameScenesManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameScenesManager___c*, "<>9", ::GlobalNamespace::GameScenesManager___c*>(std::forward<::GlobalNamespace::GameScenesManager___c*>(value));
}
inline ::GlobalNamespace::GameScenesManager___c* GlobalNamespace::GameScenesManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameScenesManager___c*, "<>9", ::GlobalNamespace::GameScenesManager___c*>();
}
inline void GlobalNamespace::GameScenesManager___c::setStaticF___9__41_0(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*, "<>9__41_0",
      ::GlobalNamespace::GameScenesManager___c*>(
      std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>(value));
}
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
GlobalNamespace::GameScenesManager___c::getStaticF___9__41_0() {
  return ::cordl_internals::getStaticField<
      ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*, "<>9__41_0",
      ::GlobalNamespace::GameScenesManager___c*>();
}
inline void GlobalNamespace::GameScenesManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c::_PreloadScene_b__41_0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c*>(),
                          { "<PreloadScene>b__41_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::GlobalNamespace::GameScenesManager___c* GlobalNamespace::GameScenesManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c::GameScenesManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b02f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0._PushScenesAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_PushScenesAsync_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35b4230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>(),
                                                                                           { "<PushScenesAsync>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcs = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass46_0::_PushScenesAsync_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>(),
                                                                                         { "<PushScenesAsync>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0* GlobalNamespace::GameScenesManager___c__DisplayClass46_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0::GameScenesManager___c__DisplayClass46_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b06fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0._PushScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_PushScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b4294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { "<PushScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0._PushScenes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_PushScenes_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35b4448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { "<PushScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesStackData = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
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
  this->_____4__this = value;
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
  this->___finishCallback = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_PushScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { "<PushScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass47_0::_PushScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>(), { "<PushScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0* GlobalNamespace::GameScenesManager___c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0::GameScenesManager___c__DisplayClass47_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass48_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b0ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0._PopScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass48_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass48_0::_PopScenes_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35b44c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*>(), { "<PopScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass48_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass48_0::_PopScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*>(), { "<PopScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0* GlobalNamespace::GameScenesManager___c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0::GameScenesManager___c__DisplayClass48_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass49_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass49_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b0c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0._ReplaceScenesAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass49_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass49_0::_ReplaceScenesAsync_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35b4580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*>(),
                                                                                           { "<ReplaceScenesAsync>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass49_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass49_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass49_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcs = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass49_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass49_0::_ReplaceScenesAsync_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*>(),
                                                                                         { "<ReplaceScenesAsync>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0* GlobalNamespace::GameScenesManager___c__DisplayClass49_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0::GameScenesManager___c__DisplayClass49_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b10d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0._ReplaceScenes_g__PresentNewScenesCoroutine_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*, float_t, ::System::Action*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_g__PresentNewScenesCoroutine_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x35b10d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(),
                                         { "<ReplaceScenes>g__PresentNewScenesCoroutine|0",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0._ReplaceScenes_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b45e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(),
                                                                                           { "<ReplaceScenes>b__2", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0._ReplaceScenes_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__3)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35b4650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(),
                                                                                           { "<ReplaceScenes>b__3", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0._ReplaceScenes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x35b46cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(),
                                                                                           { "<ReplaceScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_newSceneNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newSceneNames = value;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesStackData = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
constexpr bool& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_shouldReclaimMemory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldReclaimMemory;
}
constexpr bool const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_shouldReclaimMemory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldReclaimMemory;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_shouldReclaimMemory(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldReclaimMemory = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyTransitionSceneNameList = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator*
GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_g__PresentNewScenesCoroutine_0(::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss,
                                                                                                        float_t presentMinDuration, ::System::Action* presentAfterMinDurationCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(),
                                              { "<ReplaceScenes>g__PresentNewScenesCoroutine|0",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, scenesToDismiss, presentMinDuration, presentAfterMinDurationCallback);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(), { "<ReplaceScenes>b__2", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__3(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(), { "<ReplaceScenes>b__3", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass50_0::_ReplaceScenes_b__1(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>(), { "<ReplaceScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emptySceneContainer);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0* GlobalNamespace::GameScenesManager___c__DisplayClass50_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0::GameScenesManager___c__DisplayClass50_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b1b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0._ClearAndOpenScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__0)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x35b4700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                           { "<ClearAndOpenScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0._ClearAndOpenScenes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b4830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                           { "<ClearAndOpenScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0._ClearAndOpenScenes_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35b489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                           { "<ClearAndOpenScenes>b__2", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_newSceneNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_newSceneNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSceneNames;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set_newSceneNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newSceneNames = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_emptyTransitionSceneNameList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_emptyTransitionSceneNameList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyTransitionSceneNameList;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyTransitionSceneNameList = value;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesStackData = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::__cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__2 = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                         { "<ClearAndOpenScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                         { "<ClearAndOpenScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass51_0::_ClearAndOpenScenes_b__2(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>(),
                                                                                         { "<ClearAndOpenScenes>b__2", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0* GlobalNamespace::GameScenesManager___c__DisplayClass51_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0::GameScenesManager___c__DisplayClass51_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b1ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0._AppendScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_AppendScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b4918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { "<AppendScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0._AppendScenes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_AppendScenes_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35b4984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { "<AppendScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_scenesStackData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_scenesStackData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesStackData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesStackData = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_AppendScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { "<AppendScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass52_0::_AppendScenes_b__1(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>(), { "<AppendScenes>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0* GlobalNamespace::GameScenesManager___c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0::GameScenesManager___c__DisplayClass52_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass53_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b248c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass53_0._RemoveScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_RemoveScenes_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35b4a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { "<RemoveScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass53_0._RemoveScenes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_RemoveScenes_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35b4abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { "<RemoveScenes>b__1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get_sceneNamesToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_get_sceneNamesToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneNamesToRemove;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass53_0::__cordl_internal_set_sceneNamesToRemove(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneNamesToRemove = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_RemoveScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { "<RemoveScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline bool GlobalNamespace::GameScenesManager___c__DisplayClass53_0::_RemoveScenes_b__1(::StringW scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>(), { "<RemoveScenes>b__1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass53_0* GlobalNamespace::GameScenesManager___c__DisplayClass53_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass53_0::GameScenesManager___c__DisplayClass53_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass54_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b26f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass54_0._ActivateScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass54_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass54_0::_ActivateScenes_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35b4b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass54_0*>(),
                                                                                           { "<ActivateScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass54_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass54_0::_ActivateScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass54_0*>(), { "<ActivateScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass54_0* GlobalNamespace::GameScenesManager___c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass54_0::GameScenesManager___c__DisplayClass54_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b2954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0._DeactivateScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_DeactivateScenes_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35b4b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>(),
                                                                                           { "<DeactivateScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesTransitionSetupData = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass55_0::_DeactivateScenes_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>(),
                                                                                         { "<DeactivateScenes>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0* GlobalNamespace::GameScenesManager___c__DisplayClass55_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass55_0::GameScenesManager___c__DisplayClass55_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager___c__DisplayClass63_0::*)()>(&::GlobalNamespace::GameScenesManager___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b4c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0._WaitUntilTaskCompleted_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager___c__DisplayClass63_0::*)()>(
    &::GlobalNamespace::GameScenesManager___c__DisplayClass63_0::_WaitUntilTaskCompleted_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35b4c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*>(), { "<WaitUntilTaskCompleted>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::GameScenesManager___c__DisplayClass63_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::GameScenesManager___c__DisplayClass63_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::GameScenesManager___c__DisplayClass63_0::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
inline void GlobalNamespace::GameScenesManager___c__DisplayClass63_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager___c__DisplayClass63_0::_WaitUntilTaskCompleted_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*>(), { "<WaitUntilTaskCompleted>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0* GlobalNamespace::GameScenesManager___c__DisplayClass63_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0::GameScenesManager___c__DisplayClass63_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)(int32_t)>(&::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b4c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)()>(&::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x35b4c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b4d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35b4d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::*)()>(
    &::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b4da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get_sceneName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_get_sceneName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::__cordl_internal_set_sceneName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneName = value;
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__LoadOneScene_d__58::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__LoadOneScene_d__58::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58* GlobalNamespace::GameScenesManager__LoadOneScene_d__58::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager__LoadOneScene_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__58::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__LoadOneScene_d__58::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__58::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__LoadOneScene_d__58::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__LoadOneScene_d__58::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__LoadOneScene_d__58::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__LoadOneScene_d__58::GameScenesManager__LoadOneScene_d__58() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b2968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x35b4da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x1a2c;
  constexpr static std::size_t addrs = 0x35b4de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x35b6814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__m__Finally2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x35b68c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35b6984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::*)()>(
    &::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b69bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_scenesToDismiss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_scenesToDismiss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToDismiss;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_scenesToDismiss(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesToDismiss = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_scenesToPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_scenesToPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesToPresent;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_scenesToPresent(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesToPresent = value;
}
constexpr float_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_minDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr float_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_minDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDuration;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_minDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDuration = value;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_presentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_presentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentType;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_presentType(::GlobalNamespace::GameScenesManager_ScenePresentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presentType = value;
}
constexpr ::System::Action*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_afterMinDurationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr ::System::Action* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_afterMinDurationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterMinDurationCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_afterMinDurationCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterMinDurationCallback = value;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_newScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::ScenesTransitionSetupData* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_newScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newScenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_newScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newScenesTransitionSetupData = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_extraBindingsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_extraBindingsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraBindingsCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraBindingsCallback = value;
}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_dismissType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_dismissType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dismissType;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_dismissType(::GlobalNamespace::GameScenesManager_SceneDismissType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dismissType = value;
}
constexpr bool& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_canTriggerGarbageCollector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canTriggerGarbageCollector;
}
constexpr bool const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_canTriggerGarbageCollector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canTriggerGarbageCollector;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_canTriggerGarbageCollector(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canTriggerGarbageCollector = value;
}
constexpr bool& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_shouldReclaimMemory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldReclaimMemory;
}
constexpr bool const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_shouldReclaimMemory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldReclaimMemory;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_shouldReclaimMemory(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldReclaimMemory = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__allEventSystems_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEventSystems_5__2;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* const&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__allEventSystems_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEventSystems_5__2;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set__allEventSystems_5__2(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allEventSystems_5__2 = value;
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__sceneName_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__3;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__sceneName_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneName_5__3;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set__sceneName_5__3(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneName_5__3 = value;
}
constexpr bool& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__shouldLoad_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldLoad_5__4;
}
constexpr bool const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__shouldLoad_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldLoad_5__4;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set__shouldLoad_5__4(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldLoad_5__4 = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__loadSceneOperationHandle_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__5;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__loadSceneOperationHandle_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadSceneOperationHandle_5__5;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set__loadSceneOperationHandle_5__5(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadSceneOperationHandle_5__5 = value;
}
constexpr int32_t& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__sceneNum_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__6;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get__sceneNum_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneNum_5__6;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set__sceneNum_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneNum_5__6 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___7__wrap6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_get___7__wrap6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__cordl_internal_set___7__wrap6(::System::Collections::Generic::IEnumerator_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap6 = value;
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__60::GameScenesManager__ScenesTransitionCoroutine_d__60() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b2960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b69c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)()>(&::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x35b69c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b6af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35b6afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::*)()>(
    &::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b6b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get_sceneName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_get_sceneName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneName;
}
constexpr void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::__cordl_internal_set_sceneName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneName = value;
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59* GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__59::GameScenesManager__UnloadOneScene_d__59() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)(int32_t)>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b2cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b6b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x35b6b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b6db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35b6dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::*)()>(
    &::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b6df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0*& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass63_0* const& GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::__cordl_internal_set___8__1(::GlobalNamespace::GameScenesManager___c__DisplayClass63_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____8__1 = value;
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__63::GameScenesManager__WaitUntilTaskCompleted_d__63() {}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*)>(
    &::GlobalNamespace::GameScenesManager::add_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35aecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                { "add_transitionDidStartEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*)>(
    &::GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35aed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                         { "remove_transitionDidStartEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_scenesWillBeDismissedAfterLoadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*)>(
    &::GlobalNamespace::GameScenesManager::add_scenesWillBeDismissedAfterLoadEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35aee5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                         { "add_scenesWillBeDismissedAfterLoadEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_scenesWillBeDismissedAfterLoadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*)>(
    &::GlobalNamespace::GameScenesManager::remove_scenesWillBeDismissedAfterLoadEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35aef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                            { "remove_scenesWillBeDismissedAfterLoadEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*)>(
    &::GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35ae414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                { "add_beforeDismissingScenesEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_beforeDismissingScenesEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*)>(
    &::GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35ad8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                { "remove_beforeDismissingScenesEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35aefdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
            { "add_transitionDidFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35af09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
            { "remove_transitionDidFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_installEarlyBindingsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35af15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                         { "add_installEarlyBindingsEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_installEarlyBindingsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35af21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                            { "remove_installEarlyBindingsEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_currentScenesContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_currentScenesContainer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35af2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_currentScenesContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_isInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_isInTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x35adab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_isInTransition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneOnTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::IsSceneOnTop)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x35af338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneOnTop", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_currentSceneTransitionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameScenesManager_SceneTransitionType (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_currentSceneTransitionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35af400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_currentSceneTransitionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_waitUntilSceneTransitionFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35af408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_waitUntilSceneTransitionFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_sceneNameToSceneOperationHandlesDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* (
    ::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_sceneNameToSceneOperationHandlesDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35af4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_sceneNameToSceneOperationHandlesDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MarkSceneAsPersistent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::MarkSceneAsPersistent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35ae3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "MarkSceneAsPersistent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.GetCurrentlyLoadedSceneNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::GameScenesManager::*)()>(
    &::GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x35af4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "GetCurrentlyLoadedSceneNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PreloadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::PreloadScene)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x35af700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "PreloadScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RegisterExternallyLoadedScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::GlobalNamespace::GameScenesManager::RegisterExternallyLoadedScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35af914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                         { "RegisterExternallyLoadedScene",
                           {},
                           { ::i2c::type_of<::StringW>(),
                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.LoadSingleScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::LoadSingleScene)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x35af9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "LoadSingleScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.UnloadSingleScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::UnloadSingleScene)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x35afec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "UnloadSingleScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneActiveOrLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::IsSceneActiveOrLoading)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b01ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneActiveOrLoading", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PushScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>* (
    ::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*)>(&::GlobalNamespace::GameScenesManager::PushScenesAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x35b01b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                            { "PushScenesAsync", {}, { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PushScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PushScenes)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x35b02f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "PushScenes",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                          ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PopScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::PopScenes)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x35b07d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                         { "PopScenes", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReplaceScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>* (
    ::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupData*, bool, ::ArrayW<::System::Collections::IEnumerator*>, float_t, ::System::Action*)>(
    &::GlobalNamespace::GameScenesManager::ReplaceScenesAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x35b0ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                             { "ReplaceScenesAsync",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Collections::IEnumerator*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReplaceScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, bool, ::ArrayW<::System::Collections::IEnumerator*>, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::GlobalNamespace::GameScenesManager::ReplaceScenes)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x35b0c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                         { "ReplaceScenes",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Collections::IEnumerator*>>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ClearAndOpenScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, bool)>(&::GlobalNamespace::GameScenesManager::ClearAndOpenScenes)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x35b11fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                             { "ClearAndOpenScenes",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AppendScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, bool, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::AppendScenes)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x35b1b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                             { "AppendScenes",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::RemoveScenes)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x35b1ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "RemoveScenes",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                          ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ActivateScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ActivateScenes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x35b2490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "ActivateScenes",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                          ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.DeactivateScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupData*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::DeactivateScenes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x35b26f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "DeactivateScenes",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                          ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.LoadOneScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::LoadOneScene)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35afe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "LoadOneScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.UnloadOneScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameScenesManager::*)(::StringW)>(
    &::GlobalNamespace::GameScenesManager::UnloadOneScene)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35b014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "UnloadOneScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ScenesTransitionCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupData*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*,
                                             ::GlobalNamespace::GameScenesManager_ScenePresentType, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*,
                                             ::GlobalNamespace::GameScenesManager_SceneDismissType, float_t, bool, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*,
                                             ::System::Action_1<::Zenject::DiContainer*>*, bool)>(&::GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35b0700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                            { "ScenesTransitionCoroutine",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(),
                                ::i2c::type_of<::GlobalNamespace::GameScenesManager_ScenePresentType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(),
                                ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneDismissType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>(),
                                ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ShouldUnloadUnusedAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::GameScenesManager::ShouldUnloadUnusedAssets)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x35b2970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                             { "ShouldUnloadUnusedAssets", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.BackupToListAndDisableCurrentEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(
    ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>)>(&::GlobalNamespace::GameScenesManager::BackupToListAndDisableCurrentEventSystem)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x35b2b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
            { "BackupToListAndDisableCurrentEventSystem", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.WaitUntilTaskCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Threading::Tasks::Task*)>(&::GlobalNamespace::GameScenesManager::WaitUntilTaskCompleted)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35b2c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "WaitUntilTaskCompleted", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ActivatePresentedSceneRootObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x35b2cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                             { "ActivatePresentedSceneRootObjects", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsAnySceneInStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::IsAnySceneInStack)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x35b3168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsAnySceneInStack", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AreAllScenesInStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::GameScenesManager::AreAllScenesInStack)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x35b342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "AreAllScenesInStack", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneInStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::IsSceneInStack)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x35afc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneInStack", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveSceneFromStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::RemoveSceneFromStack)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x35b000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "RemoveSceneFromStack", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SetActiveRootObjectsInScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x35b36e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                { "SetActiveRootObjectsInScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReparentRootGameObjectsToDisabledGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x35b39d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "ReparentRootGameObjectsToDisabledGameObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MoveGameObjectsFromContainerToSceneRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x35b3c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "MoveGameObjectsFromContainerToSceneRoot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GameScenesManager::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35b3fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x35b403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._get_waitUntilSceneTransitionFinish_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__28_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x35b41ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "<get_waitUntilSceneTransitionFinish>b__28_0", {}, {} })));
    return ___internal_method;
  }
};
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
  this->____zenjectSceneLoader = value;
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
  this->___transitionDidStartEvent = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_scenesWillBeDismissedAfterLoadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesWillBeDismissedAfterLoadEvent;
}
constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get_scenesWillBeDismissedAfterLoadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenesWillBeDismissedAfterLoadEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_scenesWillBeDismissedAfterLoadEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenesWillBeDismissedAfterLoadEvent = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* const& GlobalNamespace::GameScenesManager::__cordl_internal_get_beforeDismissingScenesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeDismissingScenesEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeDismissingScenesEvent = value;
}
constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*&
GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_transitionDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionDidFinishEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionDidFinishEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*& GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get_installEarlyBindingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installEarlyBindingsEvent;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installEarlyBindingsEvent = value;
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
  this->____scenesStack = value;
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
  this->____neverUnloadScenes = value;
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
  this->____sceneNameToSceneOperationHandlesDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*&
GlobalNamespace::GameScenesManager::__cordl_internal_get__preloadedSceneOperationHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preloadedSceneOperationHandles;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* const&
GlobalNamespace::GameScenesManager::__cordl_internal_get__preloadedSceneOperationHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preloadedSceneOperationHandles;
}
constexpr void GlobalNamespace::GameScenesManager::__cordl_internal_set__preloadedSceneOperationHandles(
    ::System::Collections::Generic::Dictionary_2<
        ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preloadedSceneOperationHandles = value;
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                              { "add_transitionDidStartEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                              { "remove_transitionDidStartEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_scenesWillBeDismissedAfterLoadEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "add_scenesWillBeDismissedAfterLoadEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_scenesWillBeDismissedAfterLoadEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "remove_scenesWillBeDismissedAfterLoadEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                              { "add_beforeDismissingScenesEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                              { "remove_beforeDismissingScenesEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
          { "add_transitionDidFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(
    ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
          { "remove_transitionDidFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "add_installEarlyBindingsEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "remove_installEarlyBindingsEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::GameScenesManager::get_currentScenesContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_currentScenesContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_isInTransition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneOnTop(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneOnTop", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneName);
}
inline ::GlobalNamespace::GameScenesManager_SceneTransitionType GlobalNamespace::GameScenesManager::get_currentSceneTransitionType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_currentSceneTransitionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameScenesManager_SceneTransitionType>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_waitUntilSceneTransitionFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
GlobalNamespace::GameScenesManager::get_sceneNameToSceneOperationHandlesDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "get_sceneNameToSceneOperationHandlesDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager::MarkSceneAsPersistent(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "MarkSceneAsPersistent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "GetCurrentlyLoadedSceneNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager::PreloadScene(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "PreloadScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::RegisterExternallyLoadedScene(
    ::StringW sceneName, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> asyncOperationHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                          { "RegisterExternallyLoadedScene",
                            {},
                            { ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName, asyncOperationHandle);
}
inline void GlobalNamespace::GameScenesManager::LoadSingleScene(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "LoadSingleScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::UnloadSingleScene(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "UnloadSingleScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneActiveOrLoading(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneActiveOrLoading", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneName);
}
inline ::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>* GlobalNamespace::GameScenesManager::PushScenesAsync(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData,
                                                                                                                        float_t minDuration, ::System::Action* afterMinDurationCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                          { "PushScenesAsync", {}, { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>*>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback);
}
inline void GlobalNamespace::GameScenesManager::PushScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                                                         { "PushScenes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "PopScenes", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minDuration, afterMinDurationCallback, finishCallback);
}
inline ::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>*
GlobalNamespace::GameScenesManager::ReplaceScenesAsync(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, bool shouldReclaimMemory,
                                                       ::ArrayW<::System::Collections::IEnumerator*> beforeNewScenesActivateRoutines, float_t minDuration, ::System::Action* afterMinDurationCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                           { "ReplaceScenesAsync",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::ArrayW<::System::Collections::IEnumerator*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Zenject::DiContainer*>*>(this, ___internal_method, scenesTransitionSetupData, shouldReclaimMemory,
                                                                                                           beforeNewScenesActivateRoutines, minDuration, afterMinDurationCallback);
}
inline void GlobalNamespace::GameScenesManager::ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, bool shouldReclaimMemory,
                                                              ::ArrayW<::System::Collections::IEnumerator*> beforeNewScenesActivateRoutines, float_t minDuration,
                                                              ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                       { "ReplaceScenes",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Collections::IEnumerator*>>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, shouldReclaimMemory, beforeNewScenesActivateRoutines, minDuration, afterMinDurationCallback,
                                                   finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, float_t minDuration,
                                                                   ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool unloadAllScenes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                           { "ClearAndOpenScenes",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback, unloadAllScenes);
}
inline void GlobalNamespace::GameScenesManager::AppendScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, bool activateScenes, float_t minDuration,
                                                             ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                           { "AppendScenes",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, activateScenes, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::RemoveScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                             ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                                                         { "RemoveScenes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ActivateScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                               ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                                                         { "ActivateScenes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::DeactivateScenes(::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, float_t minDuration,
                                                                 ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                                                         { "DeactivateScenes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::LoadOneScene(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "LoadOneScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::UnloadOneScene(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "UnloadOneScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(
    ::GlobalNamespace::ScenesTransitionSetupData* newScenesTransitionSetupData, ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToPresent,
    ::GlobalNamespace::GameScenesManager_ScenePresentType presentType, ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss,
    ::GlobalNamespace::GameScenesManager_SceneDismissType dismissType, float_t minDuration, bool canTriggerGarbageCollector, ::System::Action* afterMinDurationCallback,
    ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool shouldReclaimMemory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                          { "ScenesTransitionCoroutine",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(),
                              ::i2c::type_of<::GlobalNamespace::GameScenesManager_ScenePresentType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(),
                              ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneDismissType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>(),
                              ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, newScenesTransitionSetupData, scenesToPresent, presentType, scenesToDismiss, dismissType,
                                                                                  minDuration, canTriggerGarbageCollector, afterMinDurationCallback, extraBindingsCallback, finishCallback,
                                                                                  shouldReclaimMemory);
}
inline bool GlobalNamespace::GameScenesManager::ShouldUnloadUnusedAssets(::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                           { "ShouldUnloadUnusedAssets", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scenesToDismiss);
}
inline void GlobalNamespace::GameScenesManager::BackupToListAndDisableCurrentEventSystem(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
          { "BackupToListAndDisableCurrentEventSystem", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::WaitUntilTaskCompleted(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "WaitUntilTaskCompleted", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, task);
}
inline void GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects(::System::Collections::Generic::IEnumerable_1<::StringW>* scenesToPresent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                                           { "ActivatePresentedSceneRootObjects", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scenesToPresent);
}
inline bool GlobalNamespace::GameScenesManager::IsAnySceneInStack(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsAnySceneInStack", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::AreAllScenesInStack(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "AreAllScenesInStack", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneInStack(::StringW searchSceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "IsSceneInStack", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, searchSceneName);
}
inline void GlobalNamespace::GameScenesManager::RemoveSceneFromStack(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "RemoveSceneFromStack", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(),
                                              { "SetActiveRootObjectsInScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneNames, value);
}
inline void GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "ReparentRootGameObjectsToDisabledGameObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "MoveGameObjectsFromContainerToSceneRoot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::GameScenesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__28_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameScenesManager*>(), { "<get_waitUntilSceneTransitionFinish>b__28_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GameScenesManager* GlobalNamespace::GameScenesManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameScenesManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameScenesManager::GameScenesManager() {}
