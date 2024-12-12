#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreCameraValues_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraProperties)
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CameraProperties__layerCullDistances_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct CameraProperties__m_CameraCullPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct CameraProperties__m_ShadowCullPlanes_e__FixedBuffer;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CameraProperties;
}
namespace UnityEngine::Rendering {
struct CameraProperties__layerCullDistances_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct CameraProperties__m_CameraCullPlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct CameraProperties__m_ShadowCullPlanes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CameraProperties);
MARK_VAL_T(::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CameraProperties__layerCullDistances_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraProperties__layerCullDistances_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr CameraProperties__layerCullDistances_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11216 };

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
static_assert(offsetof(::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CameraProperties__m_CameraCullPlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraProperties__m_CameraCullPlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CameraProperties__m_CameraCullPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x60 - 0x1 = 0x5f, packed as 0x5f
  uint8_t _cordl_size_padding[0x5f];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CameraProperties__m_ShadowCullPlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraProperties__m_ShadowCullPlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CameraProperties__m_ShadowCullPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x60 - 0x1 = 0x5f, packed as 0x5f
  uint8_t _cordl_size_padding[0x5f];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IEquatable`1<T>, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.Rendering.CameraProperties::<layerCullDistances>e__FixedBuffer,
// UnityEngine.Rendering.CameraProperties::<m_CameraCullPlanes>e__FixedBuffer, UnityEngine.Rendering.CameraProperties::<m_ShadowCullPlanes>e__FixedBuffer, UnityEngine.Rendering.CoreCameraValues,
// UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CameraProperties
struct CORDL_TYPE CameraProperties {
public:
  // Declarations
  using _layerCullDistances_e__FixedBuffer = ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer;

  using _m_CameraCullPlanes_e__FixedBuffer = ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer;

  using _m_ShadowCullPlanes_e__FixedBuffer = ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*();

  /// @brief Method Equals, addr 0x48c4d40, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48c46d8, size 0x668, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::CameraProperties other);

  /// @brief Method GetCameraCullingPlane, addr 0x48c45f4, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Plane GetCameraCullingPlane(int32_t index);

  /// @brief Method GetHashCode, addr 0x48c4df8, size 0x458, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetShadowCullingPlane, addr 0x48c4510, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Plane GetShadowCullingPlane(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>* i___System__IEquatable_1___UnityEngine__Rendering__CameraProperties_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraProperties();

  // Ctor Parameters [CppParam { name: "screenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "viewDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "projectionNear", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "projectionFar", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "cameraNear", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cameraFar", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cameraAspect", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "cameraToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "actualWorldToClip", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "cameraClipToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name:
  // "cameraWorldToClip", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "implicitProjection", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None },
  // CppParam { name: "stereoWorldToClipLeft", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "stereoWorldToClipRight", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }, CppParam { name: "worldToCamera", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "right", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "transformDirection", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "cameraEuler", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "farPlaneWorldSpaceLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rendererCount", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_ShadowCullPlanes", ty: "::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "m_CameraCullPlanes", ty: "::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "baseFarDistance", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "shadowCullCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "layerCullDistances", ty:
  // "::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "layerCullSpherical", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "coreCameraValues", ty: "::UnityEngine::Rendering::CoreCameraValues", modifiers: "", def_value: None }, CppParam { name: "cameraType", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "projectionIsOblique", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isImplicitProjectionMatrix", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr CameraProperties(::UnityEngine::Rect screenRect, ::UnityEngine::Vector3 viewDir, float_t projectionNear, float_t projectionFar, float_t cameraNear, float_t cameraFar, float_t cameraAspect,
                             ::UnityEngine::Matrix4x4 cameraToWorld, ::UnityEngine::Matrix4x4 actualWorldToClip, ::UnityEngine::Matrix4x4 cameraClipToWorld, ::UnityEngine::Matrix4x4 cameraWorldToClip,
                             ::UnityEngine::Matrix4x4 implicitProjection, ::UnityEngine::Matrix4x4 stereoWorldToClipLeft, ::UnityEngine::Matrix4x4 stereoWorldToClipRight,
                             ::UnityEngine::Matrix4x4 worldToCamera, ::UnityEngine::Vector3 up, ::UnityEngine::Vector3 right, ::UnityEngine::Vector3 transformDirection,
                             ::UnityEngine::Vector3 cameraEuler, ::UnityEngine::Vector3 velocity, float_t farPlaneWorldSpaceLength, uint32_t rendererCount,
                             ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes,
                             ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes, float_t baseFarDistance, ::UnityEngine::Vector3 shadowCullCenter,
                             ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances, int32_t layerCullSpherical,
                             ::UnityEngine::Rendering::CoreCameraValues coreCameraValues, uint32_t cameraType, int32_t projectionIsOblique, int32_t isImplicitProjectionMatrix) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3e0 };

  /// @brief Field screenRect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect screenRect;

  /// @brief Field viewDir, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 viewDir;

  /// @brief Field projectionNear, offset: 0x1c, size: 0x4, def value: None
  float_t projectionNear;

  /// @brief Field projectionFar, offset: 0x20, size: 0x4, def value: None
  float_t projectionFar;

  /// @brief Field cameraNear, offset: 0x24, size: 0x4, def value: None
  float_t cameraNear;

  /// @brief Field cameraFar, offset: 0x28, size: 0x4, def value: None
  float_t cameraFar;

  /// @brief Field cameraAspect, offset: 0x2c, size: 0x4, def value: None
  float_t cameraAspect;

  /// @brief Field cameraToWorld, offset: 0x30, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cameraToWorld;

  /// @brief Field actualWorldToClip, offset: 0x70, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 actualWorldToClip;

  /// @brief Field cameraClipToWorld, offset: 0xb0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cameraClipToWorld;

  /// @brief Field cameraWorldToClip, offset: 0xf0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cameraWorldToClip;

  /// @brief Field implicitProjection, offset: 0x130, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 implicitProjection;

  /// @brief Field stereoWorldToClipLeft, offset: 0x170, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 stereoWorldToClipLeft;

  /// @brief Field stereoWorldToClipRight, offset: 0x1b0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 stereoWorldToClipRight;

  /// @brief Field worldToCamera, offset: 0x1f0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 worldToCamera;

  /// @brief Field up, offset: 0x230, size: 0xc, def value: None
  ::UnityEngine::Vector3 up;

  /// @brief Field right, offset: 0x23c, size: 0xc, def value: None
  ::UnityEngine::Vector3 right;

  /// @brief Field transformDirection, offset: 0x248, size: 0xc, def value: None
  ::UnityEngine::Vector3 transformDirection;

  /// @brief Field cameraEuler, offset: 0x254, size: 0xc, def value: None
  ::UnityEngine::Vector3 cameraEuler;

  /// @brief Field velocity, offset: 0x260, size: 0xc, def value: None
  ::UnityEngine::Vector3 velocity;

  /// @brief Field farPlaneWorldSpaceLength, offset: 0x26c, size: 0x4, def value: None
  float_t farPlaneWorldSpaceLength;

  /// @brief Field rendererCount, offset: 0x270, size: 0x4, def value: None
  uint32_t rendererCount;

  /// @brief Field m_ShadowCullPlanes, offset: 0x274, size: 0x60, def value: None
  ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes;

  /// @brief Field m_CameraCullPlanes, offset: 0x2d4, size: 0x60, def value: None
  ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes;

  /// @brief Field baseFarDistance, offset: 0x334, size: 0x4, def value: None
  float_t baseFarDistance;

  /// @brief Field shadowCullCenter, offset: 0x338, size: 0xc, def value: None
  ::UnityEngine::Vector3 shadowCullCenter;

  /// @brief Field layerCullDistances, offset: 0x344, size: 0x80, def value: None
  ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances;

  /// @brief Field layerCullSpherical, offset: 0x3c4, size: 0x4, def value: None
  int32_t layerCullSpherical;

  /// @brief Field coreCameraValues, offset: 0x3c8, size: 0xc, def value: None
  ::UnityEngine::Rendering::CoreCameraValues coreCameraValues;

  /// @brief Field cameraType, offset: 0x3d4, size: 0x4, def value: None
  uint32_t cameraType;

  /// @brief Field projectionIsOblique, offset: 0x3d8, size: 0x4, def value: None
  int32_t projectionIsOblique;

  /// @brief Field isImplicitProjectionMatrix, offset: 0x3dc, size: 0x4, def value: None
  int32_t isImplicitProjectionMatrix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, screenRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, viewDir) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, projectionNear) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, projectionFar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraNear) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraFar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraAspect) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraToWorld) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, actualWorldToClip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraClipToWorld) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraWorldToClip) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, implicitProjection) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, stereoWorldToClipLeft) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, stereoWorldToClipRight) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, worldToCamera) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, up) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, right) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, transformDirection) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraEuler) == 0x254, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, velocity) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, farPlaneWorldSpaceLength) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, rendererCount) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, m_ShadowCullPlanes) == 0x274, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, m_CameraCullPlanes) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, baseFarDistance) == 0x334, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, shadowCullCenter) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, layerCullDistances) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, layerCullSpherical) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, coreCameraValues) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, cameraType) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, projectionIsOblique) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraProperties, isImplicitProjectionMatrix) == 0x3dc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraProperties, 0x3e0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties, "UnityEngine.Rendering", "CameraProperties");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<layerCullDistances>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<m_CameraCullPlanes>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer, "UnityEngine.Rendering", "CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer");
