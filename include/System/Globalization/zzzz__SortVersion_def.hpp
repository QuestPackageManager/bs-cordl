#pragma once
// IWYU pragma private; include "System/Globalization/SortVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SortVersion)
// Forward declare root types
namespace System::Globalization {
class SortVersion;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::SortVersion);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.SortVersion
class CORDL_TYPE SortVersion : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortVersion(SortVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortVersion(SortVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::SortVersion, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::SortVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortVersion*, "System.Globalization", "SortVersion");
