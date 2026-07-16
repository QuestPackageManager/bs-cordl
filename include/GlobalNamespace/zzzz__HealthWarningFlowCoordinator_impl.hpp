#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningFlowCoordinator.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_impl.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__Region_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_1_def.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
#include "GlobalNamespace/zzzz__EndOfLifeNoticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__ExplicitContentWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__NoUserAgeWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5a03900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a03c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EulaViewController_ButtonType>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EulaViewController_ButtonType> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__37() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5a03ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a03f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__36() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x5a03f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a04528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_timeoutTokenSource_5__2 = _timeoutTokenSource_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x5a04594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a04ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::HealthWarningFlowCoordinator__RunAsync_d__32(int32_t __1__state,
                                                                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                        ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__32::HealthWarningFlowCoordinator__RunAsync_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5a04d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a05124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_selectedLanguage_5__2", ty: "::BGLib::Polyglot::LocalizationLanguage", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::BGLib::Polyglot::LocalizationLanguage _selectedLanguage_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_selectedLanguage_5__2 = _selectedLanguage_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33::HealthWarningFlowCoordinator__SelectLanguageAsync_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5a05190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a0553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::Region>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::HealthWarningFlowCoordinator__SelectRegionAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::Region> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__35::HealthWarningFlowCoordinator__SelectRegionAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5a055a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a05b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerData_5__2", ty: "::GlobalNamespace::PlayerData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerSensitivityFlag>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::GlobalNamespace::PlayerData* _playerData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerSensitivityFlag> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_playerData_5__2 = _playerData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__39() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a05bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a05e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__38() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5a05e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a06230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x5a0629c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a0690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_oldAgeCategory_5__2", ty: "::OculusStudios::Platform::Core::UserAgeCategory", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_oldSensitivityFlag_5__3", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::PlayerData*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::HealthWarningFlowCoordinator__UpdateUacAsync_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::OculusStudios::Platform::Core::UserAgeCategory _oldAgeCategory_5__2, ::GlobalNamespace::PlayerSensitivityFlag _oldSensitivityFlag_5__3, ::GlobalNamespace::PlayerData* __7__wrap3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_oldAgeCategory_5__2 = _oldAgeCategory_5__2;
  this->_oldSensitivityFlag_5__3 = _oldSensitivityFlag_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__40::HealthWarningFlowCoordinator__UpdateUacAsync_d__40() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5a02c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ShowTopViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ShowTopViewController)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a02fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowTopViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.FilterExcludedSongsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::FilterExcludedSongsAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a030b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "FilterExcludedSongsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ShowTopViewControllerAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::CompletableViewController*)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ShowTopViewControllerAsync)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a03164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(),
                                                                                           { "ShowTopViewControllerAsync", {}, { ::i2c::type_of<::GlobalNamespace::CompletableViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a031a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.RunAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::RunAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a03234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "RunAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.SelectLanguageAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::SelectLanguageAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a032e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "SelectLanguageAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ShowSelectLanguageViewControllerAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ShowSelectLanguageViewControllerAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a03398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowSelectLanguageViewControllerAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.SelectRegionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::SelectRegionAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a03448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "SelectRegionAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.AgreeToPrivacyPolicyAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::AgreeToPrivacyPolicyAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a034fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "AgreeToPrivacyPolicyAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.AgreeToEulaAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::AgreeToEulaAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a035ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "AgreeToEulaAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ShowHealthWarningAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ShowHealthWarningAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0365c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowHealthWarningAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ShowExplicitContentWarningAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ShowExplicitContentWarningAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowExplicitContentWarningAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.UpdateUacAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::UpdateUacAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a037bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "UpdateUacAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a03870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator._ShowSelectLanguageViewControllerAsync_g__HandleDidChangeLanguage_34_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::BGLib::Polyglot::LocalizationLanguage)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::_ShowSelectLanguageViewControllerAsync_g__HandleDidChangeLanguage_34_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a03878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(),
                                                { "<ShowSelectLanguageViewControllerAsync>g__HandleDidChangeLanguage|34_0", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectLanguageViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectLanguageViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectLanguageViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectRegionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectRegionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectRegionViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::EulaViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__eulaViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__eulaViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eulaViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__privacyPolicyViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__privacyPolicyViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privacyPolicyViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthWarningViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__explicitContentWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__explicitContentWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explicitContentWarningViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__noUserAgeWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noUserAgeWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__noUserAgeWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noUserAgeWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__noUserAgeWarningViewController(::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noUserAgeWarningViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__endOfLifeNoticeViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endOfLifeNoticeViewController;
}
constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__endOfLifeNoticeViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endOfLifeNoticeViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__endOfLifeNoticeViewController(::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endOfLifeNoticeViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningSceneSetupData;
}
constexpr ::GlobalNamespace::HealthWarningSceneSetupData* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningSceneSetupData;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthWarningSceneSetupData = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__beatmapEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__beatmapEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEntitlementModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__beatmapEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEntitlementModel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__viewControllerTitles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* const&
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__viewControllerTitles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr void
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllerTitles = value;
}
constexpr ::GlobalNamespace::Region& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectedRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr ::GlobalNamespace::Region const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectedRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectedRegion(::GlobalNamespace::Region value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedRegion = value;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__openedWithLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openedWithLanguage;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__openedWithLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openedWithLanguage;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__openedWithLanguage(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____openedWithLanguage = value;
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__updateUacTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateUacTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__updateUacTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateUacTask;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__updateUacTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateUacTask = value;
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__filterExcludedSongsTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterExcludedSongsTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__filterExcludedSongsTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterExcludedSongsTask;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__filterExcludedSongsTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterExcludedSongsTask = value;
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::ShowTopViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowTopViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::FilterExcludedSongsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "FilterExcludedSongsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::ShowTopViewControllerAsync(::GlobalNamespace::CompletableViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(),
                                                                                         { "ShowTopViewControllerAsync", {}, { ::i2c::type_of<::GlobalNamespace::CompletableViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, viewController);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::HealthWarningFlowCoordinator::ShowTopViewControllerAsync(::GlobalNamespace::CompletableViewController_1<T>* viewController) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(),
                                                           { "ShowTopViewControllerAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::CompletableViewController_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                       ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "RunAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::SelectLanguageAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "SelectLanguageAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::ShowSelectLanguageViewControllerAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowSelectLanguageViewControllerAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::SelectRegionAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "SelectRegionAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::AgreeToPrivacyPolicyAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "AgreeToPrivacyPolicyAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::AgreeToEulaAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "AgreeToEulaAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::ShowHealthWarningAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowHealthWarningAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::ShowExplicitContentWarningAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "ShowExplicitContentWarningAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HealthWarningFlowCoordinator::UpdateUacAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { "UpdateUacAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::_ShowSelectLanguageViewControllerAsync_g__HandleDidChangeLanguage_34_0(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningFlowCoordinator*>(),
                                              { "<ShowSelectLanguageViewControllerAsync>g__HandleDidChangeLanguage|34_0", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline ::GlobalNamespace::HealthWarningFlowCoordinator* GlobalNamespace::HealthWarningFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HealthWarningFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator::HealthWarningFlowCoordinator() {}
