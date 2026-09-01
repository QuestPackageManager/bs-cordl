#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialRestartController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialRestartController.RestartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialRestartController::*)()>(&::GlobalNamespace::TutorialRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59b703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialRestartController*>(), { "RestartLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialRestartController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialRestartController::*)()>(&::GlobalNamespace::TutorialRestartController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b706c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialRestartController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& GlobalNamespace::TutorialRestartController::__cordl_internal_get__tutorialSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& GlobalNamespace::TutorialRestartController::__cordl_internal_get__tutorialSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneSetupData;
}
constexpr void GlobalNamespace::TutorialRestartController::__cordl_internal_set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialSceneSetupData = value;
}
inline void GlobalNamespace::TutorialRestartController::RestartLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialRestartController*>(), { "RestartLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialRestartController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialRestartController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialRestartController* GlobalNamespace::TutorialRestartController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialRestartController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
constexpr GlobalNamespace::TutorialRestartController::operator ::GlobalNamespace::ILevelRestartController*() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelRestartController"
constexpr ::GlobalNamespace::ILevelRestartController* GlobalNamespace::TutorialRestartController::i___GlobalNamespace__ILevelRestartController() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialRestartController::TutorialRestartController() {}
