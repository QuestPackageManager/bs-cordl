#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/BundleFrameData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Profiling/zzzz__BundleOptions_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleFrameData)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
struct BundleFrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Profiling::BundleFrameData);
// Dependencies UnityEngine.ResourceManagement.Profiling.BundleOptions, UnityEngine.ResourceManagement.Profiling.ContentStatus, UnityEngine.ResourceManagement.Util.BundleSource
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Profiling.BundleFrameData
struct CORDL_TYPE BundleFrameData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BundleFrameData();

  // Ctor Parameters [CppParam { name: "BundleCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ReferenceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "PercentComplete", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Status", ty: "::UnityEngine::ResourceManagement::Profiling::ContentStatus", modifiers: "", def_value:
  // None }, CppParam { name: "Source", ty: "::UnityEngine::ResourceManagement::Util::BundleSource", modifiers: "", def_value: None }, CppParam { name: "LoadingOptions", ty:
  // "::UnityEngine::ResourceManagement::Profiling::BundleOptions", modifiers: "", def_value: None }]
  constexpr BundleFrameData(int32_t BundleCode, int32_t ReferenceCount, float_t PercentComplete, ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status,
                            ::UnityEngine::ResourceManagement::Util::BundleSource Source, ::UnityEngine::ResourceManagement::Profiling::BundleOptions LoadingOptions) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field BundleCode, offset: 0x0, size: 0x4, def value: None
  int32_t BundleCode;

  /// @brief Field ReferenceCount, offset: 0x4, size: 0x4, def value: None
  int32_t ReferenceCount;

  /// @brief Field PercentComplete, offset: 0x8, size: 0x4, def value: None
  float_t PercentComplete;

  /// @brief Field Status, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status;

  /// @brief Field Source, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::Util::BundleSource Source;

  /// @brief Field LoadingOptions, offset: 0x14, size: 0x2, def value: None
  ::UnityEngine::ResourceManagement::Profiling::BundleOptions LoadingOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, BundleCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, ReferenceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, PercentComplete) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, Status) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, LoadingOptions) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::BundleFrameData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, "UnityEngine.ResourceManagement.Profiling", "BundleFrameData");
