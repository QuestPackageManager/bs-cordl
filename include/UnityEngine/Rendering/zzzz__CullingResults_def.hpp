#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingResults)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct CullingAllocationInfo;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine::Rendering {
struct VisibleReflectionProbe;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingResults;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingResults);
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingResults
struct CORDL_TYPE CullingResults {
public:
  // Declarations
  __declspec(property(get = get_lightAndReflectionProbeIndexCount)) int32_t lightAndReflectionProbeIndexCount;

  __declspec(property(get = get_visibleLights)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights;

  __declspec(property(get = get_visibleReflectionProbes)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> visibleReflectionProbes;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*();

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives, addr 0x68ec7c8, size 0xb8, virtual false, abstract: false, final false
  inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, ::UnityEngine::Vector3 splitRatio, int32_t shadowResolution,
                                                                   float_t shadowNearPlaneOffset, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                   ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives, addr 0x68ec200, size 0xb8, virtual false, abstract: false, final false
  static inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount,
                                                                          ::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float_t shadowNearPlaneOffset,
                                                                          ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                          ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected, addr 0x68ec2b8, size 0xac, virtual false, abstract: false, final false
  static inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount,
                                                                                   ::ByRef<::UnityEngine::Vector3> splitRatio, int32_t shadowResolution, float_t shadowNearPlaneOffset,
                                                                                   ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                                   ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputePointShadowMatricesAndCullingPrimitives, addr 0x68ec744, size 0x84, virtual false, abstract: false, final false
  inline bool ComputePointShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                             ::ByRef<::UnityEngine::Matrix4x4> projMatrix, ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputePointShadowMatricesAndCullingPrimitives, addr 0x68ec17c, size 0x84, virtual false, abstract: false, final false
  static inline bool ComputePointShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float_t fovBias,
                                                                    ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                    ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeSpotShadowMatricesAndCullingPrimitives, addr 0x68ec6d8, size 0x6c, virtual false, abstract: false, final false
  inline bool ComputeSpotShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                            ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeSpotShadowMatricesAndCullingPrimitives, addr 0x68ec110, size 0x6c, virtual false, abstract: false, final false
  static inline bool ComputeSpotShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                   ::ByRef<::UnityEngine::Matrix4x4> projMatrix, ::ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method Equals, addr 0x68ec8f0, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68ec880, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::CullingResults other);

  /// @brief Method FillLightAndReflectionProbeIndices, addr 0x68ec4bc, size 0x50, virtual false, abstract: false, final false
  inline void FillLightAndReflectionProbeIndices(::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method FillLightAndReflectionProbeIndices, addr 0x68ebf44, size 0x50, virtual false, abstract: false, final false
  static inline void FillLightAndReflectionProbeIndices(::System::IntPtr cullingResultsPtr, ::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method FillLightAndReflectionProbeIndices_Injected, addr 0x68ebf94, size 0x44, virtual false, abstract: false, final false
  static inline void FillLightAndReflectionProbeIndices_Injected(::System::IntPtr cullingResultsPtr, ::System::IntPtr computeBuffer);

  /// @brief Method FillLightIndexMap, addr 0x68ec014, size 0x54, virtual false, abstract: false, final false
  static inline void FillLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int32_t indexMapSize);

  /// @brief Method GetHashCode, addr 0x68ec970, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLightIndexCount, addr 0x68ebecc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLightIndexCount(::System::IntPtr cullingResultsPtr);

  /// @brief Method GetLightIndexMap, addr 0x68ec50c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> GetLightIndexMap(::Unity::Collections::Allocator allocator);

  /// @brief Method GetLightIndexMapSize, addr 0x68ebfd8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLightIndexMapSize(::System::IntPtr cullingResultsPtr);

  /// @brief Method GetNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetNativeArray(void* dataPointer, int32_t length);

  /// @brief Method GetReflectionProbeIndexCount, addr 0x68ebf08, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetReflectionProbeIndexCount(::System::IntPtr cullingResultsPtr);

  /// @brief Method GetShadowCasterBounds, addr 0x68ec0bc, size 0x54, virtual false, abstract: false, final false
  static inline bool GetShadowCasterBounds(::System::IntPtr cullingResultsPtr, int32_t lightIndex, ::ByRef<::UnityEngine::Bounds> bounds);

  /// @brief Method GetShadowCasterBounds, addr 0x68ec684, size 0x54, virtual false, abstract: false, final false
  inline bool GetShadowCasterBounds(int32_t lightIndex, ::ByRef<::UnityEngine::Bounds> outBounds);

  /// @brief Method SetLightIndexMap, addr 0x68ec068, size 0x54, virtual false, abstract: false, final false
  static inline void SetLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int32_t indexMapSize);

  /// @brief Method SetLightIndexMap, addr 0x68ec604, size 0x80, virtual false, abstract: false, final false
  inline void SetLightIndexMap(::Unity::Collections::NativeArray_1<int32_t> lightIndexMap);

  /// @brief Method get_lightAndReflectionProbeIndexCount, addr 0x68ec444, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_lightAndReflectionProbeIndexCount();

  /// @brief Method get_visibleLights, addr 0x68ec364, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> get_visibleLights();

  /// @brief Method get_visibleReflectionProbes, addr 0x68ec3d4, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> get_visibleReflectionProbes();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>* i___System__IEquatable_1___UnityEngine__Rendering__CullingResults_();

  /// @brief Method op_Equality, addr 0x68ec988, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::CullingResults left, ::UnityEngine::Rendering::CullingResults right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingResults();

  // Ctor Parameters [CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllocationInfo", ty: "::UnityEngine::Rendering::CullingAllocationInfo*",
  // modifiers: "", def_value: None }]
  constexpr CullingResults(::System::IntPtr ptr, ::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10775 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr ptr;

  /// @brief Field m_AllocationInfo, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingResults, ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingResults, m_AllocationInfo) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullingResults, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingResults, "UnityEngine.Rendering", "CullingResults");
