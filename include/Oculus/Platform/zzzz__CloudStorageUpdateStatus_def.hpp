#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageUpdateStatus)
// Forward declare root types
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::CloudStorageUpdateStatus);
// Type: Oculus.Platform::CloudStorageUpdateStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13248))
// CS Name: ::Oculus.Platform::CloudStorageUpdateStatus
struct CORDL_TYPE CloudStorageUpdateStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CloudStorageUpdateStatus_Unwrapped
  enum struct __CloudStorageUpdateStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Ok = static_cast<int32_t>(0x1),
    __E_BetterVersionStored = static_cast<int32_t>(0x2),
    __E_ManualMergeRequired = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CloudStorageUpdateStatus_Unwrapped() const noexcept {
    return static_cast<__CloudStorageUpdateStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CloudStorageUpdateStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageUpdateStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::CloudStorageUpdateStatus const Unknown;

  /// @brief Field Ok value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::CloudStorageUpdateStatus const Ok;

  /// @brief Field BetterVersionStored value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::CloudStorageUpdateStatus const BetterVersionStored;

  /// @brief Field ManualMergeRequired value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::CloudStorageUpdateStatus const ManualMergeRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CloudStorageUpdateStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::CloudStorageUpdateStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorageUpdateStatus, "Oculus.Platform", "CloudStorageUpdateStatus");
