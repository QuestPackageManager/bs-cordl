#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/DoesNotReturnAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DoesNotReturnAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class DoesNotReturnAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
class CORDL_TYPE DoesNotReturnAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x59cc660, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoesNotReturnAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoesNotReturnAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoesNotReturnAttribute(DoesNotReturnAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoesNotReturnAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoesNotReturnAttribute(DoesNotReturnAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute*, "System.Diagnostics.CodeAnalysis", "DoesNotReturnAttribute");
