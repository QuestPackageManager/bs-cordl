#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\IHapticFeedbackPlayer.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::IHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::IHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::IHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), { ::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::IHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::IHapticFeedbackPlayer::*)(::BeatSaber::Haptics::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::BeatSaber::Haptics::IHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), { ::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), 1 }));
    return ___internal_method;
  }
};
inline void BeatSaber::Haptics::IHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool BeatSaber::Haptics::IHapticFeedbackPlayer::CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
