#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyController)
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageManager;
}
namespace GlobalNamespace {
class PlayerDataModel;
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
// CS Name: ::MultiplayerLobbyController*
class CORDL_TYPE MultiplayerLobbyController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _innerCircleRadius, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__innerCircleRadius, put = __cordl_internal_set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field <lobbyActivated>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__lobbyActivated_k__BackingField, put = __cordl_internal_set__lobbyActivated_k__BackingField)) bool _lobbyActivated_k__BackingField;

  /// @brief Field _menuEnvironmentManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__menuEnvironmentManager,
                      put = __cordl_internal_set__menuEnvironmentManager))::UnityW<::GlobalNamespace::MenuEnvironmentManager> _menuEnvironmentManager;

  /// @brief Field _minOuterCircleRadius, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minOuterCircleRadius, put = __cordl_internal_set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Field _multiplayerLobbyAvatarManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyAvatarManager,
                      put = __cordl_internal_set__multiplayerLobbyAvatarManager))::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> _multiplayerLobbyAvatarManager;

  /// @brief Field _multiplayerLobbyAvatarPlaceManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyAvatarPlaceManager,
                      put = __cordl_internal_set__multiplayerLobbyAvatarPlaceManager))::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> _multiplayerLobbyAvatarPlaceManager;

  /// @brief Field _multiplayerLobbyCenterStageManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyCenterStageManager,
                      put = __cordl_internal_set__multiplayerLobbyCenterStageManager))::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> _multiplayerLobbyCenterStageManager;

  /// @brief Field _optionalAvatarDataSender, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalAvatarDataSender,
                      put = __cordl_internal_set__optionalAvatarDataSender))::BeatSaber::AvatarCore::OptionalAvatarDataSender* _optionalAvatarDataSender;

  /// @brief Field _playerDataModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  __declspec(property(get = get_lobbyActivated, put = set_lobbyActivated)) bool lobbyActivated;

  /// @brief Method ActivateMultiplayerLobby, addr 0x262ef8c, size 0xcc, virtual false, abstract: false, final false
  inline void ActivateMultiplayerLobby();

  /// @brief Method DeactivateMultiplayerLobby, addr 0x262f058, size 0x84, virtual false, abstract: false, final false
  inline void DeactivateMultiplayerLobby();

  static inline ::GlobalNamespace::MultiplayerLobbyController* New_ctor();

  constexpr float_t const& __cordl_internal_get__innerCircleRadius() const;

  constexpr float_t& __cordl_internal_get__innerCircleRadius();

  constexpr bool const& __cordl_internal_get__lobbyActivated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__lobbyActivated_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::MenuEnvironmentManager> const& __cordl_internal_get__menuEnvironmentManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuEnvironmentManager>& __cordl_internal_get__menuEnvironmentManager();

  constexpr float_t const& __cordl_internal_get__minOuterCircleRadius() const;

  constexpr float_t& __cordl_internal_get__minOuterCircleRadius();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> const& __cordl_internal_get__multiplayerLobbyAvatarManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager>& __cordl_internal_get__multiplayerLobbyAvatarManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> const& __cordl_internal_get__multiplayerLobbyAvatarPlaceManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager>& __cordl_internal_get__multiplayerLobbyAvatarPlaceManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> const& __cordl_internal_get__multiplayerLobbyCenterStageManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager>& __cordl_internal_get__multiplayerLobbyCenterStageManager();

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender*& __cordl_internal_get__optionalAvatarDataSender();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> const& __cordl_internal_get__optionalAvatarDataSender() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr void __cordl_internal_set__innerCircleRadius(float_t value);

  constexpr void __cordl_internal_set__lobbyActivated_k__BackingField(bool value);

  constexpr void __cordl_internal_set__menuEnvironmentManager(::UnityW<::GlobalNamespace::MenuEnvironmentManager> value);

  constexpr void __cordl_internal_set__minOuterCircleRadius(float_t value);

  constexpr void __cordl_internal_set__multiplayerLobbyAvatarManager(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> value);

  constexpr void __cordl_internal_set__multiplayerLobbyAvatarPlaceManager(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> value);

  constexpr void __cordl_internal_set__multiplayerLobbyCenterStageManager(::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> value);

  constexpr void __cordl_internal_set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x262f0dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lobbyActivated, addr 0x262ef78, size 0x8, virtual false, abstract: false, final false
  inline bool get_lobbyActivated();

  /// @brief Method set_lobbyActivated, addr 0x262ef80, size 0xc, virtual false, abstract: false, final false
  inline void set_lobbyActivated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyController(MultiplayerLobbyController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyController(MultiplayerLobbyController const&) = delete;

  /// @brief Field _innerCircleRadius, offset: 0x18, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x1c, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  /// @brief Field _multiplayerLobbyAvatarManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> ____multiplayerLobbyAvatarManager;

  /// @brief Field _multiplayerLobbyCenterStageManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterStageManager> ____multiplayerLobbyCenterStageManager;

  /// @brief Field _multiplayerLobbyAvatarPlaceManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager> ____multiplayerLobbyAvatarPlaceManager;

  /// @brief Field _menuEnvironmentManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuEnvironmentManager> ____menuEnvironmentManager;

  /// @brief Field _playerDataModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _optionalAvatarDataSender, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSender* ____optionalAvatarDataSender;

  /// @brief Field <lobbyActivated>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____lobbyActivated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____innerCircleRadius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____minOuterCircleRadius) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____multiplayerLobbyAvatarManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____multiplayerLobbyCenterStageManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____multiplayerLobbyAvatarPlaceManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____menuEnvironmentManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____playerDataModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____optionalAvatarDataSender) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyController, ____lobbyActivated_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyController*, "", "MultiplayerLobbyController");
