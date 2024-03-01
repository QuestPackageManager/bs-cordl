#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_impl.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult::*)(
    bool, ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12c339c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult::_ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isError, beatmapLevelData);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult::__BeatmapLevelLoader__LoadBeatmapLevelDataResult(bool isError,
                                                                                                                                ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept {
  this->isError = isError;
  this->beatmapLevelData = beatmapLevelData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult::__BeatmapLevelLoader__LoadBeatmapLevelDataResult() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState() {}
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState::PreparingToDownload{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState::Downloading{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState::Completed{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate::*)(
    ::StringW, float_t, ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState)>(&::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12c318c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate::_ctor(::StringW levelID, float_t progress,
                                                                                 ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelID, progress, downloadingState);
}
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate::__BeatmapLevelLoader__LevelDownloadingUpdate(
    ::StringW levelID, float_t progress, ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept {
  this->levelID = levelID;
  this->progress = progress;
  this->downloadingState = downloadingState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate::__BeatmapLevelLoader__LevelDownloadingUpdate() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::*)()>(
    &::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x12c33ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c3650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult> __t__builder,
    ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::*)()>(
    &::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x12c36a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c38dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevelLoader* __4__this,
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::*)()>(
    &::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x12c3934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c3d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "token", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::*)()>(
    &::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x12c3dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c44e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelDataAssetName_5__2", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_storeProvidedBeatmapLevelData_5__3", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::StringW _levelDataAssetName_5__2,
    ::GlobalNamespace::IBeatmapLevelData* _storeProvidedBeatmapLevelData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->__4__this = __4__this;
  this->token = token;
  this->_levelDataAssetName_5__2 = _levelDataAssetName_5__2;
  this->_storeProvidedBeatmapLevelData_5__3 = _storeProvidedBeatmapLevelData_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::*)()>(
    &::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x12c4540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c47b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevelLoader* __4__this,
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken token,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.add_levelDownloadingUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelLoader::add_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12c26ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "add_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.remove_levelDownloadingUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelLoader::remove_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12c279c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "remove_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(
    ::GlobalNamespace::BeatmapLevelDataLoader*, ::GlobalNamespace::IBeatmapDataAssetFileModel*, ::GlobalNamespace::AudioClipAsyncLoader*, int32_t)>(&::GlobalNamespace::BeatmapLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x12c284c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataLoader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataAssetFileModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)()>(&::GlobalNamespace::BeatmapLevelLoader::Initialize)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x12c28f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)()>(&::GlobalNamespace::BeatmapLevelLoader::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x12c2a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x12c2bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataExistsAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x12c2cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataFromCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12c2de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.CheckBeatmapLevelDataFromAssetBundleExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x12c2dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(),
                                                 "CheckBeatmapLevelDataFromAssetBundleExistsAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.LoadBeatmapLevelDataFromCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12c2efc;

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
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromAssetBundle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x12c2f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.DownloadAssetBundleAndGetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelLoader::DownloadAssetBundleAndGetPath)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x12c300c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "DownloadAssetBundleAndGetPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelLoader.HandleLevelDataAssetDownloadUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelLoader::*)(::GlobalNamespace::LevelDataAssetDownloadUpdate)>(
    &::GlobalNamespace::BeatmapLevelLoader::HandleLevelDataAssetDownloadUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x12c3118;

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
  constexpr static std::size_t addrs = 0x12c319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "HandleItemWillBeRemovedFromCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get_levelDownloadingUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDownloadingUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*> const&
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get_levelDownloadingUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDownloadingUpdateEvent;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDownloadingUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__loadedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*> const&
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__loadedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevels;
}
constexpr void
GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__loadedBeatmapLevels(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedBeatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader*& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapLevelDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelDataLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapLevelDataLoader() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__beatmapDataAssetFileModel() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& GlobalNamespace::BeatmapLevelLoader::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::BeatmapLevelLoader::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapLevelLoader::add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "add_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelLoader::remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "remove_levelDownloadingUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelLoader* GlobalNamespace::BeatmapLevelLoader::New_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                                            ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                                                                                            ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, int32_t maxCachedBeatmapLevels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelLoader*>(beatmapLevelDataLoader, beatmapDataAssetFileModel, audioClipAsyncLoader, maxCachedBeatmapLevels));
}
inline void GlobalNamespace::BeatmapLevelLoader::_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                                                       ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, int32_t maxCachedBeatmapLevels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataLoader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataAssetFileModel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelDataLoader, beatmapDataAssetFileModel, audioClipAsyncLoader, maxCachedBeatmapLevels);
}
inline void GlobalNamespace::BeatmapLevelLoader::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelLoader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>*
GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>*, false>(this, ___internal_method, beatmapLevel,
                                                                                                                                                              cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, cancellationToken);
}
inline bool GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                      ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "CheckBeatmapLevelDataFromAssetBundleExistsAsync",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, token);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromCustomLevels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelDataFromAssetBundle(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "LoadBeatmapLevelDataFromAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*, false>(this, ___internal_method, beatmapLevel, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::BeatmapLevelLoader::DownloadAssetBundleAndGetPath(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelLoader*>::get(), "DownloadAssetBundleAndGetPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, beatmapLevel, token);
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
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelLoader::BeatmapLevelLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
