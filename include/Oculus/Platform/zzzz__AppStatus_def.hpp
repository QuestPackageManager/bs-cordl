#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppStatus)
// Forward declare root types
namespace Oculus::Platform {
struct AppStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AppStatus);
// Type: Oculus.Platform::AppStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13230))
// CS Name: ::Oculus.Platform::AppStatus
struct CORDL_TYPE AppStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppStatus_Unwrapped
  enum struct __AppStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Entitled = static_cast<int32_t>(0x1),
    __E_DownloadQueued = static_cast<int32_t>(0x2),
    __E_Downloading = static_cast<int32_t>(0x3),
    __E_Installing = static_cast<int32_t>(0x4),
    __E_Installed = static_cast<int32_t>(0x5),
    __E_Uninstalling = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppStatus_Unwrapped() const noexcept {
    return static_cast<__AppStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::AppStatus const Unknown;

  /// @brief Field Entitled value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::AppStatus const Entitled;

  /// @brief Field DownloadQueued value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::AppStatus const DownloadQueued;

  /// @brief Field Downloading value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::AppStatus const Downloading;

  /// @brief Field Installing value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::AppStatus const Installing;

  /// @brief Field Installed value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::AppStatus const Installed;

  /// @brief Field Uninstalling value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::AppStatus const Uninstalling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AppStatus, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AppStatus, "Oculus.Platform", "AppStatus");
