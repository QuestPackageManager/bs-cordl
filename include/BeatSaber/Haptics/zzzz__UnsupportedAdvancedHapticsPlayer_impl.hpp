#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\UnsupportedAdvancedHapticsPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Haptics/zzzz__UnsupportedAdvancedHapticsPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32991f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(),
                                                             { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::*)(::BeatSaber::Haptics::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32991f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(),
                                                             { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::*)()>(&::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32991fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(),
                                                           { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(),
                                                           { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
inline void BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer* BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*>());
}
/// @brief Convert operator to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
constexpr BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::operator ::BeatSaber::Haptics::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::i___BeatSaber__Haptics__IHapticFeedbackPlayer() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer::UnsupportedAdvancedHapticsPlayer() {}
