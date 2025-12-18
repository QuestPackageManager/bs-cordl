#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelDetailViewController.hpp"
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
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x57b7bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57b7e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__56_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x57b7ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57b81d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d::StandardLevelDetailViewController___OpenLevelProductStore_b__58_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x57b8244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57b8638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__57_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x57b86a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57b8a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__59_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x57b8af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b8e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty:
// "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->action = action;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__62() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b4f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressActionButtonEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b4fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressActionButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                 "add_didPressOpenLevelPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                 "remove_didPressOpenLevelPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_levelFavoriteStatusDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b52c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_levelFavoriteStatusDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressPracticeButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressPracticeButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeDifficultyBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b55c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeDifficultyBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeContentEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b5740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeContentEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_beatmapKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57b5800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "get_beatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "get_beatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::BeatmapLevel*, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57b5824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x57b58ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::StandardLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x57b5cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool)>(
    &::GlobalNamespace::StandardLevelDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57b61cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57b623c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshContentLevelDetailView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b6278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "RefreshContentLevelDetailView", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ClearSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::ClearSelected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57b6318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "ClearSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::GlobalNamespace::StandardLevelDetailView*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b633c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidChangeDifficultyBeatmap",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidFavoriteToggleChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::UnityEngine::UI::Toggle*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57b6394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidFavoriteToggleChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57b6420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57b654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStoreOrShowBuyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57b6734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                 "OpenLevelProductStoreOrShowBuyInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57b64cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "OpenLevelProductStore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshAvailabilityIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57b5bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "RefreshAvailabilityIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowOwnedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::ShowOwnedContent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57b6868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "ShowOwnedContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController_ContentType, ::StringW)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x57b6c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController_ContentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowLoadingAndDoSomething
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57b6688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowLoadingAndDoSomething", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57b6ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57b6f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57b6f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57b6f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_3)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57b6fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_4)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x57b72cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_5)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57b7684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__48_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_6)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57b7778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__48_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._BuyPackButtonWasPressed_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57b78b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<BuyPackButtonWasPressed>b__56_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStoreOrShowBuyInfo_b__57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
        &::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__57_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57b7974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStoreOrShowBuyInfo>b__57_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStore_b__58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__58_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57b7a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStore>b__58_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._RefreshAvailabilityIfNeeded_b__59_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__59_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57b7ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<RefreshAvailabilityIfNeeded>b__59_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelDetailView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelBuyView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelBuyInfoView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noAllowedBeatmapInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressActionButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressOpenLevelPackButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFavoriteStatusDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPracticeButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeDifficultyBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeContentEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownedObjectsEventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__cordl_internal_set__notAllowedCharacteristics(
    ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notAllowedCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressActionButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressActionButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressOpenLevelPackButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressOpenLevelPackButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_levelFavoriteStatusDidChangeEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_levelFavoriteStatusDidChangeEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressPracticeButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressPracticeButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeDifficultyBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeDifficultyBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeContentEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeContentEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelDetailViewController::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "get_beatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "get_beatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton, ::StringW playButtonText,
                                                            ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                            ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel, hidePracticeButton, playButtonText, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton, bool canBuyPack,
                                                            ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                            ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, beatmapLevel, hidePracticeButton, canBuyPack, playButtonText, allowedBeatmapDifficultyMask,
                                                          notAllowedCharacteristics);
}
inline void GlobalNamespace::StandardLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::StandardLevelDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::RefreshContentLevelDetailView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "RefreshContentLevelDetailView", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ClearSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "ClearSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView* view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidChangeDifficultyBeatmap",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidFavoriteToggleChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toggle);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                               "OpenLevelProductStoreOrShowBuyInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "OpenLevelProductStore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "RefreshAvailabilityIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowOwnedContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "ShowOwnedContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowContent(::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType, ::StringW errorText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController_ContentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, errorText);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowLoadingAndDoSomething", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__48_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__48_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<BuyPackButtonWasPressed>b__56_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__57_0(::System::Threading::CancellationToken _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStoreOrShowBuyInfo>b__57_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, _);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__58_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStore>b__58_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__59_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<RefreshAvailabilityIfNeeded>b__59_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::GlobalNamespace::StandardLevelDetailViewController* GlobalNamespace::StandardLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelDetailViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController::StandardLevelDetailViewController() {}
