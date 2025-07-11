#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAvatarPlaceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarPlaceManager)
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace_Pool;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarPlaceManager
class CORDL_TYPE MultiplayerLobbyAvatarPlaceManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _allPlaces, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__allPlaces,
                      put = __cordl_internal_set__allPlaces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* _allPlaces;

  /// @brief Field _avatarPlacesPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPlacesPool, put = __cordl_internal_set__avatarPlacesPool)) ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* _avatarPlacesPool;

  /// @brief Field _innerCircleRadius, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__innerCircleRadius, put = __cordl_internal_set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _lobbyStateDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyStateDataModel, put = __cordl_internal_set__lobbyStateDataModel)) ::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _minOuterCircleRadius, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minOuterCircleRadius, put = __cordl_internal_set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Method Activate, addr 0x3bd953c, size 0x8, virtual false, abstract: false, final false
  inline void Activate(float_t innerCircleRadius, float_t minOuterCircleRadius);

  /// @brief Method Deactivate, addr 0x3bd99d4, size 0x4, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method DespawnAllPlaces, addr 0x3bd99d8, size 0x14c, virtual false, abstract: false, final false
  inline void DespawnAllPlaces();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bd9b24, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SpawnAllPlaces, addr 0x3bd9544, size 0x490, virtual false, abstract: false, final false
  inline void SpawnAllPlaces();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* const& __cordl_internal_get__allPlaces() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>*& __cordl_internal_get__allPlaces();

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* const& __cordl_internal_get__avatarPlacesPool() const;

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool*& __cordl_internal_get__avatarPlacesPool();

  constexpr float_t const& __cordl_internal_get__innerCircleRadius() const;

  constexpr float_t& __cordl_internal_get__innerCircleRadius();

  constexpr ::GlobalNamespace::ILobbyStateDataModel* const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr float_t const& __cordl_internal_get__minOuterCircleRadius() const;

  constexpr float_t& __cordl_internal_get__minOuterCircleRadius();

  constexpr void __cordl_internal_set__allPlaces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* value);

  constexpr void __cordl_internal_set__avatarPlacesPool(::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* value);

  constexpr void __cordl_internal_set__innerCircleRadius(float_t value);

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr void __cordl_internal_set__minOuterCircleRadius(float_t value);

  /// @brief Method .ctor, addr 0x3bd9b28, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarPlaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4589 };

  /// @brief Field _lobbyStateDataModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _avatarPlacesPool, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* ____avatarPlacesPool;

  /// @brief Field _allPlaces, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* ____allPlaces;

  /// @brief Field _innerCircleRadius, offset: 0x38, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x3c, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, ____lobbyStateDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, ____avatarPlacesPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, ____allPlaces) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, ____innerCircleRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, ____minOuterCircleRadius) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, "", "MultiplayerLobbyAvatarPlaceManager");
