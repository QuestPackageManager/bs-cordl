#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SetupDragAndDropArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetupDragAndDropArgs)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct SetupDragAndDropArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::SetupDragAndDropArgs);
// Dependencies UnityEngine.UIElements.StartDragArgs
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.SetupDragAndDropArgs
struct CORDL_TYPE SetupDragAndDropArgs {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4a26bd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* draggedElement, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                    ::UnityEngine::UIElements::StartDragArgs startDragArgs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SetupDragAndDropArgs();

  // Ctor Parameters [CppParam { name: "draggedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "selectedIds", ty:
  // "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "startDragArgs", ty: "::UnityEngine::UIElements::StartDragArgs", modifiers: "",
  // def_value: None }]
  constexpr SetupDragAndDropArgs(::UnityEngine::UIElements::VisualElement* draggedElement, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                                 ::UnityEngine::UIElements::StartDragArgs startDragArgs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field draggedElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* draggedElement;

  /// @brief Field selectedIds, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds;

  /// @brief Field startDragArgs, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::StartDragArgs startDragArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::SetupDragAndDropArgs, draggedElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SetupDragAndDropArgs, selectedIds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SetupDragAndDropArgs, startDragArgs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SetupDragAndDropArgs, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SetupDragAndDropArgs, "UnityEngine.UIElements", "SetupDragAndDropArgs");
