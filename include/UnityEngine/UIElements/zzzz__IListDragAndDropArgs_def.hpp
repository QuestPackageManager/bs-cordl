#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IListDragAndDropArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IListDragAndDropArgs)
namespace UnityEngine::UIElements {
class DragAndDropData;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IListDragAndDropArgs);
// Type: UnityEngine.UIElements::IListDragAndDropArgs
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IListDragAndDropArgs*
class CORDL_TYPE IListDragAndDropArgs {
public:
  // Declarations
  __declspec(property(get = get_childIndex)) int32_t childIndex;

  __declspec(property(get = get_dragAndDropData)) ::UnityEngine::UIElements::DragAndDropData* dragAndDropData;

  __declspec(property(get = get_dragAndDropPosition)) ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition;

  __declspec(property(get = get_insertAtIndex)) int32_t insertAtIndex;

  __declspec(property(get = get_parentId)) int32_t parentId;

  /// @brief Method get_childIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_childIndex();

  /// @brief Method get_dragAndDropData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::DragAndDropData* get_dragAndDropData();

  /// @brief Method get_dragAndDropPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition();

  /// @brief Method get_insertAtIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_insertAtIndex();

  /// @brief Method get_parentId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_parentId();

  // Ctor Parameters [CppParam { name: "", ty: "IListDragAndDropArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListDragAndDropArgs(IListDragAndDropArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListDragAndDropArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListDragAndDropArgs(IListDragAndDropArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IListDragAndDropArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IListDragAndDropArgs*, "UnityEngine.UIElements", "IListDragAndDropArgs");
