#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelReturnToMenuController.ReturnToMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelReturnToMenuController::*)()>(
    &::GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23cafd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelReturnToMenuController*>::get(),
                                                                               "ReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelReturnToMenuController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelReturnToMenuController::*)()>(
    &::GlobalNamespace::StandardLevelReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cb010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelReturnToMenuController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr GlobalNamespace::StandardLevelReturnToMenuController::operator ::GlobalNamespace::IReturnToMenuController*() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
constexpr ::GlobalNamespace::IReturnToMenuController* GlobalNamespace::StandardLevelReturnToMenuController::i___GlobalNamespace__IReturnToMenuController() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& GlobalNamespace::StandardLevelReturnToMenuController::__get__standardLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::StandardLevelReturnToMenuController::__get__standardLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr void GlobalNamespace::StandardLevelReturnToMenuController::__set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& GlobalNamespace::StandardLevelReturnToMenuController::__get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const&
GlobalNamespace::StandardLevelReturnToMenuController::__get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::StandardLevelReturnToMenuController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelReturnToMenuController*>::get(),
                                                                             "ReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelReturnToMenuController* GlobalNamespace::StandardLevelReturnToMenuController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelReturnToMenuController*>());
}
inline void GlobalNamespace::StandardLevelReturnToMenuController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelReturnToMenuController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelReturnToMenuController::StandardLevelReturnToMenuController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
