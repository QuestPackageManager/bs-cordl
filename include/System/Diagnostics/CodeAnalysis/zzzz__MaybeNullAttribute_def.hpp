#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MaybeNullAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class MaybeNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::MaybeNullAttribute);
// Type: System.Diagnostics.CodeAnalysis::MaybeNullAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: ::System.Diagnostics.CodeAnalysis::MaybeNullAttribute*
class CORDL_TYPE MaybeNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::MaybeNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x28bf238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaybeNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaybeNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaybeNullAttribute(MaybeNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaybeNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaybeNullAttribute(MaybeNullAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::MaybeNullAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::MaybeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::MaybeNullAttribute*, "System.Diagnostics.CodeAnalysis", "MaybeNullAttribute");
