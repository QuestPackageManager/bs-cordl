#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InvokerParameterNameAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class InvokerParameterNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::InvokerParameterNameAttribute);
// Type: JetBrains.Annotations::InvokerParameterNameAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15742))
// CS Name: ::JetBrains.Annotations::InvokerParameterNameAttribute*
class CORDL_TYPE InvokerParameterNameAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::InvokerParameterNameAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2eb9fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokerParameterNameAttribute(InvokerParameterNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokerParameterNameAttribute(InvokerParameterNameAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokerParameterNameAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::InvokerParameterNameAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::InvokerParameterNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::InvokerParameterNameAttribute*, "JetBrains.Annotations", "InvokerParameterNameAttribute");
