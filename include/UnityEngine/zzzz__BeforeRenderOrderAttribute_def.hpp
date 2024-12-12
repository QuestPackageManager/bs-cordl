#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderOrderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeforeRenderOrderAttribute)
// Forward declare root types
namespace UnityEngine {
class BeforeRenderOrderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BeforeRenderOrderAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BeforeRenderOrderAttribute
class CORDL_TYPE BeforeRenderOrderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <order>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__order_k__BackingField, put = __cordl_internal_set__order_k__BackingField)) int32_t _order_k__BackingField;

  __declspec(property(get = get_order, put = set_order)) int32_t order;

  static inline ::UnityEngine::BeforeRenderOrderAttribute* New_ctor(int32_t order);

  constexpr int32_t const& __cordl_internal_get__order_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__order_k__BackingField();

  constexpr void __cordl_internal_set__order_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x48719d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t order);

  /// @brief Method get_order, addr 0x48719c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method set_order, addr 0x48719c8, size 0x8, virtual false, abstract: false, final false
  inline void set_order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeforeRenderOrderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeforeRenderOrderAttribute(BeforeRenderOrderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeforeRenderOrderAttribute(BeforeRenderOrderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10706 };

  /// @brief Field <order>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____order_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BeforeRenderOrderAttribute, ____order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderOrderAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BeforeRenderOrderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderOrderAttribute*, "UnityEngine", "BeforeRenderOrderAttribute");
