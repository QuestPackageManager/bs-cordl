#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CanStartDragArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanStartDragArgs)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CanStartDragArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CanStartDragArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CanStartDragArgs, "UnityEngine.UIElements", "CanStartDragArgs");
// [IsReadOnly]
// Dependencies UnityEngine.EventModifiers
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CanStartDragArgs
struct CORDL_TYPE CanStartDragArgs {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x721946c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* draggedElement, int32_t id, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds, ::UnityEngine::EventModifiers modifiers);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CanStartDragArgs();

  // Ctor Parameters [CppParam { name: "draggedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "selectedIds", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "modifiers", ty: "::UnityEngine::EventModifiers", modifiers: "", def_value: None, comment: None }]
  constexpr CanStartDragArgs(::UnityEngine::UIElements::VisualElement* draggedElement, int32_t id, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                             ::UnityEngine::EventModifiers modifiers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field draggedElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* draggedElement;

  /// @brief Field id, offset: 0x8, size: 0x4, def value: None
  int32_t id;

  /// @brief Field selectedIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds;

  /// @brief Field modifiers, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::EventModifiers modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, draggedElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, selectedIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, modifiers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::CanStartDragArgs) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
