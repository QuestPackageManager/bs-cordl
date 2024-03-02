#pragma once
#include "GlobalNamespace/zzzz__IBeatmapLevelData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AssetBundle_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoadRequest_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoadRequest_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x12c2060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12c2694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelDataLoadRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder, ::GlobalNamespace::BeatmapLevelDataLoadRequest* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8::__BeatmapLevelDataLoadRequest___LoadDataAsyncInternal_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)(::StringW, ::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x12c171c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.LoadDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsync)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x12c16e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                               "LoadDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.LoadDataAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelDataLoadRequest::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsyncInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x12c1ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(), "LoadDataAsyncInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.UnloadBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest::UnloadBundle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x12c1fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                               "UnloadBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12c1674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.HasFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest::HasFailed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x12c1638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                               "HasFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.HasValidResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest::HasValidResult)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12c1e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                               "HasValidResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelDataLoadRequest::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelDataLoadRequest::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*> const&
GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__task(::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__assetBundlePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetBundlePath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__assetBundlePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetBundlePath;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__assetBundlePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetBundlePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__levelDataAssetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDataAssetName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__levelDataAssetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDataAssetName;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__levelDataAssetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelDataAssetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__internalCancellationSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalCancellationSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__internalCancellationSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalCancellationSource;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__internalCancellationSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____internalCancellationSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__linkedCancellationSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedCancellationSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__linkedCancellationSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedCancellationSource;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__linkedCancellationSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkedCancellationSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AssetBundle>& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get_assetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundle;
}
constexpr ::UnityW<::UnityEngine::AssetBundle> const& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get_assetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundle;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set_assetBundle(::UnityW<::UnityEngine::AssetBundle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapLevelDataLoadRequest* GlobalNamespace::BeatmapLevelDataLoadRequest::New_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                                              ::System::Threading::CancellationToken externalCancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(assetBundlePath, levelDataAssetName, externalCancellationToken));
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken externalCancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetBundlePath, levelDataAssetName, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                             "LoadDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsyncInternal(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(), "LoadDataAsyncInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::UnloadBundle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                             "UnloadBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataLoadRequest::HasFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                             "HasFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataLoadRequest::HasValidResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoadRequest*>::get(),
                                                                             "HasValidResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataLoadRequest::BeatmapLevelDataLoadRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
