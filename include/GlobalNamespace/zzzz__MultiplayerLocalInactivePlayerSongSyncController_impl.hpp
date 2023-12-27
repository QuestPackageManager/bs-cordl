#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__CrossFadeAudioSource_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::*)(
    ::UnityEngine::AudioClip*, float_t, float_t, float_t)>(&::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23dd218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_audioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___timeScale;
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___timeScale;
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___timeScale = value;
}
inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*
GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset,
                                                                                                 float_t timeScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, startSongTime, songTimeOffset, timeScale);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__MultiplayerLocalInactivePlayerSongSyncController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_waitUntilIsReadyToStartTheSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23dd2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_isAudioLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23dd35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "get_isAudioLoaded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23dd3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Awake",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23dd510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23dd600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x23dd708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Update",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23ddae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "StartSong",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.FollowOffsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(
    ::GlobalNamespace::IMultiplayerObservable*, bool, bool)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23ddd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "FollowOffsetSyncTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.UpdateOffsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(int64_t, bool, bool)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23dd984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "UpdateOffsetSyncTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ddf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t, bool, float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23ddbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.HandleVrFocusWasReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23ddf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "HandleVrFocusWasReleased", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ddf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._get_waitUntilIsReadyToStartTheSong_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23ddf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                                 "<get_waitUntilIsReadyToStartTheSong>b__7_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::operator ::GlobalNamespace::IStartSeekSongController*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::CrossFadeAudioSource*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrossFadeAudioSource*> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioSource(::GlobalNamespace::CrossFadeAudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioLatency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioLatency;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioLatency(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__initData(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeScale;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeScale = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startSongTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startSongTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startSongTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__songTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____songTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioStarted;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioStarted;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____audioStarted = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__currentObservableIsFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentObservableIsFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__currentObservableIsFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentObservableIsFailed;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__currentObservableIsFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentObservableIsFailed = value;
}
constexpr ::GlobalNamespace::IMultiplayerObservable*& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____observable;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerObservable*> const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____observable;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__observable(::GlobalNamespace::IMultiplayerObservable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____observable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__lastLatencyOffsetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastLatencyOffsetTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__lastLatencyOffsetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastLatencyOffsetTime;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__lastLatencyOffsetTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastLatencyOffsetTime = value;
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "get_isAudioLoaded",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Awake",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Start",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "Update",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param offsetTime: float_t (default: 0.0)
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong(float_t offsetTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "StartSong",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable* observable, bool crossFade, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "FollowOffsetSyncTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime(int64_t offsetSyncTime, bool crossFade, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "UpdateOffsetSyncTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetSyncTime, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t offsetTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t offsetTime, bool crossFade, float_t toVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), "SeekTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetTime, crossFade, toVolume);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "HandleVrFocusWasReleased", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                                               "<get_waitUntilIsReadyToStartTheSong>b__7_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::MultiplayerLocalInactivePlayerSongSyncController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
