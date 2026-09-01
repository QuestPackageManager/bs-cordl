#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelRestartController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelRestartController.RestartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelRestartController::*)()>(&::GlobalNamespace::StandardLevelRestartController::RestartLevel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59b6f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelRestartController*>(), { "RestartLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelRestartController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelRestartController::*)()>(&::GlobalNamespace::StandardLevelRestartController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b6fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelRestartController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::StandardLevelRestartController::__cordl_internal_get__standardLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::StandardLevelRestartController::__cordl_internal_get__standardLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelSceneSetupData;
}
constexpr void GlobalNamespace::StandardLevelRestartController::__cordl_internal_set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelSceneSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::StandardLevelRestartController::__cordl_internal_get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::StandardLevelRestartController::__cordl_internal_get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::StandardLevelRestartController::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prepareLevelCompletionResults = value;
}
inline void GlobalNamespace::StandardLevelRestartController::RestartLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelRestartController*>(), { "RestartLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelRestartController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelRestartController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelRestartController* GlobalNamespace::StandardLevelRestartController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelRestartController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
constexpr GlobalNamespace::StandardLevelRestartController::operator ::GlobalNamespace::ILevelRestartController*() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelRestartController"
constexpr ::GlobalNamespace::ILevelRestartController* GlobalNamespace::StandardLevelRestartController::i___GlobalNamespace__ILevelRestartController() noexcept {
  return static_cast<::GlobalNamespace::ILevelRestartController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelRestartController::StandardLevelRestartController() {}
