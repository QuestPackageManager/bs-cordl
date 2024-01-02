#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.get_mainMenuScenesTransitionSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuScenesTransitionSetupDataSO* (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2225d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                               "get_mainMenuScenesTransitionSetupData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)(bool, bool, bool)>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2225d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToNextScene", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2225f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__healthWarningScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__get__healthWarningScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__healthWarningScenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__recordingToolScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__get__recordingToolScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__recordingToolScenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__mainMenuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__get__mainMenuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__mainMenuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainMenuScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__beatmapEditorScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__get__beatmapEditorScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__beatmapEditorScenesTransitionSetupData(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEditorScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__shaderWarmupScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__get__shaderWarmupScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__shaderWarmupScenesTransitionSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderWarmupScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::DefaultScenesTransitionsFromInit::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MenuScenesTransitionSetupDataSO* GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                             "get_mainMenuScenesTransitionSetupData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToNextScene", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goStraightToMenu, goStraightToEditor, goToRecordingToolScene);
}
inline ::GlobalNamespace::DefaultScenesTransitionsFromInit* GlobalNamespace::DefaultScenesTransitionsFromInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DefaultScenesTransitionsFromInit*>());
}
inline void GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit::DefaultScenesTransitionsFromInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
