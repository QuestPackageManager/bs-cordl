#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelDataLoadRequest.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoadRequest_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoadRequest_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x371ddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x371e57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelDataLoadRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8(
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
constexpr ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)(::StringW, ::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x371d25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.LoadDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelDataLoadRequest::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x371d188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "LoadDataAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.LoadDataAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelDataLoadRequest::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsyncInternal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x371dad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(),
                                                                                           { "LoadDataAsyncInternal", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.ThrowIfExternalCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoadRequest::ThrowIfExternalCancellationRequested)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x371dbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "ThrowIfExternalCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.UnloadBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::UnloadBundle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x371dd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "UnloadBundle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x371d114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.get_HasFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::get_HasFailed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x371d0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "get_HasFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoadRequest.get_HasValidResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataLoadRequest::*)()>(&::GlobalNamespace::BeatmapLevelDataLoadRequest::get_HasValidResult)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x371d9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "get_HasValidResult", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* const& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__task(::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____task = value;
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
  this->____assetBundlePath = value;
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
  this->____levelDataAssetName = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__internalCancellationSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalCancellationSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__internalCancellationSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalCancellationSource;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__internalCancellationSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internalCancellationSource = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>*& GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__externalCancellationTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCancellationTokens;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* const&
GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_get__externalCancellationTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCancellationTokens;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoadRequest::__cordl_internal_set__externalCancellationTokens(::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____externalCancellationTokens = value;
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
  this->___assetBundle = value;
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assetBundlePath, levelDataAssetName);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsync(::System::Threading::CancellationToken externalCancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "LoadDataAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*>(this, ___internal_method, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelDataLoadRequest::LoadDataAsyncInternal(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(),
                                                                                         { "LoadDataAsyncInternal", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::ThrowIfExternalCancellationRequested() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "ThrowIfExternalCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::UnloadBundle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "UnloadBundle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataLoadRequest::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataLoadRequest::get_HasFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "get_HasFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataLoadRequest::get_HasValidResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(), { "get_HasValidResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelDataLoadRequest* GlobalNamespace::BeatmapLevelDataLoadRequest::New_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataLoadRequest*>(assetBundlePath, levelDataAssetName));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelDataLoadRequest::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelDataLoadRequest::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataLoadRequest::BeatmapLevelDataLoadRequest() {}
