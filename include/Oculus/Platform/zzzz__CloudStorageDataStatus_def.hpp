#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageDataStatus)
// Forward declare root types
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::CloudStorageDataStatus);
// Type: Oculus.Platform::CloudStorageDataStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13247))
// CS Name: ::Oculus.Platform::CloudStorageDataStatus
struct CORDL_TYPE CloudStorageDataStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CloudStorageDataStatus_Unwrapped
  enum struct __CloudStorageDataStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_InSync = static_cast<int32_t>(0x1),
    __E_NeedsDownload = static_cast<int32_t>(0x2),
    __E_RemoteDownloading = static_cast<int32_t>(0x3),
    __E_NeedsUpload = static_cast<int32_t>(0x4),
    __E_LocalUploading = static_cast<int32_t>(0x5),
    __E_InConflict = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CloudStorageDataStatus_Unwrapped() const noexcept {
    return static_cast<__CloudStorageDataStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CloudStorageDataStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageDataStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::CloudStorageDataStatus const Unknown;

  /// @brief Field InSync value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::CloudStorageDataStatus const InSync;

  /// @brief Field NeedsDownload value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::CloudStorageDataStatus const NeedsDownload;

  /// @brief Field RemoteDownloading value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::CloudStorageDataStatus const RemoteDownloading;

  /// @brief Field NeedsUpload value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::CloudStorageDataStatus const NeedsUpload;

  /// @brief Field LocalUploading value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::CloudStorageDataStatus const LocalUploading;

  /// @brief Field InConflict value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::CloudStorageDataStatus const InConflict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CloudStorageDataStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::CloudStorageDataStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorageDataStatus, "Oculus.Platform", "CloudStorageDataStatus");
