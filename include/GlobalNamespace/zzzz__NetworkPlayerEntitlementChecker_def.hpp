#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerEntitlementChecker)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
struct NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10;
}
namespace GlobalNamespace {
struct NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
struct NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10;
}
namespace GlobalNamespace {
struct NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerEntitlementChecker);
MARK_VAL_T(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10);
MARK_VAL_T(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8);
// Dependencies EntitlementStatus, EntitlementsStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__10
struct CORDL_TYPE NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e76d84, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e77050, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10(int32_t __1__state,
                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder,
                                                                        ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this, ::StringW levelId,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementsStatus, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__8
struct CORDL_TYPE NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e770cc, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e77344, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>",
  // modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }]
  constexpr NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                             ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this, ::StringW levelId,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19095 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkPlayerEntitlementChecker
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetEntitlementStatus_d__10 = ::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10;

  using _HandleGetIsEntitledToLevel_d__8 = ::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8;

  /// @brief Field _additionalContentModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _entitlementModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _rpcManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcManager, put = __cordl_internal_set__rpcManager)) ::GlobalNamespace::IMenuRpcManager* _rpcManager;

  /// @brief Method GetEntitlementStatus, addr 0x3e76c90, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::StringW levelId);

  /// @brief Method HandleDataInvalidated, addr 0x3e76ac4, size 0xa4, virtual false, abstract: false, final false
  inline void HandleDataInvalidated();

  /// @brief Method HandleGetIsEntitledToLevel, addr 0x3e76b68, size 0x98, virtual false, abstract: false, final false
  inline void HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  /// @brief Method IsSensitivityValid, addr 0x3e76c00, size 0x90, virtual false, abstract: false, final false
  inline bool IsSensitivityValid(::StringW levelId);

  static inline ::GlobalNamespace::NetworkPlayerEntitlementChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x3e76904, size 0x1c0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3e76754, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::IMenuRpcManager* const& __cordl_internal_get__rpcManager() const;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__rpcManager();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__rpcManager(::GlobalNamespace::IMenuRpcManager* value);

  /// @brief Method .ctor, addr 0x3e76d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerEntitlementChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19096 };

  /// @brief Field _rpcManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____rpcManager;

  /// @brief Field _additionalContentModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____rpcManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____additionalContentModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____entitlementModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker__GetEntitlementStatus_d__10, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker__HandleGetIsEntitledToLevel_d__8, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__8");
