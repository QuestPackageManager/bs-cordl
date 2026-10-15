#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OculusGameDlcProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39abde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0._LaunchCheckoutFlow_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_LaunchCheckoutFlow_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39abdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(), { "<LaunchCheckoutFlow>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0._LaunchCheckoutFlow_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_LaunchCheckoutFlow_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x39abe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(),
                                                             { "<LaunchCheckoutFlow>b__1", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*&
GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_get_launchCheckoutFlowTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchCheckoutFlowTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* const&
GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_get_launchCheckoutFlowTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchCheckoutFlowTaskSource;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_set_launchCheckoutFlowTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launchCheckoutFlowTaskSource = value;
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_LaunchCheckoutFlow_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(), { "<LaunchCheckoutFlow>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::_LaunchCheckoutFlow_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>(),
                                                           { "<LaunchCheckoutFlow>b__1", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0* GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0::OculusPlatformAdditionalContentModel___c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x39abea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39acef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x39acf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39ad280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::StringW>> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x39ad300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39ad5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sku_5__2",
// ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken, ::StringW _sku_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->gameDlcId = gameDlcId;
  this->cancellationToken = cancellationToken;
  this->_sku_5__2 = _sku_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14::
    OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x39ad65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39ad8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_additionalSkus_5__2", ty:
// "::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken token,
    ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->token = token;
  this->_additionalSkus_5__2 = _additionalSkus_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x39ad978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39adbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->levelId = levelId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x39adc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39adf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->packId = packId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x39adf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39ae338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_originalSku_5__2", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
// "::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW packId,
    ::System::Threading::CancellationToken cancellationToken, ::StringW _originalSku_5__2,
    ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->packId = packId;
  this->cancellationToken = cancellationToken;
  this->_originalSku_5__2 = _originalSku_5__2;
  this->_levelPackRedirectionData_5__3 = _levelPackRedirectionData_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x39ae3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39ae7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x39ae874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39aef60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sku", ty: "::StringW", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_ctr_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "__7__wrap4", ty: "::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::StringW sku, ::System::Threading::CancellationTokenRegistration _ctr_5__2, ::System::Object* __7__wrap2, int32_t __7__wrap3,
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* __7__wrap4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1,
    ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->sku = sku;
  this->_ctr_5__2 = _ctr_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x39aefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39af46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->gameDlcId = gameDlcId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x39af4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39afd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelPackId = levelPackId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x39afd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39b01ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
    ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39aa0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39aa0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39aa0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetLevelProductData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetRedirectedLevelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetRedirectedLevelPackProductData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39aa0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                             { "GetRedirectedLevelPackProductData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.InvalidateDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39aa1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39aa1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39aa2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetGameDlcEntitlementStatusInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetGameDlcEntitlementStatusInternalAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39aa3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelDataVersionInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataVersionInternalAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39aa4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.IsDataValidAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::IsDataValidAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x39aa5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                           { "IsDataValidAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39aa6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x39aa79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenGameDlcProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenGameDlcProductStoreAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39aa890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.LaunchCheckoutFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* (*)(::StringW, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x39aa980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                             { "LaunchCheckoutFlow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x39aaa78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.OpenStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::OpenStore)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x39aaae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetExcludedLevelIdsInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::GetExcludedLevelIdsInternalAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x39ab544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.CheckForNewEntitlementsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>* (
    ::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x39ab634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                           { "CheckForNewEntitlementsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetGameDlcSku
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetGameDlcSku)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x39ab720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetGameDlcSku", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelEntitlement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x39ab7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "HasLevelEntitlement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelEntitlement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x39ab8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                             { "HasLevelEntitlement", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelDataAdditionalSkus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataAdditionalSkus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39ab950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetLevelDataAdditionalSkus", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.GetLevelDataVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelDataVersion (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(
    ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*)>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataVersion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x39ab990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                             { "GetLevelDataVersion", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel.HasLevelPackEntitlement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x39aba00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "HasLevelPackEntitlement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&::GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x39abad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._GetRedirectedLevelPackProductData_g__GetSku_10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::_GetRedirectedLevelPackProductData_g__GetSku_10_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x39abc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                            { "<GetRedirectedLevelPackProductData>g__GetSku|10_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._OpenLevelProductStoreAsync_g__GetSkuForProductFlow_17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::_OpenLevelProductStoreAsync_g__GetSkuForProductFlow_17_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x39abc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                            { "<OpenLevelProductStoreAsync>g__GetSkuForProductFlow|17_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._GetExcludedLevelIdsInternalAsync_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::_GetExcludedLevelIdsInternalAsync_b__24_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x39abccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                           { "<GetExcludedLevelIdsInternalAsync>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAdditionalContentModel._HasLevelPackEntitlement_b__31_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*)>(
    &::GlobalNamespace::OculusPlatformAdditionalContentModel::_HasLevelPackEntitlement_b__31_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x39abd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                { "<HasLevelPackEntitlement>b__31_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusLevelProductCollectionModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductCollectionModel;
}
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel* const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusLevelProductCollectionModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductCollectionModel;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__oculusLevelProductCollectionModel(::GlobalNamespace::OculusLevelProductCollectionModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusLevelProductCollectionModel = value;
}
constexpr ::GlobalNamespace::OculusGameDlcProductCollectionModel*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusGameDlcProductCollectionModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusGameDlcProductCollectionModel;
}
constexpr ::GlobalNamespace::OculusGameDlcProductCollectionModel* const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__oculusGameDlcProductCollectionModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusGameDlcProductCollectionModel;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__oculusGameDlcProductCollectionModel(::GlobalNamespace::OculusGameDlcProductCollectionModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusGameDlcProductCollectionModel = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__entitlementsSKU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsSKU;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__entitlementsSKU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementsSKU;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementsSKU = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__excludedLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLevels;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__excludedLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLevels;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__excludedLevels(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____excludedLevels = value;
}
constexpr ::System::Threading::SemaphoreSlim*& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__semaphoreSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr ::System::Threading::SemaphoreSlim* const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__semaphoreSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____semaphoreSlim;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____semaphoreSlim = value;
}
constexpr bool& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__isDataValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
constexpr bool const& GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_get__isDataValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDataValid;
}
constexpr void GlobalNamespace::OculusPlatformAdditionalContentModel::__cordl_internal_set__isDataValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDataValid = value;
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::setStaticF_kOculusRequestTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "kOculusRequestTimeout", ::GlobalNamespace::OculusPlatformAdditionalContentModel*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan GlobalNamespace::OculusPlatformAdditionalContentModel::getStaticF_kOculusRequestTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "kOculusRequestTimeout", ::GlobalNamespace::OculusPlatformAdditionalContentModel*>();
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelProductData(::StringW GetLevelProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetLevelProductData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>(this, ___internal_method, GetLevelProductData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                           { "GetRedirectedLevelPackProductData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, packId, cancellationToken);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, levelId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, packId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetGameDlcEntitlementStatusInternalAsync(::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>(this, ___internal_method, gameDlcId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusPlatformAdditionalContentModel::IsDataValidAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                         { "IsDataValidAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*>(this, ___internal_method, levelId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*>(this, ___internal_method, levelPackId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::OpenGameDlcProductStoreAsync(::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>*>(this, ___internal_method, gameDlcId, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*
GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow(::StringW sku, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                           { "LaunchCheckoutFlow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*>(nullptr, ___internal_method, sku,
                                                                                                                                                         cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>*>(this, ___internal_method, levelPackId, token);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::OpenStore(::StringW uri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*
GlobalNamespace::OculusPlatformAdditionalContentModel::GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>*
GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                         { "CheckForNewEntitlementsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>*>(this, ___internal_method, cancellationToken);
}
inline ::StringW GlobalNamespace::OculusPlatformAdditionalContentModel::GetGameDlcSku(::StringW gameDlcId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetGameDlcSku", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, gameDlcId);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "HasLevelEntitlement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelId);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* productData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                           { "HasLevelEntitlement", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, productData);
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataAdditionalSkus(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "GetLevelDataAdditionalSkus", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::BeatmapLevelDataVersion
GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelDataVersion(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* additionalSkus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                           { "GetLevelDataVersion", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelDataVersion>(this, ___internal_method, additionalSkus);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { "HasLevelPackEntitlement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelPackId);
}
inline void GlobalNamespace::OculusPlatformAdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OculusPlatformAdditionalContentModel::_GetRedirectedLevelPackProductData_g__GetSku_10_0(
    ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* levelPackProductData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                       { "<GetRedirectedLevelPackProductData>g__GetSku|10_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelPackProductData);
}
inline ::StringW GlobalNamespace::OculusPlatformAdditionalContentModel::_OpenLevelProductStoreAsync_g__GetSkuForProductFlow_17_0(
    ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                          { "<OpenLevelProductStoreAsync>g__GetSkuForProductFlow|17_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, levelProductData);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::_GetExcludedLevelIdsInternalAsync_b__24_0(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                                                         { "<GetExcludedLevelIdsInternalAsync>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelId);
}
inline bool GlobalNamespace::OculusPlatformAdditionalContentModel::_HasLevelPackEntitlement_b__31_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(),
                                                           { "<HasLevelPackEntitlement>b__31_0", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelProductData);
}
inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* GlobalNamespace::OculusPlatformAdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformAdditionalContentModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel::OculusPlatformAdditionalContentModel() {}
