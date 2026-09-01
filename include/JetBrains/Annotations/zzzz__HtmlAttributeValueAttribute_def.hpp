#pragma once
// IWYU pragma private; include "JetBrains\Annotations\HtmlAttributeValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HtmlAttributeValueAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class HtmlAttributeValueAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::HtmlAttributeValueAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::HtmlAttributeValueAttribute*, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.HtmlAttributeValueAttribute
class CORDL_TYPE HtmlAttributeValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  static inline ::JetBrains::Annotations::HtmlAttributeValueAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6e3e194, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name, addr 0x6e3e19c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x6e3e1a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlAttributeValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlAttributeValueAttribute(HtmlAttributeValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlAttributeValueAttribute(HtmlAttributeValueAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22582 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::HtmlAttributeValueAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JetBrains::Annotations::HtmlAttributeValueAttribute) == 0x18, "Size mismatch!");

} // namespace JetBrains::Annotations
