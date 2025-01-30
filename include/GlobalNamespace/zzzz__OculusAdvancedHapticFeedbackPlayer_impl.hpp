#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusAdvancedHapticFeedbackPlayer.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "Zenject/zzzz__ITickable_impl.hpp"
#include "GlobalNamespace/zzzz__OculusAdvancedHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__OculusAdvancedHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__OculusVRHelper_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClipPlayer_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ca9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Oculus::Haptics::HapticClipPlayer*& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::Oculus::Haptics::HapticClipPlayer* const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_player(::Oculus::Haptics::HapticClipPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_lastFrameTriggered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameTriggered;
}
constexpr int32_t const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_lastFrameTriggered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameTriggered;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_lastFrameTriggered(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastFrameTriggered = value;
}
constexpr bool& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_isPlayingLoopingClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayingLoopingClip;
}
constexpr bool const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_get_isPlayingLoopingClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayingLoopingClip;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::__cordl_internal_set_isPlayingLoopingClip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPlayingLoopingClip = value;
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState() {}
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x39ca704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "PlayHapticFeedback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.CanPlayHapticPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)(
    ::Libraries::HM::HMLib::VR::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x39caa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "CanPlayHapticPreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x39cad38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Dispose)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x39caddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Tick)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x39cafe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                               "Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.GetHapticClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Oculus::Haptics::HapticClip> (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::GetHapticClip)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x39ca9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "GetHapticClip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer.HandleApplicationQuitting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x39cb228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                               "HandleApplicationQuitting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::*)()>(
    &::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x39cb290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OculusVRHelper>& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__oculusVRHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelper;
}
constexpr ::UnityW<::GlobalNamespace::OculusVRHelper> const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__oculusVRHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelper;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__oculusVRHelper(::UnityW<::GlobalNamespace::OculusVRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusVRHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                       ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*&
GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hapticPlayerStatesDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPlayerStatesDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                       ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* const&
GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hapticPlayerStatesDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPlayerStatesDictionary;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__hapticPlayerStatesDictionary(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                 ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticPlayerStatesDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hasAtLeastOneLoopingClipPlaying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasAtLeastOneLoopingClipPlaying;
}
constexpr bool const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__hasAtLeastOneLoopingClipPlaying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasAtLeastOneLoopingClipPlaying;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__hasAtLeastOneLoopingClipPlaying(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasAtLeastOneLoopingClipPlaying = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isLeftHandSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeftHandSupported;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isLeftHandSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeftHandSupported;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__isLeftHandSupported(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLeftHandSupported = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isRightHandSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRightHandSupported;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_get__isRightHandSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRightHandSupported;
}
constexpr void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::__cordl_internal_set__isRightHandSupported(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRightHandSupported = value;
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "PlayHapticFeedback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "CanPlayHapticPreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hapticPreset, node);
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                             "Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Haptics::HapticClip> GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::GetHapticClip(::UnityEngine::XR::XRNode node,
                                                                                                                  ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(), "GetHapticClip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Haptics::HapticClip>, false>(this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::HandleApplicationQuitting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                             "HandleApplicationQuitting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::i___GlobalNamespace__IHapticFeedbackPlayer() noexcept {
  return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer::OculusAdvancedHapticFeedbackPlayer() {}
