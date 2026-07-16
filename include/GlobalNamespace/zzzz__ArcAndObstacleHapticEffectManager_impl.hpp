#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcAndObstacleHapticEffectManager.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ArcAndObstacleHapticEffectManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__ArcAndObstacleHapticEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState.get_canBeActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::*)()>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::get_canBeActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { "get_canBeActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::*)()>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::get_isActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x597d82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::*)()>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597dab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager>& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_sliderInteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderInteractionManager;
}
constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager> const& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_sliderInteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderInteractionManager;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_set_sliderInteractionManager(::UnityW<::GlobalNamespace::SliderInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderInteractionManager = value;
}
constexpr bool& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_isInTheObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInTheObstacle;
}
constexpr bool const& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_isInTheObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInTheObstacle;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_set_isInTheObstacle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInTheObstacle = value;
}
constexpr bool& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_isSliderActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSliderActive;
}
constexpr bool const& GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_get_isSliderActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSliderActive;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::__cordl_internal_set_isSliderActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSliderActive = value;
}
inline bool GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::get_canBeActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { "get_canBeActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::get_isActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState::ArcAndObstacleHapticEffectManager_EffectState() {}
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)()>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::Start)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x597d0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)()>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x597d450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)()>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597d7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.UpdateHaptic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(
    ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::UpdateHaptic)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x597d7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                            { "UpdateHaptic", {}, { ::i2c::type_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.HandleSparkleEffectDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSparkleEffectDidStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x597d86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                                                                           { "HandleSparkleEffectDidStart", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.HandleSparkleEffectDidEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSparkleEffectDidEnd)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597d90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                                                                           { "HandleSparkleEffectDidEnd", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::SliderInteractionManager*)>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x597d984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                                { "HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.HandleSliderInteractionManagerSliderWasAddedToActiveSliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::SliderInteractionManager*, float_t)>(
    &::GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSliderInteractionManagerSliderWasAddedToActiveSliders)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x597d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                            { "HandleSliderInteractionManagerSliderWasAddedToActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.TryDisableThis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)()>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::TryDisableThis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x597d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "TryDisableThis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* (
    ::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::GetState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x597d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* (
    ::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::GetState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x597d9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcAndObstacleHapticEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcAndObstacleHapticEffectManager::*)()>(&::GlobalNamespace::ArcAndObstacleHapticEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x597da4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__hapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__hapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__hapticPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager>& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__obstacleSaberSparkleEffectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleSaberSparkleEffectManager;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__obstacleSaberSparkleEffectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleSaberSparkleEffectManager;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__obstacleSaberSparkleEffectManager(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleSaberSparkleEffectManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*&
GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__sliderInteractionManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManagers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const&
GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__sliderInteractionManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManagers;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__sliderInteractionManagers(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderInteractionManagers = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__leftHandEffectState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandEffectState;
}
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__leftHandEffectState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandEffectState;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__leftHandEffectState(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandEffectState = value;
}
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__rightHandEffectState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandEffectState;
}
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* const& GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_get__rightHandEffectState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandEffectState;
}
constexpr void GlobalNamespace::ArcAndObstacleHapticEffectManager::__cordl_internal_set__rightHandEffectState(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandEffectState = value;
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::UpdateHaptic(::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* state, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                       { "UpdateHaptic", {}, { ::i2c::type_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, node);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                                                                         { "HandleSparkleEffectDidStart", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberType);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSparkleEffectDidEnd(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                                                                         { "HandleSparkleEffectDidEnd", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberType);
}
inline void
GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                                              { "HandleSliderInteractionManagerAllSliderWereRemovedFromActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderInteractionManager);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::HandleSliderInteractionManagerSliderWasAddedToActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager,
                                                                                                                            float_t sliderInteractionParam) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(),
                          { "HandleSliderInteractionManagerSliderWasAddedToActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderInteractionManager, sliderInteractionParam);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::TryDisableThis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "TryDisableThis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* GlobalNamespace::ArcAndObstacleHapticEffectManager::GetState(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(this, ___internal_method, saberType);
}
inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState* GlobalNamespace::ArcAndObstacleHapticEffectManager::GetState(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArcAndObstacleHapticEffectManager_EffectState*>(this, ___internal_method, colorType);
}
inline void GlobalNamespace::ArcAndObstacleHapticEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcAndObstacleHapticEffectManager* GlobalNamespace::ArcAndObstacleHapticEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcAndObstacleHapticEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcAndObstacleHapticEffectManager::ArcAndObstacleHapticEffectManager() {}
