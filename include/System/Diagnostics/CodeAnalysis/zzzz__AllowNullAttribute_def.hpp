#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/AllowNullAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AllowNullAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class AllowNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::AllowNullAttribute);
// Type: System.Diagnostics.CodeAnalysis::AllowNullAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: ::System.Diagnostics.CodeAnalysis::AllowNullAttribute*
class CORDL_TYPE AllowNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::AllowNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x29c1aec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllowNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllowNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllowNullAttribute(AllowNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllowNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllowNullAttribute(AllowNullAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::AllowNullAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::AllowNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::AllowNullAttribute*, "System.Diagnostics.CodeAnalysis", "AllowNullAttribute");
