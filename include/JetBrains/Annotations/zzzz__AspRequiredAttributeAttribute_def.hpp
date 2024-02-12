#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspRequiredAttributeAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspRequiredAttributeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspRequiredAttributeAttribute);
// Type: JetBrains.Annotations::AspRequiredAttributeAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15949))
// CS Name: ::JetBrains.Annotations::AspRequiredAttributeAttribute*
class CORDL_TYPE AspRequiredAttributeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Attribute>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Attribute_k__BackingField, put = __cordl_internal_set__Attribute_k__BackingField))::StringW _Attribute_k__BackingField;

  __declspec(property(get = get_Attribute, put = set_Attribute))::StringW Attribute;

  constexpr ::StringW& __cordl_internal_get__Attribute_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Attribute_k__BackingField() const;

  constexpr void __cordl_internal_set__Attribute_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::AspRequiredAttributeAttribute* New_ctor(::StringW attribute);

  /// @brief Method .ctor, addr 0x2ed6938, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attribute);

  /// @brief Method get_Attribute, addr 0x2ed6960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Attribute();

  /// @brief Method set_Attribute, addr 0x2ed6968, size 0x8, virtual false, abstract: false, final false
  inline void set_Attribute(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspRequiredAttributeAttribute(AspRequiredAttributeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspRequiredAttributeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspRequiredAttributeAttribute(AspRequiredAttributeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspRequiredAttributeAttribute();

public:
  /// @brief Field <Attribute>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Attribute_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspRequiredAttributeAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspRequiredAttributeAttribute, ____Attribute_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspRequiredAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
