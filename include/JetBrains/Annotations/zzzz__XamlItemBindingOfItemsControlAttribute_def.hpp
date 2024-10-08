#pragma once
// IWYU pragma private; include "JetBrains/Annotations/XamlItemBindingOfItemsControlAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XamlItemBindingOfItemsControlAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class XamlItemBindingOfItemsControlAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute);
// Type: JetBrains.Annotations::XamlItemBindingOfItemsControlAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::XamlItemBindingOfItemsControlAttribute*
class CORDL_TYPE XamlItemBindingOfItemsControlAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4a77ff0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute*, "JetBrains.Annotations", "XamlItemBindingOfItemsControlAttribute");
