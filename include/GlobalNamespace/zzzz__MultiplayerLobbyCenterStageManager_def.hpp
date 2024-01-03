#pragma once
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
// Type: ::MultiplayerLobbyCenterStageManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5563))
// CS Name: ::MultiplayerLobbyCenterStageManager*
class CORDL_TYPE MultiplayerLobbyCenterStageManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _centerObjectTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__centerObjectTransform, put = __set__centerObjectTransform))::UnityEngine::Transform* _centerObjectTransform;

  /// @brief Field _centerStageScreenController, offset 0x20, size 0x8
  __declspec(property(get = __get__centerStageScreenController, put = __set__centerStageScreenController))::GlobalNamespace::CenterStageScreenController* _centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get__lobbyStateDataModel, put = __set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _innerCircleRadius, offset 0x30, size 0x4
  __declspec(property(get = __get__innerCircleRadius, put = __set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset 0x34, size 0x4
  __declspec(property(get = __get__minOuterCircleRadius, put = __set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  constexpr ::UnityEngine::Transform*& __get__centerObjectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__centerObjectTransform() const;

  constexpr void __set__centerObjectTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::CenterStageScreenController*& __get__centerStageScreenController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CenterStageScreenController*> const& __get__centerStageScreenController() const;

  constexpr void __set__centerStageScreenController(::GlobalNamespace::CenterStageScreenController* value);

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __get__lobbyStateDataModel() const;

  constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr float_t& __get__innerCircleRadius();

  constexpr float_t const& __get__innerCircleRadius() const;

  constexpr void __set__innerCircleRadius(float_t value);

  constexpr float_t& __get__minOuterCircleRadius();

  constexpr float_t const& __get__minOuterCircleRadius() const;

  constexpr void __set__minOuterCircleRadius(float_t value);

  /// @brief Method Init, addr 0x22a3940, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t innerCircleRadius, float_t minOuterCircleRadius);

  /// @brief Method ActivateCenterStageManager, addr 0x22a3948, size 0x24, virtual false, abstract: false, final false
  inline void ActivateCenterStageManager();

  /// @brief Method DeactivateCenterStageManager, addr 0x22a3a64, size 0x24, virtual false, abstract: false, final false
  inline void DeactivateCenterStageManager();

  /// @brief Method RecalculateCenterPosition, addr 0x22a396c, size 0xf8, virtual false, abstract: false, final false
  inline void RecalculateCenterPosition();

  static inline ::GlobalNamespace::MultiplayerLobbyCenterStageManager* New_ctor();

  /// @brief Method .ctor, addr 0x22a3a88, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterStageManager();

public:
  /// @brief Field _centerObjectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____centerObjectTransform;

  /// @brief Field _centerStageScreenController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CenterStageScreenController* ____centerStageScreenController;

  /// @brief Field _lobbyStateDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _innerCircleRadius, offset: 0x30, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x34, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterStageManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____centerObjectTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____centerStageScreenController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____lobbyStateDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____innerCircleRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageManager, ____minOuterCircleRadius) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageManager*, "", "MultiplayerLobbyCenterStageManager");
