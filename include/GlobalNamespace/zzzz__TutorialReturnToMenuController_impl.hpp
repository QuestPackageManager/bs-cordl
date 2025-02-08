#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialReturnToMenuController.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialReturnToMenuController.ReturnToMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialReturnToMenuController::*)()>(
    &::GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3bb7000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialReturnToMenuController*>::get(),
                                                                               "ReturnToMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialReturnToMenuController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialReturnToMenuController::*)()>(
    &::GlobalNamespace::TutorialReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb7020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialReturnToMenuController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_get__tutorialSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_get__tutorialSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr void GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_set__tutorialSceneSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialReturnToMenuController*>::get(),
                                                                             "ReturnToMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialReturnToMenuController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialReturnToMenuController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialReturnToMenuController* GlobalNamespace::TutorialReturnToMenuController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialReturnToMenuController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr GlobalNamespace::TutorialReturnToMenuController::operator ::GlobalNamespace::IReturnToMenuController*() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
constexpr ::GlobalNamespace::IReturnToMenuController* GlobalNamespace::TutorialReturnToMenuController::i___GlobalNamespace__IReturnToMenuController() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialReturnToMenuController::TutorialReturnToMenuController() {}
