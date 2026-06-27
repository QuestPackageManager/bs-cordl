#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformInstaller_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AppIdentificationSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformInstaller_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller___c::*)()>(&::GlobalNamespace::PlatformInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b5698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller___c._LoadResourcesBeforeInstall_b__11_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformInstaller___c::*)(::GlobalNamespace::AchievementSO*)>(&::GlobalNamespace::PlatformInstaller___c::_LoadResourcesBeforeInstall_b__11_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36b569c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        "<LoadResourcesBeforeInstall>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller___c._LoadResourcesBeforeInstallAsync_b__12_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformInstaller___c::*)(::GlobalNamespace::AchievementSO*)>(&::GlobalNamespace::PlatformInstaller___c::_LoadResourcesBeforeInstallAsync_b__12_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36b56b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        "<LoadResourcesBeforeInstallAsync>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformInstaller___c::setStaticF___9(::GlobalNamespace::PlatformInstaller___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlatformInstaller___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>(std::forward<::GlobalNamespace::PlatformInstaller___c*>(value));
}
inline ::GlobalNamespace::PlatformInstaller___c* GlobalNamespace::PlatformInstaller___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlatformInstaller___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>();
}
inline void GlobalNamespace::PlatformInstaller___c::setStaticF___9__11_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>* GlobalNamespace::PlatformInstaller___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>();
}
inline void GlobalNamespace::PlatformInstaller___c::setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>* GlobalNamespace::PlatformInstaller___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get>();
}
inline void GlobalNamespace::PlatformInstaller___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlatformInstaller___c::_LoadResourcesBeforeInstall_b__11_0(::GlobalNamespace::AchievementSO*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        "<LoadResourcesBeforeInstall>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::PlatformInstaller___c::_LoadResourcesBeforeInstallAsync_b__12_0(::GlobalNamespace::AchievementSO*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller___c*>::get(),
                        "<LoadResourcesBeforeInstallAsync>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::PlatformInstaller___c* GlobalNamespace::PlatformInstaller___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformInstaller___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller___c::PlatformInstaller___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::*)()>(&::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x36b56c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36b5a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::OculusStudios::Platform::Core::IPlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "analyticsManager", ty: "::UnityW<::OSCE::Analytics::AnalyticsManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "telemetry", ty: "::Analytics::Model::TelemetryModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::OculusStudios::Platform::Core::IPlatform*  platform, ::UnityW<::OSCE::Analytics::AnalyticsManager>  analyticsManager, ::Analytics::Model::TelemetryModel*  telemetry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->platform = platform;
this->analyticsManager = analyticsManager;
this->telemetry = telemetry;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__15()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::*)()>(&::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x36b5aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b5f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInstaller>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::PlatformInstaller__LoadResourcesBeforeInstall_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlatformInstaller>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__11::PlatformInstaller__LoadResourcesBeforeInstall_d__11()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::*)()>(&::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x36b5f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36b6738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInstaller>", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stopWatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlatformInstaller>  __4__this, ::Zenject::DiContainer*  container, ::System::Diagnostics::Stopwatch*  _stopWatch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->container = container;
this->_stopWatch_5__2 = _stopWatch_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__12()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.get_isRunningFromTests
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::get_isRunningFromTests)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36b4f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "get_isRunningFromTests",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.LoadResourcesBeforeInstall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(&::GlobalNamespace::PlatformInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36b4f50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.LoadResourcesBeforeInstallAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlatformInstaller::*)(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(&::GlobalNamespace::PlatformInstaller::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36b4ff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.FindOrCreateAnalyticsManager
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::OSCE::Analytics::AnalyticsManager> (*)()>(&::GlobalNamespace::PlatformInstaller::FindOrCreateAnalyticsManager)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x36b50b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "FindOrCreateAnalyticsManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x36b51d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.InitializeAnalyticsEventsDispatcherAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Analytics::Model::TelemetryModel*, ::OculusStudios::Platform::Core::IPlatform*, ::OSCE::Analytics::AnalyticsManager*)>(&::GlobalNamespace::PlatformInstaller::InitializeAnalyticsEventsDispatcherAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x36b54f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "InitializeAnalyticsEventsDispatcherAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Analytics::Model::TelemetryModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IPlatform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b55b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller._InstallBindings_b__14_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* (::GlobalNamespace::PlatformInstaller::*)(::BeatSaber::FeatureFlags::IFeatureFlagService*)>(&::GlobalNamespace::PlatformInstaller::_InstallBindings_b__14_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36b55bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "<InstallBindings>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::IFeatureFlagService*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitSetupData*& GlobalNamespace::PlatformInstaller::__cordl_internal_get__setupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupData;
}
constexpr ::GlobalNamespace::AppInitSetupData* const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__setupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupData;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__appIdentification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appIdentification;
}
constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__appIdentification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appIdentification;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__appIdentification(::UnityW<::GlobalNamespace::AppIdentificationSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appIdentification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__networkConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__networkConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkConfig;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__achievementIdsModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____achievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__achievementIdsModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mockPlatformAdditionalContentModelInitialData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__graphQLClientProviderInstaller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClientProviderInstaller;
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__graphQLClientProviderInstaller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQLClientProviderInstaller;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__graphQLClientProviderInstaller(::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQLClientProviderInstaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformInstaller::__cordl_internal_get__platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlatformInstaller::__cordl_internal_get__loggingCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggingCategory;
}
constexpr ::StringW const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__loggingCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggingCategory;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__loggingCategory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loggingCategory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& GlobalNamespace::PlatformInstaller::__cordl_internal_get__analyticsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__analyticsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyticsManager;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::PlatformInstaller::get_isRunningFromTests()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "get_isRunningFromTests",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*  registry, ::Zenject::DiContainer*  container)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                            9
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, container);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformInstaller::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*  registry, ::Zenject::DiContainer*  container)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                            10
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry, container);
}
inline ::UnityW<::OSCE::Analytics::AnalyticsManager> GlobalNamespace::PlatformInstaller::FindOrCreateAnalyticsManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "FindOrCreateAnalyticsManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::OSCE::Analytics::AnalyticsManager>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                            8
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlatformInstaller::InitializeAnalyticsEventsDispatcherAsync(::Analytics::Model::TelemetryModel*  telemetry, ::OculusStudios::Platform::Core::IPlatform*  platform, ::OSCE::Analytics::AnalyticsManager*  analyticsManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "InitializeAnalyticsEventsDispatcherAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Analytics::Model::TelemetryModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IPlatform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, telemetry, platform, analyticsManager);
}
inline void GlobalNamespace::PlatformInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* GlobalNamespace::PlatformInstaller::_InstallBindings_b__14_0(::BeatSaber::FeatureFlags::IFeatureFlagService*  featureFlagService)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstaller*>::get(),
                        "<InstallBindings>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::IFeatureFlagService*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*, false>(this, ___internal_method, featureFlagService);
}
inline ::GlobalNamespace::PlatformInstaller* GlobalNamespace::PlatformInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller::PlatformInstaller()   {
}
