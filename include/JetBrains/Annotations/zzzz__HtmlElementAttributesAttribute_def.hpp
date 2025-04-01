#pragma once
// IWYU pragma private; include "JetBrains/Annotations/HtmlElementAttributesAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HtmlElementAttributesAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class HtmlElementAttributesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::HtmlElementAttributesAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.HtmlElementAttributesAttribute
class CORDL_TYPE HtmlElementAttributesAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  static inline ::JetBrains::Annotations::HtmlElementAttributesAttribute* New_ctor();

  static inline ::JetBrains::Annotations::HtmlElementAttributesAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4aed9d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4aed9d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name, addr 0x4aeda00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x4aeda08, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlElementAttributesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlElementAttributesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlElementAttributesAttribute(HtmlElementAttributesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlElementAttributesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlElementAttributesAttribute(HtmlElementAttributesAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18495 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::HtmlElementAttributesAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::HtmlElementAttributesAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::HtmlElementAttributesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::HtmlElementAttributesAttribute*, "JetBrains.Annotations", "HtmlElementAttributesAttribute");
