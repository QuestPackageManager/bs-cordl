#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerCoreInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerCoreInstaller)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class ScoreSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCoreInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerCoreInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerCoreInstaller
class CORDL_TYPE MultiplayerCoreInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _multiplayerBadgesModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBadgesModel, put = __cordl_internal_set__multiplayerBadgesModel)) ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>
      _multiplayerBadgesModel;

  /// @brief Field _multiplayerSessionManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _sceneSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _scoreSyncStateManagerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncStateManagerPrefab, put = __cordl_internal_set__scoreSyncStateManagerPrefab)) ::UnityW<::GlobalNamespace::ScoreSyncStateManager>
      _scoreSyncStateManagerPrefab;

  /// @brief Method InstallBindings, addr 0x3bf6508, size 0x788, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerCoreInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> const& __cordl_internal_get__multiplayerBadgesModel() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>& __cordl_internal_get__multiplayerBadgesModel();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScoreSyncStateManager> const& __cordl_internal_get__scoreSyncStateManagerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ScoreSyncStateManager>& __cordl_internal_get__scoreSyncStateManagerPrefab();

  constexpr void __cordl_internal_set__multiplayerBadgesModel(::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__scoreSyncStateManagerPrefab(::UnityW<::GlobalNamespace::ScoreSyncStateManager> value);

  /// @brief Method .ctor, addr 0x3bf6c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerCoreInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerCoreInstaller(MultiplayerCoreInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerCoreInstaller(MultiplayerCoreInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4729 };

  /// @brief Field _scoreSyncStateManagerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScoreSyncStateManager> ____scoreSyncStateManagerPrefab;

  /// @brief Field _multiplayerBadgesModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> ____multiplayerBadgesModel;

  /// @brief Field _sceneSetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____scoreSyncStateManagerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____multiplayerBadgesModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____sceneSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____multiplayerSessionManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerCoreInstaller, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCoreInstaller*, "", "MultiplayerCoreInstaller");
