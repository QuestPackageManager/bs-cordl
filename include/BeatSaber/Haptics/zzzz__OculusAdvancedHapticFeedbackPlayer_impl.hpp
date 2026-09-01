#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\OculusAdvancedHapticFeedbackPlayer.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Haptics/zzzz__OculusAdvancedHapticFeedbackPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "BeatSaber/Haptics/zzzz__OculusAdvancedHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClipPlayer_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::*)()>(
    &::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3298180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Haptics::HapticClipPlayer*& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::Oculus::Haptics::HapticClipPlayer* const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_player(::Oculus::Haptics::HapticClipPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___player = value;
}
constexpr int32_t& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_lastFrameTriggered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameTriggered;
}
constexpr int32_t const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_lastFrameTriggered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameTriggered;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_lastFrameTriggered(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastFrameTriggered = value;
}
constexpr bool& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_isPlayingLoopingClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayingLoopingClip;
}
constexpr bool const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_isPlayingLoopingClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayingLoopingClip;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_isPlayingLoopingClip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPlayingLoopingClip = value;
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState() {}
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x3297ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                             { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)(::BeatSaber::Haptics::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(
    &::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x32981bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                             { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3298474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Dispose)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x329851c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Tick)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3298708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.IsOculusTouchController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::IsOculusTouchController)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32988bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                                                           { "IsOculusTouchController", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.GetHapticClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Haptics::HapticClip> (*)(::UnityEngine::XR::XRNode, ::BeatSaber::Haptics::HapticPresetSO*)>(
    &::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::GetHapticClip)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3298184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                             { "GetHapticClip", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer.HandleApplicationQuitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3298944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "HandleApplicationQuitting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::*)()>(&::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32989b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IVRPlatformHelper*& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                       ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*&
BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hapticPlayerStatesDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPlayerStatesDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                       ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* const&
BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hapticPlayerStatesDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPlayerStatesDictionary;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__hapticPlayerStatesDictionary(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                 ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticPlayerStatesDictionary = value;
}
constexpr bool& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hasAtLeastOneLoopingClipPlaying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasAtLeastOneLoopingClipPlaying;
}
constexpr bool const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hasAtLeastOneLoopingClipPlaying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasAtLeastOneLoopingClipPlaying;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__hasAtLeastOneLoopingClipPlaying(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasAtLeastOneLoopingClipPlaying = value;
}
constexpr ::System::Nullable_1<bool>& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isLeftHandSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeftHandSupported;
}
constexpr ::System::Nullable_1<bool> const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isLeftHandSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeftHandSupported;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__isLeftHandSupported(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLeftHandSupported = value;
}
constexpr ::System::Nullable_1<bool>& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isRightHandSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRightHandSupported;
}
constexpr ::System::Nullable_1<bool> const& BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isRightHandSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRightHandSupported;
}
constexpr void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__isRightHandSupported(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRightHandSupported = value;
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                           { "PlayHapticFeedback", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, hapticPreset);
}
inline bool BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                           { "CanPlayHapticPreset", {}, { ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>(), ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hapticPreset, node);
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::IsOculusTouchController(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                                                         { "IsOculusTouchController", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline ::UnityW<::Oculus::Haptics::HapticClip> BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::GetHapticClip(::UnityEngine::XR::XRNode node,
                                                                                                                     ::BeatSaber::Haptics::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(),
                                                           { "GetHapticClip", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::BeatSaber::Haptics::HapticPresetSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Haptics::HapticClip>>(nullptr, ___internal_method, node, hapticPreset);
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::HandleApplicationQuitting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { "HandleApplicationQuitting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*>());
}
/// @brief Convert operator to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
constexpr BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::operator ::BeatSaber::Haptics::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::i___BeatSaber__Haptics__IHapticFeedbackPlayer() noexcept {
  return static_cast<::BeatSaber::Haptics::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer::OculusAdvancedHapticFeedbackPlayer() {}
