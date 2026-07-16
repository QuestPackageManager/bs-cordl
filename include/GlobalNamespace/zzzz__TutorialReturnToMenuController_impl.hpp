#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialReturnToMenuController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialReturnToMenuController.ReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialReturnToMenuController::*)()>(&::GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59b0aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialReturnToMenuController*>(), { "ReturnToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialReturnToMenuController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialReturnToMenuController::*)()>(&::GlobalNamespace::TutorialReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b0adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialReturnToMenuController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_get__tutorialSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_get__tutorialSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr void GlobalNamespace::TutorialReturnToMenuController::__cordl_internal_set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialSceneSetupData = value;
}
inline void GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialReturnToMenuController*>(), { "ReturnToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialReturnToMenuController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialReturnToMenuController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialReturnToMenuController* GlobalNamespace::TutorialReturnToMenuController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialReturnToMenuController*>());
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
