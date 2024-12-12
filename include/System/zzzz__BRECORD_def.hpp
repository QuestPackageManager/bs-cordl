#pragma once
// IWYU pragma private; include "System/BRECORD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BRECORD)
// Forward declare root types
namespace System {
struct BRECORD;
}
// Write type traits
MARK_VAL_T(::System::BRECORD);
// Dependencies System.IntPtr
namespace System {
// Is value type: true
// CS Name: System.BRECORD
struct CORDL_TYPE BRECORD {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BRECORD();

  // Ctor Parameters [CppParam { name: "pvRecord", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "pRecInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr BRECORD(::System::IntPtr pvRecord, ::System::IntPtr pRecInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2643 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field pvRecord, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr pvRecord;

  /// @brief Field pRecInfo, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr pRecInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::BRECORD, pvRecord) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::BRECORD, pRecInfo) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::BRECORD, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::BRECORD, "System", "BRECORD");
