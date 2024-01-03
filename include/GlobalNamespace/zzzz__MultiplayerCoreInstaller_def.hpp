#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerCoreInstaller)
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class ScoreSyncStateManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCoreInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerCoreInstaller);
// Type: ::MultiplayerCoreInstaller
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5398))
// CS Name: ::MultiplayerCoreInstaller*
class CORDL_TYPE MultiplayerCoreInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _scoreSyncStateManagerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreSyncStateManagerPrefab, put = __set__scoreSyncStateManagerPrefab))::GlobalNamespace::ScoreSyncStateManager* _scoreSyncStateManagerPrefab;

  /// @brief Field _multiplayerBadgesModel, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerBadgesModel, put = __set__multiplayerBadgesModel))::GlobalNamespace::MultiplayerBadgesModelSO* _multiplayerBadgesModel;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset 0x38, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  constexpr ::GlobalNamespace::ScoreSyncStateManager*& __get__scoreSyncStateManagerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScoreSyncStateManager*> const& __get__scoreSyncStateManagerPrefab() const;

  constexpr void __set__scoreSyncStateManagerPrefab(::GlobalNamespace::ScoreSyncStateManager* value);

  constexpr ::GlobalNamespace::MultiplayerBadgesModelSO*& __get__multiplayerBadgesModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesModelSO*> const& __get__multiplayerBadgesModel() const;

  constexpr void __set__multiplayerBadgesModel(::GlobalNamespace::MultiplayerBadgesModelSO* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method InstallBindings, addr 0x22725cc, size 0x61c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerCoreInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x2272be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerCoreInstaller(MultiplayerCoreInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerCoreInstaller(MultiplayerCoreInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerCoreInstaller();

public:
  /// @brief Field _scoreSyncStateManagerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScoreSyncStateManager* ____scoreSyncStateManagerPrefab;

  /// @brief Field _multiplayerBadgesModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgesModelSO* ____multiplayerBadgesModel;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerCoreInstaller, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____scoreSyncStateManagerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____multiplayerBadgesModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCoreInstaller, ____multiplayerSessionManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCoreInstaller*, "", "MultiplayerCoreInstaller");
