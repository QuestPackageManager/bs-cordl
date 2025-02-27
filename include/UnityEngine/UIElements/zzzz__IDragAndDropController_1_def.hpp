#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDragAndDropController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDragAndDropController_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TArgs> class IDragAndDropController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IDragAndDropController_1);
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename TArgs>
// Is value type: false
// CS Name: UnityEngine.UIElements.IDragAndDropController`1<TArgs>
class CORDL_TYPE IDragAndDropController_1 {
public:
  // Declarations
  /// @brief Method CanStartDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds);

  /// @brief Method DragCleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DragCleanup();

  /// @brief Method GetSortedSelectedIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetSortedSelectedIds();

  /// @brief Method HandleAutoExpand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition);

  /// @brief Method HandleDragAndDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(TArgs args);

  /// @brief Method OnDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDrop(TArgs args);

  /// @brief Method SetupDragAndDrop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds, bool skipText);

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDropController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDragAndDropController_1(IDragAndDropController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IDragAndDropController_1, "UnityEngine.UIElements", "IDragAndDropController`1");
