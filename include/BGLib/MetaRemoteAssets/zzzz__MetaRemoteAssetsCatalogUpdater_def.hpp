#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsCatalogUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaRemoteAssetsCatalogUpdater)
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10;
}
namespace BGLib::MetaRemoteAssets {
class __MetaRemoteAssetsCatalogUpdater____c;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __GameScenesManager__SceneTransitionType;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsCatalogUpdater;
}
namespace BGLib::MetaRemoteAssets {
class __MetaRemoteAssetsCatalogUpdater____c;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: ::MetaRemoteAssetsCatalogUpdater::<>c*
class CORDL_TYPE __MetaRemoteAssetsCatalogUpdater____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>* __9__9_0;

  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* New_ctor();

  /// @brief Method <HandleGameSceneChanged>b__9_0, addr 0x2272964, size 0x54, virtual false, abstract: false, final false
  inline bool _HandleGameSceneChanged_b__9_0(::GlobalNamespace::SceneInfo* info);

  /// @brief Method .ctor, addr 0x227295c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>* getStaticF___9__9_0();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsCatalogUpdater____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsCatalogUpdater____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MetaRemoteAssetsCatalogUpdater____c(__MetaRemoteAssetsCatalogUpdater____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsCatalogUpdater____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MetaRemoteAssetsCatalogUpdater____c(__MetaRemoteAssetsCatalogUpdater____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<CheckForCatalogUpdateWithInterval>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsCatalogUpdater::<CheckForCatalogUpdateWithInterval>d__10
struct CORDL_TYPE __MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22729b8, size 0x510, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x227308c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                       ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater* __4__this,
                                                                                       ::System::Threading::CancellationToken cancellationToken,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, __u__2) == 0x38, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: BGLib.MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: ::BGLib.MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*
class CORDL_TYPE MetaRemoteAssetsCatalogUpdater : public ::System::Object {
public:
  // Declarations
  using _CheckForCatalogUpdateWithInterval_d__10 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10;

  using __c = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c;

  /// @brief Field _cancellationTokenSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _checkForCatalogUpdateOngoingTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__checkForCatalogUpdateOngoingTask,
                      put = __cordl_internal_set__checkForCatalogUpdateOngoingTask)) ::System::Threading::Tasks::Task* _checkForCatalogUpdateOngoingTask;

  /// @brief Field _remoteAssetsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteAssetsManager, put = __cordl_internal_set__remoteAssetsManager)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* _remoteAssetsManager;

  /// @brief Field _scenesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesManager, put = __cordl_internal_set__scenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _scenesManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method CheckForCatalogUpdateWithInterval, addr 0x2272660, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CheckForCatalogUpdateWithInterval(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x2272730, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleGameSceneChanged, addr 0x227274c, size 0x1b4, virtual false, abstract: false, final false
  inline void HandleGameSceneChanged(::GlobalNamespace::__GameScenesManager__SceneTransitionType sceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo,
                                     ::Zenject::DiContainer* container);

  /// @brief Method Initialize, addr 0x2272578, size 0xe8, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater* New_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager,
                                                                                    ::GlobalNamespace::GameScenesManager* scenesManager);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__checkForCatalogUpdateOngoingTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__checkForCatalogUpdateOngoingTask() const;

  constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& __cordl_internal_get__remoteAssetsManager();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*> const& __cordl_internal_get__remoteAssetsManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__scenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__scenesManager();

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__checkForCatalogUpdateOngoingTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__remoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value);

  constexpr void __cordl_internal_set__scenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method .ctor, addr 0x2272500, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager, ::GlobalNamespace::GameScenesManager* scenesManager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsCatalogUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsCatalogUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsCatalogUpdater(MetaRemoteAssetsCatalogUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsCatalogUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsCatalogUpdater(MetaRemoteAssetsCatalogUpdater const&) = delete;

  /// @brief Field _remoteAssetsManager, offset: 0x10, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* ____remoteAssetsManager;

  /// @brief Field _scenesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____scenesManager;

  /// @brief Field _cancellationTokenSource, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _checkForCatalogUpdateOngoingTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____checkForCatalogUpdateOngoingTask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18263 };

  /// @brief Field kGameplaySceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplaySceneName{ u"GameCore" };

  /// @brief Field kWaitIntervalInSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kWaitIntervalInSeconds{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater, ____remoteAssetsManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater, ____scenesManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater, ____cancellationTokenSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater, ____checkForCatalogUpdateOngoingTask) == 0x28, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsCatalogUpdater");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsCatalogUpdater/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10, "BGLib.MetaRemoteAssets",
                       "MetaRemoteAssetsCatalogUpdater/<CheckForCatalogUpdateWithInterval>d__10");
