#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebExceptionInternalStatus)
// Forward declare root types
namespace System::Net {
struct WebExceptionInternalStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::WebExceptionInternalStatus);
// Type: System.Net::WebExceptionInternalStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::System.Net::WebExceptionInternalStatus
struct CORDL_TYPE WebExceptionInternalStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebExceptionInternalStatus_Unwrapped
  enum struct __WebExceptionInternalStatus_Unwrapped : int32_t {
    __E_RequestFatal = static_cast<int32_t>(0x0),
    __E_ServicePointFatal = static_cast<int32_t>(0x1),
    __E_Recoverable = static_cast<int32_t>(0x2),
    __E_Isolated = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebExceptionInternalStatus_Unwrapped() const noexcept {
    return static_cast<__WebExceptionInternalStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__WebExceptionInternalStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebExceptionInternalStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebExceptionInternalStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Isolated value: static_cast<int32_t>(0x3)
  static ::System::Net::WebExceptionInternalStatus const Isolated;

  /// @brief Field Recoverable value: static_cast<int32_t>(0x2)
  static ::System::Net::WebExceptionInternalStatus const Recoverable;

  /// @brief Field RequestFatal value: static_cast<int32_t>(0x0)
  static ::System::Net::WebExceptionInternalStatus const RequestFatal;

  /// @brief Field ServicePointFatal value: static_cast<int32_t>(0x1)
  static ::System::Net::WebExceptionInternalStatus const ServicePointFatal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebExceptionInternalStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebExceptionInternalStatus, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionInternalStatus, "System.Net", "WebExceptionInternalStatus");
