#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelLoader_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader_InitData::*)(int32_t)>(
    &::GlobalNamespace::BeatmapLevelLoader_InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26bf54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapLevelLoader_InitData::__cordl_internal_get_maxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelLoader_InitData::__cordl_internal_get_maxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelLoader_InitData::__cordl_internal_set_maxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCachedBeatmapLevels = value;
}
inline void GlobalNamespace::BeatmapLevelLoader_InitData::_ctor(int32_t maxCachedBeatmapLevels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader_InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxCachedBeatmapLevels);
}
inline ::GlobalNamespace::BeatmapLevelLoader_InitData* GlobalNamespace::BeatmapLevelLoader_InitData::New_ctor(int32_t maxCachedBeatmapLevels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelLoader_InitData*>(maxCachedBeatmapLevels));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader_InitData::BeatmapLevelLoader_InitData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState() {}
constexpr ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState::PreparingToDownload{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState::Downloading{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState::Completed{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate::*)(
    ::StringW, float_t, ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState)>(&::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26bf2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate::_ctor(::StringW levelID, float_t progress,
                                                                              ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState downloadingState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelID, progress, downloadingState);
}
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "downloadingState", ty: "::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate::BeatmapLevelLoader_LevelDownloadingUpdate(
    ::StringW levelID, float_t progress, ::GlobalNamespace::LevelDownloadingUpdate_BeatmapLevelLoader_DownloadingState downloadingState) noexcept {
  this->levelID = levelID;
  this->progress = progress;
  this->downloadingState = downloadingState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate::BeatmapLevelLoader_LevelDownloadingUpdate() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::*)()>(
    &::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x26bf574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26bf808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty:
// "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevelLoader* __4__this,
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14::BeatmapLevelLoader__CheckBeatmapLevelDataExistsAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::*)()>(
    &::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x26bf884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26bfd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16::BeatmapLevelLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::*)()>(
    &::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x26bfdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26c0130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder, ::GlobalNamespace::BeatmapLevelLoader* __4__this,
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13::BeatmapLevelLoader__LoadBeatmapLevelDataAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::*)()>(
    &::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x26c01ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26c09a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelDataAssetName_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_storeProvidedBeatmapLevelData_5__3", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token,
    ::StringW _levelDataAssetName_5__2, ::GlobalNamespace::IBeatmapLevelData* _storeProvidedBeatmapLevelData_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->__4__this = __4__this;
  this->token = token;
  this->_levelDataAssetName_5__2 = _levelDataAssetName_5__2;
  this->_storeProvidedBeatmapLevelData_5__3 = _storeProvidedBeatmapLevelData_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18::BeatmapLevelLoader__LoadBeatmapLevelDataFromAssetBundle_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.add_levelDownloadingUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelLoader::add_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26be8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "add_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.remove_levelDownloadingUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelLoader::remove_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26be960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "remove_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.get_cachedLoadRequestCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelLoader::*)()>(
    &::GlobalNamespace::BeatmapLevelLoader::get_cachedLoadRequestCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26bea10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(),
                                                                               "get_cachedLoadRequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::GlobalNamespace::BeatmapLevelDataLoader*, ::GlobalNamespace::IBeatmapDataAssetFileModel*, ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::BeatmapLevelLoader_InitData*)>(
    &::GlobalNamespace::BeatmapLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x26bea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataLoader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataAssetFileModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelLoader_InitData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)()>(&::GlobalNamespace::BeatmapLevelLoader::Dispose)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x26bec00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26bed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataExistsAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26bee84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataFromCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bef98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataFromAssetBundleExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x26befa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(),
                                                 "CheckBeatmapLevelDataFromAssetBundleExistsAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelDataFromCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bf0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelDataFromAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromAssetBundle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x26bf0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.DownloadAssetBundleAndGetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelLoader::DownloadAssetBundleAndGetPath)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26bf1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "DownloadAssetBundleAndGetPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.HandleLevelDataAssetDownloadUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::LevelDataAssetDownloadUpdate)>(
    &::GlobalNamespace::BeatmapLevelLoader::HandleLevelDataAssetDownloadUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26bf284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "HandleLevelDataAssetDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.HandleItemWillBeRemovedFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(::StringW, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::BeatmapLevelLoader::HandleItemWillBeRemovedFromCache)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26bf2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "HandleItemWillBeRemovedFromCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.ClearCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)()>(&::GlobalNamespace::BeatmapLevelLoader::ClearCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26bf4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "ClearCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get_levelDownloadingUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDownloadingUpdateEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get_levelDownloadingUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDownloadingUpdateEvent;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDownloadingUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*&
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__loadedBeatmapLevelDataCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevelDataCache;
}
constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* const&
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__loadedBeatmapLevelDataCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevelDataCache;
}
constexpr void
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__loadedBeatmapLevelDataCache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedBeatmapLevelDataCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapLevelDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelDataLoader;
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader* const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapLevelDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelDataLoader;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelDataLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapDataAssetFileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataAssetFileModel;
}
constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapDataAssetFileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataAssetFileModel;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataAssetFileModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapLevelLoader::add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "add_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelLoader::remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "remove_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapLevelLoader::get_cachedLoadRequestCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(),
                                                                             "get_cachedLoadRequestCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader::_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                                                       ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapLevelLoader_InitData* initData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataLoader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataAssetFileModel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelLoader_InitData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelDataLoader, beatmapDataAssetFileModel, audioClipAsyncLoader, initData);
}
inline void GlobalNamespace::BeatmapLevelLoader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*
GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion,
                                                                                                                                        cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                       ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion, cancellationToken);
}
inline bool GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                     ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromAssetBundleExistsAsync",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion, token);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromAssetBundle(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                         ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::BeatmapLevelLoader::DownloadAssetBundleAndGetPath(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                   ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "DownloadAssetBundleAndGetPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion,
                                                                                                                                      token);
}
inline void GlobalNamespace::BeatmapLevelLoader::HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate update) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "HandleLevelDataAssetDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, update);
}
inline void GlobalNamespace::BeatmapLevelLoader::HandleItemWillBeRemovedFromCache(::StringW beatmapLevelId, ::GlobalNamespace::IBeatmapLevelData* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "HandleItemWillBeRemovedFromCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelId, beatmapLevel);
}
inline void GlobalNamespace::BeatmapLevelLoader::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "ClearCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelLoader* GlobalNamespace::BeatmapLevelLoader::New_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                                            ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                                                                                            ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                                            ::GlobalNamespace::BeatmapLevelLoader_InitData* initData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelLoader*>(beatmapLevelDataLoader, beatmapDataAssetFileModel, audioClipAsyncLoader, initData));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelLoader"
constexpr GlobalNamespace::BeatmapLevelLoader::operator ::GlobalNamespace::IBeatmapLevelLoader*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelLoader"
constexpr ::GlobalNamespace::IBeatmapLevelLoader* GlobalNamespace::BeatmapLevelLoader::i___GlobalNamespace__IBeatmapLevelLoader() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelLoader*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelLoader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelLoader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader::BeatmapLevelLoader() {}
