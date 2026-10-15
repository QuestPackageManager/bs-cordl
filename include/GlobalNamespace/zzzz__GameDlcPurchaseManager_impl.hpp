#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcPurchaseManager.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseResult_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseManager_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseManager_def.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseResult_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::*)()>(
    &::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x39f02cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39f0554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder, ::GlobalNamespace::GameDlcPurchaseManager* __4__this,
    ::StringW gameDlcId, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->gameDlcId = gameDlcId;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::*)()>(
    &::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x39f05d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39f0a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GameDlcPurchaseResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GameDlcPurchaseResult> __t__builder, ::GlobalNamespace::GameDlcPurchaseManager* __4__this,
    ::StringW gameDlcId, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->gameDlcId = gameDlcId;
  this->token = token;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::*)()>(
    &::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x39f0af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39f0ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder, ::GlobalNamespace::GameDlcPurchaseManager* __4__this,
    ::StringW gameDlcId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->gameDlcId = gameDlcId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.add_gameDlcEntitlementDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*)>(
    &::GlobalNamespace::GameDlcPurchaseManager::add_gameDlcEntitlementDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x39ef640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                { "add_gameDlcEntitlementDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.remove_gameDlcEntitlementDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*)>(
    &::GlobalNamespace::GameDlcPurchaseManager::remove_gameDlcEntitlementDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x39ef700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                { "remove_gameDlcEntitlementDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)(::GlobalNamespace::IEntitlementModel*, ::GlobalNamespace::IAdditionalContentModel*)>(
    &::GlobalNamespace::GameDlcPurchaseManager::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x39ef7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::IAdditionalContentModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)()>(&::GlobalNamespace::GameDlcPurchaseManager::Dispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x39efa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.GetGameDlcEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::GameDlcPurchaseManager::GetGameDlcEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39efb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                             { "GetGameDlcEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.PurchaseGameDlcAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GameDlcPurchaseResult>* (
    ::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::GameDlcPurchaseManager::PurchaseGameDlcAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39efc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                             { "PurchaseGameDlcAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.GetOrStartEntitlementRequestAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW)>(
    &::GlobalNamespace::GameDlcPurchaseManager::GetOrStartEntitlementRequestAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x39efd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "GetOrStartEntitlementRequestAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.RefreshEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW)>(
    &::GlobalNamespace::GameDlcPurchaseManager::RefreshEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x39efe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "RefreshEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.RequestEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW)>(
    &::GlobalNamespace::GameDlcPurchaseManager::RequestEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39eff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "RequestEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.SetEntitlementStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)(::StringW, ::GlobalNamespace::EntitlementStatus)>(
    &::GlobalNamespace::GameDlcPurchaseManager::SetEntitlementStatus)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x39f002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                             { "SetEntitlementStatus", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcPurchaseManager.HandleAdditionalContentDidInvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcPurchaseManager::*)()>(&::GlobalNamespace::GameDlcPurchaseManager::HandleAdditionalContentDidInvalidateData)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x39f0128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "HandleAdditionalContentDidInvalidateData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalContentModel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__entitlementStatuses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatuses;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* const&
GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__entitlementStatuses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatuses;
}
constexpr void
GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__entitlementStatuses(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementStatuses = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>*&
GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__runningRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningRequests;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* const&
GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__runningRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningRequests;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__runningRequests(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runningRequests = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__gameDlcIdsToRefresh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdsToRefresh;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__gameDlcIdsToRefresh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdsToRefresh;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__gameDlcIdsToRefresh(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameDlcIdsToRefresh = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get_gameDlcEntitlementDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameDlcEntitlementDidChangeEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* const& GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_get_gameDlcEntitlementDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameDlcEntitlementDidChangeEvent;
}
constexpr void GlobalNamespace::GameDlcPurchaseManager::__cordl_internal_set_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameDlcEntitlementDidChangeEvent = value;
}
inline void GlobalNamespace::GameDlcPurchaseManager::add_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                              { "add_gameDlcEntitlementDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameDlcPurchaseManager::remove_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                              { "remove_gameDlcEntitlementDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameDlcPurchaseManager::_ctor(::GlobalNamespace::IEntitlementModel* entitlementModel, ::GlobalNamespace::IAdditionalContentModel* additionalContentModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::IAdditionalContentModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entitlementModel, additionalContentModel);
}
inline void GlobalNamespace::GameDlcPurchaseManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::GameDlcPurchaseManager::GetGameDlcEntitlementStatusAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                           { "GetGameDlcEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, gameDlcId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GameDlcPurchaseResult>* GlobalNamespace::GameDlcPurchaseManager::PurchaseGameDlcAsync(::StringW gameDlcId,
                                                                                                                                                   ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                           { "PurchaseGameDlcAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GameDlcPurchaseResult>*>(this, ___internal_method, gameDlcId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::GameDlcPurchaseManager::GetOrStartEntitlementRequestAsync(::StringW gameDlcId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "GetOrStartEntitlementRequestAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, gameDlcId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::GameDlcPurchaseManager::RefreshEntitlementStatusAsync(::StringW gameDlcId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "RefreshEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, gameDlcId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GlobalNamespace::GameDlcPurchaseManager::RequestEntitlementStatusAsync(::StringW gameDlcId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "RequestEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, gameDlcId);
}
inline void GlobalNamespace::GameDlcPurchaseManager::SetEntitlementStatus(::StringW gameDlcId, ::GlobalNamespace::EntitlementStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(),
                                                           { "SetEntitlementStatus", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameDlcId, status);
}
inline void GlobalNamespace::GameDlcPurchaseManager::HandleAdditionalContentDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcPurchaseManager*>(), { "HandleAdditionalContentDidInvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameDlcPurchaseManager* GlobalNamespace::GameDlcPurchaseManager::New_ctor(::GlobalNamespace::IEntitlementModel* entitlementModel,
                                                                                                    ::GlobalNamespace::IAdditionalContentModel* additionalContentModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameDlcPurchaseManager*>(entitlementModel, additionalContentModel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameDlcPurchaseManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameDlcPurchaseManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcPurchaseManager::GameDlcPurchaseManager() {}
