#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Void)
// Forward declare root types
namespace System {
struct Void;
}
// Write type traits
MARK_VAL_T(::System::Void);
// Type: System::Void
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System {
// Is value type: true
// CS Name: ::System::Void
#pragma pack(push, 0)
struct CORDL_TYPE Void {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Void();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Void, 0x1>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Void, "System", "Void");
