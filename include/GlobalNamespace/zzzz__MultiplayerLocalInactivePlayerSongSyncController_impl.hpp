#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerSongSyncController.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__CrossFadeAudioSource_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::*)(
    ::UnityEngine::AudioClip*, float_t, float_t, float_t)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3bc58ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_get_timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::__cordl_internal_set_timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeScale = value;
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, startSongTime, songTimeOffset, timeScale);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*
GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData::MultiplayerLocalInactivePlayerSongSyncController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_waitUntilIsReadyToStartTheSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3bc5ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "get_waitUntilIsReadyToStartTheSong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_isAudioLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3bc5b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "get_isAudioLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_songFailedToLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_songFailedToLoad)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3bc5c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "get_songFailedToLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3bc5d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3bc5e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3bc5f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3bc602c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3bc640c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "StartSong",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.FollowOffsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(
    ::GlobalNamespace::IMultiplayerObservable*, bool, bool)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3bc665c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "FollowOffsetSyncTime",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.UpdateOffsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(int64_t, bool, bool)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3bc62a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "UpdateOffsetSyncTime",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bc683c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t, bool, float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3bc64fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.HandleVrFocusWasReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc6848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "HandleVrFocusWasReleased", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bc684c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._get_waitUntilIsReadyToStartTheSong_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc6854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "<get_waitUntilIsReadyToStartTheSong>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrossFadeAudioSource>& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::GlobalNamespace::CrossFadeAudioSource> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__audioSource(::UnityW<::GlobalNamespace::CrossFadeAudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* const&
GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__initData(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeScale = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSongTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__songTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songLoadingStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLoadingStarted;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__songLoadingStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLoadingStarted;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__songLoadingStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songLoadingStarted = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__audioStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStarted;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__audioStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStarted;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__audioStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioStarted = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__currentObservableIsFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObservableIsFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__currentObservableIsFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObservableIsFailed;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__currentObservableIsFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentObservableIsFailed = value;
}
constexpr ::GlobalNamespace::IMultiplayerObservable*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observable;
}
constexpr ::GlobalNamespace::IMultiplayerObservable* const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observable;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__observable(::GlobalNamespace::IMultiplayerObservable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____observable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__lastLatencyOffsetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLatencyOffsetTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_get__lastLatencyOffsetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLatencyOffsetTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__cordl_internal_set__lastLatencyOffsetTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastLatencyOffsetTime = value;
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "get_waitUntilIsReadyToStartTheSong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "get_isAudioLoaded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_songFailedToLoad() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "get_songFailedToLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong(float_t offsetTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "StartSong",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable* observable, bool crossFade, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "FollowOffsetSyncTime",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime(int64_t offsetSyncTime, bool crossFade, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "UpdateOffsetSyncTime",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetSyncTime, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t offsetTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t offsetTime, bool crossFade, float_t toVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime, crossFade, toVolume);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "HandleVrFocusWasReleased", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "<get_waitUntilIsReadyToStartTheSong>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::operator ::GlobalNamespace::IStartSeekSongController*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStartSeekSongController"
constexpr ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::i___GlobalNamespace__IStartSeekSongController() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::MultiplayerLocalInactivePlayerSongSyncController() {}
