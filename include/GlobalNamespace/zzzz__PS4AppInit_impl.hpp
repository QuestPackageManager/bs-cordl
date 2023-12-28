#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PS4AppInit_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__PS4ActivePublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.InitializeModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PS4AppInit::InitializeModules)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), "InitializeModules",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.AppStartAndMultiSceneEditorSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PS4AppInit::*)()>(
    &::GlobalNamespace::PS4AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2229f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2229fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2229ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222a1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSystemInit*& GlobalNamespace::PS4AppInit::__get__mainSystemInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& GlobalNamespace::PS4AppInit::__get__mainSystemInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr void GlobalNamespace::PS4AppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSystemInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& GlobalNamespace::PS4AppInit::__get__defaultScenesTransitionsFromInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& GlobalNamespace::PS4AppInit::__get__defaultScenesTransitionsFromInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr void GlobalNamespace::PS4AppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultScenesTransitionsFromInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& GlobalNamespace::PS4AppInit::__get__appInitScenesTransitionSetupDataContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const&
GlobalNamespace::PS4AppInit::__get__appInitScenesTransitionSetupDataContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr void GlobalNamespace::PS4AppInit::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appInitScenesTransitionSetupDataContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*& GlobalNamespace::PS4AppInit::__get__activePublisherSKUSettingsSO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePublisherSKUSettingsSO;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*> const& GlobalNamespace::PS4AppInit::__get__activePublisherSKUSettingsSO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePublisherSKUSettingsSO;
}
constexpr void GlobalNamespace::PS4AppInit::__set__activePublisherSKUSettingsSO(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activePublisherSKUSettingsSO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*& GlobalNamespace::PS4AppInit::__get__sonyOnGoingToBackgroundSaveHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyOnGoingToBackgroundSaveHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> const& GlobalNamespace::PS4AppInit::__get__sonyOnGoingToBackgroundSaveHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyOnGoingToBackgroundSaveHandler;
}
constexpr void GlobalNamespace::PS4AppInit::__set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyOnGoingToBackgroundSaveHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::PS4AppInit::InitializeModules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), "InitializeModules",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                                                             "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PS4AppInit::RepeatableSetupAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), "RepeatableSetupAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::TransitionToNextScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), "TransitionToNextScene",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4AppInit* GlobalNamespace::PS4AppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4AppInit*>());
}
inline void GlobalNamespace::PS4AppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4AppInit::PS4AppInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
