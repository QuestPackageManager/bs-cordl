#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcActionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcActionAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcActionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcActionAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcActionAttribute
class CORDL_TYPE AspMvcActionAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AnonymousProperty, put = set_AnonymousProperty)) ::StringW AnonymousProperty;

  /// @brief Field <AnonymousProperty>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AnonymousProperty_k__BackingField, put = __cordl_internal_set__AnonymousProperty_k__BackingField)) ::StringW _AnonymousProperty_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcActionAttribute* New_ctor();

  static inline ::JetBrains::Annotations::AspMvcActionAttribute* New_ctor(::StringW anonymousProperty);

  constexpr ::StringW const& __cordl_internal_get__AnonymousProperty_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AnonymousProperty_k__BackingField();

  constexpr void __cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4af0dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4af0de0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW anonymousProperty);

  /// @brief Method get_AnonymousProperty, addr 0x4af0e08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AnonymousProperty();

  /// @brief Method set_AnonymousProperty, addr 0x4af0e10, size 0x8, virtual false, abstract: false, final false
  inline void set_AnonymousProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcActionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcActionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcActionAttribute(AspMvcActionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcActionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcActionAttribute(AspMvcActionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18471 };

  /// @brief Field <AnonymousProperty>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AnonymousProperty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspMvcActionAttribute, ____AnonymousProperty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcActionAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcActionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcActionAttribute*, "JetBrains.Annotations", "AspMvcActionAttribute");
