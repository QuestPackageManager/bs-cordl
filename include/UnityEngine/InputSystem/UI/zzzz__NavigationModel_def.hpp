#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/NavigationModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationModel)
namespace UnityEngine::EventSystems {
class AxisEventData;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::NavigationModel);
// Dependencies UnityEngine.EventSystems.MoveDirection, UnityEngine.Vector2
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.NavigationModel
struct CORDL_TYPE NavigationModel {
public:
  // Declarations
  /// @brief Method Reset, addr 0x45eda50, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationModel();

  // Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None }, CppParam { name: "lastMoveTime", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: None }]
  constexpr NavigationModel(::UnityEngine::Vector2 move, int32_t consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection lastMoveDirection, float_t lastMoveTime,
                            ::UnityEngine::EventSystems::AxisEventData* eventData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6787 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field move, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 move;

  /// @brief Field consecutiveMoveCount, offset: 0x8, size: 0x4, def value: None
  int32_t consecutiveMoveCount;

  /// @brief Field lastMoveDirection, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::EventSystems::MoveDirection lastMoveDirection;

  /// @brief Field lastMoveTime, offset: 0x10, size: 0x4, def value: None
  float_t lastMoveTime;

  /// @brief Field eventData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::AxisEventData* eventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::NavigationModel, move) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::NavigationModel, consecutiveMoveCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::NavigationModel, lastMoveDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::NavigationModel, lastMoveTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::NavigationModel, eventData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::NavigationModel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::NavigationModel, "UnityEngine.InputSystem.UI", "NavigationModel");
