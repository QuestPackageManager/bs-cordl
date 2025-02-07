#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ProcessingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessingState)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::ProcessingState);
// Dependencies
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.ProcessingState
struct CORDL_TYPE ProcessingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessingState_Unwrapped
  enum struct __ProcessingState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_InQueue = static_cast<int32_t>(0x1),
    __E_Reading = static_cast<int32_t>(0x2),
    __E_Completed = static_cast<int32_t>(0x3),
    __E_Failed = static_cast<int32_t>(0x4),
    __E_Canceled = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessingState_Unwrapped() const noexcept {
    return static_cast<__ProcessingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProcessingState(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(5)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Canceled;

  /// @brief Field Completed value: I32(3)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Completed;

  /// @brief Field Failed value: I32(4)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Failed;

  /// @brief Field InQueue value: I32(1)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const InQueue;

  /// @brief Field Reading value: I32(2)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Reading;

  /// @brief Field Unknown value: I32(0)
  static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ProcessingState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::ProcessingState, 0x4>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ProcessingState, "Unity.IO.LowLevel.Unsafe", "ProcessingState");
