#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PS5AppInit_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__SonyBackgroundExecutionHelper_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.AppStartAndMultiSceneEditorSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x222a1e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PS5AppInit::*)()>(
    &::GlobalNamespace::PS5AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222a24c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222a2e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextSceneInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x222a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                               "TransitionToNextSceneInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x222a340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222a52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSystemInit*& GlobalNamespace::PS5AppInit::__get__mainSystemInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& GlobalNamespace::PS5AppInit::__get__mainSystemInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr void GlobalNamespace::PS5AppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSystemInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& GlobalNamespace::PS5AppInit::__get__defaultScenesTransitionsFromInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& GlobalNamespace::PS5AppInit::__get__defaultScenesTransitionsFromInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr void GlobalNamespace::PS5AppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultScenesTransitionsFromInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& GlobalNamespace::PS5AppInit::__get__appInitScenesTransitionSetupDataContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const&
GlobalNamespace::PS5AppInit::__get__appInitScenesTransitionSetupDataContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr void GlobalNamespace::PS5AppInit::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appInitScenesTransitionSetupDataContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO*& GlobalNamespace::PS5AppInit::__get__ps5SharedPackageSKUs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5SharedPackageSKUs;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5SharedPackageSKUsSO*> const& GlobalNamespace::PS5AppInit::__get__ps5SharedPackageSKUs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5SharedPackageSKUs;
}
constexpr void GlobalNamespace::PS5AppInit::__set__ps5SharedPackageSKUs(::GlobalNamespace::PS5SharedPackageSKUsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5SharedPackageSKUs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*& GlobalNamespace::PS5AppInit::__get__sonyOnGoingToBackgroundSaveHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyOnGoingToBackgroundSaveHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> const& GlobalNamespace::PS5AppInit::__get__sonyOnGoingToBackgroundSaveHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyOnGoingToBackgroundSaveHandler;
}
constexpr void GlobalNamespace::PS5AppInit::__set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyOnGoingToBackgroundSaveHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::PS5AppInit::__get__ps5AdvancedHapticPlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AdvancedHapticPlayerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::PS5AppInit::__get__ps5AdvancedHapticPlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AdvancedHapticPlayerPrefab;
}
constexpr void GlobalNamespace::PS5AppInit::__set__ps5AdvancedHapticPlayerPrefab(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5AdvancedHapticPlayerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& GlobalNamespace::PS5AppInit::__get__backgroundExecutionHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundExecutionHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const& GlobalNamespace::PS5AppInit::__get__backgroundExecutionHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundExecutionHelper;
}
constexpr void GlobalNamespace::PS5AppInit::__set__backgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundExecutionHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                             "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PS5AppInit::RepeatableSetupAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), "RepeatableSetupAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::TransitionToNextScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), "TransitionToNextScene",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                                                             "TransitionToNextSceneInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5AppInit* GlobalNamespace::PS5AppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5AppInit*>());
}
inline void GlobalNamespace::PS5AppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5AppInit::PS5AppInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
