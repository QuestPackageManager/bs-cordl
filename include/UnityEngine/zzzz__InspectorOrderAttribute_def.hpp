#pragma once
// IWYU pragma private; include "UnityEngine/InspectorOrderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__InspectorSortDirection_def.hpp"
#include "UnityEngine/zzzz__InspectorSort_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(InspectorOrderAttribute)
namespace UnityEngine {
struct InspectorSortDirection;
}
namespace UnityEngine {
struct InspectorSort;
}
// Forward declare root types
namespace UnityEngine {
class InspectorOrderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InspectorOrderAttribute);
// Dependencies UnityEngine.InspectorSort, UnityEngine.InspectorSortDirection, UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.InspectorOrderAttribute
class CORDL_TYPE InspectorOrderAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field <m_inspectorSort>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__m_inspectorSort_k__BackingField,
                      put = __cordl_internal_set__m_inspectorSort_k__BackingField)) ::UnityEngine::InspectorSort _m_inspectorSort_k__BackingField;

  /// @brief Field <m_sortDirection>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__m_sortDirection_k__BackingField,
                      put = __cordl_internal_set__m_sortDirection_k__BackingField)) ::UnityEngine::InspectorSortDirection _m_sortDirection_k__BackingField;

  __declspec(property(get = get_m_inspectorSort)) ::UnityEngine::InspectorSort m_inspectorSort;

  __declspec(property(get = get_m_sortDirection)) ::UnityEngine::InspectorSortDirection m_sortDirection;

  constexpr ::UnityEngine::InspectorSort const& __cordl_internal_get__m_inspectorSort_k__BackingField() const;

  constexpr ::UnityEngine::InspectorSort& __cordl_internal_get__m_inspectorSort_k__BackingField();

  constexpr ::UnityEngine::InspectorSortDirection const& __cordl_internal_get__m_sortDirection_k__BackingField() const;

  constexpr ::UnityEngine::InspectorSortDirection& __cordl_internal_get__m_sortDirection_k__BackingField();

  constexpr void __cordl_internal_set__m_inspectorSort_k__BackingField(::UnityEngine::InspectorSort value);

  constexpr void __cordl_internal_set__m_sortDirection_k__BackingField(::UnityEngine::InspectorSortDirection value);

  /// @brief Method get_m_inspectorSort, addr 0x48b9f04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InspectorSort get_m_inspectorSort();

  /// @brief Method get_m_sortDirection, addr 0x48b9f0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InspectorSortDirection get_m_sortDirection();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorOrderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorOrderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorOrderAttribute(InspectorOrderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorOrderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorOrderAttribute(InspectorOrderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10892 };

  /// @brief Field <m_inspectorSort>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InspectorSort ____m_inspectorSort_k__BackingField;

  /// @brief Field <m_sortDirection>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::InspectorSortDirection ____m_sortDirection_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InspectorOrderAttribute, ____m_inspectorSort_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InspectorOrderAttribute, ____m_sortDirection_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InspectorOrderAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::InspectorOrderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorOrderAttribute*, "UnityEngine", "InspectorOrderAttribute");
