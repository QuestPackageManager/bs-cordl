#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_impl.hpp"
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
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyInfoView_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType::__StandardLevelDetailViewController__ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType::__StandardLevelDetailViewController__ContentType() {}
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::Loading{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::OwnedAndReady{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::NoAllowedDifficultyBeatmap{ static_cast<int32_t>(
    0x2) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::OwnedAndDownloading{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::Buy{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::BuyInfo{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::Error{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__StandardLevelDetailViewController__ContentType GlobalNamespace::__StandardLevelDetailViewController__ContentType::Inactive{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x22c571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c5c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x22c5c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(), "MoveNext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c5ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "action", ty: "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->action = action;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x22c5ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c61dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x22c61e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(), "MoveNext",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c65d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d::
    __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x22c65dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c68c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::*)()>(
    &::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x22c68d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c6d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
    ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->token = token;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b9f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressOpenLevelPackButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressOpenLevelPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22baac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressOpenLevelPackButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_levelFavoriteStatusDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_levelFavoriteStatusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*)>(&::GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bab74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_levelFavoriteStatusDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b9ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(
        &::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.add_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ba15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeContentEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.remove_didChangeContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*)>(
    &::GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22baa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeContentEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_selectedDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b92e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c3a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "get_beatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22bb898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*, bool, bool, bool, ::StringW, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>)>(&::GlobalNamespace::StandardLevelDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x22bb9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::StandardLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x22c3ad8;

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
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22c3e60;

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
  constexpr static std::size_t addrs = 0x22c3eb8;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bb494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "RefreshContentLevelDetailView", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ClearSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::ClearSelected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bb4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "ClearSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x22c3ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidChangeDifficultyBeatmap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleDidFavoriteToggleChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22c40e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidFavoriteToggleChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.HandleLevelLoadingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate)>(&::GlobalNamespace::StandardLevelDetailViewController::HandleLevelLoadingUpdate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x22c4158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleLevelLoadingUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22c46ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "BuyLevelButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x22c487c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "BuyPackButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.LoadBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22c4a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "LoadBeatmapLevelAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStoreOrShowBuyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x22c4b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "OpenLevelProductStoreOrShowBuyInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.OpenLevelProductStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22c47fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "OpenLevelProductStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.RefreshAvailabilityIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22c3a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "RefreshAvailabilityIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::GlobalNamespace::__StandardLevelDetailViewController__ContentType, ::StringW, float_t, ::StringW)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x22c42ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowContent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardLevelDetailViewController__ContentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController.ShowLoadingAndDoSomething
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)(
    ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22c49f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowLoadingAndDoSomething", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22c4cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22c4d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22c4d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22c4d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_3)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22c4db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_4)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x22c4f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_5)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22c50cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._DidActivate_b__47_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailViewController::*)()>(
    &::GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_6)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x22c5220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                               "<DidActivate>b__47_6", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._BuyPackButtonWasPressed_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22c53c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<BuyPackButtonWasPressed>b__56_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStoreOrShowBuyInfo_b__58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(
        &::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__58_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22c54a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStoreOrShowBuyInfo>b__58_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._OpenLevelProductStore_b__59_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__59_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22c5568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStore>b__59_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailViewController._RefreshAvailabilityIfNeeded_b__60_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__60_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22c5644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<RefreshAvailabilityIfNeeded>b__60_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelDetailView*& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelDetailView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailView*> const& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelDetailView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelDetailView(::GlobalNamespace::StandardLevelDetailView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelDetailView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandardLevelBuyView*& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyView*> const& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelBuyView(::GlobalNamespace::StandardLevelBuyView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelBuyView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandardLevelBuyInfoView*& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyInfoView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyInfoView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyInfoView*> const& GlobalNamespace::StandardLevelDetailViewController::__get__standardLevelBuyInfoView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelBuyInfoView;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__standardLevelBuyInfoView(::GlobalNamespace::StandardLevelBuyInfoView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelBuyInfoView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LoadingControl*& GlobalNamespace::StandardLevelDetailViewController::__get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& GlobalNamespace::StandardLevelDetailViewController::__get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__loadingControl(::GlobalNamespace::LoadingControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::StandardLevelDetailViewController::__get__noAllowedBeatmapInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noAllowedBeatmapInfoContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::StandardLevelDetailViewController::__get__noAllowedBeatmapInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noAllowedBeatmapInfoContainer;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__noAllowedBeatmapInfoContainer(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noAllowedBeatmapInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::StandardLevelDetailViewController::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::StandardLevelDetailViewController::__get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::StandardLevelDetailViewController::__get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::StandardLevelDetailViewController::__get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*& GlobalNamespace::StandardLevelDetailViewController::__get_didPressActionButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_didPressActionButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressActionButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*&
GlobalNamespace::StandardLevelDetailViewController::__get_didPressOpenLevelPackButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenLevelPackButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_didPressOpenLevelPackButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenLevelPackButtonEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressOpenLevelPackButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*& GlobalNamespace::StandardLevelDetailViewController::__get_levelFavoriteStatusDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFavoriteStatusDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_levelFavoriteStatusDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFavoriteStatusDidChangeEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFavoriteStatusDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*&
GlobalNamespace::StandardLevelDetailViewController::__get_didPressPracticeButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_didPressPracticeButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPracticeButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*&
GlobalNamespace::StandardLevelDetailViewController::__get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeDifficultyBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*&
GlobalNamespace::StandardLevelDetailViewController::__get_didChangeContentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeContentEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get_didChangeContentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeContentEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set_didChangeContentEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeContentEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::StandardLevelDetailViewController::__get__ownedObjectsEventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedObjectsEventBinder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& GlobalNamespace::StandardLevelDetailViewController::__get__ownedObjectsEventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedObjectsEventBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownedObjectsEventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::StandardLevelDetailViewController::__get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& GlobalNamespace::StandardLevelDetailViewController::__get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::StandardLevelDetailViewController::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::StandardLevelDetailViewController::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::StandardLevelDetailViewController::__get__previewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__previewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevel*& GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& GlobalNamespace::StandardLevelDetailViewController::__get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__beatmapLevel(::GlobalNamespace::IBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::StandardLevelDetailViewController::__get__pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::StandardLevelDetailViewController::__get__pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__pack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandardLevelDetailViewController::__get__canBuyPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBuyPack;
}
constexpr bool const& GlobalNamespace::StandardLevelDetailViewController::__get__canBuyPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBuyPack;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__canBuyPack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBuyPack = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::StandardLevelDetailViewController::__get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::StandardLevelDetailViewController::__get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& GlobalNamespace::StandardLevelDetailViewController::__get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
GlobalNamespace::StandardLevelDetailViewController::__get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notAllowedCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandardLevelDetailViewController::__get__contentIsOwnedAndReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentIsOwnedAndReady;
}
constexpr bool const& GlobalNamespace::StandardLevelDetailViewController::__get__contentIsOwnedAndReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentIsOwnedAndReady;
}
constexpr void GlobalNamespace::StandardLevelDetailViewController::__set__contentIsOwnedAndReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentIsOwnedAndReady = value;
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressOpenLevelPackButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressOpenLevelPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressOpenLevelPackButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_levelFavoriteStatusDidChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_levelFavoriteStatusDidChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::add_didChangeContentEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "add_didChangeContentEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailViewController::remove_didChangeContentEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "remove_didChangeContentEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::StandardLevelDetailViewController::get_selectedDifficultyBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::StandardLevelDetailViewController::get_beatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "get_beatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel*, false>(this, ___internal_method);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic,
                                                            ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                            ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewBeatmapLevel, hidePracticeButton, hide360DegreeBeatmapCharacteristic, playButtonText,
                                                          allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
inline void
GlobalNamespace::StandardLevelDetailViewController::SetData(::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hidePracticeButton,
                                                            bool hide360DegreeBeatmapCharacteristic, bool canBuyPack, ::StringW playButtonText,
                                                            ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                            ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, previewBeatmapLevel, hidePracticeButton, hide360DegreeBeatmapCharacteristic, canBuyPack, playButtonText,
                                                          allowedBeatmapDifficultyMask, notAllowedCharacteristics);
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
                                                                             "RefreshContentLevelDetailView", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ClearSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "ClearSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView* view, ::GlobalNamespace::IDifficultyBeatmap* beatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidChangeDifficultyBeatmap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view, beatmap);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleDidFavoriteToggleChange(::GlobalNamespace::StandardLevelDetailView* view, ::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleDidFavoriteToggleChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Toggle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view, toggle);
}
inline void GlobalNamespace::StandardLevelDetailViewController::HandleLevelLoadingUpdate(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate levelLoadingUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "HandleLevelLoadingUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelLoadingUpdate);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyLevelButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "BuyLevelButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::BuyPackButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "BuyPackButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::LoadBeatmapLevelAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "LoadBeatmapLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStoreOrShowBuyInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "OpenLevelProductStoreOrShowBuyInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::OpenLevelProductStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "OpenLevelProductStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::RefreshAvailabilityIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "RefreshAvailabilityIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param errorText: ::StringW (default: u"")
/// @param downloadingProgress: float_t (default: 0.0)
/// @param downloadingText: ::StringW (default: u"")
inline void GlobalNamespace::StandardLevelDetailViewController::ShowContent(::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType, ::StringW errorText,
                                                                            float_t downloadingProgress, ::StringW downloadingText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowContent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardLevelDetailViewController__ContentType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, errorText, downloadingProgress, downloadingText);
}
inline void GlobalNamespace::StandardLevelDetailViewController::ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "ShowLoadingAndDoSomething", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline ::GlobalNamespace::StandardLevelDetailViewController* GlobalNamespace::StandardLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelDetailViewController*>());
}
inline void GlobalNamespace::StandardLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailViewController::_DidActivate_b__47_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                             "<DidActivate>b__47_6", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_BuyPackButtonWasPressed_b__56_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<BuyPackButtonWasPressed>b__56_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStoreOrShowBuyInfo_b__58_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStoreOrShowBuyInfo>b__58_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_OpenLevelProductStore_b__59_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<OpenLevelProductStore>b__59_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailViewController::_RefreshAvailabilityIfNeeded_b__60_0(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailViewController*>::get(), "<RefreshAvailabilityIfNeeded>b__60_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailViewController::StandardLevelDetailViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
