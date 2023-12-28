#pragma once
#include "GlobalNamespace/zzzz__SongController_impl.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__AudioPitchGainEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSongController.get_songLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::get_songLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22686d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "get_songLength",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.get_waitUntilIsReadyToStartTheSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameSongController::*)()>(
    &::GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22686f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                               "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::LateUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x226870c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)(float_t)>(&::GlobalNamespace::GameSongController::StartSong)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x226879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "StartSong", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.StopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::StopSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22687c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.PauseSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::PauseSong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22687dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.ResumeSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::ResumeSong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x226880c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.FailStopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::FailStopSong)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x226883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "FailStopSong",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.SeekTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)(float_t)>(&::GlobalNamespace::GameSongController::SeekTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2268968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "SeekTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2268984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController._FailStopSong_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::_FailStopSong_b__14_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2268994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                               "<FailStopSong>b__14_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr GlobalNamespace::GameSongController::operator ::GlobalNamespace::IStartSeekSongController*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::GameSongController::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::GameSongController::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::GameSongController::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioPitchGainEffect*& GlobalNamespace::GameSongController::__get__failAudioPitchGainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failAudioPitchGainEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& GlobalNamespace::GameSongController::__get__failAudioPitchGainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failAudioPitchGainEffect;
}
constexpr void GlobalNamespace::GameSongController::__set__failAudioPitchGainEffect(::GlobalNamespace::AudioPitchGainEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failAudioPitchGainEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::GameSongController::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::GameSongController::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::GameSongController::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksUpdater*& GlobalNamespace::GameSongController::__get__beatmapCallbacksUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksUpdater*> const& GlobalNamespace::GameSongController::__get__beatmapCallbacksUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr void GlobalNamespace::GameSongController::__set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksUpdater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameSongController::__get__songDidFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr bool const& GlobalNamespace::GameSongController::__get__songDidFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr void GlobalNamespace::GameSongController::__set__songDidFinish(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDidFinish = value;
}
inline float_t GlobalNamespace::GameSongController::get_songLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "get_songLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                             "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param songTimeOffset: float_t (default: 0.0)
inline void GlobalNamespace::GameSongController::StartSong(float_t songTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "StartSong", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTimeOffset);
}
inline void GlobalNamespace::GameSongController::StopSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "StopSong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::PauseSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "PauseSong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::ResumeSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "ResumeSong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::FailStopSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "FailStopSong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::SeekTo(float_t songTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), "SeekTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime);
}
inline ::GlobalNamespace::GameSongController* GlobalNamespace::GameSongController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameSongController*>());
}
inline void GlobalNamespace::GameSongController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::_FailStopSong_b__14_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameSongController*>::get(),
                                                                             "<FailStopSong>b__14_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSongController::GameSongController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
