#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsNoTransitionInstaller_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x231b6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)()>(
    &::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__recordingToolSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> const&
GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__recordingToolSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSceneSetupData;
}
constexpr void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*& GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*> const&
GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>::get(), "InstallBindings",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>());
}
inline void GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::RecordingToolSettingsNoTransitionInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
