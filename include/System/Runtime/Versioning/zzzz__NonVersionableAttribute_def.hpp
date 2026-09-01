#pragma once
// IWYU pragma private; include "System\Runtime\Versioning\NonVersionableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NonVersionableAttribute)
// Forward declare root types
namespace System::Runtime::Versioning {
class NonVersionableAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::Versioning::NonVersionableAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Versioning::NonVersionableAttribute*, "System.Runtime.Versioning", "NonVersionableAttribute");
// Dependencies System.Attribute
namespace System::Runtime::Versioning {
// Is value type: false
// CS Name: System.Runtime.Versioning.NonVersionableAttribute
class CORDL_TYPE NonVersionableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::Versioning::NonVersionableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6493848, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonVersionableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonVersionableAttribute(NonVersionableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonVersionableAttribute(NonVersionableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Versioning::NonVersionableAttribute) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Versioning
