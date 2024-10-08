#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableCullingParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingOptions_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeSortingCriteria_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableCullingParameters)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CameraProperties;
}
namespace UnityEngine::Rendering {
struct CullingOptions;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeSortingCriteria;
}
namespace UnityEngine::Rendering {
struct __ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct __ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct __ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct __ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableCullingParameters);
MARK_VAL_T(::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer);
// Type: ::<m_CullingPlanes>e__FixedBuffer
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::ScriptableCullingParameters::<m_CullingPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xa0 - 0x1 = 0x9f, packed as 0x9f
  uint8_t _cordl_size_padding[0x9f];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11183 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<m_LayerFarCullDistances>e__FixedBuffer
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::ScriptableCullingParameters::<m_LayerFarCullDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x80 - 0x4 = 0x7c, packed as 0x7c
  uint8_t _cordl_size_padding[0x7c];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11184 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::ScriptableCullingParameters
// SizeInfo { instance_size: 1584, native_size: 1584, calculated_instance_size: 1584, calculated_native_size: 1600, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ScriptableCullingParameters
struct CORDL_TYPE ScriptableCullingParameters {
public:
  // Declarations
  using _m_CullingPlanes_e__FixedBuffer = ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer;

  using _m_LayerFarCullDistances_e__FixedBuffer = ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer;

  __declspec(property(get = get_cullingPlaneCount)) int32_t cullingPlaneCount;

  /// @brief Field layerCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_layerCount, put = setStaticF_layerCount)) int32_t layerCount;

  /// @brief Field maximumCullingPlaneCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maximumCullingPlaneCount, put = setStaticF_maximumCullingPlaneCount)) int32_t maximumCullingPlaneCount;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*();

  /// @brief Method Equals, addr 0x484fe64, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x484f9bc, size 0x40c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableCullingParameters other);

  /// @brief Method GetCullingPlane, addr 0x484f888, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Plane GetCullingPlane(int32_t index);

  /// @brief Method GetHashCode, addr 0x484ff4c, size 0x288, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLayerCullingDistance, addr 0x484f7b0, size 0xd8, virtual false, abstract: false, final false
  inline float_t GetLayerCullingDistance(int32_t layerIndex);

  static inline int32_t getStaticF_layerCount();

  static inline int32_t getStaticF_maximumCullingPlaneCount();

  /// @brief Method get_cullingPlaneCount, addr 0x484f7a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPlaneCount();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableCullingParameters_();

  static inline void setStaticF_layerCount(int32_t value);

  static inline void setStaticF_maximumCullingPlaneCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableCullingParameters();

  // Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LODParameters", ty: "::UnityEngine::Rendering::LODParameters",
  // modifiers: "", def_value: None }, CppParam { name: "m_CullingPlanes", ty: "::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value:
  // None }, CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CullingMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_SceneMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ViewID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_LayerFarCullDistances",
  // ty: "::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_LayerCull", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_CullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_Origin", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "m_ShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ShadowNearPlaneOffset", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_CullingOptions", ty: "::UnityEngine::Rendering::CullingOptions", modifiers: "", def_value: None }, CppParam { name: "m_ReflectionProbeSortingCriteria", ty:
  // "::UnityEngine::Rendering::ReflectionProbeSortingCriteria", modifiers: "", def_value: None }, CppParam { name: "m_CameraProperties", ty: "::UnityEngine::Rendering::CameraProperties", modifiers:
  // "", def_value: None }, CppParam { name: "m_AccurateOcclusionThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MaximumPortalCullingJobs", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_StereoViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_StereoProjectionMatrix", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_StereoSeparationDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_maximumVisibleLights", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ConservativeEnclosingSphere", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_NumIterationsEnclosingSphere", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptableCullingParameters(int32_t m_IsOrthographic, ::UnityEngine::Rendering::LODParameters m_LODParameters,
                                        ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer m_CullingPlanes, int32_t m_CullingPlaneCount, uint32_t m_CullingMask,
                                        uint64_t m_SceneMask, uint64_t m_ViewID,
                                        ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances, int32_t m_LayerCull,
                                        ::UnityEngine::Matrix4x4 m_CullingMatrix, ::UnityEngine::Vector3 m_Origin, float_t m_ShadowDistance, float_t m_ShadowNearPlaneOffset,
                                        ::UnityEngine::Rendering::CullingOptions m_CullingOptions, ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria,
                                        ::UnityEngine::Rendering::CameraProperties m_CameraProperties, float_t m_AccurateOcclusionThreshold, int32_t m_MaximumPortalCullingJobs,
                                        ::UnityEngine::Matrix4x4 m_StereoViewMatrix, ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix, float_t m_StereoSeparationDistance,
                                        int32_t m_maximumVisibleLights, bool m_ConservativeEnclosingSphere, int32_t m_NumIterationsEnclosingSphere) noexcept;

  /// @brief Field m_IsOrthographic, offset: 0x0, size: 0x4, def value: None
  int32_t m_IsOrthographic;

  /// @brief Field m_LODParameters, offset: 0x4, size: 0x1c, def value: None
  ::UnityEngine::Rendering::LODParameters m_LODParameters;

  /// @brief Field m_CullingPlanes, offset: 0x20, size: 0xa0, def value: None
  ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer m_CullingPlanes;

  /// @brief Field m_CullingPlaneCount, offset: 0xc0, size: 0x4, def value: None
  int32_t m_CullingPlaneCount;

  /// @brief Field m_CullingMask, offset: 0xc4, size: 0x4, def value: None
  uint32_t m_CullingMask;

  /// @brief Field m_SceneMask, offset: 0xc8, size: 0x8, def value: None
  uint64_t m_SceneMask;

  /// @brief Field m_ViewID, offset: 0xd0, size: 0x8, def value: None
  uint64_t m_ViewID;

  /// @brief Field m_LayerFarCullDistances, offset: 0xd8, size: 0x80, def value: None
  ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances;

  /// @brief Field m_LayerCull, offset: 0x158, size: 0x4, def value: None
  int32_t m_LayerCull;

  /// @brief Field m_CullingMatrix, offset: 0x15c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_CullingMatrix;

  /// @brief Field m_Origin, offset: 0x19c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Origin;

  /// @brief Field m_ShadowDistance, offset: 0x1a8, size: 0x4, def value: None
  float_t m_ShadowDistance;

  /// @brief Field m_ShadowNearPlaneOffset, offset: 0x1ac, size: 0x4, def value: None
  float_t m_ShadowNearPlaneOffset;

  /// @brief Field m_CullingOptions, offset: 0x1b0, size: 0x4, def value: None
  ::UnityEngine::Rendering::CullingOptions m_CullingOptions;

  /// @brief Field m_ReflectionProbeSortingCriteria, offset: 0x1b4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;

  /// @brief Field m_CameraProperties, offset: 0x1b8, size: 0x3e0, def value: None
  ::UnityEngine::Rendering::CameraProperties m_CameraProperties;

  /// @brief Field m_AccurateOcclusionThreshold, offset: 0x598, size: 0x4, def value: None
  float_t m_AccurateOcclusionThreshold;

  /// @brief Field m_MaximumPortalCullingJobs, offset: 0x59c, size: 0x4, def value: None
  int32_t m_MaximumPortalCullingJobs;

  /// @brief Field m_StereoViewMatrix, offset: 0x5a0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_StereoViewMatrix;

  /// @brief Field m_StereoProjectionMatrix, offset: 0x5e0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix;

  /// @brief Field m_StereoSeparationDistance, offset: 0x620, size: 0x4, def value: None
  float_t m_StereoSeparationDistance;

  /// @brief Field m_maximumVisibleLights, offset: 0x624, size: 0x4, def value: None
  int32_t m_maximumVisibleLights;

  /// @brief Field m_ConservativeEnclosingSphere, offset: 0x628, size: 0x1, def value: None
  bool m_ConservativeEnclosingSphere;

  /// @brief Field m_NumIterationsEnclosingSphere, offset: 0x62c, size: 0x4, def value: None
  int32_t m_NumIterationsEnclosingSphere;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableCullingParameters, 0x630>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_IsOrthographic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_LODParameters) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingPlanes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingPlaneCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingMask) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_SceneMask) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ViewID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_LayerFarCullDistances) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_LayerCull) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingMatrix) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_Origin) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ShadowDistance) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ShadowNearPlaneOffset) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingOptions) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ReflectionProbeSortingCriteria) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CameraProperties) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_AccurateOcclusionThreshold) == 0x598, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_MaximumPortalCullingJobs) == 0x59c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoViewMatrix) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoProjectionMatrix) == 0x5e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoSeparationDistance) == 0x620, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_maximumVisibleLights) == 0x624, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ConservativeEnclosingSphere) == 0x628, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_NumIterationsEnclosingSphere) == 0x62c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters, "UnityEngine.Rendering", "ScriptableCullingParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer, "UnityEngine.Rendering",
                       "ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer, "UnityEngine.Rendering",
                       "ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer");
