#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncStatus)
// Forward declare root types
namespace Internal::Runtime::Augments {
struct AsyncStatus;
}
// Write type traits
MARK_VAL_T(::Internal::Runtime::Augments::AsyncStatus);
// Type: Internal.Runtime.Augments::AsyncStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Internal::Runtime::Augments {
// Is value type: true
// CS Name: ::Internal.Runtime.Augments::AsyncStatus
struct CORDL_TYPE AsyncStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncStatus_Unwrapped
  enum struct __AsyncStatus_Unwrapped : int32_t {
    __E_Started = static_cast<int32_t>(0x0),
    __E_Completed = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncStatus_Unwrapped() const noexcept {
    return static_cast<__AsyncStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Canceled value: static_cast<int32_t>(0x2)
  static ::Internal::Runtime::Augments::AsyncStatus const Canceled;

  /// @brief Field Completed value: static_cast<int32_t>(0x1)
  static ::Internal::Runtime::Augments::AsyncStatus const Completed;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::Internal::Runtime::Augments::AsyncStatus const Error;

  /// @brief Field Started value: static_cast<int32_t>(0x0)
  static ::Internal::Runtime::Augments::AsyncStatus const Started;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::AsyncStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Internal::Runtime::Augments::AsyncStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Internal::Runtime::Augments
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::AsyncStatus, "Internal.Runtime.Augments", "AsyncStatus");
