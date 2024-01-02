#pragma once
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
// Type: UnityEngine::BeforeRenderOrderAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10098))
// CS Name: ::UnityEngine::BeforeRenderOrderAttribute*
class CORDL_TYPE BeforeRenderOrderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <order>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__order_k__BackingField, put = __set__order_k__BackingField)) int32_t _order_k__BackingField;

  __declspec(property(get = get_order, put = set_order)) int32_t order;

  constexpr int32_t& __get__order_k__BackingField();

  constexpr int32_t const& __get__order_k__BackingField() const;

  constexpr void __set__order_k__BackingField(int32_t value);

  /// @brief Method get_order, addr 0x2cc1744, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method set_order, addr 0x2cc174c, size 0x8, virtual false, abstract: false, final false
  inline void set_order(int32_t value);

  static inline ::UnityEngine::BeforeRenderOrderAttribute* New_ctor(int32_t order);

  /// @brief Method .ctor, addr 0x2cc1754, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t order);

  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeforeRenderOrderAttribute(BeforeRenderOrderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeforeRenderOrderAttribute(BeforeRenderOrderAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeforeRenderOrderAttribute();

public:
  /// @brief Field <order>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____order_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderOrderAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BeforeRenderOrderAttribute, ____order_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BeforeRenderOrderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderOrderAttribute*, "UnityEngine", "BeforeRenderOrderAttribute");
