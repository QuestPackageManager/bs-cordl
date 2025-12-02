#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInstaller)
namespace Analytics::Model {
class TelemetryModel;
}
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class AppIdentificationSO;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
struct PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10;
}
namespace GlobalNamespace {
struct PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8;
}
namespace GlobalNamespace {
struct PlatformInstaller__LoadResourcesBeforeInstall_d__7;
}
namespace GlobalNamespace {
class PlatformInstaller___c;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstaller;
}
namespace GlobalNamespace {
class PlatformInstaller___c;
}
namespace GlobalNamespace {
struct PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10;
}
namespace GlobalNamespace {
struct PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8;
}
namespace GlobalNamespace {
struct PlatformInstaller__LoadResourcesBeforeInstall_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstaller);
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstaller___c);
MARK_VAL_T(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10);
MARK_VAL_T(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8);
MARK_VAL_T(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInstaller/<>c
class CORDL_TYPE PlatformInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlatformInstaller___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* __9__7_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* __9__8_0;

  static inline ::GlobalNamespace::PlatformInstaller___c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstallAsync>b__8_0, addr 0x364a638, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _LoadResourcesBeforeInstallAsync_b__8_0(::GlobalNamespace::AchievementSO* x);

  /// @brief Method <LoadResourcesBeforeInstall>b__7_0, addr 0x364a624, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _LoadResourcesBeforeInstall_b__7_0(::GlobalNamespace::AchievementSO* x);

  /// @brief Method .ctor, addr 0x364a620, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlatformInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* getStaticF___9__7_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::PlatformInstaller___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstaller___c(PlatformInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstaller___c(PlatformInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInstaller/<InitializeAnalyticsEventsDispatcherAsync>d__10
struct CORDL_TYPE PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x364a64c, size 0x484, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x364aad0, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::OculusStudios::Platform::Core::IPlatform*", modifiers: "",
  // def_value: None }, CppParam { name: "telemetry", ty: "::Analytics::Model::TelemetryModel*", modifiers: "", def_value: None }, CppParam { name: "_analyticsManager_5__2", ty:
  // "::UnityW<::OSCE::Analytics::AnalyticsManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
  // def_value: None }]
  constexpr PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::OculusStudios::Platform::Core::IPlatform* platform, ::Analytics::Model::TelemetryModel* telemetry,
                                                                              ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager_5__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21056 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field platform, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* platform;

  /// @brief Field telemetry, offset: 0x28, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* telemetry;

  /// @brief Field <analyticsManager>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, telemetry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, _analyticsManager_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInstaller/<LoadResourcesBeforeInstall>d__7
struct CORDL_TYPE PlatformInstaller__LoadResourcesBeforeInstall_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x364ab3c, size 0x4d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x364b018, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller__LoadResourcesBeforeInstall_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInstaller>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: None }]
  constexpr PlatformInstaller__LoadResourcesBeforeInstall_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::UnityW<::GlobalNamespace::PlatformInstaller> __4__this,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21057 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformInstaller> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInstaller/<LoadResourcesBeforeInstallAsync>d__8
struct CORDL_TYPE PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x364b020, size 0x79c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x364b7bc, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInstaller>", modifiers: "",
  // def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None }, CppParam { name: "_stopWatch_5__2", ty: "::System::Diagnostics::Stopwatch*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: None
  // }]
  constexpr PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::UnityW<::GlobalNamespace::PlatformInstaller> __4__this, ::Zenject::DiContainer* container,
                                                                    ::System::Diagnostics::Stopwatch* _stopWatch_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21058 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformInstaller> __4__this;

  /// @brief Field container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <stopWatch>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopWatch_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, _stopWatch_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInstaller
class CORDL_TYPE PlatformInstaller : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _InitializeAnalyticsEventsDispatcherAsync_d__10 = ::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10;

  using _LoadResourcesBeforeInstallAsync_d__8 = ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8;

  using _LoadResourcesBeforeInstall_d__7 = ::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7;

  using __c = ::GlobalNamespace::PlatformInstaller___c;

  /// @brief Field _achievementIdsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel)) ::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Field _appIdentification, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__appIdentification, put = __cordl_internal_set__appIdentification)) ::UnityW<::GlobalNamespace::AppIdentificationSO> _appIdentification;

  /// @brief Field _loggingCategory, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__loggingCategory, put = __cordl_internal_set__loggingCategory)) ::StringW _loggingCategory;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mockPlatformAdditionalContentModelInitialData,
                      put = __cordl_internal_set__mockPlatformAdditionalContentModelInitialData)) ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>
      _mockPlatformAdditionalContentModelInitialData;

  /// @brief Field _networkConfig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _platform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _setupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData)) ::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Method InitializeAnalyticsEventsDispatcherAsync, addr 0x364a508, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeAnalyticsEventsDispatcherAsync(::Analytics::Model::TelemetryModel* telemetry, ::OculusStudios::Platform::Core::IPlatform* platform);

  /// @brief Method InstallBindings, addr 0x364a408, size 0x100, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x364a2a4, size 0xa4, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x364a348, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::PlatformInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO> const& __cordl_internal_get__appIdentification() const;

  constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO>& __cordl_internal_get__appIdentification();

  constexpr ::StringW const& __cordl_internal_get__loggingCategory() const;

  constexpr ::StringW& __cordl_internal_get__loggingCategory();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::AppInitSetupData* const& __cordl_internal_get__setupData() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__appIdentification(::UnityW<::GlobalNamespace::AppIdentificationSO> value);

  constexpr void __cordl_internal_set__loggingCategory(::StringW value);

  constexpr void __cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x364a5c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstaller(PlatformInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstaller(PlatformInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21059 };

  /// @brief Field _setupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _appIdentification, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppIdentificationSO> ____appIdentification;

  /// @brief Field _networkConfig, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _achievementIdsModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ____mockPlatformAdditionalContentModelInitialData;

  /// @brief Field _platform, offset: 0x50, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _loggingCategory, offset: 0x58, size: 0x8, def value: None
  ::StringW ____loggingCategory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____setupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____appIdentification) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____networkConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____achievementIdsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____mockPlatformAdditionalContentModelInitialData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____platform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____loggingCategory) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller*, "", "PlatformInstaller");
NEED_NO_BOX(::GlobalNamespace::PlatformInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller___c*, "", "PlatformInstaller/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller__InitializeAnalyticsEventsDispatcherAsync_d__10, "", "PlatformInstaller/<InitializeAnalyticsEventsDispatcherAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstallAsync_d__8, "", "PlatformInstaller/<LoadResourcesBeforeInstallAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller__LoadResourcesBeforeInstall_d__7, "", "PlatformInstaller/<LoadResourcesBeforeInstall>d__7");
