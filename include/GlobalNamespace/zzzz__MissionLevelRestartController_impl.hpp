#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelRestartController.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelRestartController.RestartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelRestartController::*)()>(
    &::GlobalNamespace::MissionLevelRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3bac45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelRestartController*>::get(),
                                                                               "RestartLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelRestartController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelRestartController::*)()>(
    &::GlobalNamespace::MissionLevelRestartController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bac508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelRestartController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__missionLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__missionLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr void GlobalNamespace::MissionLevelRestartController::__cordl_internal_set__missionLevelSceneSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MissionLevelRestartController::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionLevelRestartController::__cordl_internal_get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelRestartController::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelRestartController::RestartLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelRestartController*>::get(),
                                                                             "RestartLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelRestartController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelRestartController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelRestartController* GlobalNamespace::MissionLevelRestartController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionLevelRestartController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
constexpr GlobalNamespace::MissionLevelRestartController::operator ::GlobalNamespace::ILevelRestartController*() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelRestartController"
constexpr ::GlobalNamespace::ILevelRestartController* GlobalNamespace::MissionLevelRestartController::i___GlobalNamespace__ILevelRestartController() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelRestartController::MissionLevelRestartController() {}
