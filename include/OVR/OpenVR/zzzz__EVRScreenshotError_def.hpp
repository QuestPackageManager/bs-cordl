#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRScreenshotError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRScreenshotError);
// Type: OVR.OpenVR::EVRScreenshotError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRScreenshotError
struct CORDL_TYPE EVRScreenshotError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRScreenshotError_Unwrapped
  enum struct __EVRScreenshotError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_RequestFailed = static_cast<int32_t>(0x1),
    __E_IncompatibleVersion = static_cast<int32_t>(0x64),
    __E_NotFound = static_cast<int32_t>(0x65),
    __E_BufferTooSmall = static_cast<int32_t>(0x66),
    __E_ScreenshotAlreadyInProgress = static_cast<int32_t>(0x6c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRScreenshotError_Unwrapped() const noexcept {
    return static_cast<__EVRScreenshotError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRScreenshotError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRScreenshotError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BufferTooSmall value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::EVRScreenshotError const BufferTooSmall;

  /// @brief Field IncompatibleVersion value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVRScreenshotError const IncompatibleVersion;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRScreenshotError const None;

  /// @brief Field NotFound value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::EVRScreenshotError const NotFound;

  /// @brief Field RequestFailed value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRScreenshotError const RequestFailed;

  /// @brief Field ScreenshotAlreadyInProgress value: static_cast<int32_t>(0x6c)
  static ::OVR::OpenVR::EVRScreenshotError const ScreenshotAlreadyInProgress;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRScreenshotError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRScreenshotError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRScreenshotError, "OVR.OpenVR", "EVRScreenshotError");
