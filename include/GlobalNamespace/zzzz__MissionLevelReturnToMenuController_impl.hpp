#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelReturnToMenuController.ReturnToMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelReturnToMenuController::*)()>(
    &::GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23c9b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                                                                               "ReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelReturnToMenuController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelReturnToMenuController::*)()>(
    &::GlobalNamespace::MissionLevelReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c9bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr GlobalNamespace::MissionLevelReturnToMenuController::operator ::GlobalNamespace::IReturnToMenuController*() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& GlobalNamespace::MissionLevelReturnToMenuController::__get__missionLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::MissionLevelReturnToMenuController::__get__missionLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& GlobalNamespace::MissionLevelReturnToMenuController::__get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const&
GlobalNamespace::MissionLevelReturnToMenuController::__get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& GlobalNamespace::MissionLevelReturnToMenuController::__get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const&
GlobalNamespace::MissionLevelReturnToMenuController::__get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                                                                             "ReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelReturnToMenuController* GlobalNamespace::MissionLevelReturnToMenuController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelReturnToMenuController*>());
}
inline void GlobalNamespace::MissionLevelReturnToMenuController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelReturnToMenuController::MissionLevelReturnToMenuController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
