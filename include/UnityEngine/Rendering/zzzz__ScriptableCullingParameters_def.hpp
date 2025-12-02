#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableCullingParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingOptions_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeSortingCriteria_def.hpp"
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
struct CullingOptions;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeSortingCriteria;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableCullingParameters);
MARK_VAL_T(::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xa0 - 0x1 = 0x9f, packed as 0x9f
  uint8_t _cordl_size_padding[0x9f];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x80 - 0x4 = 0x7c, packed as 0x7c
  uint8_t _cordl_size_padding[0x7c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rendering.CameraProperties, UnityEngine.Rendering.CullingOptions, UnityEngine.Rendering.LODParameters,
// UnityEngine.Rendering.ReflectionProbeSortingCriteria, UnityEngine.Rendering.ScriptableCullingParameters::<m_CullingPlanes>e__FixedBuffer,
// UnityEngine.Rendering.ScriptableCullingParameters::<m_LayerFarCullDistances>e__FixedBuffer, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableCullingParameters
struct CORDL_TYPE ScriptableCullingParameters {
public:
  // Declarations
  using _m_CullingPlanes_e__FixedBuffer = ::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer;

  using _m_LayerFarCullDistances_e__FixedBuffer = ::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer;

  __declspec(property(put = set_conservativeEnclosingSphere)) bool conservativeEnclosingSphere;

  __declspec(property(get = get_cullingOptions, put = set_cullingOptions)) ::UnityEngine::Rendering::CullingOptions cullingOptions;

  __declspec(property(get = get_cullingPlaneCount)) int32_t cullingPlaneCount;

  /// @brief Field layerCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_layerCount, put = setStaticF_layerCount)) int32_t layerCount;

  /// @brief Field maximumCullingPlaneCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maximumCullingPlaneCount, put = setStaticF_maximumCullingPlaneCount)) int32_t maximumCullingPlaneCount;

  __declspec(property(put = set_maximumVisibleLights)) int32_t maximumVisibleLights;

  __declspec(property(put = set_numIterationsEnclosingSphere)) int32_t numIterationsEnclosingSphere;

  __declspec(property(put = set_reflectionProbeSortingCriteria)) ::UnityEngine::Rendering::ReflectionProbeSortingCriteria reflectionProbeSortingCriteria;

  __declspec(property(put = set_shadowDistance)) float_t shadowDistance;

  __declspec(property(get = get_stereoProjectionMatrix, put = set_stereoProjectionMatrix)) ::UnityEngine::Matrix4x4 stereoProjectionMatrix;

  __declspec(property(put = set_stereoSeparationDistance)) float_t stereoSeparationDistance;

  __declspec(property(put = set_stereoViewMatrix)) ::UnityEngine::Matrix4x4 stereoViewMatrix;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*();

  /// @brief Method Equals, addr 0x68eba70, size 0x100, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68eb518, size 0x488, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableCullingParameters other);

  /// @brief Method GetCullingPlane, addr 0x68eb3ec, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Plane GetCullingPlane(int32_t index);

  /// @brief Method GetHashCode, addr 0x68ebb70, size 0x26c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLayerCullingDistance, addr 0x68eb32c, size 0xc0, virtual false, abstract: false, final false
  inline float_t GetLayerCullingDistance(int32_t layerIndex);

  static inline int32_t getStaticF_layerCount();

  static inline int32_t getStaticF_maximumCullingPlaneCount();

  /// @brief Method get_cullingOptions, addr 0x68eb2c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingOptions get_cullingOptions();

  /// @brief Method get_cullingPlaneCount, addr 0x68eb2b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPlaneCount();

  /// @brief Method get_stereoProjectionMatrix, addr 0x68eb2f4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_stereoProjectionMatrix();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableCullingParameters_();

  static inline void setStaticF_layerCount(int32_t value);

  static inline void setStaticF_maximumCullingPlaneCount(int32_t value);

  /// @brief Method set_conservativeEnclosingSphere, addr 0x68eb2a4, size 0x8, virtual false, abstract: false, final false
  inline void set_conservativeEnclosingSphere(bool value);

  /// @brief Method set_cullingOptions, addr 0x68eb2cc, size 0x8, virtual false, abstract: false, final false
  inline void set_cullingOptions(::UnityEngine::Rendering::CullingOptions value);

  /// @brief Method set_maximumVisibleLights, addr 0x68eb29c, size 0x8, virtual false, abstract: false, final false
  inline void set_maximumVisibleLights(int32_t value);

  /// @brief Method set_numIterationsEnclosingSphere, addr 0x68eb2ac, size 0x8, virtual false, abstract: false, final false
  inline void set_numIterationsEnclosingSphere(int32_t value);

  /// @brief Method set_reflectionProbeSortingCriteria, addr 0x68eb2d4, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeSortingCriteria(::UnityEngine::Rendering::ReflectionProbeSortingCriteria value);

  /// @brief Method set_shadowDistance, addr 0x68eb2bc, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_stereoProjectionMatrix, addr 0x68eb30c, size 0x18, virtual false, abstract: false, final false
  inline void set_stereoProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_stereoSeparationDistance, addr 0x68eb324, size 0x8, virtual false, abstract: false, final false
  inline void set_stereoSeparationDistance(float_t value);

  /// @brief Method set_stereoViewMatrix, addr 0x68eb2dc, size 0x18, virtual false, abstract: false, final false
  inline void set_stereoViewMatrix(::UnityEngine::Matrix4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableCullingParameters();

  // Ctor Parameters [CppParam { name: "m_LODParameters", ty: "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: None }, CppParam { name: "m_CullingPlanes", ty:
  // "::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CullingMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SceneMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_ViewID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_LayerFarCullDistances", ty:
  // "::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_LayerCull", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_Origin", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_ShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ShadowNearPlaneOffset", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_CullingOptions", ty: "::UnityEngine::Rendering::CullingOptions", modifiers: "", def_value: None }, CppParam { name: "m_ReflectionProbeSortingCriteria", ty:
  // "::UnityEngine::Rendering::ReflectionProbeSortingCriteria", modifiers: "", def_value: None }, CppParam { name: "m_CameraProperties", ty: "::UnityEngine::Rendering::CameraProperties", modifiers:
  // "", def_value: None }, CppParam { name: "m_AccurateOcclusionThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MaximumPortalCullingJobs", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_StereoViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_StereoProjectionMatrix", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_StereoSeparationDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_maximumVisibleLights", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ConservativeEnclosingSphere", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_NumIterationsEnclosingSphere", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptableCullingParameters(::UnityEngine::Rendering::LODParameters m_LODParameters, ::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer m_CullingPlanes,
                                        int32_t m_CullingPlaneCount, uint32_t m_CullingMask, uint64_t m_SceneMask, uint64_t m_ViewID,
                                        ::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances, int32_t m_LayerCull,
                                        ::UnityEngine::Matrix4x4 m_CullingMatrix, ::UnityEngine::Vector3 m_Origin, float_t m_ShadowDistance, float_t m_ShadowNearPlaneOffset,
                                        ::UnityEngine::Rendering::CullingOptions m_CullingOptions, ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria,
                                        ::UnityEngine::Rendering::CameraProperties m_CameraProperties, float_t m_AccurateOcclusionThreshold, int32_t m_MaximumPortalCullingJobs,
                                        ::UnityEngine::Matrix4x4 m_StereoViewMatrix, ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix, float_t m_StereoSeparationDistance,
                                        int32_t m_maximumVisibleLights, bool m_ConservativeEnclosingSphere, int32_t m_NumIterationsEnclosingSphere) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x638 };

  /// @brief Field k_CullingJobCountLowerLimit offset 0xffffffff size 0x4
  static constexpr int32_t k_CullingJobCountLowerLimit{ static_cast<int32_t>(0x1) };

  /// @brief Field k_CullingJobCountUpperLimit offset 0xffffffff size 0x4
  static constexpr int32_t k_CullingJobCountUpperLimit{ static_cast<int32_t>(0x10) };

  /// @brief Field k_LayerCount offset 0xffffffff size 0x4
  static constexpr int32_t k_LayerCount{ static_cast<int32_t>(0x20) };

  /// @brief Field k_MaximumCullingPlaneCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaximumCullingPlaneCount{ static_cast<int32_t>(0xa) };

  /// @brief Field m_LODParameters, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::Rendering::LODParameters m_LODParameters;

  /// @brief Field m_CullingPlanes, offset: 0x1c, size: 0xa0, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer m_CullingPlanes;

  /// @brief Field m_CullingPlaneCount, offset: 0xbc, size: 0x4, def value: None
  int32_t m_CullingPlaneCount;

  /// @brief Field m_CullingMask, offset: 0xc0, size: 0x4, def value: None
  uint32_t m_CullingMask;

  /// @brief Field m_SceneMask, offset: 0xc8, size: 0x8, def value: None
  uint64_t m_SceneMask;

  /// @brief Field m_ViewID, offset: 0xd0, size: 0x8, def value: None
  uint64_t m_ViewID;

  /// @brief Field m_LayerFarCullDistances, offset: 0xd8, size: 0x80, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances;

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

  /// @brief Field m_CameraProperties, offset: 0x1b8, size: 0x3e4, def value: None
  ::UnityEngine::Rendering::CameraProperties m_CameraProperties;

  /// @brief Field m_AccurateOcclusionThreshold, offset: 0x59c, size: 0x4, def value: None
  float_t m_AccurateOcclusionThreshold;

  /// @brief Field m_MaximumPortalCullingJobs, offset: 0x5a0, size: 0x4, def value: None
  int32_t m_MaximumPortalCullingJobs;

  /// @brief Field m_StereoViewMatrix, offset: 0x5a4, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_StereoViewMatrix;

  /// @brief Field m_StereoProjectionMatrix, offset: 0x5e4, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix;

  /// @brief Field m_StereoSeparationDistance, offset: 0x624, size: 0x4, def value: None
  float_t m_StereoSeparationDistance;

  /// @brief Field m_maximumVisibleLights, offset: 0x628, size: 0x4, def value: None
  int32_t m_maximumVisibleLights;

  /// @brief Field m_ConservativeEnclosingSphere, offset: 0x62c, size: 0x1, def value: None
  bool m_ConservativeEnclosingSphere;

  /// @brief Field m_NumIterationsEnclosingSphere, offset: 0x630, size: 0x4, def value: None
  int32_t m_NumIterationsEnclosingSphere;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_LODParameters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingPlanes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingPlaneCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_CullingMask) == 0xc0, "Offset mismatch!");

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

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_AccurateOcclusionThreshold) == 0x59c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_MaximumPortalCullingJobs) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoViewMatrix) == 0x5a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoProjectionMatrix) == 0x5e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_StereoSeparationDistance) == 0x624, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_maximumVisibleLights) == 0x628, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_ConservativeEnclosingSphere) == 0x62c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableCullingParameters, m_NumIterationsEnclosingSphere) == 0x630, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableCullingParameters, 0x638>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters, "UnityEngine.Rendering", "ScriptableCullingParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer, "UnityEngine.Rendering", "ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer, "UnityEngine.Rendering",
                       "ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer");
