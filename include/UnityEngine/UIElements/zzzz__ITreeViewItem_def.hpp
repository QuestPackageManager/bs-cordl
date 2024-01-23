#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITreeViewItem)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITreeViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITreeViewItem);
// Type: UnityEngine.UIElements::ITreeViewItem
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7345))
// CS Name: ::UnityEngine.UIElements::ITreeViewItem*
class CORDL_TYPE ITreeViewItem {
public:
  // Declarations
  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_children))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* children;

  __declspec(property(get = get_hasChildren)) bool hasChildren;

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_id();

  /// @brief Method get_children, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* get_children();

  /// @brief Method get_hasChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_hasChildren();

  // Ctor Parameters [CppParam { name: "", ty: "ITreeViewItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITreeViewItem(ITreeViewItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITreeViewItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITreeViewItem(ITreeViewItem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITreeViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITreeViewItem*, "UnityEngine.UIElements", "ITreeViewItem");
