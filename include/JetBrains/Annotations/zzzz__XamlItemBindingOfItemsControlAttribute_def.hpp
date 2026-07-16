#pragma once
// IWYU pragma private; include "JetBrains/Annotations/XamlItemBindingOfItemsControlAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XamlItemBindingOfItemsControlAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class XamlItemBindingOfItemsControlAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute*, "JetBrains.Annotations", "XamlItemBindingOfItemsControlAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
class CORDL_TYPE XamlItemBindingOfItemsControlAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3ac74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XamlItemBindingOfItemsControlAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XamlItemBindingOfItemsControlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XamlItemBindingOfItemsControlAttribute(XamlItemBindingOfItemsControlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XamlItemBindingOfItemsControlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XamlItemBindingOfItemsControlAttribute(XamlItemBindingOfItemsControlAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
