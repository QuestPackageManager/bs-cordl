#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptionProviderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeDescriptionProviderAttribute)
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptionProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProviderAttribute);
// Type: System.ComponentModel::TypeDescriptionProviderAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeDescriptionProviderAttribute*
class CORDL_TYPE TypeDescriptionProviderAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_TypeName))::StringW TypeName;

  /// @brief Field <TypeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeName_k__BackingField, put = __cordl_internal_set__TypeName_k__BackingField))::StringW _TypeName_k__BackingField;

  static inline ::System::ComponentModel::TypeDescriptionProviderAttribute* New_ctor(::StringW typeName);

  constexpr ::StringW const& __cordl_internal_get__TypeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TypeName_k__BackingField();

  constexpr void __cordl_internal_set__TypeName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2f760d4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

  /// @brief Method get_TypeName, addr 0x2f7614c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionProviderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProviderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptionProviderAttribute(TypeDescriptionProviderAttribute const&) = delete;

  /// @brief Field <TypeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TypeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProviderAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionProviderAttribute, ____TypeName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProviderAttribute*, "System.ComponentModel", "TypeDescriptionProviderAttribute");
