#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewItemData_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeViewItemData_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::TreeViewItemData_1);
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.TreeViewItemData`1<T>
struct CORDL_TYPE TreeViewItemData_1 {
public:
  // Declarations
  __declspec(property(get = get_children)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* children;

  __declspec(property(get = get_data)) T data;

  __declspec(property(get = get_hasChildren)) bool hasChildren;

  __declspec(property(get = get_id)) int32_t id;

  /// @brief Method GetChildIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetChildIndex(int32_t itemId);

  /// @brief Method InsertChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertChild(::UnityEngine::UIElements::TreeViewItemData_1<T> child, int32_t index);

  /// @brief Method RemoveChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveChild(int32_t childId);

  /// @brief Method ReplaceChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReplaceChild(::UnityEngine::UIElements::TreeViewItemData_1<T> newChild);

  /// @brief Method get_children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* get_children();

  /// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_data();

  /// @brief Method get_hasChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hasChildren();

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_id();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeViewItemData_1();

  // Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "m_Children", ty: "::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*", modifiers: "", def_value: None }]
  constexpr TreeViewItemData_1(int32_t _id_k__BackingField, T m_Data, ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Children) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _id_k__BackingField;

  /// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
  T m_Data;

  /// @brief Field m_Children, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* m_Children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::TreeViewItemData_1, "UnityEngine.UIElements", "TreeViewItemData`1");
