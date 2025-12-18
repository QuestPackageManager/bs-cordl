#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceOcclusionEventStats)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionEventStats);
// Dependencies UnityEngine.Rendering.InstanceOcclusionEventType, UnityEngine.Rendering.OcclusionTest
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventStats
struct CORDL_TYPE InstanceOcclusionEventStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionEventStats();

  // Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType",
  // modifiers: "", def_value: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: None }, CppParam { name: "visibleInstances", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "culledInstances", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionEventStats(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType, int32_t occluderVersion, int32_t subviewMask,
                                        ::UnityEngine::Rendering::OcclusionTest occlusionTest, int32_t visibleInstances, int32_t culledInstances) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17592 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field eventType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionEventType eventType;

  /// @brief Field occluderVersion, offset: 0x8, size: 0x4, def value: None
  int32_t occluderVersion;

  /// @brief Field subviewMask, offset: 0xc, size: 0x4, def value: None
  int32_t subviewMask;

  /// @brief Field occlusionTest, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::OcclusionTest occlusionTest;

  /// @brief Field visibleInstances, offset: 0x14, size: 0x4, def value: None
  int32_t visibleInstances;

  /// @brief Field culledInstances, offset: 0x18, size: 0x4, def value: None
  int32_t culledInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, eventType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, occluderVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, subviewMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, occlusionTest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, visibleInstances) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventStats, culledInstances) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionEventStats, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionEventStats, "UnityEngine.Rendering", "InstanceOcclusionEventStats");
