#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalPlayerInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerInstaller)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
// Dependencies MultiplayerPlayerStartState, Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalPlayerInstaller
class CORDL_TYPE MultiplayerLocalPlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _levelSceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSceneSetupData, put = __cordl_internal_set__levelSceneSetupData)) ::GlobalNamespace::MultiplayerLevelSceneSetupData* _levelSceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _startState, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startState, put = __cordl_internal_set__startState)) ::GlobalNamespace::MultiplayerPlayerStartState _startState;

  /// @brief Method InstallBindings, addr 0x3bf6d8c, size 0x218, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalPlayerInstaller* New_ctor();

  constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData* const& __cordl_internal_get__levelSceneSetupData() const;

  constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData*& __cordl_internal_get__levelSceneSetupData();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __cordl_internal_get__startState() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __cordl_internal_get__startState();

  constexpr void __cordl_internal_set__levelSceneSetupData(::GlobalNamespace::MultiplayerLevelSceneSetupData* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__startState(::GlobalNamespace::MultiplayerPlayerStartState value);

  /// @brief Method .ctor, addr 0x3bf6fa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalPlayerInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4731 };

  /// @brief Field _levelSceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelSceneSetupData* ____levelSceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _startState, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ____startState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____levelSceneSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____multiplayerSessionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____startState) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerInstaller, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerInstaller*, "", "MultiplayerLocalPlayerInstaller");
