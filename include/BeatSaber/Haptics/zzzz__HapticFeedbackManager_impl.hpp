#pragma once
// IWYU pragma private; include "BeatSaber/Haptics/HapticFeedbackManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::HapticFeedbackManager.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::HapticFeedbackManager::*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::HapticFeedbackManager::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3296b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticFeedbackManager*>(),
                                                             { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::HapticFeedbackManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::HapticFeedbackManager::*)()>(&::BeatSaber::Haptics::HapticFeedbackManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticFeedbackManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer>& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get__rumbleHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer> const& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get__rumbleHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr void BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_set__rumbleHapticFeedbackPlayer(::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumbleHapticFeedbackPlayer = value;
}
constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer*& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get__advancedHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* const& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get__advancedHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr void BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_set__advancedHapticFeedbackPlayer(::BeatSaber::Haptics::IHapticFeedbackPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____advancedHapticFeedbackPlayer = value;
}
constexpr bool& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get_hapticFeedbackEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedbackEnabled;
}
constexpr bool const& BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_get_hapticFeedbackEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedbackEnabled;
}
constexpr void BeatSaber::Haptics::HapticFeedbackManager::__cordl_internal_set_hapticFeedbackEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticFeedbackEnabled = value;
}
inline void BeatSaber::Haptics::HapticFeedbackManager::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticFeedbackManager*>(),
                                                           { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline void BeatSaber::Haptics::HapticFeedbackManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::HapticFeedbackManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::HapticFeedbackManager* BeatSaber::Haptics::HapticFeedbackManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::HapticFeedbackManager*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::HapticFeedbackManager::HapticFeedbackManager() {}
