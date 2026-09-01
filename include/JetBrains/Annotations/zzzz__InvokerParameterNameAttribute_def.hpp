#pragma once
// IWYU pragma private; include "JetBrains\Annotations\InvokerParameterNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InvokerParameterNameAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class InvokerParameterNameAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::InvokerParameterNameAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::InvokerParameterNameAttribute*, "JetBrains.Annotations", "InvokerParameterNameAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.InvokerParameterNameAttribute
class CORDL_TYPE InvokerParameterNameAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::InvokerParameterNameAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3de98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokerParameterNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokerParameterNameAttribute(InvokerParameterNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokerParameterNameAttribute(InvokerParameterNameAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::InvokerParameterNameAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
