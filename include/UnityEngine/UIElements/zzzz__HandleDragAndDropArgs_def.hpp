#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HandleDragAndDropArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandleDragAndDropArgs)
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct HandleDragAndDropArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::HandleDragAndDropArgs);
// Dependencies UnityEngine.UIElements.DragAndDropArgs, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.HandleDragAndDropArgs
struct CORDL_TYPE HandleDragAndDropArgs {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4a1af58, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::DragAndDropArgs dragAndDropArgs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleDragAndDropArgs();

  // Ctor Parameters [CppParam { name: "m_DragAndDropArgs", ty: "::UnityEngine::UIElements::DragAndDropArgs", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr HandleDragAndDropArgs(::UnityEngine::UIElements::DragAndDropArgs m_DragAndDropArgs, ::UnityEngine::Vector2 _position_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_DragAndDropArgs, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::UIElements::DragAndDropArgs m_DragAndDropArgs;

  /// @brief Field <position>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 _position_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HandleDragAndDropArgs, m_DragAndDropArgs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HandleDragAndDropArgs, _position_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HandleDragAndDropArgs, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HandleDragAndDropArgs, "UnityEngine.UIElements", "HandleDragAndDropArgs");
