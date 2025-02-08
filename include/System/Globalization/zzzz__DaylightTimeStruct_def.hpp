#pragma once
// IWYU pragma private; include "System/Globalization/DaylightTimeStruct.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DaylightTimeStruct)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct DaylightTimeStruct;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DaylightTimeStruct);
// Dependencies System.DateTime, System.TimeSpan
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.DaylightTimeStruct
struct CORDL_TYPE DaylightTimeStruct {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3d97a00, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DaylightTimeStruct();

  // Ctor Parameters [CppParam { name: "Start", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "End", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam
  // { name: "Delta", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
  constexpr DaylightTimeStruct(::System::DateTime Start, ::System::DateTime End, ::System::TimeSpan Delta) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Start, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime Start;

  /// @brief Field End, offset: 0x8, size: 0x8, def value: None
  ::System::DateTime End;

  /// @brief Field Delta, offset: 0x10, size: 0x8, def value: None
  ::System::TimeSpan Delta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::DaylightTimeStruct, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DaylightTimeStruct, End) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DaylightTimeStruct, Delta) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::DaylightTimeStruct, 0x18>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DaylightTimeStruct, "System.Globalization", "DaylightTimeStruct");
