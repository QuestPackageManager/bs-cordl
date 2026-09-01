#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\RumbleHapticFeedbackPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/Haptics/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "BeatSaber/Haptics/zzzz__RumbleData_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3297dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                             { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)(::BeatSaber::Haptics::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3298c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                             { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3298c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer.UpdateRumbles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::UpdateRumbles)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x3298c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { "UpdateRumbles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer.GetRumble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Haptics::RumbleData* (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::System::Object*)>(
    &::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::GetRumble)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3298a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                                                           { "GetRumble", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3299154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IVRPlatformHelper*& BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>*&
BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* const&
BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_get__rumblesByNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::__cordl_internal_set__rumblesByNode(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumblesByNode = value;
}
inline void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                           { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool BeatSaber::Haptics::RumbleHapticFeedbackPlayer::CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                           { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
inline void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::UpdateRumbles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { "UpdateRumbles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::RumbleData* BeatSaber::Haptics::RumbleHapticFeedbackPlayer::GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(),
                                                                                         { "GetRumble", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Haptics::RumbleData*>(this, ___internal_method, node, preset);
}
inline void BeatSaber::Haptics::RumbleHapticFeedbackPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer* BeatSaber::Haptics::RumbleHapticFeedbackPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer::RumbleHapticFeedbackPlayer() {}
