#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterStageManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyCenterStageManager)
namespace GlobalNamespace {
class CenterStageScreenController;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyCenterStageManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyCenterStageManager
class CORDL_TYPE MultiplayerLobbyCenterStageManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _centerObjectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__centerObjectTransform, put = __cordl_internal_set__centerObjectTransform)) ::UnityW<::UnityEngine::Transform> _centerObjectTransform;

  /// @brief Field _centerStageScreenController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__centerStageScreenController, put = __cordl_internal_set__centerStageScreenController)) ::UnityW<::GlobalNamespace::CenterStageScreenController>
      _centerStageScreenController;

  /// @brief Field _innerCircleRadius, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__innerCircleRadius, put = __cordl_internal_set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _lobbyStateDataModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyStateDataModel, put = __cordl_internal_set__lobbyStateDataModel)) ::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _minOuterCircleRadius, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minOuterCircleRadius, put = __cordl_internal_set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Method ActivateCenterStageManager, addr 0x3c1b0d4, size 0x20, virtual false, abstract: false, final false
  inline void ActivateCenterStageManager();

  /// @brief Method DeactivateCenterStageManager, addr 0x3c1b374, size 0x20, virtual false, abstract: false, final false
  inline void DeactivateCenterStageManager();

  /// @brief Method Init, addr 0x3c1b0cc, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t innerCircleRadius, float_t minOuterCircleRadius);

  static inline ::GlobalNamespace::MultiplayerLobbyCenterStageManager* New_ctor();

  /// @brief Method RecalculateCenterPosition, addr 0x3c1b0f4, size 0xf8, virtual false, abstract: false, final false
  inline void RecalculateCenterPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerObjectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerObjectTransform();

  constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController> const& __cordl_internal_get__centerStageScreenController() const;

  constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController>& __cordl_internal_get__centerStageScreenController();

  constexpr float_t const& __cordl_internal_get__innerCircleRadius() const;

  constexpr float_t& __cordl_internal_get__innerCircleRadius();

  constexpr ::GlobalNamespace::ILobbyStateDataModel* const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr float_t const& __cordl_internal_get__minOuterCircleRadius() const;

  constexpr float_t& __cordl_internal_get__minOuterCircleRadius();

  constexpr void __cordl_internal_set__centerObjectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__centerStageScreenController(::UnityW<::GlobalNamespace::CenterStageScreenController> value);

  constexpr void __cordl_internal_set__innerCircleRadius(float_t value);

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr void __cordl_internal_set__minOuterCircleRadius(float_t value);

  /// @brief Method .ctor, addr 0x3c1b4cc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterStageManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4835 };

  /// @brief Field _centerObjectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____centerObjectTransform;

  /// @brief Field _centerStageScreenController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CenterStageScreenController> ____centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _innerCircleRadius, offset: 0x38, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x3c, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____centerObjectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____centerStageScreenController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____lobbyStateDataModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____innerCircleRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____minOuterCircleRadius) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterStageManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageManager*, "", "MultiplayerLobbyCenterStageManager");
