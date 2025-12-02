#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuDestinationRequestController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuDestinationRequestController)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class IDestinationRequestManager;
}
namespace GlobalNamespace {
struct MainMenuDestinationRequestController__ProcessDestinationRequest_d__9;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MainMenuDestinationRequestController;
}
namespace GlobalNamespace {
struct MainMenuDestinationRequestController__ProcessDestinationRequest_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainMenuDestinationRequestController);
MARK_VAL_T(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainMenuDestinationRequestController/<ProcessDestinationRequest>d__9
struct CORDL_TYPE MainMenuDestinationRequestController__ProcessDestinationRequest_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x576a544, size 0x4f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x576aa34, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuDestinationRequestController__ProcessDestinationRequest_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainMenuDestinationRequestController*",
  // modifiers: "", def_value: None }, CppParam { name: "menuDestination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MainMenuDestinationRequestController__ProcessDestinationRequest_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                 ::GlobalNamespace::MainMenuDestinationRequestController* __4__this,
                                                                                 ::GlobalNamespace::MenuDestination* menuDestination, ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainMenuDestinationRequestController* __4__this;

  /// @brief Field menuDestination, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* menuDestination;

  /// @brief Field <cancellationToken>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, menuDestination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainMenuDestinationRequestController
class CORDL_TYPE MainMenuDestinationRequestController : public ::System::Object {
public:
  // Declarations
  using _ProcessDestinationRequest_d__9 = ::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9;

  /// @brief Field _cancellationTokenSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _destinationRequestManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationRequestManager,
                      put = __cordl_internal_set__destinationRequestManager)) ::GlobalNamespace::IDestinationRequestManager* _destinationRequestManager;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _menuScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuScenesTransitionSetupData,
                      put = __cordl_internal_set__menuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>
      _menuScenesTransitionSetupData;

  /// @brief Field _nextMenuDestination, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nextMenuDestination, put = setStaticF__nextMenuDestination)) ::GlobalNamespace::MenuDestination* _nextMenuDestination;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x576a0cc, size 0x1c4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleDestinationRequestManagerDidSendMenuDestinationRequest, addr 0x576a53c, size 0x4, virtual false, abstract: false, final false
  inline void HandleDestinationRequestManagerDidSendMenuDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination);

  /// @brief Method HandleGameScenesManagerInstallEarlyBindings, addr 0x576a290, size 0x2ac, virtual false, abstract: false, final false
  inline void HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  /// @brief Method Initialize, addr 0x5769d9c, size 0x280, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::MainMenuDestinationRequestController* New_ctor();

  /// @brief Method ProcessDestinationRequest, addr 0x576a01c, size 0xb0, virtual false, abstract: false, final false
  inline void ProcessDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination);

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::GlobalNamespace::IDestinationRequestManager* const& __cordl_internal_get__destinationRequestManager() const;

  constexpr ::GlobalNamespace::IDestinationRequestManager*& __cordl_internal_get__destinationRequestManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& __cordl_internal_get__menuScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& __cordl_internal_get__menuScenesTransitionSetupData();

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__destinationRequestManager(::GlobalNamespace::IDestinationRequestManager* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__menuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x576a540, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MenuDestination* getStaticF__nextMenuDestination();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  static inline void setStaticF__nextMenuDestination(::GlobalNamespace::MenuDestination* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuDestinationRequestController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuDestinationRequestController(MainMenuDestinationRequestController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuDestinationRequestController(MainMenuDestinationRequestController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5758 };

  /// @brief Field _destinationRequestManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IDestinationRequestManager* ____destinationRequestManager;

  /// @brief Field _menuScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> ____menuScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _cancellationTokenSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController, ____destinationRequestManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController, ____menuScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuDestinationRequestController, ____cancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuDestinationRequestController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainMenuDestinationRequestController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuDestinationRequestController*, "", "MainMenuDestinationRequestController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuDestinationRequestController__ProcessDestinationRequest_d__9, "", "MainMenuDestinationRequestController/<ProcessDestinationRequest>d__9");
