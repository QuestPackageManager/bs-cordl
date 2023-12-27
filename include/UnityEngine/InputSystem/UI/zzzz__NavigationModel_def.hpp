#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationModel)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::NavigationModel);
// Type: UnityEngine.InputSystem.UI::NavigationModel
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6378))
// CS Name: ::UnityEngine.InputSystem.UI::NavigationModel
struct CORDL_TYPE NavigationModel {
public:
  // Declarations
  /// @brief Method Reset addr 0x2ad3f40 size 0x50 virtual false final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None }, CppParam { name: "lastMoveTime", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: None }]
  constexpr NavigationModel(::UnityEngine::Vector2 move, int32_t consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection lastMoveDirection, float_t lastMoveTime,
                            ::UnityEngine::EventSystems::AxisEventData* eventData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationModel();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::NavigationModel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::NavigationModel, "UnityEngine.InputSystem.UI", "NavigationModel");
