#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__SongTimeSyncedVideoPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_InitData::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::VideoProjectionEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_InitData*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::VideoProjectionEffect_InitData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::VideoProjectionEffect_InitData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::VideoProjectionEffect_InitData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
inline void GlobalNamespace::VideoProjectionEffect_InitData::_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_InitData*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::VideoProjectionEffect_InitData* GlobalNamespace::VideoProjectionEffect_InitData::New_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionEffect_InitData*>(beatmapLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect_InitData::VideoProjectionEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599de30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0._LoadVideoFromModel_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::*)(
    ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*)>(&::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::_LoadVideoFromModel_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x599ded8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0*>(),
                                                             { "<LoadVideoFromModel>b__0", {}, { ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::__cordl_internal_get_eventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventValue;
}
constexpr int32_t const& GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::__cordl_internal_get_eventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventValue;
}
constexpr void GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::__cordl_internal_set_eventValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventValue = value;
}
inline void GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::_LoadVideoFromModel_b__0(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId* clipWithId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0*>(),
                                                           { "<LoadVideoFromModel>b__0", {}, { ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipWithId);
}
inline ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0* GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0::VideoProjectionBehavior_VideoProjectionEffect___c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::*)()>(
    &::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x599def8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599e1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9::VideoProjectionBehavior_VideoProjectionEffect__LoadPreviewCoverAsset_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::*)(
    ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x599d9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::*)()>(
    &::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x599d9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior.LoadVideoFromModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::*)(int32_t)>(
    &::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::LoadVideoFromModel)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x599db74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "LoadVideoFromModel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior.LoadPreviewCoverAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::*)()>(
    &::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::LoadPreviewCoverAsset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x599de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "LoadPreviewCoverAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior.UnloadCoverAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::*)()>(
    &::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::UnloadCoverAsset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x599dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "UnloadCoverAsset", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__coverLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverLoaded;
}
constexpr bool const& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__coverLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverLoaded;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__coverLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverLoaded = value;
}
constexpr int32_t& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__eventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValue;
}
constexpr int32_t const& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__eventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValue;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__eventValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValue = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>>&
GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__videoClipHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> const&
GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__videoClipHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipHandle;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__videoClipHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoClipHandle = value;
}
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO>& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__model() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____model;
}
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> const& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__model() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____model;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__model(::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____model = value;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__videoPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__videoPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__videoPlayer(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoPlayer = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel = value;
}
inline void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::_ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                                                                                  ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataModel, videoPlayer, beatmapLevel);
}
inline void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::LoadVideoFromModel(int32_t eventValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "LoadVideoFromModel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventValue);
}
inline void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::LoadPreviewCoverAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "LoadPreviewCoverAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::UnloadCoverAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(), { "UnloadCoverAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*
GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::New_ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                                                                         ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*>(dataModel, videoPlayer, beatmapLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior::VideoProjectionEffect_VideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType,
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x599d78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(), ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::*)()>(
    &::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x599e1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x599e1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__callbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__callbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackWrapper;
}
constexpr void GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::__cordl_internal_set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbackWrapper = value;
}
inline void GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::_ctor(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(),
                                                               ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(), ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, beatmapLevel);
}
inline void GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior* GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::New_ctor(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType,
                                                                                                                                          beatmapCallbacksController, beatmapLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior::VideoProjectionEffect_BeatmapEditorVideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType,
    ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x599d64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(), ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                                          ::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                          ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                                                                                          ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::VideoProjectionDataModelSO*>(),
                                                               ::i2c::type_of<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(), ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapLevel);
}
inline ::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior*
GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior::New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                 ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType,
                                                                                 ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType, beatmapLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect_GameplayVideoProjectionBehavior::VideoProjectionEffect_GameplayVideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x599d540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x599d9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599d9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO>& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoProjectionDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoProjectionDataModel;
}
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoProjectionDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoProjectionDataModel;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__videoProjectionDataModel(::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoProjectionDataModel = value;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__videoPlayer(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoPlayer = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__videoEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoEventType;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__videoEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoEventType = value;
}
constexpr ::GlobalNamespace::VideoProjectionEffect_InitData*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::VideoProjectionEffect_InitData* const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__initData(::GlobalNamespace::VideoProjectionEffect_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__environmentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__environmentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentContext = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__behavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____behavior;
}
constexpr ::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior* const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__behavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____behavior;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__behavior(::GlobalNamespace::VideoProjectionEffect_VideoProjectionBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____behavior = value;
}
inline void GlobalNamespace::VideoProjectionEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionEffect* GlobalNamespace::VideoProjectionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect::VideoProjectionEffect() {}
