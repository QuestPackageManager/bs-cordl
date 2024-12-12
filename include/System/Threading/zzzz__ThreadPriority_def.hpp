#pragma once
// IWYU pragma private; include "System/Threading/ThreadPriority.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPriority)
// Forward declare root types
namespace System::Threading {
struct ThreadPriority;
}
// Write type traits
MARK_VAL_T(::System::Threading::ThreadPriority);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.ThreadPriority
struct CORDL_TYPE ThreadPriority {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ThreadPriority_Unwrapped
  enum struct __ThreadPriority_Unwrapped : int32_t {
    __E_Lowest = static_cast<int32_t>(0x0),
    __E_BelowNormal = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_AboveNormal = static_cast<int32_t>(0x3),
    __E_Highest = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ThreadPriority_Unwrapped() const noexcept {
    return static_cast<__ThreadPriority_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPriority();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ThreadPriority(int32_t value__) noexcept;

  /// @brief Field AboveNormal value: I32(3)
  static ::System::Threading::ThreadPriority const AboveNormal;

  /// @brief Field BelowNormal value: I32(1)
  static ::System::Threading::ThreadPriority const BelowNormal;

  /// @brief Field Highest value: I32(4)
  static ::System::Threading::ThreadPriority const Highest;

  /// @brief Field Lowest value: I32(0)
  static ::System::Threading::ThreadPriority const Lowest;

  /// @brief Field Normal value: I32(2)
  static ::System::Threading::ThreadPriority const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ThreadPriority, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPriority, 0x4>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPriority, "System.Threading", "ThreadPriority");
