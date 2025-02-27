#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_impl.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ITickable_impl.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData::*)(
    ::StringW, ::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26ea0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData::_ctor(::StringW levelId, ::StringW assetBundlePath, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, assetBundlePath, cancellationToken);
}
// Ctor Parameters [CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "downloadAssetBundleFileTCS", ty: "::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData(
    ::StringW levelId, ::StringW assetBundlePath, ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS) noexcept {
  this->levelId = levelId;
  this->assetBundlePath = assetBundlePath;
  this->downloadAssetBundleFileTCS = downloadAssetBundleFileTCS;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ea6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0._TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*)>(
        &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::_TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x26ea6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*>::get(), "<TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::_TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*>::get(), "<TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0* GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0._ReloadAssetDetailsForAllLevelsAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*)>(
        &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x26eab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*>::get(), "<ReloadAssetDetailsForAllLevelsAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*>::get(), "<ReloadAssetDetailsForAllLevelsAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getListMsg);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0* GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ea0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0._GetDownloadAssetBundleFileAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*)>(
        &::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x26eb130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*>::get(), "<GetDownloadAssetBundleFileAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::AssetDetails*& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get_assetDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetDetails;
}
constexpr ::Oculus::Platform::Models::AssetDetails* const& GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_get_assetDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetDetails;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::__cordl_internal_set_assetDetails(::Oculus::Platform::Models::AssetDetails* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*>::get(), "<GetDownloadAssetBundleFileAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0* GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x26eb348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ebb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken,
    ::StringW _levelId_5__2, ::StringW _assetFile_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevel = beatmapLevel;
  this->__4__this = __4__this;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->cancellationToken = cancellationToken;
  this->_levelId_5__2 = _levelId_5__2;
  this->_assetFile_5__3 = _assetFile_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x26ebbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26ec54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "msg", ty:
// "::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_assetId_5__2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_downloadingData_5__3", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_assetDownloadingState_5__4", ty: "::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_retryCount_5__5", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_delay_5__6", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, uint64_t _assetId_5__2, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData _downloadingData_5__3,
    ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState _assetDownloadingState_5__4, int32_t _retryCount_5__5, int32_t _delay_5__6,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->msg = msg;
  this->__4__this = __4__this;
  this->_assetId_5__2 = _assetId_5__2;
  this->_downloadingData_5__3 = _downloadingData_5__3;
  this->_assetDownloadingState_5__4 = _assetDownloadingState_5__4;
  this->_retryCount_5__5 = _retryCount_5__5;
  this->_delay_5__6 = _delay_5__6;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x26ec5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ecbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1",
// ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x26ecc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ed274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty:
// "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0* __8__1, bool _deleted_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->beatmapLevel = beatmapLevel;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->__8__1 = __8__1;
  this->_deleted_5__2 = _deleted_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14::
    OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26e914c;

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
  constexpr static std::size_t addrs = 0x26e91fc;

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
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x26e92ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)()>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::Tick)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x26e948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                                               "Tick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetAssetBundleFileForBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26e97ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                 "GetAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26e98c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                                 "TryDeleteAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.ReloadAssetDetailsForAllLevelsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26e99d4;

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
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x26e9ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "GetDownloadAssetBundleFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26ea178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(
        &::GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdateAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26ea21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdateAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.MarkDownloadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(
    uint64_t, bool, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::MarkDownloadCompleted)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x26ea2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "MarkDownloadCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.CancelDownload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(uint64_t)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::CancelDownload)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26e96c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "CancelDownload",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.RemoveFromDownloadingDataStructures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(uint64_t)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::RemoveFromDownloadingDataStructures)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x26ea4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "RemoveFromDownloadingDataStructures",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel._Tick_g__GetAssetTime_12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(uint64_t)>(
    &::GlobalNamespace::OculusBeatmapDataAssetFileModel::_Tick_g__GetAssetTime_12_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26e9648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "<Tick>g__GetAssetTime|12_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get_levelDataAssetDownloadUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get_levelDataAssetDownloadUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDataAssetDownloadUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadedAssetBundleFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadedAssetBundleFiles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadedAssetBundleFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadedAssetBundleFiles;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downloadedAssetBundleFiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadingAssetBundlesQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingAssetBundlesQueue;
}
constexpr ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__downloadingAssetBundlesQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadingAssetBundlesQueue;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__downloadingAssetBundlesQueue(::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downloadingAssetBundlesQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>*&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetIdToDownloadingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetIdToDownloadingData;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* const&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetIdToDownloadingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetIdToDownloadingData;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__assetIdToDownloadingData(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetIdToDownloadingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__reloadAssetDetailsSemaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadAssetDetailsSemaphoreSlim;
}
constexpr ::System::Threading::SemaphoreSlim* const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__reloadAssetDetailsSemaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadAssetDetailsSemaphoreSlim;
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_set__reloadAssetDetailsSemaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reloadAssetDetailsSemaphoreSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*&
GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__assetFileToAssetDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileToAssetDetails;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* const&
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
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__cordl_internal_get__oculusPlatformAdditionalContentModel() const {
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
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusPlatformAdditionalContentModel);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForBeatmapLevelAsync(
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                               "GetAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion,
                                                                                                                                      cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForBeatmapLevelAsync(
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                                               "TryDeleteAssetBundleFileForBeatmapLevelAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, beatmapLevel, beatmapLevelDataVersion, cancellationToken);
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
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdateAsync(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "HandleAssetFileDownloadUpdateAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, msg);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::MarkDownloadCompleted(uint64_t assetId, bool isError,
                                                                                    ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData downloadingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "MarkDownloadCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetId, isError, downloadingData);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::CancelDownload(uint64_t assetId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "CancelDownload",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetId);
}
inline bool GlobalNamespace::OculusBeatmapDataAssetFileModel::RemoveFromDownloadingDataStructures(uint64_t assetId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "RemoveFromDownloadingDataStructures",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, assetId);
}
inline float_t GlobalNamespace::OculusBeatmapDataAssetFileModel::_Tick_g__GetAssetTime_12_0(uint64_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(), "<Tick>g__GetAssetTime|12_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, id);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel*
GlobalNamespace::OculusBeatmapDataAssetFileModel::New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(oculusPlatformAdditionalContentModel));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* GlobalNamespace::OculusBeatmapDataAssetFileModel::i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::OculusBeatmapDataAssetFileModel::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel::OculusBeatmapDataAssetFileModel() {}
