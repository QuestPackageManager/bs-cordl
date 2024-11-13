#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRNotificationError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRNotificationError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRNotificationError);
// Type: OVR.OpenVR::EVRNotificationError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRNotificationError
struct CORDL_TYPE EVRNotificationError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRNotificationError_Unwrapped
  enum struct __EVRNotificationError_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_InvalidNotificationId = static_cast<int32_t>(0x64),
    __E_NotificationQueueFull = static_cast<int32_t>(0x65),
    __E_InvalidOverlayHandle = static_cast<int32_t>(0x66),
    __E_SystemWithUserValueAlreadyExists = static_cast<int32_t>(0x67),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRNotificationError_Unwrapped() const noexcept {
    return static_cast<__EVRNotificationError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRNotificationError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRNotificationError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InvalidNotificationId value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVRNotificationError const InvalidNotificationId;

  /// @brief Field InvalidOverlayHandle value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::EVRNotificationError const InvalidOverlayHandle;

  /// @brief Field NotificationQueueFull value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::EVRNotificationError const NotificationQueueFull;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRNotificationError const OK;

  /// @brief Field SystemWithUserValueAlreadyExists value: static_cast<int32_t>(0x67)
  static ::OVR::OpenVR::EVRNotificationError const SystemWithUserValueAlreadyExists;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8893 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRNotificationError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationError, "OVR.OpenVR", "EVRNotificationError");
