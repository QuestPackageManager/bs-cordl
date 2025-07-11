#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/ExcludeFromCodeCoverageAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromCodeCoverageAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class ExcludeFromCodeCoverageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
class CORDL_TYPE ExcludeFromCodeCoverageAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4432ef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromCodeCoverageAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute*, "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
