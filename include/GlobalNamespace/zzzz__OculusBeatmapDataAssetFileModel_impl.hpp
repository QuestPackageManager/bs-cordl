#pragma once
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x130c1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_assetBundlePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundlePath;
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_assetBundlePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundlePath;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_set_assetBundlePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundlePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*&
GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_downloadAssetBundleFileTCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downloadAssetBundleFileTCS;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_get_downloadAssetBundleFileTCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downloadAssetBundleFileTCS;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__cordl_internal_set_downloadAssetBundleFileTCS(
    ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___downloadAssetBundleFileTCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData* GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::New_ctor(::StringW levelId,
                                                                                                                                                                      ::StringW assetBundlePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>(levelId, assetBundlePath));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor(::StringW levelId, ::StringW assetBundlePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, assetBundlePath);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__OculusBeatmapDataAssetFileModel__LevelDownloadingData() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x130c6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*)>(
        &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x130c6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(),
        "<TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(), "<TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::*)()>(
        &::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x130c840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x130ccc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::
    __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                           ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                           ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                           ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* __8__1, bool _deleted_5__2,
                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->beatmapLevel = beatmapLevel;
  this->__8__1 = __8__1;
  this->_deleted_5__2 = _deleted_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13::
    __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x130cd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x130d694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelId_5__2", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW _levelId_5__2, ::StringW _assetFile_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_levelId_5__2 = _levelId_5__2;
  this->_assetFile_5__3 = _assetFile_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x130d6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ReloadAssetDetailsForAllLevelsAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*)>(
        &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x130d6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(), "<ReloadAssetDetailsForAllLevelsAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(), "<ReloadAssetDetailsForAllLevelsAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getListMsg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x130daf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x130de08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x130de60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._GetDownloadAssetBundleFileAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*)>(
        &::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x130de68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(), "<GetDownloadAssetBundleFileAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_set_taskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::AssetDetails*& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get_assetDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetDetails;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> const&
GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_get_assetDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetDetails;
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__cordl_internal_set_assetDetails(::Oculus::Platform::Models::AssetDetails* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(), "<GetDownloadAssetBundleFileAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)()>(
    &::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x130df48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x1058;
  constexpr static std::size_t addrs = 0x130e654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "assetDetails", ty: "::Oculus::Platform::Models::AssetDetails*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::Oculus::Platform::Models::AssetDetails* assetDetails, ::StringW levelId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->assetDetails = assetDetails;
  this->levelId = levelId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x130b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "add_levelDataAssetDownloadUpdateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x130b9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "remove_levelDataAssetDownloadUpdateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::OculusPlatformAdditionalContentModel*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x130ba94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x130bc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                 "TryDeleteAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetAssetBundleFileForBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::BeatmapLevel*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x130bd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                 "GetAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.ReloadAssetDetailsForAllLevelsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x130be98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "ReloadAssetDetailsForAllLevelsAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetDownloadAssetBundleFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, ::Oculus::Platform::Models::AssetDetails*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x130bf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "GetDownloadAssetBundleFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetTaskCompletionSourceForDownload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, ::Oculus::Platform::Models::AssetDetails*)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x130c0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                 "GetTaskCompletionSourceForDownload", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x130c24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* GlobalNamespace::OculusBeatmapDataAssetFileModel::i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get_levelDataAssetDownloadUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get_levelDataAssetDownloadUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDataAssetDownloadUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetIdToDownloadingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetIdToDownloadingData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetIdToDownloadingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetIdToDownloadingData;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__assetIdToDownloadingData(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetIdToDownloadingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadedAssetBundleFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadedAssetBundleFiles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadedAssetBundleFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadedAssetBundleFiles;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downloadedAssetBundleFiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__lastAssetFileDownloadUpdateForAssetIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAssetFileDownloadUpdateForAssetIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__lastAssetFileDownloadUpdateForAssetIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAssetFileDownloadUpdateForAssetIds;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__lastAssetFileDownloadUpdateForAssetIds(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastAssetFileDownloadUpdateForAssetIds)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__lastAssetFileDownloadUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAssetFileDownloadUpdateTime;
}
constexpr float_t const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__lastAssetFileDownloadUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAssetFileDownloadUpdateTime;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__lastAssetFileDownloadUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastAssetFileDownloadUpdateTime = value;
}
constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__semaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__semaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____semaphoreSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetFileToAssetDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileToAssetDetails;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetFileToAssetDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileToAssetDetails;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__assetFileToAssetDetails(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetFileToAssetDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__oculusPlatformAdditionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPlatformAdditionalContentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__oculusPlatformAdditionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPlatformAdditionalContentModel;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusPlatformAdditionalContentModel)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "add_levelDataAssetDownloadUpdateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "remove_levelDataAssetDownloadUpdateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel*
GlobalNamespace::OculusBeatmapDataAssetFileModel::New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(oculusPlatformAdditionalContentModel));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusPlatformAdditionalContentModel);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                               "TryDeleteAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                               "GetAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, beatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "ReloadAssetDetailsForAllLevelsAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetails,
                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "GetDownloadAssetBundleFileAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, levelId, assetDetails,
                                                                                                                                      cancellationToken);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetail) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "GetTaskCompletionSourceForDownload",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, levelId, assetDetail);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel::OculusBeatmapDataAssetFileModel() {}
