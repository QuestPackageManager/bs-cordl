#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLoader)
namespace Analytics::Model {
class TelemetryModel;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace BeatSaber::GraphQL {
class GraphQLClientProviderInstallerSO;
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
class MainSettingsAsyncLoader;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializeMockedPlatformAsync_d__13;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializePlatformAsync_d__11;
}
namespace GlobalNamespace {
struct PlatformLoader__LoadInternalAsync_d__10;
}
namespace GlobalNamespace {
class PlatformLoader___c;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLoader;
}
namespace GlobalNamespace {
class PlatformLoader___c;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializeMockedPlatformAsync_d__13;
}
namespace GlobalNamespace {
struct PlatformLoader__InitializePlatformAsync_d__11;
}
namespace GlobalNamespace {
struct PlatformLoader__LoadInternalAsync_d__10;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformLoader*);
MARK_REF_T(::GlobalNamespace::PlatformLoader___c*);
MARK_VAL_T(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15);
MARK_VAL_T(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13);
MARK_VAL_T(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11);
MARK_VAL_T(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader*, "", "PlatformLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader___c*, "", "PlatformLoader/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, "", "PlatformLoader/<InitializeAnalyticsEventsDispatcherAsync>d__15");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13, "", "PlatformLoader/<InitializeMockedPlatformAsync>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, "", "PlatformLoader/<InitializePlatformAsync>d__11");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, "", "PlatformLoader/<LoadInternalAsync>d__10");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLoader/<>c
class CORDL_TYPE PlatformLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlatformLoader___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* __9__12_0;

  static inline ::GlobalNamespace::PlatformLoader___c* New_ctor();

  /// @brief Method <GetPlatformInitParams>b__12_0, addr 0x3773be0, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _GetPlatformInitParams_b__12_0(::GlobalNamespace::AchievementSO* x);

  /// @brief Method .ctor, addr 0x3773bdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlatformLoader___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::PlatformLoader___c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::AchievementSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLoader___c(PlatformLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLoader___c(PlatformLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlatformLoader___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLoader/<InitializeAnalyticsEventsDispatcherAsync>d__15
struct CORDL_TYPE PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3773bf4, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3773f68, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::OculusStudios::Platform::Core::IPlatform*", modifiers: "",
  // def_value: None }, CppParam { name: "analyticsManager", ty: "::UnityW<::OSCE::Analytics::AnalyticsManager>", modifiers: "", def_value: None }, CppParam { name: "telemetry", ty:
  // "::Analytics::Model::TelemetryModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value:
  // None }]
  constexpr PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::OculusStudios::Platform::Core::IPlatform* platform, ::UnityW<::OSCE::Analytics::AnalyticsManager> analyticsManager,
                                                                           ::Analytics::Model::TelemetryModel* telemetry,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20986 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field platform, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* platform;

  /// @brief Field analyticsManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> analyticsManager;

  /// @brief Field telemetry, offset: 0x30, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* telemetry;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, analyticsManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, telemetry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLoader/<InitializeMockedPlatformAsync>d__13
struct CORDL_TYPE PlatformLoader__InitializeMockedPlatformAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3773fd4, size 0x318, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37742f4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader__InitializeMockedPlatformAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: None }]
  constexpr PlatformLoader__InitializeMockedPlatformAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::UnityW<::GlobalNamespace::PlatformLoader> __4__this,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLoader> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLoader/<InitializePlatformAsync>d__11
struct CORDL_TYPE PlatformLoader__InitializePlatformAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3774360, size 0x588, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37748e8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader__InitializePlatformAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "useMock", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: None
  // }]
  constexpr PlatformLoader__InitializePlatformAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, bool useMock,
                                                          ::UnityW<::GlobalNamespace::PlatformLoader> __4__this, ::Zenject::DiContainer* container, ::System::Diagnostics::Stopwatch* _stopwatch_5__2,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field useMock, offset: 0x20, size: 0x1, def value: None
  bool useMock;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLoader> __4__this;

  /// @brief Field container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <stopwatch>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopwatch_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::IPlatform*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, useMock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, _stopwatch_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLoader/<LoadInternalAsync>d__10
struct CORDL_TYPE PlatformLoader__LoadInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3774954, size 0x550, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3774ea4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader__LoadInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformLoader>", modifiers: "",
  // def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None }, CppParam { name: "registry", ty:
  // "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "_useMock_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr PlatformLoader__LoadInternalAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PlatformLoader> __4__this,
                                                    ::Zenject::DiContainer* container, ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, bool _useMock_5__2,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLoader> __4__this;

  /// @brief Field container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field registry, offset: 0x30, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry;

  /// @brief Field <useMock>5__2, offset: 0x38, size: 0x1, def value: None
  bool _useMock_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, registry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, _useMock_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AsyncLoader
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLoader
class CORDL_TYPE PlatformLoader : public ::BGLib::AppFlow::Initialization::AsyncLoader {
public:
  // Declarations
  using _InitializeAnalyticsEventsDispatcherAsync_d__15 = ::GlobalNamespace::PlatformLoader__InitializeAnalyticsEventsDispatcherAsync_d__15;

  using _InitializeMockedPlatformAsync_d__13 = ::GlobalNamespace::PlatformLoader__InitializeMockedPlatformAsync_d__13;

  using _InitializePlatformAsync_d__11 = ::GlobalNamespace::PlatformLoader__InitializePlatformAsync_d__11;

  using _LoadInternalAsync_d__10 = ::GlobalNamespace::PlatformLoader__LoadInternalAsync_d__10;

  using __c = ::GlobalNamespace::PlatformLoader___c;

  /// @brief Field _achievementIdsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel)) ::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Field _analyticsManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsManager, put = __cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager;

  /// @brief Field _appIdentification, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__appIdentification, put = __cordl_internal_set__appIdentification)) ::UnityW<::GlobalNamespace::AppIdentificationSO> _appIdentification;

  /// @brief Field _graphQLClientProviderInstaller, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__graphQLClientProviderInstaller,
                      put = __cordl_internal_set__graphQLClientProviderInstaller)) ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>
      _graphQLClientProviderInstaller;

  /// @brief Field _loggingCategory, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__loggingCategory, put = __cordl_internal_set__loggingCategory)) ::StringW _loggingCategory;

  /// @brief Field _mainSettingsAsyncLoader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsAsyncLoader, put = __cordl_internal_set__mainSettingsAsyncLoader)) ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>
      _mainSettingsAsyncLoader;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mockPlatformAdditionalContentModelInitialData,
                      put = __cordl_internal_set__mockPlatformAdditionalContentModelInitialData)) ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>
      _mockPlatformAdditionalContentModelInitialData;

  /// @brief Field _platform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  __declspec(property(get = get_synchronizationStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep synchronizationStep;

  /// @brief Method FindOrCreateAnalyticsManager, addr 0x377399c, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::OSCE::Analytics::AnalyticsManager> FindOrCreateAnalyticsManager();

  /// @brief Method GetPlatformInitParams, addr 0x3773654, size 0x298, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::PlatformInitParams* GetPlatformInitParams();

  /// @brief Method InitializeAnalyticsEventsDispatcherAsync, addr 0x3773ac0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeAnalyticsEventsDispatcherAsync(::Analytics::Model::TelemetryModel* telemetry, ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                                           ::OSCE::Analytics::AnalyticsManager* analyticsManager);

  /// @brief Method InitializeMockedPlatformAsync, addr 0x37738ec, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeMockedPlatformAsync();

  /// @brief Method InitializePlatformAsync, addr 0x3773584, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializePlatformAsync(bool useMock, ::Zenject::DiContainer* container);

  /// @brief Method LoadInternalAsync, addr 0x37734bc, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                             ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::PlatformLoader* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager();

  constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO> const& __cordl_internal_get__appIdentification() const;

  constexpr ::UnityW<::GlobalNamespace::AppIdentificationSO>& __cordl_internal_get__appIdentification();

  constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> const& __cordl_internal_get__graphQLClientProviderInstaller() const;

  constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>& __cordl_internal_get__graphQLClientProviderInstaller();

  constexpr ::StringW const& __cordl_internal_get__loggingCategory() const;

  constexpr ::StringW& __cordl_internal_get__loggingCategory();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> const& __cordl_internal_get__mainSettingsAsyncLoader() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>& __cordl_internal_get__mainSettingsAsyncLoader();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  constexpr void __cordl_internal_set__appIdentification(::UnityW<::GlobalNamespace::AppIdentificationSO> value);

  constexpr void __cordl_internal_set__graphQLClientProviderInstaller(::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> value);

  constexpr void __cordl_internal_set__loggingCategory(::StringW value);

  constexpr void __cordl_internal_set__mainSettingsAsyncLoader(::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> value);

  constexpr void __cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  /// @brief Method .ctor, addr 0x3773b84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_synchronizationStep, addr 0x37734b4, size 0x8, virtual true, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep get_synchronizationStep();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLoader(PlatformLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLoader(PlatformLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20990 };

  /// @brief Field _appIdentification, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppIdentificationSO> ____appIdentification;

  /// @brief Field _mainSettingsAsyncLoader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> ____mainSettingsAsyncLoader;

  /// @brief Field _achievementIdsModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ____mockPlatformAdditionalContentModelInitialData;

  /// @brief Field _graphQLClientProviderInstaller, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> ____graphQLClientProviderInstaller;

  /// @brief Field _platform, offset: 0x58, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _loggingCategory, offset: 0x60, size: 0x8, def value: None
  ::StringW ____loggingCategory;

  /// @brief Field _analyticsManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____analyticsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____appIdentification) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____mainSettingsAsyncLoader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____achievementIdsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____mockPlatformAdditionalContentModelInitialData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____graphQLClientProviderInstaller) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____platform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____loggingCategory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLoader, ____analyticsManager) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLoader) == 0x70, "Size mismatch!");

} // namespace GlobalNamespace
