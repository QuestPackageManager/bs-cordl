#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLoader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLoader_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AppIdentificationSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLoader_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader___c::*)()>(&::GlobalNamespace::PlatformLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3773bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader___c._GetPlatformInitParams_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlatformLoader___c::*)(::GlobalNamespace::AchievementSO*)>(
    &::GlobalNamespace::PlatformLoader___c::_GetPlatformInitParams_b__12_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3773be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader___c*>(),
                                                                                           { "<GetPlatformInitParams>b__12_0", {}, { ::i2c::type_of<::GlobalNamespace::AchievementSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLoader___c::setStaticF___9(::GlobalNamespace::PlatformLoader___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlatformLoader___c*, "<>9", ::GlobalNamespace::PlatformLoader___c*>(std::forward<::GlobalNamespace::PlatformLoader___c*>(value));
}
inline ::GlobalNamespace::PlatformLoader___c* GlobalNamespace::PlatformLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlatformLoader___c*, "<>9", ::GlobalNamespace::PlatformLoader___c*>();
}
inline void GlobalNamespace::PlatformLoader___c::setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>*, "<>9__12_0", ::GlobalNamespace::PlatformLoader___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* GlobalNamespace::PlatformLoader___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>*, "<>9__12_0", ::GlobalNamespace::PlatformLoader___c*>();
}
inline void GlobalNamespace::PlatformLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlatformLoader___c::_GetPlatformInitParams_b__12_0(::GlobalNamespace::AchievementSO* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader___c*>(), { "<GetPlatformInitParams>b__12_0", {}, { ::i2c::type_of<::GlobalNamespace::AchievementSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::PlatformLoader___c* GlobalNamespace::PlatformLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader___c::PlatformLoader___c() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::*)()>(
    &::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3773bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3773f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::OculusStudios::Platform::Core::IPlatform*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "analyticsManager", ty: "::UnityW<::OSCE::Analytics::AnalyticsManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "telemetry", ty:
// "::Analytics::Model::TelemetryModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::Platform::Core::IPlatform* platform,
    ::UnityW<::OSCE::Analytics::AnalyticsManager> analyticsManager, ::Analytics::Model::TelemetryModel* telemetry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->platform = platform;
  this->analyticsManager = analyticsManager;
  this->telemetry = telemetry;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::*)()>(
    &::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x3773fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37742f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::PlatformLoader__InitializeMockedPlatformAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PlatformLoader> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13::PlatformLoader__InitializeMockedPlatformAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::*)()>(
    &::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x3774360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37748e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "useMock", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::PlatformLoader__InitializePlatformAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, bool useMock, ::UnityW<::GlobalNamespace::PlatformLoader> __4__this,
    ::Zenject::DiContainer* container, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->useMock = useMock;
  this->__4__this = __4__this;
  this->container = container;
  this->_stopwatch_5__2 = _stopwatch_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11::PlatformLoader__InitializePlatformAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::*)()>(&::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x3774954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3774ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "registry", ty:
// "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useMock_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::PlatformLoader__LoadInternalAsync_d__10(int32_t __1__state,
                                                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                              ::UnityW<::GlobalNamespace::PlatformLoader> __4__this, ::Zenject::DiContainer* container,
                                                                                                              ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, bool _useMock_5__2,
                                                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->container = container;
  this->registry = registry;
  this->_useMock_5__2 = _useMock_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10::PlatformLoader__LoadInternalAsync_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.get_synchronizationStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep (::GlobalNamespace::PlatformLoader::*)()>(
    &::GlobalNamespace::PlatformLoader::get_synchronizationStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37734b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { ::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.LoadInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlatformLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*,
                                                                                                                                ::Zenject::DiContainer*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::PlatformLoader::LoadInternalAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x37734bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { ::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.InitializePlatformAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlatformLoader::*)(bool, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::PlatformLoader::InitializePlatformAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3773584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(),
                                                                                           { "InitializePlatformAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.GetPlatformInitParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::PlatformInitParams* (::GlobalNamespace::PlatformLoader::*)()>(
    &::GlobalNamespace::PlatformLoader::GetPlatformInitParams)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3773654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "GetPlatformInitParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.InitializeMockedPlatformAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlatformLoader::*)()>(&::GlobalNamespace::PlatformLoader::InitializeMockedPlatformAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x37738ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "InitializeMockedPlatformAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.FindOrCreateAnalyticsManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::OSCE::Analytics::AnalyticsManager> (*)()>(&::GlobalNamespace::PlatformLoader::FindOrCreateAnalyticsManager)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x377399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "FindOrCreateAnalyticsManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader.InitializeAnalyticsEventsDispatcherAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (*)(::Analytics::Model::TelemetryModel*, ::OculusStudios::Platform::Core::IPlatform*, ::OSCE::Analytics::AnalyticsManager*)>(
        &::GlobalNamespace::PlatformLoader::InitializeAnalyticsEventsDispatcherAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3773ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(),
                                                             { "InitializeAnalyticsEventsDispatcherAsync",
                                                               {},
                                                               { ::i2c::type_of<::Analytics::Model::TelemetryModel*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                                 ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLoader::*)()>(&::GlobalNamespace::PlatformLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3773b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO>& GlobalNamespace::PlatformLoader::__cordl_internal_get__appIdentification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appIdentification;
}
constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO> const& GlobalNamespace::PlatformLoader::__cordl_internal_get__appIdentification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appIdentification;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__appIdentification(::UnityW<::GlobalNamespace::AppIdentificationSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appIdentification = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>& GlobalNamespace::PlatformLoader::__cordl_internal_get__mainSettingsAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsAsyncLoader;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> const& GlobalNamespace::PlatformLoader::__cordl_internal_get__mainSettingsAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsAsyncLoader;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__mainSettingsAsyncLoader(::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainSettingsAsyncLoader = value;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& GlobalNamespace::PlatformLoader::__cordl_internal_get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& GlobalNamespace::PlatformLoader::__cordl_internal_get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____achievementIdsModel = value;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& GlobalNamespace::PlatformLoader::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const&
GlobalNamespace::PlatformLoader::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr void
GlobalNamespace::PlatformLoader::__cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mockPlatformAdditionalContentModelInitialData = value;
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>& GlobalNamespace::PlatformLoader::__cordl_internal_get__graphQLClientProviderInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClientProviderInstaller;
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> const& GlobalNamespace::PlatformLoader::__cordl_internal_get__graphQLClientProviderInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQLClientProviderInstaller;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__graphQLClientProviderInstaller(::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphQLClientProviderInstaller = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformLoader::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformLoader::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::StringW& GlobalNamespace::PlatformLoader::__cordl_internal_get__loggingCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loggingCategory;
}
constexpr ::StringW const& GlobalNamespace::PlatformLoader::__cordl_internal_get__loggingCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loggingCategory;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__loggingCategory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loggingCategory = value;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& GlobalNamespace::PlatformLoader::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& GlobalNamespace::PlatformLoader::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void GlobalNamespace::PlatformLoader::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsManager = value;
}
inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep GlobalNamespace::PlatformLoader::get_synchronizationStep() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformLoader::LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container, cancellationToken);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformLoader::InitializePlatformAsync(bool useMock, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(),
                                                                                         { "InitializePlatformAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, useMock, container);
}
inline ::OculusStudios::Platform::Core::PlatformInitParams* GlobalNamespace::PlatformLoader::GetPlatformInitParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "GetPlatformInitParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::PlatformInitParams*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformLoader::InitializeMockedPlatformAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "InitializeMockedPlatformAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::UnityW<::OSCE::Analytics::AnalyticsManager> GlobalNamespace::PlatformLoader::FindOrCreateAnalyticsManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { "FindOrCreateAnalyticsManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::OSCE::Analytics::AnalyticsManager>>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformLoader::InitializeAnalyticsEventsDispatcherAsync(::Analytics::Model::TelemetryModel* telemetry,
                                                                                                                   ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                                                                   ::OSCE::Analytics::AnalyticsManager* analyticsManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(),
                                                           { "InitializeAnalyticsEventsDispatcherAsync",
                                                             {},
                                                             { ::i2c::type_of<::Analytics::Model::TelemetryModel*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                               ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, telemetry, platform, analyticsManager);
}
inline void GlobalNamespace::PlatformLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformLoader* GlobalNamespace::PlatformLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLoader::PlatformLoader() {}
