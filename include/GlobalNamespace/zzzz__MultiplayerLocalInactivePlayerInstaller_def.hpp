#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerInstaller)
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalInactivePlayerInstaller
class CORDL_TYPE MultiplayerLocalInactivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _optionalAvatarDataSender, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalAvatarDataSender,
                      put = __cordl_internal_set__optionalAvatarDataSender)) ::BeatSaber::AvatarCore::OptionalAvatarDataSender* _optionalAvatarDataSender;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x3bd2d48, size 0x424, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* const& __cordl_internal_get__optionalAvatarDataSender() const;

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& __cordl_internal_get__optionalAvatarDataSender();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3bd31b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4528 };

  /// @brief Field _audioManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSender* ____optionalAvatarDataSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____audioManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, ____optionalAvatarDataSender) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*, "", "MultiplayerLocalInactivePlayerInstaller");
