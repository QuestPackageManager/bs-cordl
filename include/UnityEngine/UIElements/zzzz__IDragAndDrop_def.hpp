#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDragAndDrop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDragAndDrop)
namespace UnityEngine::UIElements {
class DragAndDropData;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDragAndDrop);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IDragAndDrop
class CORDL_TYPE IDragAndDrop {
public:
  // Declarations
  __declspec(property(get = get_data)) ::UnityEngine::UIElements::DragAndDropData* data;

  /// @brief Method AcceptDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AcceptDrag();

  /// @brief Method DragCleanup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DragCleanup();

  /// @brief Method SetVisualMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetVisualMode(::UnityEngine::UIElements::DragVisualMode visualMode);

  /// @brief Method StartDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartDrag(::UnityEngine::UIElements::StartDragArgs args, ::UnityEngine::Vector3 pointerPosition);

  /// @brief Method UpdateDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method get_data, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::DragAndDropData* get_data();

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDrop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDragAndDrop(IDragAndDrop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDragAndDrop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDragAndDrop*, "UnityEngine.UIElements", "IDragAndDrop");
