#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__InitData::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::__VideoProjectionEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2372428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::__VideoProjectionEffect__InitData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::__VideoProjectionEffect__InitData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__InitData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__VideoProjectionEffect__InitData* GlobalNamespace::__VideoProjectionEffect__InitData::New_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionEffect__InitData*>(beatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__InitData::_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__InitData::__VideoProjectionEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23727b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._LoadVideoFromModel_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)(
    ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2372854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(), "<LoadVideoFromModel>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__cordl_internal_get_eventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventValue;
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__cordl_internal_get_eventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventValue;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__cordl_internal_set_eventValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventValue = value;
}
inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId* clipWithId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(), "<LoadVideoFromModel>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipWithId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)()>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2372878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2372b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)(
    ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2372450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)()>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x237248c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.LoadVideoFromModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)(int32_t)>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x237253c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), "LoadVideoFromModel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.LoadPreviewCoverAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)()>(
    &::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23727c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                                                 "LoadPreviewCoverAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__eventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValue;
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__eventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValue;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_set__eventValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValue = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>>&
GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__videoClipHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> const&
GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__videoClipHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipHandle;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_set__videoClipHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoClipHandle = value;
}
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO>& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__model() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____model;
}
constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__model() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____model;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_set__model(::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__videoPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__videoPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoPlayer;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_set__videoPlayer(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*
GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::New_ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                                                                            ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>(dataModel, videoPlayer, beatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::_ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                     ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataModel, videoPlayer, beatmapLevel);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel(int32_t eventValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(), "LoadVideoFromModel",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventValue);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                                               "LoadPreviewCoverAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__VideoProjectionEffect__VideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType,
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x23721dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)()>(
    &::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2372b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2372b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(), "HandleBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__callbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_get__callbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackWrapper;
}
constexpr void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__cordl_internal_set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior* GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::New_ctor(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType,
                                                                                                                                     beatmapCallbacksController, beatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor(
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, beatmapLevel);
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(), "HandleBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType,
    ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23720a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*
GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                    ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType,
                                                                                    ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType, beatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                                             ::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                             ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                                                                                             ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::__VideoProjectionEffect__GameplayVideoProjectionBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2371f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2372408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2372420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoProjectionDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::GlobalNamespace::__VideoProjectionEffect__InitData*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__InitData*> const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__initData(::GlobalNamespace::__VideoProjectionEffect__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*& GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__behavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____behavior;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> const&
GlobalNamespace::VideoProjectionEffect::__cordl_internal_get__behavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____behavior;
}
constexpr void GlobalNamespace::VideoProjectionEffect::__cordl_internal_set__behavior(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____behavior)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::VideoProjectionEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionEffect* GlobalNamespace::VideoProjectionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VideoProjectionEffect*>());
}
inline void GlobalNamespace::VideoProjectionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionEffect::VideoProjectionEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
