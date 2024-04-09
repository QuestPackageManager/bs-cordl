#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcAreaAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcAreaAttribute);
// Type: JetBrains.Annotations::AspMvcAreaAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcAreaAttribute*
class CORDL_TYPE AspMvcAreaAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AnonymousProperty, put = set_AnonymousProperty))::StringW AnonymousProperty;

  /// @brief Field <AnonymousProperty>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AnonymousProperty_k__BackingField, put = __cordl_internal_set__AnonymousProperty_k__BackingField))::StringW _AnonymousProperty_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcAreaAttribute* New_ctor();

  static inline ::JetBrains::Annotations::AspMvcAreaAttribute* New_ctor(::StringW anonymousProperty);

  constexpr ::StringW const& __cordl_internal_get__AnonymousProperty_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AnonymousProperty_k__BackingField();

  constexpr void __cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x34074b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x34074c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW anonymousProperty);

  /// @brief Method get_AnonymousProperty, addr 0x34074e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AnonymousProperty();

  /// @brief Method set_AnonymousProperty, addr 0x34074f0, size 0x8, virtual false, abstract: false, final false
  inline void set_AnonymousProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcAreaAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcAreaAttribute(AspMvcAreaAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcAreaAttribute(AspMvcAreaAttribute const&) = delete;

  /// @brief Field <AnonymousProperty>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AnonymousProperty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcAreaAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspMvcAreaAttribute, ____AnonymousProperty_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcAreaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcAreaAttribute*, "JetBrains.Annotations", "AspMvcAreaAttribute");
