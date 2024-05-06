#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/DownloadStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadStatus)
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus);
// Type: UnityEngine.ResourceManagement.AsyncOperations::DownloadStatus
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::DownloadStatus
struct CORDL_TYPE DownloadStatus {
public:
  // Declarations
  __declspec(property(get = get_Percent)) float_t Percent;

  /// @brief Method get_Percent, addr 0x3313a64, size 0x38, virtual false, abstract: false, final false
  inline float_t get_Percent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadStatus();

  // Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "IsDone", ty: "bool", modifiers: "", def_value: None }]
  constexpr DownloadStatus(int64_t TotalBytes, int64_t DownloadedBytes, bool IsDone) noexcept;

  /// @brief Field TotalBytes, offset: 0x0, size: 0x8, def value: None
  int64_t TotalBytes;

  /// @brief Field DownloadedBytes, offset: 0x8, size: 0x8, def value: None
  int64_t DownloadedBytes;

  /// @brief Field IsDone, offset: 0x10, size: 0x1, def value: None
  bool IsDone;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, TotalBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, DownloadedBytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, IsDone) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, "UnityEngine.ResourceManagement.AsyncOperations", "DownloadStatus");
