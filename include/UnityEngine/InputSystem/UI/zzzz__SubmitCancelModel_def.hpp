#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/SubmitCancelModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SubmitCancelModel)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct SubmitCancelModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::SubmitCancelModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::SubmitCancelModel, "UnityEngine.InputSystem.UI", "SubmitCancelModel");
// Dependencies
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.SubmitCancelModel
struct CORDL_TYPE SubmitCancelModel {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubmitCancelModel();

  // Ctor Parameters [CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::BaseEventData*", modifiers: "", def_value: None }, CppParam { name: "device", ty:
  // "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }]
  constexpr SubmitCancelModel(::UnityEngine::EventSystems::BaseEventData* eventData, ::UnityEngine::InputSystem::InputDevice* device) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field eventData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseEventData* eventData;

  /// @brief Field device, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* device;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::SubmitCancelModel, eventData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::SubmitCancelModel, device) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::SubmitCancelModel) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
