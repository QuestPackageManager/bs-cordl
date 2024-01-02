#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FlagsAttribute)
// Forward declare root types
namespace System {
class FlagsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::FlagsAttribute);
// Type: System::FlagsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2381))
// CS Name: ::System::FlagsAttribute*
class CORDL_TYPE FlagsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::FlagsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2597230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlagsAttribute(FlagsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlagsAttribute(FlagsAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlagsAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FlagsAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FlagsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::FlagsAttribute*, "System", "FlagsAttribute");
