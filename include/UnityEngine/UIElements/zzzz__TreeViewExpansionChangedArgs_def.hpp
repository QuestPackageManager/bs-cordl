#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewExpansionChangedArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeViewExpansionChangedArgs)
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeViewExpansionChangedArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeViewExpansionChangedArgs);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeViewExpansionChangedArgs
class CORDL_TYPE TreeViewExpansionChangedArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) int32_t _id_k__BackingField;

  /// @brief Field <isAppliedToAllChildren>k__BackingField, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__isAppliedToAllChildren_k__BackingField,
                      put = __cordl_internal_set__isAppliedToAllChildren_k__BackingField)) bool _isAppliedToAllChildren_k__BackingField;

  /// @brief Field <isExpanded>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__isExpanded_k__BackingField, put = __cordl_internal_set__isExpanded_k__BackingField)) bool _isExpanded_k__BackingField;

  __declspec(property(put = set_id)) int32_t id;

  __declspec(property(put = set_isAppliedToAllChildren)) bool isAppliedToAllChildren;

  __declspec(property(put = set_isExpanded)) bool isExpanded;

  static inline ::UnityEngine::UIElements::TreeViewExpansionChangedArgs* New_ctor();

  constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__id_k__BackingField();

  constexpr bool const& __cordl_internal_get__isAppliedToAllChildren_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isAppliedToAllChildren_k__BackingField();

  constexpr bool const& __cordl_internal_get__isExpanded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isExpanded_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__isAppliedToAllChildren_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isExpanded_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6b6109c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_id, addr 0x6b61084, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  /// @brief Method set_isAppliedToAllChildren, addr 0x6b61094, size 0x8, virtual false, abstract: false, final false
  inline void set_isAppliedToAllChildren(bool value);

  /// @brief Method set_isExpanded, addr 0x6b6108c, size 0x8, virtual false, abstract: false, final false
  inline void set_isExpanded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeViewExpansionChangedArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeViewExpansionChangedArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeViewExpansionChangedArgs(TreeViewExpansionChangedArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeViewExpansionChangedArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeViewExpansionChangedArgs(TreeViewExpansionChangedArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4118 };

  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____id_k__BackingField;

  /// @brief Field <isExpanded>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____isExpanded_k__BackingField;

  /// @brief Field <isAppliedToAllChildren>k__BackingField, offset: 0x15, size: 0x1, def value: None
  bool ____isAppliedToAllChildren_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeViewExpansionChangedArgs, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewExpansionChangedArgs, ____isExpanded_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeViewExpansionChangedArgs, ____isAppliedToAllChildren_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeViewExpansionChangedArgs, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewExpansionChangedArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewExpansionChangedArgs*, "UnityEngine.UIElements", "TreeViewExpansionChangedArgs");
