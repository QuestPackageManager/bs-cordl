#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcMasterLocationFormatAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcMasterLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcMasterLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
class CORDL_TYPE AspMvcMasterLocationFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Format, put = set_Format)) ::StringW Format;

  /// @brief Field <Format>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField)) ::StringW _Format_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute* New_ctor(::StringW format);

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c723a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW format);

  /// @brief Method get_Format, addr 0x6c723b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method set_Format, addr 0x6c723b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcMasterLocationFormatAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterLocationFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcMasterLocationFormatAttribute(AspMvcMasterLocationFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterLocationFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcMasterLocationFormatAttribute(AspMvcMasterLocationFormatAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22294 };

  /// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcMasterLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcMasterLocationFormatAttribute");
