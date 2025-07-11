#pragma once
// IWYU pragma private; include "System/Xml/BinaryCompatibility.hpp"
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
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BinaryCompatibility
class CORDL_TYPE BinaryCompatibility : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_TargetsAtLeast_Desktop_V4_5_2, addr 0x4363ebc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_TargetsAtLeast_Desktop_V4_5_2();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCompatibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCompatibility(BinaryCompatibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCompatibility(BinaryCompatibility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinaryCompatibility, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinaryCompatibility*, "System.Xml", "BinaryCompatibility");
