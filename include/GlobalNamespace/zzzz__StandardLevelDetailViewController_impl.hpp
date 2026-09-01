#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelDetailViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyInfoView_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType::StandardLevelDetailViewController_ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType::StandardLevelDetailViewController_ContentType() {}
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::Loading{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::OwnedAndReady{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::NoAllowedDifficultyBeatmap{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::OwnedAndDownloading{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::Buy{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::BuyInfo{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::Error{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::StandardLevelDetailViewController_ContentType GlobalNamespace::StandardLevelDetailViewController_ContentType::Inactive{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x595a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x595a5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__59_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x595a60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x595a8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d::StandardLevelDetailViewController___OpenLevelProductStore_b__61_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x595a958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x595ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__60_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x595adb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x595b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__62_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x595b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595b87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeoutInSeconds", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "action", ty: "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_cancellationTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTokenSource_5__3", ty:
// "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this, int32_t timeoutInSeconds,
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action, ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__2,
    ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->timeoutInSeconds = timeoutInSeconds;
  this->action = action;
  this->_cancellationTokenSource_5__2 = _cancellationTokenSource_5__2;
  this->_timeoutTokenSource_5__3 = _timeoutTokenSource_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__65() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594ed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "add_didPressActionButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                         { "remove_didPressActionButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "add_didPressOpenLevelPackButtonEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "remove_didPressOpenLevelPackButtonEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                            { "add_levelFavoriteStatusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                            { "remove_levelFavoriteStatusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594ee5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
            { "add_didPressPracticeButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "remove_didPressPracticeButtonEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                         { "add_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                         { "remove_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594efdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
            { "add_didChangeContentEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
            { "remove_didChangeContentEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_beatmapKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x594e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59589bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "get_beatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::BeatmapLevel*, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>)>(
    &::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5950674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "SetData",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>)>(
    &::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x59506fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                            { "SetData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::StandardLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5958aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool)>(
    &::GlobalNamespace::StandardLevelDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5958f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5959020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshContentLevelDetailView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5950258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "RefreshContentLevelDetailView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ClearSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::ClearSelected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5950298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "ClearSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::StandardLevelDetailView*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x595905c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                             { "HandleDidChangeDifficultyBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidFavoriteToggleChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::UnityEngine::UI::Toggle*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59590b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                           { "HandleDidFavoriteToggleChange", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5959140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "BuyLevelButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5959270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "BuyPackButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStoreOrShowBuyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5959470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "OpenLevelProductStoreOrShowBuyInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59591ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "OpenLevelProductStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshAvailabilityIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59589c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "RefreshAvailabilityIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowOwnedContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::ShowOwnedContent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59595a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "ShowOwnedContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::StandardLevelDetailViewController_ContentType, ::StringW)>(
    &::GlobalNamespace::StandardLevelDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x595964c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailViewController_ContentType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowLoadingAndDoSomething
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*, int32_t)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59593b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
            { "ShowLoadingAndDoSomething", {}, { ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59598e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x595995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5959980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59599a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_3)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59599c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_4)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5959b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_5)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5959d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__51_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(&::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_6)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5959e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._BuyPackButtonWasPressed_b__59_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__59_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5959fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                           { "<BuyPackButtonWasPressed>b__59_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStoreOrShowBuyInfo_b__60_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__60_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x595a088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                             { "<OpenLevelProductStoreOrShowBuyInfo>b__60_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStore_b__61_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__61_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x595a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                           { "<OpenLevelProductStore>b__61_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._RefreshAvailabilityIfNeeded_b__62_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__62_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x595a1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                             { "<RefreshAvailabilityIfNeeded>b__62_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailView>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelDetailView;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailView> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelDetailView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__standardLevelDetailView(::UnityW<::GlobalNamespace::StandardLevelDetailView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelDetailView = value;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyView>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelBuyView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyView;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyView> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelBuyView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__standardLevelBuyView(::UnityW<::GlobalNamespace::StandardLevelBuyView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelBuyView = value;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelBuyInfoView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyInfoView;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__standardLevelBuyInfoView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyInfoView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__standardLevelBuyInfoView(::UnityW<::GlobalNamespace::StandardLevelBuyInfoView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelBuyInfoView = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingControl = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__noAllowedBeatmapInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noAllowedBeatmapInfoContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__noAllowedBeatmapInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noAllowedBeatmapInfoContainer;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__noAllowedBeatmapInfoContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noAllowedBeatmapInfoContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalContentModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanelModel = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressActionButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressActionButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr void
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressActionButtonEvent = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressOpenLevelPackButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenLevelPackButtonEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressOpenLevelPackButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenLevelPackButtonEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressOpenLevelPackButtonEvent = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_levelFavoriteStatusDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFavoriteStatusDidChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_levelFavoriteStatusDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFavoriteStatusDidChangeEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_levelFavoriteStatusDidChangeEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFavoriteStatusDidChangeEvent = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressPracticeButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didPressPracticeButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressPracticeButtonEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeDifficultyBeatmapEvent = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didChangeContentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeContentEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get_didChangeContentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeContentEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set_didChangeContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeContentEvent = value;
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__ownedObjectsEventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedObjectsEventBinder;
}
constexpr ::GlobalNamespace::EventBinder* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__ownedObjectsEventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedObjectsEventBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownedObjectsEventBinder = value;
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr ::GlobalNamespace::EventBinder* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBinder = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__pack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pack = value;
}
constexpr bool& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__canBuyPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBuyPack;
}
constexpr bool const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__canBuyPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBuyPack;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__canBuyPack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBuyPack = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notAllowedCharacteristics = value;
}
constexpr bool& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__contentIsOwnedAndReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentIsOwnedAndReady;
}
constexpr bool const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__contentIsOwnedAndReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentIsOwnedAndReady;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__contentIsOwnedAndReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentIsOwnedAndReady = value;
}
constexpr ::GlobalNamespace::EntitlementStatus& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__entitlementStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatus;
}
constexpr ::GlobalNamespace::EntitlementStatus const& GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__entitlementStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatus;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__entitlementStatus(::GlobalNamespace::EntitlementStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementStatus = value;
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                              { "add_didPressActionButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                              { "remove_didPressActionButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                              { "add_didPressOpenLevelPackButtonEvent",
                                                {},
                                                { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                              { "remove_didPressOpenLevelPackButtonEvent",
                                                {},
                                                { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                          { "add_levelFavoriteStatusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                          { "remove_levelFavoriteStatusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
          { "add_didPressPracticeButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
          { "remove_didPressPracticeButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                       { "add_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                       { "remove_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
          { "add_didChangeContentEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
          { "remove_didChangeContentEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelDetailViewController::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "get_beatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton, ::StringW playButtonText,
                                                                        ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                                        ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> notAllowedCharacteristics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                           { "SetData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevel, hidePracticeButton, playButtonText, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
inline void GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton,
                                                                        bool canBuyPack, ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                                        ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                          { "SetData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, beatmapLevel, hidePracticeButton, canBuyPack, playButtonText, allowedBeatmapDifficultyMask,
                                                   notAllowedCharacteristics);
}
inline void GlobalNamespace::StandardLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::StandardLevelDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "RefreshContentLevelDetailView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ClearSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "ClearSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView* view) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                           { "HandleDidChangeDifficultyBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, view);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                         { "HandleDidFavoriteToggleChange", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "BuyLevelButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "BuyPackButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "OpenLevelProductStoreOrShowBuyInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "OpenLevelProductStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "RefreshAvailabilityIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowOwnedContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "ShowOwnedContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowContent(::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType, ::StringW errorText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                              { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailViewController_ContentType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, errorText);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action,
                                                                                          int32_t timeoutInSeconds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
          { "ShowLoadingAndDoSomething", {}, { ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, timeoutInSeconds);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_3() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_4() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_5() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__51_6() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(), { "<DidActivate>b__51_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__59_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                         { "<BuyPackButtonWasPressed>b__59_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__60_0(::System::Threading::CancellationToken _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                           { "<OpenLevelProductStoreOrShowBuyInfo>b__60_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, _);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__61_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                                                         { "<OpenLevelProductStore>b__61_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__62_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailViewController*>(),
                                                           { "<RefreshAvailabilityIfNeeded>b__62_0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline ::GlobalNamespace::StandardLevelDetailViewController* GlobalNamespace::StandardLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelDetailViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController::StandardLevelDetailViewController() {}
