#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInstaller)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller);
// Type: ::MultiplayerLocalActivePlayerInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5155))
// CS Name: ::MultiplayerLocalActivePlayerInstaller*
class CORDL_TYPE MultiplayerLocalActivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _playerDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset 0x30, size 0x8
  __declspec(property(get = __get__optionalAvatarDataSender, put = __set__optionalAvatarDataSender))::BeatSaber::AvatarCore::OptionalAvatarDataSender* _optionalAvatarDataSender;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& __get__optionalAvatarDataSender();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const& __get__optionalAvatarDataSender() const;

  constexpr void __set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value);

  /// @brief Method InstallBindings, addr 0x23dc3c0, size 0x140, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x23dc500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerInstaller();

public:
  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSender* ____optionalAvatarDataSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, ____sceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, ____playerDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, ____optionalAvatarDataSender) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller*, "", "MultiplayerLocalActivePlayerInstaller");
