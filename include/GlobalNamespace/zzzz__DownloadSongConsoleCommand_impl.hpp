#pragma once
// IWYU pragma private; include "GlobalNamespace/DownloadSongConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__DownloadSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__DownloadSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup::DownloadSongConsoleCommand_AssetLookup(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup::DownloadSongConsoleCommand_AssetLookup() {}
constexpr ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup GlobalNamespace::DownloadSongConsoleCommand_AssetLookup::Found{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup GlobalNamespace::DownloadSongConsoleCommand_AssetLookup::NotFound{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup GlobalNamespace::DownloadSongConsoleCommand_AssetLookup::ListError{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::*)()>(
    &::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x145c;
  constexpr static std::size_t addrs = 0x32cd720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32ceb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DownloadSongConsoleCommand*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationTokenSource_5__3", ty: "::System::Threading::CancellationTokenSource*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_assetBundleName_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup,uint64_t,::StringW>>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::DownloadSongConsoleCommand__ExecuteAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::DownloadSongConsoleCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::StringW _levelId_5__2, ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__3,
    ::System::Threading::CancellationToken _cancellationToken_5__4, ::StringW _assetBundleName_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->_levelId_5__2 = _levelId_5__2;
  this->_cancellationTokenSource_5__3 = _cancellationTokenSource_5__3;
  this->_cancellationToken_5__4 = _cancellationToken_5__4;
  this->_assetBundleName_5__5 = _assetBundleName_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12::DownloadSongConsoleCommand__ExecuteAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::*)()>(
    &::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x32cebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32cf1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup,uint64_t,::StringW>>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundleName", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::StringW assetBundleName,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->assetBundleName = assetBundleName;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DownloadSongConsoleCommand::*)()>(&::GlobalNamespace::DownloadSongConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32cd300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DownloadSongConsoleCommand::*)()>(&::GlobalNamespace::DownloadSongConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32cd344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::DownloadSongConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::DownloadSongConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32cd388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand.FindAssetByBundleNameAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>>* (*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::DownloadSongConsoleCommand::FindAssetByBundleNameAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32cd47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(),
                                                             { "FindAssetByBundleNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand::*)()>(&::GlobalNamespace::DownloadSongConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32cd56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadSongConsoleCommand._ExecuteAsync_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadSongConsoleCommand::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*)>(
    &::GlobalNamespace::DownloadSongConsoleCommand::_ExecuteAsync_b__12_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32cd61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(),
                                                { "<ExecuteAsync>b__12_0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::StringW& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__downloadError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadError;
}
constexpr ::StringW const& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__downloadError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadError;
}
constexpr void GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_set__downloadError(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downloadError = value;
}
constexpr bool& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__downloadFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadFailed;
}
constexpr bool const& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__downloadFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadFailed;
}
constexpr void GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_set__downloadFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downloadFailed = value;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::DownloadSongConsoleCommand::__cordl_internal_set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
inline ::StringW GlobalNamespace::DownloadSongConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DownloadSongConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::DownloadSongConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>>*
GlobalNamespace::DownloadSongConsoleCommand::FindAssetByBundleNameAsync(::StringW assetBundleName, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(),
                                                           { "FindAssetByBundleNameAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>>*>(
      nullptr, ___internal_method, assetBundleName, cancellationToken);
}
inline void GlobalNamespace::DownloadSongConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DownloadSongConsoleCommand::_ExecuteAsync_b__12_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DownloadSongConsoleCommand*>(),
                                              { "<ExecuteAsync>b__12_0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::DownloadSongConsoleCommand* GlobalNamespace::DownloadSongConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DownloadSongConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DownloadSongConsoleCommand::DownloadSongConsoleCommand() {}
