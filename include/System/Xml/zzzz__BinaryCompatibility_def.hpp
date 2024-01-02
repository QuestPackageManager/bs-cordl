#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryCompatibility)
// Forward declare root types
namespace System::Xml {
class BinaryCompatibility;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BinaryCompatibility);
// Type: System.Xml::BinaryCompatibility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11577))
// CS Name: ::System.Xml::BinaryCompatibility*
class CORDL_TYPE BinaryCompatibility : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_TargetsAtLeast_Desktop_V4_5_2, addr 0x28a9d70, size 0x8, virtual false, abstract: false, final false
  static inline bool get_TargetsAtLeast_Desktop_V4_5_2();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCompatibility(BinaryCompatibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCompatibility(BinaryCompatibility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCompatibility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinaryCompatibility, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinaryCompatibility*, "System.Xml", "BinaryCompatibility");
