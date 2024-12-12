#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcControllerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcControllerAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcControllerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcControllerAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcControllerAttribute
class CORDL_TYPE AspMvcControllerAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AnonymousProperty, put = set_AnonymousProperty)) ::StringW AnonymousProperty;

  /// @brief Field <AnonymousProperty>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AnonymousProperty_k__BackingField, put = __cordl_internal_set__AnonymousProperty_k__BackingField)) ::StringW _AnonymousProperty_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcControllerAttribute* New_ctor();

  static inline ::JetBrains::Annotations::AspMvcControllerAttribute* New_ctor(::StringW anonymousProperty);

  constexpr ::StringW const& __cordl_internal_get__AnonymousProperty_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AnonymousProperty_k__BackingField();

  constexpr void __cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4af0e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4af0e60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW anonymousProperty);

  /// @brief Method get_AnonymousProperty, addr 0x4af0e88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AnonymousProperty();

  /// @brief Method set_AnonymousProperty, addr 0x4af0e90, size 0x8, virtual false, abstract: false, final false
  inline void set_AnonymousProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcControllerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcControllerAttribute(AspMvcControllerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcControllerAttribute(AspMvcControllerAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18473 };

  /// @brief Field <AnonymousProperty>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AnonymousProperty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspMvcControllerAttribute, ____AnonymousProperty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcControllerAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcControllerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcControllerAttribute*, "JetBrains.Annotations", "AspMvcControllerAttribute");
