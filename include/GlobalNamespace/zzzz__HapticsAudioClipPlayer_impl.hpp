#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.PlayHapticsPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*, ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*)>(
    &::GlobalNamespace::HapticsAudioClipPlayer::PlayHapticsPreset)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x20f91e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "PlayHapticsPreset", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.TriggerContinuousHaptic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(
    &::GlobalNamespace::HapticsAudioClipPlayer::TriggerContinuousHaptic)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20f953c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                               "TriggerContinuousHaptic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.RestartHaptic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(&::GlobalNamespace::HapticsAudioClipPlayer::RestartHaptic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f9574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                               "RestartHaptic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.HandleContinuousAudioCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::HapticsAudioClipPlayer::*)(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*)>(&::GlobalNamespace::HapticsAudioClipPlayer::HandleContinuousAudioCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20f94c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "HandleContinuousAudioCoroutine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.UpdateFadeVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)(float_t)>(
    &::GlobalNamespace::HapticsAudioClipPlayer::UpdateFadeVolume)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20f95a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "UpdateFadeVolume",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.HandleOneShotPlayEndCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::HapticsAudioClipPlayer::*)(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*)>(&::GlobalNamespace::HapticsAudioClipPlayer::HandleOneShotPlayEndCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20f9454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "HandleOneShotPlayEndCoroutine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(&::GlobalNamespace::HapticsAudioClipPlayer::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x20f931c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.ForceStopPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(
    &::GlobalNamespace::HapticsAudioClipPlayer::ForceStopPlaying)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20f9610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                               "ForceStopPlaying", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(&::GlobalNamespace::HapticsAudioClipPlayer::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20f963c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "Initialize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer.GetPanForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::HapticsAudioClipPlayer::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::HapticsAudioClipPlayer::GetPanForNode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x20f9370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "GetPanForNode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(&::GlobalNamespace::HapticsAudioClipPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsAudioClipPlayer._HandleOneShotPlayEndCoroutine_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HapticsAudioClipPlayer::*)()>(
    &::GlobalNamespace::HapticsAudioClipPlayer::_HandleOneShotPlayEndCoroutine_b__11_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                               "<HandleOneShotPlayEndCoroutine>b__11_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::HapticsAudioClipPlayer::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::HapticsAudioClipPlayer::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HapticsAudioClipPlayer::__get__baseVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseVolume;
}
constexpr float_t const& GlobalNamespace::HapticsAudioClipPlayer::__get__baseVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseVolume;
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__baseVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseVolume = value;
}
constexpr bool& GlobalNamespace::HapticsAudioClipPlayer::__get__triggeredThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggeredThisFrame;
}
constexpr bool const& GlobalNamespace::HapticsAudioClipPlayer::__get__triggeredThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggeredThisFrame;
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__triggeredThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggeredThisFrame = value;
}
constexpr float_t& GlobalNamespace::HapticsAudioClipPlayer::__get__lastTriggerTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTriggerTime;
}
constexpr float_t const& GlobalNamespace::HapticsAudioClipPlayer::__get__lastTriggerTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTriggerTime;
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__lastTriggerTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTriggerTime = value;
}
inline void GlobalNamespace::HapticsAudioClipPlayer::PlayHapticsPreset(::UnityEngine::XR::XRNode onNode, ::Libraries::HM::HMLib::VR::HapticPresetSO* preset,
                                                                       ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "PlayHapticsPreset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onNode, preset, onComplete);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::TriggerContinuousHaptic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                             "TriggerContinuousHaptic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::RestartHaptic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "RestartHaptic",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HapticsAudioClipPlayer::HandleContinuousAudioCoroutine(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "HandleContinuousAudioCoroutine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::UpdateFadeVolume(float_t timeSinceEnd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "UpdateFadeVolume",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSinceEnd);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HapticsAudioClipPlayer::HandleOneShotPlayEndCoroutine(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "HandleOneShotPlayEndCoroutine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::ForceStopPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                             "ForceStopPlaying", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsAudioClipPlayer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::HapticsAudioClipPlayer::GetPanForNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), "GetPanForNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, node);
}
inline ::GlobalNamespace::HapticsAudioClipPlayer* GlobalNamespace::HapticsAudioClipPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HapticsAudioClipPlayer*>());
}
inline void GlobalNamespace::HapticsAudioClipPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::HapticsAudioClipPlayer::_HandleOneShotPlayEndCoroutine_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticsAudioClipPlayer*>::get(),
                                                                             "<HandleOneShotPlayEndCoroutine>b__11_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HapticsAudioClipPlayer::HapticsAudioClipPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer__Pool.OnCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer__Pool::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnCreated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20f96a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer__Pool.OnDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer__Pool::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnDestroyed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20f96b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer__Pool.OnDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer__Pool::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20f972c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer__Pool.Reinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer__Pool::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer__Pool::Reinitialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20f9740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer__Pool::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20f9754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnCreated(::GlobalNamespace::HapticsAudioClipPlayer* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnDestroyed(::GlobalNamespace::HapticsAudioClipPlayer* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer__Pool::OnDespawned(::GlobalNamespace::HapticsAudioClipPlayer* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer__Pool::Reinitialize(::GlobalNamespace::HapticsAudioClipPlayer* clipPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clipPlayer);
}
inline ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* GlobalNamespace::__HapticsAudioClipPlayer__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>());
}
inline void GlobalNamespace::__HapticsAudioClipPlayer__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool::__HapticsAudioClipPlayer__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)(int32_t)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f9578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f979c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20f97a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f98cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20f98d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticsAudioClipPlayer*& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticsAudioClipPlayer*> const&
GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___4__this(::GlobalNamespace::HapticsAudioClipPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*> const&
GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set_onComplete(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::WaitForEndOfFrame*& GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get__waitForLateUpdate_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitForLateUpdate_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForEndOfFrame*> const&
GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get__waitForLateUpdate_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitForLateUpdate_5__2;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set__waitForLateUpdate_5__2(::UnityEngine::WaitForEndOfFrame* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitForLateUpdate_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*
GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>(__1__state));
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)(int32_t)>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f95e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x20f9920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20f9a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(
    &::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticsAudioClipPlayer*& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticsAudioClipPlayer*> const&
GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___4__this(::GlobalNamespace::HapticsAudioClipPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*& GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*> const&
GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set_onComplete(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*
GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>(__1__state));
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
