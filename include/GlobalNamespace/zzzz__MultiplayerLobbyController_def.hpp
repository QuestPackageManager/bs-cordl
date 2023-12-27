#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyController)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyController);
// Type: ::MultiplayerLobbyController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5582))
// CS Name: ::MultiplayerLobbyController*
class CORDL_TYPE MultiplayerLobbyController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _innerCircleRadius, offset 0x18, size 0x4
  __declspec(property(get = __get__innerCircleRadius, put = __set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset 0x1c, size 0x4
  __declspec(property(get = __get__minOuterCircleRadius, put = __set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Field _multiplayerLobbyAvatarManager, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerLobbyAvatarManager, put = __set__multiplayerLobbyAvatarManager))::GlobalNamespace::MultiplayerLobbyAvatarManager* _multiplayerLobbyAvatarManager;

  /// @brief Field _multiplayerLobbyCenterStageManager, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerLobbyCenterStageManager,
                      put = __set__multiplayerLobbyCenterStageManager))::GlobalNamespace::MultiplayerLobbyCenterStageManager* _multiplayerLobbyCenterStageManager;

  /// @brief Field _multiplayerLobbyAvatarPlaceManager, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerLobbyAvatarPlaceManager,
                      put = __set__multiplayerLobbyAvatarPlaceManager))::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* _multiplayerLobbyAvatarPlaceManager;

  /// @brief Field _menuEnvironmentManager, offset 0x38, size 0x8
  __declspec(property(get = __get__menuEnvironmentManager, put = __set__menuEnvironmentManager))::GlobalNamespace::MenuEnvironmentManager* _menuEnvironmentManager;

  /// @brief Field _playerDataModel, offset 0x40, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset 0x48, size 0x8
  __declspec(property(get = __get__optionalAvatarDataSender, put = __set__optionalAvatarDataSender))::BeatSaber::AvatarCore::OptionalAvatarDataSender* _optionalAvatarDataSender;

  /// @brief Field <lobbyActivated>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __get__lobbyActivated_k__BackingField, put = __set__lobbyActivated_k__BackingField)) bool _lobbyActivated_k__BackingField;

  __declspec(property(get = get_lobbyActivated, put = set_lobbyActivated)) bool lobbyActivated;

  constexpr float_t& __get__innerCircleRadius();

  constexpr float_t const& __get__innerCircleRadius() const;

  constexpr void __set__innerCircleRadius(float_t value);

  constexpr float_t& __get__minOuterCircleRadius();

  constexpr float_t const& __get__minOuterCircleRadius() const;

  constexpr void __set__minOuterCircleRadius(float_t value);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarManager*& __get__multiplayerLobbyAvatarManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarManager*> const& __get__multiplayerLobbyAvatarManager() const;

  constexpr void __set__multiplayerLobbyAvatarManager(::GlobalNamespace::MultiplayerLobbyAvatarManager* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageManager*& __get__multiplayerLobbyCenterStageManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyCenterStageManager*> const& __get__multiplayerLobbyCenterStageManager() const;

  constexpr void __set__multiplayerLobbyCenterStageManager(::GlobalNamespace::MultiplayerLobbyCenterStageManager* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*& __get__multiplayerLobbyAvatarPlaceManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*> const& __get__multiplayerLobbyAvatarPlaceManager() const;

  constexpr void __set__multiplayerLobbyAvatarPlaceManager(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* value);

  constexpr ::GlobalNamespace::MenuEnvironmentManager*& __get__menuEnvironmentManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuEnvironmentManager*> const& __get__menuEnvironmentManager() const;

  constexpr void __set__menuEnvironmentManager(::GlobalNamespace::MenuEnvironmentManager* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& __get__optionalAvatarDataSender();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const& __get__optionalAvatarDataSender() const;

  constexpr void __set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value);

  constexpr bool& __get__lobbyActivated_k__BackingField();

  constexpr bool const& __get__lobbyActivated_k__BackingField() const;

  constexpr void __set__lobbyActivated_k__BackingField(bool value);

  /// @brief Method get_lobbyActivated addr 0x22a736c size 0x8 virtual false final false
  inline bool get_lobbyActivated();

  /// @brief Method set_lobbyActivated addr 0x22a7374 size 0xc virtual false final false
  inline void set_lobbyActivated(bool value);

  /// @brief Method ActivateMultiplayerLobby addr 0x22a7380 size 0xcc virtual false final false
  inline void ActivateMultiplayerLobby();

  /// @brief Method DeactivateMultiplayerLobby addr 0x22a744c size 0x84 virtual false final false
  inline void DeactivateMultiplayerLobby();

  static inline ::GlobalNamespace::MultiplayerLobbyController* New_ctor();

  /// @brief Method .ctor addr 0x22a74d0 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyController(MultiplayerLobbyController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyController(MultiplayerLobbyController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyController();

public:
  /// @brief Field _innerCircleRadius, offset: 0x18, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x1c, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  /// @brief Field _multiplayerLobbyAvatarManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarManager* ____multiplayerLobbyAvatarManager;

  /// @brief Field _multiplayerLobbyCenterStageManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyCenterStageManager* ____multiplayerLobbyCenterStageManager;

  /// @brief Field _multiplayerLobbyAvatarPlaceManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* ____multiplayerLobbyAvatarPlaceManager;

  /// @brief Field _menuEnvironmentManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MenuEnvironmentManager* ____menuEnvironmentManager;

  /// @brief Field _playerDataModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSender* ____optionalAvatarDataSender;

  /// @brief Field <lobbyActivated>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____lobbyActivated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyController, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyController*, "", "MultiplayerLobbyController");
