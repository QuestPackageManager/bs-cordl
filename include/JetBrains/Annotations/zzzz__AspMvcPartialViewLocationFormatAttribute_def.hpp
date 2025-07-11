#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcPartialViewLocationFormatAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcPartialViewLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcPartialViewLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
class CORDL_TYPE AspMvcPartialViewLocationFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Format, put = set_Format)) ::StringW Format;

  /// @brief Field <Format>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField)) ::StringW _Format_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute* New_ctor(::StringW format);

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4af34c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW format);

  /// @brief Method get_Format, addr 0x4af34f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method set_Format, addr 0x4af34f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcPartialViewLocationFormatAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcPartialViewLocationFormatAttribute(AspMvcPartialViewLocationFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewLocationFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcPartialViewLocationFormatAttribute(AspMvcPartialViewLocationFormatAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18481 };

  /// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcPartialViewLocationFormatAttribute");
