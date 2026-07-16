#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/DisallowNullAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DisallowNullAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class DisallowNullAttribute;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::CodeAnalysis::DisallowNullAttribute*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::CodeAnalysis::DisallowNullAttribute*, "System.Diagnostics.CodeAnalysis", "DisallowNullAttribute");
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.DisallowNullAttribute
class CORDL_TYPE DisallowNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::DisallowNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5be0cd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisallowNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisallowNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisallowNullAttribute(DisallowNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisallowNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisallowNullAttribute(DisallowNullAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::CodeAnalysis::DisallowNullAttribute) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
