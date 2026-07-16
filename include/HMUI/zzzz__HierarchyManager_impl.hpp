#pragma once
// IWYU pragma private; include "HMUI/HierarchyManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__HierarchyManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::HMUI::HierarchyManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32f2d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x32f2ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.HandleSceneTransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*,
                                                                                          ::Zenject::DiContainer*)>(&::HMUI::HierarchyManager::HandleSceneTransitionDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32f2e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "HandleSceneTransitionDidFinish",
                                                                            {},
                                                                            { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                              ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.HandleBeforeDismissingScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(
    &::HMUI::HierarchyManager::HandleBeforeDismissingScenes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32f3060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "HandleBeforeDismissingScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.StartWithFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)(::HMUI::FlowCoordinator*)>(&::HMUI::HierarchyManager::StartWithFlowCoordinator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "StartWithFlowCoordinator", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ScreenSystem>& HMUI::HierarchyManager::__cordl_internal_get__screenSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr ::UnityW<::HMUI::ScreenSystem> const& HMUI::HierarchyManager::__cordl_internal_get__screenSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr void HMUI::HierarchyManager::__cordl_internal_set__screenSystem(::UnityW<::HMUI::ScreenSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& HMUI::HierarchyManager::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& HMUI::HierarchyManager::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void HMUI::HierarchyManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::HierarchyManager::__cordl_internal_get__rootFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::HierarchyManager::__cordl_internal_get__rootFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootFlowCoordinator;
}
constexpr void HMUI::HierarchyManager::__cordl_internal_set__rootFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootFlowCoordinator = value;
}
inline void HMUI::HierarchyManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::HierarchyManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::HierarchyManager::HandleSceneTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType,
                                                                   ::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "HandleSceneTransitionDidFinish",
                                                                          {},
                                                                          { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                            ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneTransitionType, scenesTransitionSetupData, container);
}
inline void HMUI::HierarchyManager::HandleBeforeDismissingScenes(::System::Collections::Generic::IReadOnlyList_1<::StringW>* _) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "HandleBeforeDismissingScenes", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void HMUI::HierarchyManager::StartWithFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { "StartWithFlowCoordinator", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator);
}
inline void HMUI::HierarchyManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HierarchyManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::HierarchyManager* HMUI::HierarchyManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::HierarchyManager*>());
}
// Ctor Parameters []
constexpr ::HMUI::HierarchyManager::HierarchyManager() {}
