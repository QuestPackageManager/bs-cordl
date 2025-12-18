#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverSphereCuller)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller_SplitInfo;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReceiverSphereCuller);
MARK_VAL_T(::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo);
// Dependencies Unity.Mathematics.float4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReceiverSphereCuller/SplitInfo
struct CORDL_TYPE ReceiverSphereCuller_SplitInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReceiverSphereCuller_SplitInfo();

  // Ctor Parameters [CppParam { name: "receiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "cascadeBlendCullingFactor", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4 receiverSphereLightSpace, float_t cascadeBlendCullingFactor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field receiverSphereLightSpace, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 receiverSphereLightSpace;

  /// @brief Field cascadeBlendCullingFactor, offset: 0x10, size: 0x4, def value: None
  float_t cascadeBlendCullingFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo, receiverSphereLightSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo, cascadeBlendCullingFactor) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3x3, UnityEngine.Rendering.ReceiverSphereCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReceiverSphereCuller
struct CORDL_TYPE ReceiverSphereCuller {
public:
  // Declarations
  using SplitInfo = ::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo;

  /// @brief Method ComputeSplitVisibilityMask, addr 0x6659ca4, size 0x28c, virtual false, abstract: false, final false
  static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> lightFacingFrustumPlanes,
                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> splitInfos,
                                                    ::Unity::Mathematics::float3x3 worldToLightSpaceRotation, ::ByRef<::UnityEngine::Rendering::AABB> bounds);

  /// @brief Method Create, addr 0x6659948, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReceiverSphereCuller Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::Unity::Collections::Allocator allocator);

  /// @brief Method CreateEmptyForTesting, addr 0x6659840, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReceiverSphereCuller CreateEmptyForTesting(::Unity::Collections::Allocator allocator);

  /// @brief Method Dispose, addr 0x66598e4, size 0x64, virtual false, abstract: false, final false
  inline void Dispose(::Unity::Jobs::JobHandle job);

  /// @brief Method DistanceUntilCylinderFullyCrossesPlane, addr 0x6659b78, size 0x12c, virtual false, abstract: false, final false
  static inline float_t DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3 cylinderCenter, ::Unity::Mathematics::float3 cylinderDirection, float_t cylinderRadius,
                                                               ::UnityEngine::Plane plane);

  /// @brief Method UseReceiverPlanes, addr 0x6659590, size 0x6c, virtual false, abstract: false, final false
  inline bool UseReceiverPlanes();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReceiverSphereCuller();

  // Ctor Parameters [CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam {
  // name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None }]
  constexpr ReceiverSphereCuller(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> splitInfos,
                                 ::Unity::Mathematics::float3x3 worldToLightSpaceRotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field splitInfos, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> splitInfos;

  /// @brief Field worldToLightSpaceRotation, offset: 0x8, size: 0x24, def value: None
  ::Unity::Mathematics::float3x3 worldToLightSpaceRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller, splitInfos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller, worldToLightSpaceRotation) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReceiverSphereCuller, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReceiverSphereCuller, "UnityEngine.Rendering", "ReceiverSphereCuller");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo, "UnityEngine.Rendering", "ReceiverSphereCuller/SplitInfo");
