#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeProviderAttribute)
// Forward declare root types
namespace System::ComponentModel {
class AttributeProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AttributeProviderAttribute);
// Type: System.ComponentModel::AttributeProviderAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9406))
// CS Name: ::System.ComponentModel::AttributeProviderAttribute*
class CORDL_TYPE AttributeProviderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <TypeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeName_k__BackingField, put = __cordl_internal_set__TypeName_k__BackingField))::StringW _TypeName_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_PropertyName))::StringW PropertyName;

  constexpr ::StringW& __cordl_internal_get__TypeName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TypeName_k__BackingField() const;

  constexpr void __cordl_internal_set__TypeName_k__BackingField(::StringW value);

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  /// @brief Method get_TypeName, addr 0x29065b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

  /// @brief Method get_PropertyName, addr 0x29065bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  // Ctor Parameters [CppParam { name: "", ty: "AttributeProviderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeProviderAttribute(AttributeProviderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeProviderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeProviderAttribute(AttributeProviderAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeProviderAttribute();

public:
  /// @brief Field <TypeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TypeName_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AttributeProviderAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeProviderAttribute, ____TypeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeProviderAttribute, ____PropertyName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AttributeProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeProviderAttribute*, "System.ComponentModel", "AttributeProviderAttribute");
