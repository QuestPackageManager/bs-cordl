#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeItem)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TreeItem;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TreeItem);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TreeItem
struct CORDL_TYPE TreeItem {
public:
  // Declarations
  __declspec(property(get = get_childrenIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>* childrenIds;

  __declspec(property(get = get_hasChildren)) bool hasChildren;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_parentId)) int32_t parentId;

  /// @brief Method .ctor, addr 0x4a1b1e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t id, int32_t parentId, ::System::Collections::Generic::IEnumerable_1<int32_t>* childrenIds);

  /// @brief Method get_childrenIds, addr 0x4a1b188, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_childrenIds();

  /// @brief Method get_hasChildren, addr 0x4a1b190, size 0x58, virtual false, abstract: false, final false
  inline bool get_hasChildren();

  /// @brief Method get_id, addr 0x4a1b178, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_parentId, addr 0x4a1b180, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentId();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeItem();

  // Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_parentId_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_childrenIds_k__BackingField", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: None }]
  constexpr TreeItem(int32_t _id_k__BackingField, int32_t _parentId_k__BackingField, ::System::Collections::Generic::IEnumerable_1<int32_t>* _childrenIds_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _id_k__BackingField;

  /// @brief Field <parentId>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _parentId_k__BackingField;

  /// @brief Field <childrenIds>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* _childrenIds_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeItem, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeItem, _parentId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeItem, _childrenIds_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeItem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeItem, "UnityEngine.UIElements", "TreeItem");
