#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumberParsingContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumberParsingContext)
namespace System::Globalization {
struct __HebrewNumber__HS;
}
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
// Write type traits
MARK_VAL_T(::System::Globalization::HebrewNumberParsingContext);
// Type: System.Globalization::HebrewNumberParsingContext
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::HebrewNumberParsingContext
struct CORDL_TYPE HebrewNumberParsingContext {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3d1b590, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t result);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumberParsingContext();

  // Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::__HebrewNumber__HS", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr HebrewNumberParsingContext(::System::Globalization::__HebrewNumber__HS state, int32_t result) noexcept;

  /// @brief Field state, offset: 0x0, size: 0x1, def value: None
  ::System::Globalization::__HebrewNumber__HS state;

  /// @brief Field result, offset: 0x4, size: 0x4, def value: None
  int32_t result;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3679 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumberParsingContext, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::HebrewNumberParsingContext, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::HebrewNumberParsingContext, result) == 0x4, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
