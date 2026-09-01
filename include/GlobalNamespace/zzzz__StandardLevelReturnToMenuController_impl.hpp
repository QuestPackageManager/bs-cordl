#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelReturnToMenuController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelReturnToMenuController.ReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelReturnToMenuController::*)()>(&::GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59b6fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelReturnToMenuController*>(), { "ReturnToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelReturnToMenuController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelReturnToMenuController::*)()>(&::GlobalNamespace::StandardLevelReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b7038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelReturnToMenuController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_get__standardLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_get__standardLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr void GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelSceneSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::StandardLevelReturnToMenuController::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prepareLevelCompletionResults = value;
}
inline void GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelReturnToMenuController*>(), { "ReturnToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelReturnToMenuController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelReturnToMenuController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelReturnToMenuController* GlobalNamespace::StandardLevelReturnToMenuController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelReturnToMenuController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr GlobalNamespace::StandardLevelReturnToMenuController::operator ::GlobalNamespace::IReturnToMenuController*() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
constexpr ::GlobalNamespace::IReturnToMenuController* GlobalNamespace::StandardLevelReturnToMenuController::i___GlobalNamespace__IReturnToMenuController() noexcept {
  return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelReturnToMenuController::StandardLevelReturnToMenuController() {}
