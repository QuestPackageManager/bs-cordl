#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBigAvatarAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerIntroAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3bb8e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory::MultiplayerConnectedPlayerFacade_Factory() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.get_introAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> (
    ::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb8aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "get_introAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.get_outroAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb8aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "get_outroAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.get_scoreDiffText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::get_scoreDiffText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb8ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "get_scoreDiffText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.SetSongStartSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::SetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bb8ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(), "SetSongStartSyncTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.PauseSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::PauseSpawning)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3bb8c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "PauseSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.ResumeSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::ResumeSpawning)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3bb8cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "ResumeSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.__ForceStopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::__ForceStopSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3bb8d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "__ForceStopSong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.HideBigAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::HideBigAvatar)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3bb8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "HideBigAvatar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade.__GetPlayerAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::BeatSaber::AvatarCore::Avatar> (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::__GetPlayerAvatar)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3bb8e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               "__GetPlayerAvatar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerFacade._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3bb8e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__outroAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__outroAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__outroAnimator(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outroAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator>& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarAnimator;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__bigAvatarAnimator(::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bigAvatarAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarDisappearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarDisappearDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarDisappearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarDisappearDuration;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__bigAvatarDisappearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigAvatarDisappearDuration = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarDisappearEasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarDisappearEasing;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__bigAvatarDisappearEasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarDisappearEasing;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__bigAvatarDisappearEasing(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigAvatarDisappearEasing = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__songTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__songTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeSyncController;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__songTimeSyncController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__introAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__introAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__introAnimator(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__scoreDiffText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreDiffText;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__scoreDiffText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreDiffText;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__scoreDiffText(::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreDiffText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__beatmapObjectEventManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* const& GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_get__beatmapObjectEventManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerFacade::__cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectEventManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> GlobalNamespace::MultiplayerConnectedPlayerFacade::get_introAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "get_introAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::MultiplayerConnectedPlayerFacade::get_outroAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "get_outroAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> GlobalNamespace::MultiplayerConnectedPlayerFacade::get_scoreDiffText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "get_scoreDiffText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::SetSongStartSyncTime(int64_t songStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(), "SetSongStartSyncTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songStartSyncTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::PauseSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "PauseSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::ResumeSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "ResumeSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::__ForceStopSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "__ForceStopSong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::HideBigAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "HideBigAvatar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::BeatSaber::AvatarCore::Avatar> GlobalNamespace::MultiplayerConnectedPlayerFacade::__GetPlayerAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             "__GetPlayerAvatar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::AvatarCore::Avatar>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerFacade::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade* GlobalNamespace::MultiplayerConnectedPlayerFacade::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerFacade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade::MultiplayerConnectedPlayerFacade() {}
