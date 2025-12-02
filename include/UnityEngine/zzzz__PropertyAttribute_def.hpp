#pragma once
// IWYU pragma private; include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyAttribute)
// Forward declare root types
namespace UnityEngine {
class PropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PropertyAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PropertyAttribute
class CORDL_TYPE PropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <applyToCollection>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__applyToCollection_k__BackingField, put = __cordl_internal_set__applyToCollection_k__BackingField)) bool _applyToCollection_k__BackingField;

  /// @brief Field <order>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__order_k__BackingField, put = __cordl_internal_set__order_k__BackingField)) int32_t _order_k__BackingField;

  __declspec(property(put = set_order)) int32_t order;

  static inline ::UnityEngine::PropertyAttribute* New_ctor();

  static inline ::UnityEngine::PropertyAttribute* New_ctor(bool applyToCollection);

  constexpr bool const& __cordl_internal_get__applyToCollection_k__BackingField() const;

  constexpr bool& __cordl_internal_get__applyToCollection_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__order_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__order_k__BackingField();

  constexpr void __cordl_internal_set__applyToCollection_k__BackingField(bool value);

  constexpr void __cordl_internal_set__order_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x68a4670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x68a4678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool applyToCollection);

  /// @brief Method set_order, addr 0x68a4668, size 0x8, virtual false, abstract: false, final false
  inline void set_order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyAttribute(PropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyAttribute(PropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10252 };

  /// @brief Field <order>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____order_k__BackingField;

  /// @brief Field <applyToCollection>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____applyToCollection_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PropertyAttribute, ____order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PropertyAttribute, ____applyToCollection_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyAttribute*, "UnityEngine", "PropertyAttribute");
