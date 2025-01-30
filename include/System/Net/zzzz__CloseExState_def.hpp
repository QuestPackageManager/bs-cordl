#pragma once
// IWYU pragma private; include "System/Net/CloseExState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloseExState)
// Forward declare root types
namespace System::Net {
struct CloseExState;
}
// Write type traits
MARK_VAL_T(::System::Net::CloseExState);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CloseExState
struct CORDL_TYPE CloseExState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CloseExState_Unwrapped
  enum struct __CloseExState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Abort = static_cast<int32_t>(0x1),
    __E_Silent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CloseExState_Unwrapped() const noexcept {
    return static_cast<__CloseExState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CloseExState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CloseExState(int32_t value__) noexcept;

  /// @brief Field Abort value: I32(1)
  static ::System::Net::CloseExState const Abort;

  /// @brief Field Normal value: I32(0)
  static ::System::Net::CloseExState const Normal;

  /// @brief Field Silent value: I32(2)
  static ::System::Net::CloseExState const Silent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9623 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CloseExState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CloseExState, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CloseExState, "System.Net", "CloseExState");
