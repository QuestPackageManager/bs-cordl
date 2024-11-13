#pragma once
// IWYU pragma private; include "JetBrains/Annotations/XamlItemsControlAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XamlItemsControlAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class XamlItemsControlAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::XamlItemsControlAttribute);
// Type: JetBrains.Annotations::XamlItemsControlAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::XamlItemsControlAttribute*
class CORDL_TYPE XamlItemsControlAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::XamlItemsControlAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4a8c700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XamlItemsControlAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XamlItemsControlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XamlItemsControlAttribute(XamlItemsControlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XamlItemsControlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XamlItemsControlAttribute(XamlItemsControlAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::XamlItemsControlAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::XamlItemsControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::XamlItemsControlAttribute*, "JetBrains.Annotations", "XamlItemsControlAttribute");
