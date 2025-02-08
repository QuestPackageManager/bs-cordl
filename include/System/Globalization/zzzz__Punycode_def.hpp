#pragma once
// IWYU pragma private; include "System/Globalization/Punycode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Bootstring_def.hpp"
CORDL_MODULE_EXPORT(Punycode)
// Forward declare root types
namespace System::Globalization {
class Punycode;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::Punycode);
// Dependencies System.Globalization.Bootstring
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.Punycode
class CORDL_TYPE Punycode : public ::System::Globalization::Bootstring {
public:
  // Declarations
  static inline ::System::Globalization::Punycode* New_ctor();

  /// @brief Method .ctor, addr 0x3dba5f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Punycode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Punycode(Punycode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Punycode(Punycode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3731 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::Punycode, 0x30>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::Punycode);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Punycode*, "System.Globalization", "Punycode");
