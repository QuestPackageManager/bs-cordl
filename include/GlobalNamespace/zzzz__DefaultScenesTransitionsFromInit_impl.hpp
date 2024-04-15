#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.get_mainMenuScenesTransitionSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> (
    ::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(&::GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2507fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                 "get_mainMenuScenesTransitionSetupData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)(bool, bool, bool)>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2507fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToNextScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.TransitionToStartupErrorScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToStartupErrorScene)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x250817c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToStartupErrorScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(
    &::GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2508228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__healthWarningScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__healthWarningScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__healthWarningScenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__recordingToolScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__recordingToolScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__recordingToolScenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__mainMenuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__mainMenuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__mainMenuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainMenuScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__beatmapEditorScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__beatmapEditorScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__beatmapEditorScenesTransitionSetupData(::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEditorScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__shaderWarmupScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__shaderWarmupScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderWarmupScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__shaderWarmupScenesTransitionSetupData(::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderWarmupScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__startupErrorScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> const&
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__startupErrorScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__startupErrorScenesTransitionSetupData(::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startupErrorScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::DefaultScenesTransitionsFromInit::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                               "get_mainMenuScenesTransitionSetupData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToNextScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goStraightToMenu, goStraightToEditor, goToRecordingToolScene);
}
inline void GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToStartupErrorScene(::StringW title, ::StringW subtitle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(), "TransitionToStartupErrorScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, subtitle);
}
inline ::GlobalNamespace::DefaultScenesTransitionsFromInit* GlobalNamespace::DefaultScenesTransitionsFromInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultScenesTransitionsFromInit*>());
}
inline void GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit::DefaultScenesTransitionsFromInit() {}
