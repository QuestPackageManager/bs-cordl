#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettingsHandler_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AudioTimeSyncController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioTimeSyncController__InitData::*)(
    ::UnityEngine::AudioClip*, float_t, float_t, float_t)>(&::GlobalNamespace::__AudioTimeSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x261e620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioTimeSyncController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_get_timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__cordl_internal_set_timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeScale = value;
}
inline ::GlobalNamespace::__AudioTimeSyncController__InitData* GlobalNamespace::__AudioTimeSyncController__InitData::New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime,
                                                                                                                              float_t songTimeOffset, float_t timeScale) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AudioTimeSyncController__InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__AudioTimeSyncController__InitData::_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioTimeSyncController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, startSongTime, songTimeOffset, timeScale);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioTimeSyncController__InitData::__AudioTimeSyncController__InitData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AudioTimeSyncController__State::__AudioTimeSyncController__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioTimeSyncController__State::__AudioTimeSyncController__State() {}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State GlobalNamespace::__AudioTimeSyncController__State::Playing{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AudioTimeSyncController__State GlobalNamespace::__AudioTimeSyncController__State::Paused{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__AudioTimeSyncController__State GlobalNamespace::__AudioTimeSyncController__State::Stopped{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AudioTimeSyncController__State (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261da98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "get_state",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261daa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_songTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_lastFrameDeltaSongTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261daa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_lastFrameDeltaSongTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x261dab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_songLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_isAudioLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x261db48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_isAudioLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x261db78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_songEndTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_timeScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_timeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261db9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_timeScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_dspTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261dba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_dspTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_waitUntilAudioIsLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x261dbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_waitUntilAudioIsLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_isReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261dc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_isReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261dc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_songTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_forceNoAudioSyncOrAudioSyncErrorFixing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261dc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                 "get_forceNoAudioSyncOrAudioSyncErrorFixing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.set_forceNoAudioSyncOrAudioSyncErrorFixing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(bool)>(
    &::GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x261dc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "set_forceNoAudioSyncOrAudioSyncErrorFixing",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.add_stateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x261dc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "add_stateChangedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.remove_stateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x261dd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "remove_stateChangedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_timeSinceStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::get_timeSinceStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x261ddb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                               "get_timeSinceStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x261ddd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x261de1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x261df8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.HandleAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(bool)>(
    &::GlobalNamespace::AudioTimeSyncController::HandleAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x261e00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "HandleAudioConfigurationChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x261e050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(float_t)>(
    &::GlobalNamespace::AudioTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x261e388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "StartSong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(float_t)>(&::GlobalNamespace::AudioTimeSyncController::SeekTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x261e3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "SeekTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.StopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x261e518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "StopSong",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Pause)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x261e560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Resume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Resume)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x261e5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Resume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x261e608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController._get_waitUntilAudioIsLoaded_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(
    &::GlobalNamespace::AudioTimeSyncController::_get_waitUntilAudioIsLoaded_b__28_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261e61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "<get_waitUntilAudioIsLoaded>b__28_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr GlobalNamespace::AudioTimeSyncController::operator ::GlobalNamespace::IAudioTimeSource*() noexcept {
  return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::AudioTimeSyncController::i___GlobalNamespace__IAudioTimeSource() noexcept {
  return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSyncLerpSpeed;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSyncLerpSpeed;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__audioSyncLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSyncLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSyncDeltaTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__forcedSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forcedSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__startSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__startSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSyncDeltaTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__startSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__stopSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__stopSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopSyncDeltaTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__stopSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopSyncDeltaTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__mainSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__mainSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__graphicSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const&
GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__graphicSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicSettingsHandler;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphicSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__InitData*& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AudioTimeSyncController__InitData*> const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__initData(::GlobalNamespace::__AudioTimeSyncController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get_forcedNoAudioSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedNoAudioSync;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get_forcedNoAudioSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedNoAudioSync;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set_forcedNoAudioSync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forcedNoAudioSync = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get_stateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get_stateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateChangedEvent;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set_stateChangedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioLatency;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__audioLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioLatency = value;
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__fixingAudioSyncError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixingAudioSyncError;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__fixingAudioSyncError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixingAudioSyncError;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__fixingAudioSyncError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixingAudioSyncError = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioStartTimeOffsetSinceStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStartTimeOffsetSinceStart;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioStartTimeOffsetSinceStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStartTimeOffsetSinceStart;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__audioStartTimeOffsetSinceStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioStartTimeOffsetSinceStart = value;
}
constexpr int32_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__playbackLoopIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackLoopIndex;
}
constexpr int32_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__playbackLoopIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playbackLoopIndex;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__playbackLoopIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playbackLoopIndex = value;
}
constexpr int32_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__prevAudioSamplePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAudioSamplePos;
}
constexpr int32_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__prevAudioSamplePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAudioSamplePos;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__prevAudioSamplePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevAudioSamplePos = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSongTime = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStarted;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__audioStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioStarted;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__audioStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioStarted = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeScale = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__songTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__songTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__songTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTime = value;
}
constexpr double_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__dspTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dspTimeOffset;
}
constexpr double_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__dspTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dspTimeOffset;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__dspTimeOffset(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dspTimeOffset = value;
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__state(::GlobalNamespace::__AudioTimeSyncController__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__canStartSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartSong;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__canStartSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartSong;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__canStartSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canStartSong = value;
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__isReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__isReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__isReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isReady = value;
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameDeltaSongTime;
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameDeltaSongTime;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__lastFrameDeltaSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameDeltaSongTime = value;
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__forceNoAudioSyncOrAudioSyncErrorFixing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceNoAudioSyncOrAudioSyncErrorFixing;
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__cordl_internal_get__forceNoAudioSyncOrAudioSyncErrorFixing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceNoAudioSyncOrAudioSyncErrorFixing;
}
constexpr void GlobalNamespace::AudioTimeSyncController::__cordl_internal_set__forceNoAudioSyncOrAudioSyncErrorFixing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceNoAudioSyncOrAudioSyncErrorFixing = value;
}
inline ::GlobalNamespace::__AudioTimeSyncController__State GlobalNamespace::AudioTimeSyncController::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "get_state",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AudioTimeSyncController__State, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "get_songTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_lastFrameDeltaSongTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_songLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_isAudioLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songEndTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_songEndTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_timeScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_timeScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_dspTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_waitUntilAudioIsLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_isReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "get_isReady",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_songTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "get_forceNoAudioSyncOrAudioSyncErrorFixing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "set_forceNoAudioSyncOrAudioSyncErrorFixing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "add_stateChangedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "remove_stateChangedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_timeSinceStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                                                                             "get_timeSinceStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::HandleAudioConfigurationChanged(bool deviceWasChanged) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "HandleAudioConfigurationChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceWasChanged);
}
inline void GlobalNamespace::AudioTimeSyncController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param startTimeOffset: float_t (default: 0.0)
inline void GlobalNamespace::AudioTimeSyncController::StartSong(float_t startTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "StartSong",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::AudioTimeSyncController::SeekTo(float_t startTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "SeekTo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::AudioTimeSyncController::StopSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "StopSong",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Resume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "Resume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::AudioTimeSyncController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioTimeSyncController*>());
}
inline void GlobalNamespace::AudioTimeSyncController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::_get_waitUntilAudioIsLoaded_b__28_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(), "<get_waitUntilAudioIsLoaded>b__28_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioTimeSyncController::AudioTimeSyncController() {}
