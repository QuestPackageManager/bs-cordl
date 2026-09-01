#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelDataLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoadRequest_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::*)()>(
    &::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x371d6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x371da58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevelDataLoader* __4__this, ::StringW levelId,
    ::StringW assetBundlePath, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->assetBundlePath = assetBundlePath;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4::BeatmapLevelDataLoader__CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.get_loadRequestCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelDataLoader::*)()>(&::GlobalNamespace::BeatmapLevelDataLoader::get_loadRequestCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x371cf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "get_loadRequestCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelDataFromAssetBundleAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* (
    ::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataFromAssetBundleAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x371cf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(),
                                         { "LoadBeatmapLevelDataFromAssetBundleAsync",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.CheckBeatmapLevelDataFromAssetBundleExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW, ::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::BeatmapLevelDataLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x371d324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(),
            { "CheckBeatmapLevelDataFromAssetBundleExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)()>(&::GlobalNamespace::BeatmapLevelDataLoader::Dispose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x371d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.TryUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoader::TryUnload)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x371d59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "TryUnload", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)()>(&::GlobalNamespace::BeatmapLevelDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x371d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>*& GlobalNamespace::BeatmapLevelDataLoader::__cordl_internal_get__loadRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadRequests;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>* const&
GlobalNamespace::BeatmapLevelDataLoader::__cordl_internal_get__loadRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadRequests;
}
constexpr void
GlobalNamespace::BeatmapLevelDataLoader::__cordl_internal_set__loadRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadRequests = value;
}
inline int32_t GlobalNamespace::BeatmapLevelDataLoader::get_loadRequestCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "get_loadRequestCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*
GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataFromAssetBundleAsync(::StringW levelId, ::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(),
                                       { "LoadBeatmapLevelDataFromAssetBundleAsync",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*>(this, ___internal_method, levelId, assetBundlePath, levelDataAssetName,
                                                                                                                         cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelDataLoader::CheckBeatmapLevelDataFromAssetBundleExistsAsync(::StringW levelId, ::StringW assetBundlePath,
                                                                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(),
          { "CheckBeatmapLevelDataFromAssetBundleExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, levelId, assetBundlePath, cancellationToken);
}
inline void GlobalNamespace::BeatmapLevelDataLoader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataLoader::TryUnload(::StringW beatmapLevelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { "TryUnload", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevelId);
}
inline void GlobalNamespace::BeatmapLevelDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelDataLoader* GlobalNamespace::BeatmapLevelDataLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataLoader*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelDataLoader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelDataLoader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataLoader::BeatmapLevelDataLoader() {}
