#pragma once
// IWYU pragma private; include "System/Net/ReadState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadState)
// Forward declare root types
namespace System::Net {
struct ReadState;
}
// Write type traits
MARK_VAL_T(::System::Net::ReadState);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ReadState
struct CORDL_TYPE ReadState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReadState_Unwrapped
  enum struct __ReadState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Status = static_cast<int32_t>(0x1),
    __E_Headers = static_cast<int32_t>(0x2),
    __E_Content = static_cast<int32_t>(0x3),
    __E_Aborted = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReadState_Unwrapped() const noexcept {
    return static_cast<__ReadState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadState(int32_t value__) noexcept;

  /// @brief Field Aborted value: I32(4)
  static ::System::Net::ReadState const Aborted;

  /// @brief Field Content value: I32(3)
  static ::System::Net::ReadState const Content;

  /// @brief Field Headers value: I32(2)
  static ::System::Net::ReadState const Headers;

  /// @brief Field None value: I32(0)
  static ::System::Net::ReadState const None;

  /// @brief Field Status value: I32(1)
  static ::System::Net::ReadState const Status;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ReadState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ReadState, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ReadState, "System.Net", "ReadState");
