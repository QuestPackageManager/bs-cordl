#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventResetMode)
// Forward declare root types
namespace System::Threading {
struct EventResetMode;
}
// Write type traits
MARK_VAL_T(::System::Threading::EventResetMode);
// Type: System.Threading::EventResetMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::System.Threading::EventResetMode
struct CORDL_TYPE EventResetMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventResetMode_Unwrapped
  enum struct __EventResetMode_Unwrapped : int32_t {
    __E_AutoReset = static_cast<int32_t>(0x0),
    __E_ManualReset = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventResetMode_Unwrapped() const noexcept {
    return static_cast<__EventResetMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventResetMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventResetMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AutoReset value: static_cast<int32_t>(0x0)
  static ::System::Threading::EventResetMode const AutoReset;

  /// @brief Field ManualReset value: static_cast<int32_t>(0x1)
  static ::System::Threading::EventResetMode const ManualReset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::EventResetMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::EventResetMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::EventResetMode, "System.Threading", "EventResetMode");
