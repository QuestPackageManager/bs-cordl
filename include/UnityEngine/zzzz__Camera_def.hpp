#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
namespace UnityEngine::Rendering {
struct OpaqueSortMode;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
namespace UnityEngine {
struct Camera_GateFitMode;
}
namespace UnityEngine {
struct Camera_GateFitParameters;
}
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_ProjectionMatrixMode;
}
namespace UnityEngine {
struct Camera_SceneViewFilterMode;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct TransparencySortMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Camera_GateFitMode;
}
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_ProjectionMatrixMode;
}
namespace UnityEngine {
struct Camera_SceneViewFilterMode;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
namespace UnityEngine {
struct Camera_GateFitParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Camera_GateFitMode);
MARK_VAL_T(::UnityEngine::Camera_MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::Camera_ProjectionMatrixMode);
MARK_VAL_T(::UnityEngine::Camera_SceneViewFilterMode);
MARK_VAL_T(::UnityEngine::Camera_StereoscopicEye);
MARK_REF_T(::UnityEngine::Camera*);
MARK_REF_T(::UnityEngine::Camera_CameraCallback*);
MARK_VAL_T(::UnityEngine::Camera_GateFitParameters);
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_GateFitMode, "UnityEngine", "Camera/GateFitMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_ProjectionMatrixMode, "UnityEngine", "Camera/ProjectionMatrixMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_SceneViewFilterMode, "UnityEngine", "Camera/SceneViewFilterMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera*, "UnityEngine", "Camera");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_CameraCallback*, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_GateFitParameters, "UnityEngine", "Camera/GateFitParameters");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/ProjectionMatrixMode
struct CORDL_TYPE Camera_ProjectionMatrixMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_ProjectionMatrixMode_Unwrapped
  enum struct __Camera_ProjectionMatrixMode_Unwrapped : int32_t {
    __E_Explicit = static_cast<int32_t>(0x0),
    __E_Implicit = static_cast<int32_t>(0x1),
    __E_PhysicalPropertiesBased = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_ProjectionMatrixMode_Unwrapped() const noexcept {
    return static_cast<__Camera_ProjectionMatrixMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_ProjectionMatrixMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_ProjectionMatrixMode(int32_t value__) noexcept;

  /// @brief Field Explicit value: I32(0)
  static ::UnityEngine::Camera_ProjectionMatrixMode const Explicit;

  /// @brief Field Implicit value: I32(1)
  static ::UnityEngine::Camera_ProjectionMatrixMode const Implicit;

  /// @brief Field PhysicalPropertiesBased value: I32(2)
  static ::UnityEngine::Camera_ProjectionMatrixMode const PhysicalPropertiesBased;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_ProjectionMatrixMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_ProjectionMatrixMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/GateFitMode
struct CORDL_TYPE Camera_GateFitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_GateFitMode_Unwrapped
  enum struct __Camera_GateFitMode_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x1),
    __E_Horizontal = static_cast<int32_t>(0x2),
    __E_Fill = static_cast<int32_t>(0x3),
    __E_Overscan = static_cast<int32_t>(0x4),
    __E_None = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_GateFitMode_Unwrapped() const noexcept {
    return static_cast<__Camera_GateFitMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_GateFitMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_GateFitMode(int32_t value__) noexcept;

  /// @brief Field Fill value: I32(3)
  static ::UnityEngine::Camera_GateFitMode const Fill;

  /// @brief Field Horizontal value: I32(2)
  static ::UnityEngine::Camera_GateFitMode const Horizontal;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Camera_GateFitMode const None;

  /// @brief Field Overscan value: I32(4)
  static ::UnityEngine::Camera_GateFitMode const Overscan;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::Camera_GateFitMode const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9663 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_GateFitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_GateFitMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Camera::GateFitMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/GateFitParameters
struct CORDL_TYPE Camera_GateFitParameters {
public:
  // Declarations
  __declspec(property(get = get_aspect)) float_t aspect;

  __declspec(property(get = get_mode)) ::UnityEngine::Camera_GateFitMode mode;

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_aspect, addr 0x6f059d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_mode, addr 0x6f059d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_mode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_GateFitParameters();

  // Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::Camera_GateFitMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_aspect_k__BackingField",
  // ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_GateFitParameters(::UnityEngine::Camera_GateFitMode _mode_k__BackingField, float_t _aspect_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9664 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <mode>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Camera_GateFitMode _mode_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <aspect>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _aspect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_GateFitParameters, _mode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Camera_GateFitParameters, _aspect_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_GateFitParameters) == 0x8, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/StereoscopicEye
struct CORDL_TYPE Camera_StereoscopicEye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_StereoscopicEye_Unwrapped
  enum struct __Camera_StereoscopicEye_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_StereoscopicEye_Unwrapped() const noexcept {
    return static_cast<__Camera_StereoscopicEye_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_StereoscopicEye();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_StereoscopicEye(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::Camera_StereoscopicEye const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::Camera_StereoscopicEye const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_StereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_StereoscopicEye) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/MonoOrStereoscopicEye
struct CORDL_TYPE Camera_MonoOrStereoscopicEye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_MonoOrStereoscopicEye_Unwrapped
  enum struct __Camera_MonoOrStereoscopicEye_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Mono = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_MonoOrStereoscopicEye_Unwrapped() const noexcept {
    return static_cast<__Camera_MonoOrStereoscopicEye_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_MonoOrStereoscopicEye();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_MonoOrStereoscopicEye(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Left;

  /// @brief Field Mono value: I32(2)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Mono;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9666 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_MonoOrStereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_MonoOrStereoscopicEye) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/SceneViewFilterMode
struct CORDL_TYPE Camera_SceneViewFilterMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_SceneViewFilterMode_Unwrapped
  enum struct __Camera_SceneViewFilterMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_ShowFiltered = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_SceneViewFilterMode_Unwrapped() const noexcept {
    return static_cast<__Camera_SceneViewFilterMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_SceneViewFilterMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_SceneViewFilterMode(int32_t value__) noexcept;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Camera_SceneViewFilterMode const Off;

  /// @brief Field ShowFiltered value: I32(1)
  static ::UnityEngine::Camera_SceneViewFilterMode const ShowFiltered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_SceneViewFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_SceneViewFilterMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera/CameraCallback
class CORDL_TYPE Camera_CameraCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6f05a5c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Camera* cam);

  static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6f059e0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_CameraCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Camera_CameraCallback(Camera_CameraCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Camera_CameraCallback(Camera_CameraCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Camera_CameraCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Runtime/Camera/RenderManager.h")]
// [NativeHeader("Runtime/Camera/Camera.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Shaders/Shader.h")]
// [NativeHeader("Runtime/Misc/GameObjectUtility.h")]
// [NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
// [NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
// [NativeHeader("Runtime/Graphics/RenderTexture.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using CameraCallback = ::UnityEngine::Camera_CameraCallback;

  using GateFitMode = ::UnityEngine::Camera_GateFitMode;

  using GateFitParameters = ::UnityEngine::Camera_GateFitParameters;

  using MonoOrStereoscopicEye = ::UnityEngine::Camera_MonoOrStereoscopicEye;

  using ProjectionMatrixMode = ::UnityEngine::Camera_ProjectionMatrixMode;

  using SceneViewFilterMode = ::UnityEngine::Camera_SceneViewFilterMode;

  using StereoscopicEye = ::UnityEngine::Camera_StereoscopicEye;

  __declspec(property(get = get_activeTexture)) ::UnityW<::UnityEngine::RenderTexture> activeTexture;

  __declspec(property(get = get_actualRenderingPath)) ::UnityEngine::RenderingPath actualRenderingPath;

  __declspec(property(get = get_allowDynamicResolution, put = set_allowDynamicResolution)) bool allowDynamicResolution;

  __declspec(property(get = get_allowHDR, put = set_allowHDR)) bool allowHDR;

  __declspec(property(get = get_allowMSAA, put = set_allowMSAA)) bool allowMSAA;

  __declspec(property(get = get_anamorphism, put = set_anamorphism)) float_t anamorphism;

  __declspec(property(get = get_aperture, put = set_aperture)) float_t aperture;

  __declspec(property(get = get_areVRStereoViewMatricesWithinSingleCullTolerance)) bool areVRStereoViewMatricesWithinSingleCullTolerance;

  __declspec(property(get = get_aspect, put = set_aspect)) float_t aspect;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor)) ::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_barrelClipping, put = set_barrelClipping)) float_t barrelClipping;

  __declspec(property(get = get_bladeCount, put = set_bladeCount)) int32_t bladeCount;

  __declspec(property(get = get_cameraToWorldMatrix)) ::UnityEngine::Matrix4x4 cameraToWorldMatrix;

  __declspec(property(get = get_cameraType, put = set_cameraType)) ::UnityEngine::CameraType cameraType;

  __declspec(property(get = get_clearFlags, put = set_clearFlags)) ::UnityEngine::CameraClearFlags clearFlags;

  __declspec(property(get = get_clearStencilAfterLightingPass, put = set_clearStencilAfterLightingPass)) bool clearStencilAfterLightingPass;

  __declspec(property(get = get_commandBufferCount)) int32_t commandBufferCount;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_cullingMatrix, put = set_cullingMatrix)) ::UnityEngine::Matrix4x4 cullingMatrix;

  __declspec(property(get = get_curvature, put = set_curvature)) ::UnityEngine::Vector2 curvature;

  __declspec(property(get = get_depth, put = set_depth)) float_t depth;

  __declspec(property(get = get_depthTextureMode, put = set_depthTextureMode)) ::UnityEngine::DepthTextureMode depthTextureMode;

  __declspec(property(get = get_eventMask, put = set_eventMask)) int32_t eventMask;

  /// @brief [NativeProperty("Far")]
  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  /// @brief [NativeProperty("VerticalFieldOfView")]
  __declspec(property(get = get_fieldOfView, put = set_fieldOfView)) float_t fieldOfView;

  __declspec(property(get = get_focalLength, put = set_focalLength)) float_t focalLength;

  __declspec(property(get = get_focusDistance, put = set_focusDistance)) float_t focusDistance;

  /// @brief [NativeProperty("ForceIntoRT")]
  __declspec(property(get = get_forceIntoRenderTexture, put = set_forceIntoRenderTexture)) bool forceIntoRenderTexture;

  __declspec(property(get = get_gateFit, put = set_gateFit)) ::UnityEngine::Camera_GateFitMode gateFit;

  __declspec(property(get = get_isProcessingRenderRequest)) bool isProcessingRenderRequest;

  __declspec(property(get = get_iso, put = set_iso)) int32_t iso;

  __declspec(property(get = get_layerCullDistances, put = set_layerCullDistances)) ::ArrayW<float_t> layerCullDistances;

  __declspec(property(get = get_layerCullSpherical, put = set_layerCullSpherical)) bool layerCullSpherical;

  /// @brief [NativeProperty("LayerCullSpherical")]
  __declspec(property(get = get_layerCullSphericalInternal, put = set_layerCullSphericalInternal)) bool layerCullSphericalInternal;

  __declspec(property(get = get_lensShift, put = set_lensShift)) ::UnityEngine::Vector2 lensShift;

  /// @brief Field m_NonSerializedVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NonSerializedVersion, put = __cordl_internal_set_m_NonSerializedVersion)) uint32_t m_NonSerializedVersion;

  /// @brief [NativeProperty("Near")]
  __declspec(property(get = get_nearClipPlane, put = set_nearClipPlane)) float_t nearClipPlane;

  __declspec(property(get = get_nonJitteredProjectionMatrix, put = set_nonJitteredProjectionMatrix)) ::UnityEngine::Matrix4x4 nonJitteredProjectionMatrix;

  /// @brief Field onPostRender, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onPostRender, put = setStaticF_onPostRender)) ::UnityEngine::Camera_CameraCallback* onPostRender;

  /// @brief Field onPreCull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onPreCull, put = setStaticF_onPreCull)) ::UnityEngine::Camera_CameraCallback* onPreCull;

  /// @brief Field onPreRender, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onPreRender, put = setStaticF_onPreRender)) ::UnityEngine::Camera_CameraCallback* onPreRender;

  __declspec(property(get = get_opaqueSortMode, put = set_opaqueSortMode)) ::UnityEngine::Rendering::OpaqueSortMode opaqueSortMode;

  __declspec(property(get = get_orthographic, put = set_orthographic)) bool orthographic;

  __declspec(property(get = get_orthographicSize, put = set_orthographicSize)) float_t orthographicSize;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_overrideSceneCullingMask, put = set_overrideSceneCullingMask)) uint64_t overrideSceneCullingMask;

  __declspec(property(get = get_pixelHeight)) int32_t pixelHeight;

  /// @brief [NativeProperty("ScreenViewportRect")]
  __declspec(property(get = get_pixelRect, put = set_pixelRect)) ::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_pixelWidth)) int32_t pixelWidth;

  __declspec(property(get = get_previousViewProjectionMatrix)) ::UnityEngine::Matrix4x4 previousViewProjectionMatrix;

  __declspec(property(get = get_projectionMatrix, put = set_projectionMatrix)) ::UnityEngine::Matrix4x4 projectionMatrix;

  __declspec(property(get = get_projectionMatrixMode)) ::UnityEngine::Camera_ProjectionMatrixMode projectionMatrixMode;

  /// @brief [NativeProperty("NormalizedViewportRect")]
  __declspec(property(get = get_rect, put = set_rect)) ::UnityEngine::Rect rect;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_renderCloudsInSceneView, put = set_renderCloudsInSceneView)) bool renderCloudsInSceneView;

  __declspec(property(get = get_renderingPath, put = set_renderingPath)) ::UnityEngine::RenderingPath renderingPath;

  __declspec(property(get = get_scaledPixelHeight)) int32_t scaledPixelHeight;

  __declspec(property(get = get_scaledPixelWidth)) int32_t scaledPixelWidth;

  __declspec(property(get = get_scene, put = set_scene)) ::UnityEngine::SceneManagement::Scene scene;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_sceneCullingMask)) uint64_t sceneCullingMask;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_sceneViewFilterMode)) ::UnityEngine::Camera_SceneViewFilterMode sceneViewFilterMode;

  __declspec(property(get = get_sensorSize, put = set_sensorSize)) ::UnityEngine::Vector2 sensorSize;

  __declspec(property(get = get_shutterSpeed, put = set_shutterSpeed)) float_t shutterSpeed;

  __declspec(property(get = get_skyboxMaterial)) ::UnityW<::UnityEngine::Material> skyboxMaterial;

  __declspec(property(get = get_stereoActiveEye)) ::UnityEngine::Camera_MonoOrStereoscopicEye stereoActiveEye;

  __declspec(property(get = get_stereoConvergence, put = set_stereoConvergence)) float_t stereoConvergence;

  __declspec(property(get = get_stereoEnabled)) bool stereoEnabled;

  __declspec(property(get = get_stereoSeparation, put = set_stereoSeparation)) float_t stereoSeparation;

  __declspec(property(get = get_stereoTargetEye, put = set_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask stereoTargetEye;

  /// @brief [NativeProperty("StereoTargetEye")]
  __declspec(property(get = get_stereoTargetEyeInternal, put = set_stereoTargetEyeInternal)) ::UnityEngine::StereoTargetEyeMask stereoTargetEyeInternal;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_targetTexture, put = set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_transparencySortAxis, put = set_transparencySortAxis)) ::UnityEngine::Vector3 transparencySortAxis;

  __declspec(property(get = get_transparencySortMode, put = set_transparencySortMode)) ::UnityEngine::TransparencySortMode transparencySortMode;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_useInteractiveLightBakingData, put = set_useInteractiveLightBakingData)) bool useInteractiveLightBakingData;

  /// @brief [NativeProperty("UseJitteredProjectionMatrixForTransparent")]
  __declspec(property(get = get_useJitteredProjectionMatrixForTransparentRendering,
                      put = set_useJitteredProjectionMatrixForTransparentRendering)) bool useJitteredProjectionMatrixForTransparentRendering;

  __declspec(property(get = get_useOcclusionCulling, put = set_useOcclusionCulling)) bool useOcclusionCulling;

  __declspec(property(get = get_usePhysicalProperties, put = set_usePhysicalProperties)) bool usePhysicalProperties;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldToCameraMatrix, put = set_worldToCameraMatrix)) ::UnityEngine::Matrix4x4 worldToCameraMatrix;

  /// @brief Method AddCommandBuffer, addr 0x6f05048, size 0x1c8, virtual false, abstract: false, final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsync, addr 0x6f05210, size 0x1d0, virtual false, abstract: false, final false
  inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBufferAsync")]
  /// @brief Method AddCommandBufferAsyncImpl, addr 0x6f04dd8, size 0xe8, virtual false, abstract: false, final false
  inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer,
                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method AddCommandBufferAsyncImpl_Injected, addr 0x6f04ec0, size 0x5c, virtual false, abstract: false, final false
  static inline void AddCommandBufferAsyncImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer,
                                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBuffer")]
  /// @brief Method AddCommandBufferImpl, addr 0x6f04cac, size 0xd8, virtual false, abstract: false, final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferImpl_Injected, addr 0x6f04d84, size 0x54, virtual false, abstract: false, final false
  static inline void AddCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// [RequiredByNativeCode]
  /// @brief Method BumpNonSerializedVersion, addr 0x6f05890, size 0x1c, virtual false, abstract: false, final false
  static inline void BumpNonSerializedVersion(::UnityEngine::Camera* cam);

  /// @brief Method CalculateFrustumCorners, addr 0x6f02358, size 0xb4, virtual false, abstract: false, final false
  inline void CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners);

  /// [FreeFunction("CameraScripting::CalculateViewportRayVectors", HasExplicitThis = true)]
  /// @brief Method CalculateFrustumCornersInternal, addr 0x6f0216c, size 0x180, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners);

  /// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x6f022ec, size 0x6c, virtual false, abstract: false, final false
  static inline void CalculateFrustumCornersInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                              ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> outCorners);

  /// [FreeFunction("CameraScripting::CalculateObliqueMatrix", HasExplicitThis = true)]
  /// @brief Method CalculateObliqueMatrix, addr 0x6f015d8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method CalculateObliqueMatrix_Injected, addr 0x6f0169c, size 0x54, virtual false, abstract: false, final false
  static inline void CalculateObliqueMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4 const> clipPlane, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x6f02528, size 0xc, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalProperties(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                     ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, ::UnityEngine::Camera_GateFitParameters gateFitParameters);

  /// [NativeName("CalculateProjectionMatrixFromPhysicalProperties")]
  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x6f0240c, size 0x90, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                             ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                             ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x6f0249c, size 0x8c, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::by_ref<::UnityEngine::Vector2 const> sensorSize,
                                                                                      ::by_ref<::UnityEngine::Vector2 const> lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                      ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// [FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
  /// @brief Method CopyFrom, addr 0x6f047b8, size 0xc0, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method CopyFrom_Injected, addr 0x6f04878, size 0x44, virtual false, abstract: false, final false
  static inline void CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x6f03480, size 0x90, virtual false, abstract: false, final false
  inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered_Injected, addr 0x6f03510, size 0x44, virtual false, abstract: false, final false
  static inline void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye);

  /// [NativeName("FieldOfViewToFocalLength_Safe")]
  /// @brief Method FieldOfViewToFocalLength, addr 0x6f02574, size 0x40, virtual false, abstract: false, final false
  static inline float_t FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPostRender, addr 0x6f05820, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreCull, addr 0x6f05740, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreRender, addr 0x6f057b0, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// [NativeName("FocalLengthToFieldOfView_Safe")]
  /// @brief Method FocalLengthToFieldOfView, addr 0x6f02534, size 0x40, virtual false, abstract: false, final false
  static inline float_t FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize);

  /// @brief Method GetAllCameras, addr 0x6f03b3c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*> cameras);

  /// [FreeFunction("CameraScripting::GetAllCamerasCount")]
  /// @brief Method GetAllCamerasCount, addr 0x6f039b8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasCount();

  /// [FreeFunction("CameraScripting::GetAllCameras")]
  /// @brief Method GetAllCamerasImpl, addr 0x6f039e0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Camera*> cam);

  /// @brief Method GetAllCamerasImpl_Injected, addr 0x6f03a5c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl_Injected(::ArrayW<::UnityEngine::Camera*> cam);

  /// @brief Method GetCameraBufferWarnings, addr 0x6f00aac, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetCameraBufferWarnings();

  /// @brief Method GetCameraBufferWarnings_Injected, addr 0x6f00b2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetCameraBufferWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCommandBuffers, addr 0x6f055a8, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::GetCommandBuffers", HasExplicitThis = true)]
  /// @brief Method GetCommandBuffersImpl, addr 0x6f0566c, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method GetCommandBuffersImpl_Injected, addr 0x6f056fc, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
  /// [FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
  /// @brief Method GetCullingParameters_Internal, addr 0x6f058c4, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                   int32_t managedCullingParametersSize);

  /// @brief Method GetCullingParameters_Internal_Injected, addr 0x6f05974, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal_Injected(::System::IntPtr camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                            int32_t managedCullingParametersSize);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetFilterMode, addr 0x6f03d24, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetFilterMode();

  /// @brief Method GetFilterMode_Injected, addr 0x6f03da4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetFilterMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetFrustumPlaneSizeAt, addr 0x6f01d70, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t distance);

  /// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x6f01e10, size 0x54, virtual false, abstract: false, final false
  static inline void GetFrustumPlaneSizeAt_Injected(::System::IntPtr _unity_self, float_t distance, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method GetGateFittedFieldOfView, addr 0x6eff9c4, size 0x80, virtual false, abstract: false, final false
  inline float_t GetGateFittedFieldOfView();

  /// @brief Method GetGateFittedFieldOfView_Injected, addr 0x6effa44, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGateFittedFieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetGateFittedLensShift, addr 0x6effa80, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetGateFittedLensShift();

  /// @brief Method GetGateFittedLensShift_Injected, addr 0x6effb18, size 0x44, virtual false, abstract: false, final false
  static inline void GetGateFittedLensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("CameraScripting::GetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method GetLayerCullDistances, addr 0x6efd360, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetLayerCullDistances();

  /// @brief Method GetLayerCullDistances_Injected, addr 0x6efd4c0, size 0x44, virtual false, abstract: false, final false
  static inline void GetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetLocalSpaceAim, addr 0x6effb5c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalSpaceAim();

  /// @brief Method GetLocalSpaceAim_Injected, addr 0x6effbfc, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalSpaceAim_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x6f03258, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x6f03318, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoNonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoProjectionMatrix, addr 0x6f03554, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoProjectionMatrix_Injected, addr 0x6f03614, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoViewMatrix, addr 0x6f0336c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoViewMatrix_Injected, addr 0x6f0342c, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [NativeName("HorizontalToVerticalFieldOfView_Safe")]
  /// @brief Method HorizontalToVerticalFieldOfView, addr 0x6f025b4, size 0x40, virtual false, abstract: false, final false
  static inline float_t HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio);

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method OnlyUsedForTesting1, addr 0x6f058ac, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting1();

  /// @brief Method OnlyUsedForTesting2, addr 0x6f058b0, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting2();

  /// @brief Method RemoveAllCommandBuffers, addr 0x6f04be4, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffers();

  /// [NativeName("RemoveAllCommandBuffers")]
  /// @brief Method RemoveAllCommandBuffersImpl, addr 0x6f04a4c, size 0x80, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffersImpl();

  /// @brief Method RemoveAllCommandBuffersImpl_Injected, addr 0x6f04acc, size 0x3c, virtual false, abstract: false, final false
  static inline void RemoveAllCommandBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method RemoveCommandBuffer, addr 0x6f053e0, size 0x1c8, virtual false, abstract: false, final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// [NativeName("RemoveCommandBuffer")]
  /// @brief Method RemoveCommandBufferImpl, addr 0x6f04f1c, size 0xd8, virtual false, abstract: false, final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBufferImpl_Injected, addr 0x6f04ff4, size 0x54, virtual false, abstract: false, final false
  static inline void RemoveCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// @brief Method RemoveCommandBuffers, addr 0x6f04b08, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeName("RemoveCommandBuffers")]
  /// @brief Method RemoveCommandBuffersImpl, addr 0x6f04978, size 0x90, virtual false, abstract: false, final false
  inline void RemoveCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method RemoveCommandBuffersImpl_Injected, addr 0x6f04a08, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
  /// @brief Method Render, addr 0x6f040ac, size 0x80, virtual false, abstract: false, final false
  inline void Render();

  /// [FreeFunction("CameraScripting::RenderDontRestore", HasExplicitThis = true)]
  /// @brief Method RenderDontRestore, addr 0x6f04364, size 0x80, virtual false, abstract: false, final false
  inline void RenderDontRestore();

  /// @brief Method RenderDontRestore_Injected, addr 0x6f043e4, size 0x3c, virtual false, abstract: false, final false
  static inline void RenderDontRestore_Injected(::System::IntPtr _unity_self);

  /// @brief Method RenderToCubemap, addr 0x6f03d10, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6f03d0c, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6f03d1c, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6f03d18, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6f040a8, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [NativeName("RenderToCubemap")]
  /// @brief Method RenderToCubemapEyeImpl, addr 0x6f03f74, size 0xd8, virtual false, abstract: false, final false
  inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemapEyeImpl_Injected, addr 0x6f0404c, size 0x5c, virtual false, abstract: false, final false
  static inline bool RenderToCubemapEyeImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [FreeFunction("CameraScripting::RenderToCubemap", HasExplicitThis = true)]
  /// @brief Method RenderToCubemapImpl, addr 0x6f03bf0, size 0xc8, virtual false, abstract: false, final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// @brief Method RenderToCubemapImpl_Injected, addr 0x6f03cb8, size 0x54, virtual false, abstract: false, final false
  static inline bool RenderToCubemapImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// [FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
  /// @brief Method RenderWithShader, addr 0x6f04168, size 0x1a8, virtual false, abstract: false, final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method RenderWithShader_Injected, addr 0x6f04310, size 0x54, virtual false, abstract: false, final false
  static inline void RenderWithShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method Render_Injected, addr 0x6f0412c, size 0x3c, virtual false, abstract: false, final false
  static inline void Render_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset, addr 0x6efb108, size 0x80, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetAspect, addr 0x6efc3f8, size 0x80, virtual false, abstract: false, final false
  inline void ResetAspect();

  /// @brief Method ResetAspect_Injected, addr 0x6efc478, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetAspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCullingMatrix, addr 0x6efda3c, size 0x80, virtual false, abstract: false, final false
  inline void ResetCullingMatrix();

  /// @brief Method ResetCullingMatrix_Injected, addr 0x6efdabc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCullingMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetProjectionMatrix, addr 0x6f0151c, size 0x80, virtual false, abstract: false, final false
  inline void ResetProjectionMatrix();

  /// @brief Method ResetProjectionMatrix_Injected, addr 0x6f0159c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetProjectionMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetReplacementShader, addr 0x6efe360, size 0x80, virtual false, abstract: false, final false
  inline void ResetReplacementShader();

  /// @brief Method ResetReplacementShader_Injected, addr 0x6efe3e0, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetReplacementShader_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoProjectionMatrices, addr 0x6f03754, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoProjectionMatrices();

  /// @brief Method ResetStereoProjectionMatrices_Injected, addr 0x6f037d4, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoProjectionMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoViewMatrices, addr 0x6f038fc, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoViewMatrices();

  /// @brief Method ResetStereoViewMatrices_Injected, addr 0x6f0397c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoViewMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetTransparencySortSettings, addr 0x6efc00c, size 0x80, virtual false, abstract: false, final false
  inline void ResetTransparencySortSettings();

  /// @brief Method ResetTransparencySortSettings_Injected, addr 0x6efc08c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetTransparencySortSettings_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetWorldToCameraMatrix, addr 0x6f01460, size 0x80, virtual false, abstract: false, final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method ResetWorldToCameraMatrix_Injected, addr 0x6f014e0, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetWorldToCameraMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset_Injected, addr 0x6efb188, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset_Injected(::System::IntPtr _unity_self);

  /// @brief Method ScreenPointToRay, addr 0x6f01fe8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x6f02138, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ScreenPointToRay, addr 0x6f02108, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay_Injected, addr 0x6f020ac, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                               ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ScreenToViewportPoint, addr 0x6f01b70, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint_Injected, addr 0x6f01c1c, size 0x54, virtual false, abstract: false, final false
  static inline void ScreenToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToWorldPoint, addr 0x6f01b68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToWorldPoint, addr 0x6f01a38, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenToWorldPoint_Injected, addr 0x6f01af4, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// [FreeFunction("CameraScripting::SetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method SetLayerCullDistances, addr 0x6efd504, size 0x120, virtual false, abstract: false, final false
  inline void SetLayerCullDistances(/* [NotNull] */ ::ArrayW<float_t> d);

  /// @brief Method SetLayerCullDistances_Injected, addr 0x6efd624, size 0x44, virtual false, abstract: false, final false
  static inline void SetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> d);

  /// @brief Method SetReplacementShader, addr 0x6efe164, size 0x1a8, virtual false, abstract: false, final false
  inline void SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method SetReplacementShader_Injected, addr 0x6efe30c, size 0x54, virtual false, abstract: false, final false
  static inline void SetReplacementShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method SetStereoProjectionMatrix, addr 0x6f03668, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoProjectionMatrix_Injected, addr 0x6f03700, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  /// @brief Method SetStereoViewMatrix, addr 0x6f03810, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoViewMatrix_Injected, addr 0x6f038a8, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  /// @brief Method SetTargetBuffers, addr 0x6f00aa8, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffers, addr 0x6f00944, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersImpl, addr 0x6f00854, size 0x9c, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersImpl_Injected, addr 0x6f008f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer const> color, ::by_ref<::UnityEngine::RenderBuffer const> depth);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersMRTImpl, addr 0x6f00948, size 0x10c, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer> color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x6f00a54, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersMRTImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> color, ::by_ref<::UnityEngine::RenderBuffer const> depth);

  /// [FreeFunction("CameraScripting::SetupCurrent")]
  /// @brief Method SetupCurrent, addr 0x6f046fc, size 0x80, virtual false, abstract: false, final false
  static inline void SetupCurrent(::UnityEngine::Camera* cur);

  /// @brief Method SetupCurrent_Injected, addr 0x6f0477c, size 0x3c, virtual false, abstract: false, final false
  static inline void SetupCurrent_Injected(::System::IntPtr cur);

  /// [FreeFunction("CameraScripting::SubmitBuiltInObjectIDRenderRequest", HasExplicitThis = true)]
  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SubmitBuiltInObjectIDRenderRequest, addr 0x6f044f4, size 0xe0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture* target, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                                      int32_t depthSlice);

  /// @brief Method SubmitBuiltInObjectIDRenderRequest_Injected, addr 0x6f045d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest_Injected(::System::IntPtr _unity_self, ::System::IntPtr target, int32_t mipLevel,
                                                                                                      ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename RequestData> inline void SubmitRenderRequest(RequestData renderRequest);

  /// [FreeFunction("CameraScripting::SubmitRenderRequests", HasExplicitThis = true)]
  /// @brief Method SubmitRenderRequestsInternal, addr 0x6f04420, size 0x90, virtual false, abstract: false, final false
  inline void SubmitRenderRequestsInternal(::System::Object* requests);

  /// @brief Method SubmitRenderRequestsInternal_Injected, addr 0x6f044b0, size 0x44, virtual false, abstract: false, final false
  static inline void SubmitRenderRequestsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* requests);

  /// @brief Method TryGetCullingParameters, addr 0x6f058b4, size 0x10, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method TryGetCullingParameters, addr 0x6f0596c, size 0x8, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method VerticalToHorizontalFieldOfView, addr 0x6f025f4, size 0x40, virtual false, abstract: false, final false
  static inline float_t VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio);

  /// @brief Method ViewportPointToRay, addr 0x6f01e64, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x6f01fb4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ViewportPointToRay, addr 0x6f01f84, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay_Injected, addr 0x6f01f28, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ViewportToScreenPoint, addr 0x6f01c70, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToScreenPoint_Injected, addr 0x6f01d1c, size 0x54, virtual false, abstract: false, final false
  static inline void ViewportToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint, addr 0x6f01b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToWorldPoint, addr 0x6f01920, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint_Injected, addr 0x6f019dc, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToScreenPoint, addr 0x6f01b50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToScreenPoint, addr 0x6f016f0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint_Injected, addr 0x6f017ac, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint, addr 0x6f01b58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint, addr 0x6f01808, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint_Injected, addr 0x6f018c4, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  constexpr uint32_t const& __cordl_internal_get_m_NonSerializedVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_NonSerializedVersion();

  constexpr void __cordl_internal_set_m_NonSerializedVersion(uint32_t value);

  /// @brief Method .ctor, addr 0x6efa9f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender();

  /// @brief Method get_PreviewCullingLayer, addr 0x6efd6d4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_PreviewCullingLayer();

  /// [NativeName("GetCurrentTargetTexture")]
  /// @brief Method get_activeTexture, addr 0x6f00538, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture();

  /// @brief Method get_activeTexture_Injected, addr 0x6f00688, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_activeTexture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("CalculateRenderingPath")]
  /// @brief Method get_actualRenderingPath, addr 0x6efb04c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method get_actualRenderingPath_Injected, addr 0x6efb0cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_actualRenderingPath_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allCameras, addr 0x6f03ac0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_allCameras();

  /// @brief Method get_allCamerasCount, addr 0x6f03a98, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method get_allowDynamicResolution, addr 0x6efb4e4, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowDynamicResolution();

  /// @brief Method get_allowDynamicResolution_Injected, addr 0x6efb564, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowDynamicResolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowHDR, addr 0x6efb1c4, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowHDR();

  /// @brief Method get_allowHDR_Injected, addr 0x6efb244, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowHDR_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowMSAA, addr 0x6efb354, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowMSAA();

  /// @brief Method get_allowMSAA_Injected, addr 0x6efb3d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowMSAA_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_anamorphism, addr 0x6eff334, size 0x80, virtual false, abstract: false, final false
  inline float_t get_anamorphism();

  /// @brief Method get_anamorphism_Injected, addr 0x6eff3b4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_anamorphism_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aperture, addr 0x6efe990, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aperture();

  /// @brief Method get_aperture_Injected, addr 0x6efea10, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aperture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("AreVRStereoViewMatricesWithinSingleCullTolerance")]
  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x6f02e50, size 0x80, virtual false, abstract: false, final false
  inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance();

  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected, addr 0x6f02ed0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aspect, addr 0x6efc260, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method get_aspect_Injected, addr 0x6efc2e0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_backgroundColor, addr 0x6efdaf8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x6efdb94, size 0x44, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_barrelClipping, addr 0x6eff19c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_barrelClipping();

  /// @brief Method get_barrelClipping_Injected, addr 0x6eff21c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_barrelClipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bladeCount, addr 0x6efee58, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bladeCount();

  /// @brief Method get_bladeCount_Injected, addr 0x6efeed8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bladeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cameraToWorldMatrix, addr 0x6f00b68, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix();

  /// @brief Method get_cameraToWorldMatrix_Injected, addr 0x6f00c20, size 0x44, virtual false, abstract: false, final false
  static inline void get_cameraToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_cameraType, addr 0x6efcc68, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraType get_cameraType();

  /// @brief Method get_cameraType_Injected, addr 0x6efcce8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraType get_cameraType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearFlags, addr 0x6efdcb4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method get_clearFlags_Injected, addr 0x6efdd34, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraClearFlags get_clearFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearStencilAfterLightingPass, addr 0x6efdfd4, size 0x80, virtual false, abstract: false, final false
  inline bool get_clearStencilAfterLightingPass();

  /// @brief Method get_clearStencilAfterLightingPass_Injected, addr 0x6efe054, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_commandBufferCount, addr 0x6f048bc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_commandBufferCount();

  /// @brief Method get_commandBufferCount_Injected, addr 0x6f0493c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_commandBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMask, addr 0x6efc598, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMask_Injected, addr 0x6efc618, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMatrix, addr 0x6efd86c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cullingMatrix();

  /// @brief Method get_cullingMatrix_Injected, addr 0x6efd924, size 0x44, virtual false, abstract: false, final false
  static inline void get_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_current, addr 0x6f02770, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_current();

  /// [FreeFunction("GetCurrentCameraPPtr")]
  /// @brief Method get_currentInternal, addr 0x6f02774, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_currentInternal();

  /// @brief Method get_currentInternal_Injected, addr 0x6f02888, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_currentInternal_Injected();

  /// @brief Method get_curvature, addr 0x6efefe8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_curvature();

  /// @brief Method get_curvature_Injected, addr 0x6eff080, size 0x44, virtual false, abstract: false, final false
  static inline void get_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_depth, addr 0x6efc0c8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// @brief Method get_depthTextureMode, addr 0x6efde44, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method get_depthTextureMode_Injected, addr 0x6efdec4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DepthTextureMode get_depthTextureMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_depth_Injected, addr 0x6efc148, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_depth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_eventMask, addr 0x6efc728, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_eventMask();

  /// @brief Method get_eventMask_Injected, addr 0x6efc7a8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_eventMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_farClipPlane, addr 0x6efab8c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_farClipPlane_Injected, addr 0x6efac0c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_farClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fieldOfView, addr 0x6efad24, size 0x80, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method get_fieldOfView_Injected, addr 0x6efada4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_fieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focalLength, addr 0x6efecc0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focalLength();

  /// @brief Method get_focalLength_Injected, addr 0x6efed40, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focalLength_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focusDistance, addr 0x6efeb28, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focusDistance();

  /// @brief Method get_focusDistance_Injected, addr 0x6efeba8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focusDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_forceIntoRenderTexture, addr 0x6efb674, size 0x80, virtual false, abstract: false, final false
  inline bool get_forceIntoRenderTexture();

  /// @brief Method get_forceIntoRenderTexture_Injected, addr 0x6efb6f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gateFit, addr 0x6eff834, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_gateFit();

  /// @brief Method get_gateFit_Injected, addr 0x6eff8b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_GateFitMode get_gateFit_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsProcessingRenderRequest")]
  /// @brief Method get_isProcessingRenderRequest, addr 0x6f04640, size 0x80, virtual false, abstract: false, final false
  inline bool get_isProcessingRenderRequest();

  /// @brief Method get_isProcessingRenderRequest_Injected, addr 0x6f046c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isProcessingRenderRequest_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_iso, addr 0x6efe668, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_iso();

  /// @brief Method get_iso_Injected, addr 0x6efe6e8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_iso_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCullDistances, addr 0x6efd668, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> get_layerCullDistances();

  /// @brief Method get_layerCullSpherical, addr 0x6efc8b8, size 0x4, virtual false, abstract: false, final false
  inline bool get_layerCullSpherical();

  /// @brief Method get_layerCullSphericalInternal, addr 0x6efc8bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_layerCullSphericalInternal();

  /// @brief Method get_layerCullSphericalInternal_Injected, addr 0x6efcbe8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lensShift, addr 0x6eff680, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lensShift();

  /// @brief Method get_lensShift_Injected, addr 0x6eff718, size 0x44, virtual false, abstract: false, final false
  static inline void get_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("FindMainCamera")]
  /// @brief Method get_main, addr 0x6f02634, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_main();

  /// @brief Method get_main_Injected, addr 0x6f02748, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_main_Injected();

  /// @brief Method get_nearClipPlane, addr 0x6efa9f4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nearClipPlane_Injected, addr 0x6efaa74, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_nearClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_nonJitteredProjectionMatrix, addr 0x6f01004, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix();

  /// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x6f010bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_opaqueSortMode, addr 0x6efbb2c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();

  /// @brief Method get_opaqueSortMode_Injected, addr 0x6efbbac, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic, addr 0x6efb99c, size 0x80, virtual false, abstract: false, final false
  inline bool get_orthographic();

  /// @brief Method get_orthographicSize, addr 0x6efb804, size 0x80, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method get_orthographicSize_Injected, addr 0x6efb884, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_orthographicSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic_Injected, addr 0x6efba1c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_orthographic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_overrideSceneCullingMask, addr 0x6efcf84, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_overrideSceneCullingMask();

  /// @brief Method get_overrideSceneCullingMask_Injected, addr 0x6efd004, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_pixelHeight, addr 0x6f00074, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_pixelHeight_Injected, addr 0x6f000f4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelRect, addr 0x6effdfc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_pixelRect_Injected, addr 0x6effe98, size 0x44, virtual false, abstract: false, final false
  static inline void get_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// [FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_pixelWidth, addr 0x6efffb8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_pixelWidth_Injected, addr 0x6f00038, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_previousViewProjectionMatrix, addr 0x6f01364, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x6f0141c, size 0x44, virtual false, abstract: false, final false
  static inline void get_previousViewProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_projectionMatrix, addr 0x6f00e34, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method get_projectionMatrixMode, addr 0x6efe41c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode();

  /// @brief Method get_projectionMatrixMode_Injected, addr 0x6efe49c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMatrix_Injected, addr 0x6f00eec, size 0x44, virtual false, abstract: false, final false
  static inline void get_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_rect, addr 0x6effc40, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x6effcdc, size 0x44, virtual false, abstract: false, final false
  static inline void get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// @brief Method get_renderCloudsInSceneView, addr 0x6f03de4, size 0x80, virtual false, abstract: false, final false
  inline bool get_renderCloudsInSceneView();

  /// @brief Method get_renderCloudsInSceneView_Injected, addr 0x6f03e64, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderingPath, addr 0x6efaebc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_renderingPath();

  /// @brief Method get_renderingPath_Injected, addr 0x6efaf3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_renderingPath_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelHeight, addr 0x6f001ec, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelHeight();

  /// @brief Method get_scaledPixelHeight_Injected, addr 0x6f0026c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelHeight_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelWidth, addr 0x6f00130, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelWidth();

  /// @brief Method get_scaledPixelWidth_Injected, addr 0x6f001b0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelWidth_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScene", HasExplicitThis = true)]
  /// @brief Method get_scene, addr 0x6f028b0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x6efd114, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneCullingMask_Injected, addr 0x6efd194, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sceneViewFilterMode, addr 0x6f03de0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_SceneViewFilterMode get_sceneViewFilterMode();

  /// @brief Method get_scene_Injected, addr 0x6f02948, size 0x44, virtual false, abstract: false, final false
  static inline void get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_sensorSize, addr 0x6eff4cc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sensorSize();

  /// @brief Method get_sensorSize_Injected, addr 0x6eff564, size 0x44, virtual false, abstract: false, final false
  static inline void get_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_shutterSpeed, addr 0x6efe7f8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shutterSpeed();

  /// @brief Method get_shutterSpeed_Injected, addr 0x6efe878, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shutterSpeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skyboxMaterial, addr 0x6efcdf8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial();

  /// @brief Method get_skyboxMaterial_Injected, addr 0x6efcf48, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_skyboxMaterial_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetStereoActiveEye", HasExplicitThis = true)]
  /// @brief Method get_stereoActiveEye, addr 0x6f0319c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye();

  /// @brief Method get_stereoActiveEye_Injected, addr 0x6f0321c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoConvergence, addr 0x6f02cb8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoConvergence();

  /// @brief Method get_stereoConvergence_Injected, addr 0x6f02d38, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoConvergence_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetStereoEnabledForBuiltInOrSRP")]
  /// @brief Method get_stereoEnabled, addr 0x6f02a64, size 0x80, virtual false, abstract: false, final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoEnabled_Injected, addr 0x6f02ae4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stereoEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoSeparation, addr 0x6f02b20, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoSeparation();

  /// @brief Method get_stereoSeparation_Injected, addr 0x6f02ba0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoSeparation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoTargetEye, addr 0x6f02f0c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method get_stereoTargetEyeInternal, addr 0x6f02f10, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal();

  /// @brief Method get_stereoTargetEyeInternal_Injected, addr 0x6f0311c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetDisplay, addr 0x6f006c4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetDisplay_Injected, addr 0x6f00744, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_targetDisplay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetTexture, addr 0x6f002a8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_targetTexture_Injected, addr 0x6f003f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_transparencySortAxis, addr 0x6efbe4c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method get_transparencySortAxis_Injected, addr 0x6efbeec, size 0x44, virtual false, abstract: false, final false
  static inline void get_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_transparencySortMode, addr 0x6efbcbc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method get_transparencySortMode_Injected, addr 0x6efbd3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TransparencySortMode get_transparencySortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useInteractiveLightBakingData, addr 0x6efd1d0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useInteractiveLightBakingData();

  /// @brief Method get_useInteractiveLightBakingData_Injected, addr 0x6efd250, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x6f011d4, size 0x80, virtual false, abstract: false, final false
  inline bool get_useJitteredProjectionMatrixForTransparentRendering();

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6f01254, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useOcclusionCulling, addr 0x6efd6dc, size 0x80, virtual false, abstract: false, final false
  inline bool get_useOcclusionCulling();

  /// @brief Method get_useOcclusionCulling_Injected, addr 0x6efd75c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useOcclusionCulling_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_usePhysicalProperties, addr 0x6efe4d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_usePhysicalProperties();

  /// @brief Method get_usePhysicalProperties_Injected, addr 0x6efe558, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_usePhysicalProperties_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6efc4b4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6efc554, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldToCameraMatrix, addr 0x6f00c64, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method get_worldToCameraMatrix_Injected, addr 0x6f00d1c, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback* value);

  /// @brief Method set_allowDynamicResolution, addr 0x6efb5a0, size 0x90, virtual false, abstract: false, final false
  inline void set_allowDynamicResolution(bool value);

  /// @brief Method set_allowDynamicResolution_Injected, addr 0x6efb630, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowDynamicResolution_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowHDR, addr 0x6efb280, size 0x90, virtual false, abstract: false, final false
  inline void set_allowHDR(bool value);

  /// @brief Method set_allowHDR_Injected, addr 0x6efb310, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowHDR_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowMSAA, addr 0x6efb410, size 0x90, virtual false, abstract: false, final false
  inline void set_allowMSAA(bool value);

  /// @brief Method set_allowMSAA_Injected, addr 0x6efb4a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowMSAA_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_anamorphism, addr 0x6eff3f0, size 0x90, virtual false, abstract: false, final false
  inline void set_anamorphism(float_t value);

  /// @brief Method set_anamorphism_Injected, addr 0x6eff480, size 0x4c, virtual false, abstract: false, final false
  static inline void set_anamorphism_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aperture, addr 0x6efea4c, size 0x90, virtual false, abstract: false, final false
  inline void set_aperture(float_t value);

  /// @brief Method set_aperture_Injected, addr 0x6efeadc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aperture_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aspect, addr 0x6efc31c, size 0x90, virtual false, abstract: false, final false
  inline void set_aspect(float_t value);

  /// @brief Method set_aspect_Injected, addr 0x6efc3ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aspect_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_backgroundColor, addr 0x6efdbd8, size 0x98, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x6efdc70, size 0x44, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_barrelClipping, addr 0x6eff258, size 0x90, virtual false, abstract: false, final false
  inline void set_barrelClipping(float_t value);

  /// @brief Method set_barrelClipping_Injected, addr 0x6eff2e8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_barrelClipping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_bladeCount, addr 0x6efef14, size 0x90, virtual false, abstract: false, final false
  inline void set_bladeCount(int32_t value);

  /// @brief Method set_bladeCount_Injected, addr 0x6efefa4, size 0x44, virtual false, abstract: false, final false
  static inline void set_bladeCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cameraType, addr 0x6efcd24, size 0x90, virtual false, abstract: false, final false
  inline void set_cameraType(::UnityEngine::CameraType value);

  /// @brief Method set_cameraType_Injected, addr 0x6efcdb4, size 0x44, virtual false, abstract: false, final false
  static inline void set_cameraType_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraType value);

  /// @brief Method set_clearFlags, addr 0x6efdd70, size 0x90, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearFlags_Injected, addr 0x6efde00, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearStencilAfterLightingPass, addr 0x6efe090, size 0x90, virtual false, abstract: false, final false
  inline void set_clearStencilAfterLightingPass(bool value);

  /// @brief Method set_clearStencilAfterLightingPass_Injected, addr 0x6efe120, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cullingMask, addr 0x6efc654, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMask_Injected, addr 0x6efc6e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cullingMatrix, addr 0x6efd968, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_cullingMatrix_Injected, addr 0x6efd9f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_curvature, addr 0x6eff0c4, size 0x94, virtual false, abstract: false, final false
  inline void set_curvature(::UnityEngine::Vector2 value);

  /// @brief Method set_curvature_Injected, addr 0x6eff158, size 0x44, virtual false, abstract: false, final false
  static inline void set_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_depth, addr 0x6efc184, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(float_t value);

  /// @brief Method set_depthTextureMode, addr 0x6efdf00, size 0x90, virtual false, abstract: false, final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depthTextureMode_Injected, addr 0x6efdf90, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthTextureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depth_Injected, addr 0x6efc214, size 0x4c, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_eventMask, addr 0x6efc7e4, size 0x90, virtual false, abstract: false, final false
  inline void set_eventMask(int32_t value);

  /// @brief Method set_eventMask_Injected, addr 0x6efc874, size 0x44, virtual false, abstract: false, final false
  static inline void set_eventMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_farClipPlane, addr 0x6efac48, size 0x90, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_farClipPlane_Injected, addr 0x6efacd8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fieldOfView, addr 0x6efade0, size 0x90, virtual false, abstract: false, final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method set_fieldOfView_Injected, addr 0x6efae70, size 0x4c, virtual false, abstract: false, final false
  static inline void set_fieldOfView_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focalLength, addr 0x6efed7c, size 0x90, virtual false, abstract: false, final false
  inline void set_focalLength(float_t value);

  /// @brief Method set_focalLength_Injected, addr 0x6efee0c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focalLength_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focusDistance, addr 0x6efebe4, size 0x90, virtual false, abstract: false, final false
  inline void set_focusDistance(float_t value);

  /// @brief Method set_focusDistance_Injected, addr 0x6efec74, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focusDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_forceIntoRenderTexture, addr 0x6efb730, size 0x90, virtual false, abstract: false, final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method set_forceIntoRenderTexture_Injected, addr 0x6efb7c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_gateFit, addr 0x6eff8f0, size 0x90, virtual false, abstract: false, final false
  inline void set_gateFit(::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_gateFit_Injected, addr 0x6eff980, size 0x44, virtual false, abstract: false, final false
  static inline void set_gateFit_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_iso, addr 0x6efe724, size 0x90, virtual false, abstract: false, final false
  inline void set_iso(int32_t value);

  /// @brief Method set_iso_Injected, addr 0x6efe7b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_iso_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_layerCullDistances, addr 0x6efd66c, size 0x68, virtual false, abstract: false, final false
  inline void set_layerCullDistances(::ArrayW<float_t> value);

  /// @brief Method set_layerCullSpherical, addr 0x6efc93c, size 0xfc, virtual false, abstract: false, final false
  inline void set_layerCullSpherical(bool value);

  /// @brief Method set_layerCullSphericalInternal, addr 0x6efcb58, size 0x90, virtual false, abstract: false, final false
  inline void set_layerCullSphericalInternal(bool value);

  /// @brief Method set_layerCullSphericalInternal_Injected, addr 0x6efcc24, size 0x44, virtual false, abstract: false, final false
  static inline void set_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lensShift, addr 0x6eff75c, size 0x94, virtual false, abstract: false, final false
  inline void set_lensShift(::UnityEngine::Vector2 value);

  /// @brief Method set_lensShift_Injected, addr 0x6eff7f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_nearClipPlane, addr 0x6efaab0, size 0x90, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nearClipPlane_Injected, addr 0x6efab40, size 0x4c, virtual false, abstract: false, final false
  static inline void set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_nonJitteredProjectionMatrix, addr 0x6f01100, size 0x90, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x6f01190, size 0x44, virtual false, abstract: false, final false
  static inline void set_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_opaqueSortMode, addr 0x6efbbe8, size 0x90, virtual false, abstract: false, final false
  inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_opaqueSortMode_Injected, addr 0x6efbc78, size 0x44, virtual false, abstract: false, final false
  static inline void set_opaqueSortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_orthographic, addr 0x6efba58, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographic(bool value);

  /// @brief Method set_orthographicSize, addr 0x6efb8c0, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method set_orthographicSize_Injected, addr 0x6efb950, size 0x4c, virtual false, abstract: false, final false
  static inline void set_orthographicSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_orthographic_Injected, addr 0x6efbae8, size 0x44, virtual false, abstract: false, final false
  static inline void set_orthographic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_overrideSceneCullingMask, addr 0x6efd040, size 0x90, virtual false, abstract: false, final false
  inline void set_overrideSceneCullingMask(uint64_t value);

  /// @brief Method set_overrideSceneCullingMask_Injected, addr 0x6efd0d0, size 0x44, virtual false, abstract: false, final false
  static inline void set_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self, uint64_t value);

  /// @brief Method set_pixelRect, addr 0x6effedc, size 0x98, virtual false, abstract: false, final false
  inline void set_pixelRect(::UnityEngine::Rect value);

  /// @brief Method set_pixelRect_Injected, addr 0x6efff74, size 0x44, virtual false, abstract: false, final false
  static inline void set_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> value);

  /// @brief Method set_projectionMatrix, addr 0x6f00f30, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_projectionMatrix_Injected, addr 0x6f00fc0, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_rect, addr 0x6effd20, size 0x98, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_rect_Injected, addr 0x6effdb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> value);

  /// @brief Method set_renderCloudsInSceneView, addr 0x6f03ea0, size 0x90, virtual false, abstract: false, final false
  inline void set_renderCloudsInSceneView(bool value);

  /// @brief Method set_renderCloudsInSceneView_Injected, addr 0x6f03f30, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_renderingPath, addr 0x6efaf78, size 0x90, virtual false, abstract: false, final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method set_renderingPath_Injected, addr 0x6efb008, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderingPath_Injected(::System::IntPtr _unity_self, ::UnityEngine::RenderingPath value);

  /// [FreeFunction("CameraScripting::SetScene", HasExplicitThis = true)]
  /// @brief Method set_scene, addr 0x6f0298c, size 0x94, virtual false, abstract: false, final false
  inline void set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method set_scene_Injected, addr 0x6f02a20, size 0x44, virtual false, abstract: false, final false
  static inline void set_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene const> value);

  /// @brief Method set_sensorSize, addr 0x6eff5a8, size 0x94, virtual false, abstract: false, final false
  inline void set_sensorSize(::UnityEngine::Vector2 value);

  /// @brief Method set_sensorSize_Injected, addr 0x6eff63c, size 0x44, virtual false, abstract: false, final false
  static inline void set_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_shutterSpeed, addr 0x6efe8b4, size 0x90, virtual false, abstract: false, final false
  inline void set_shutterSpeed(float_t value);

  /// @brief Method set_shutterSpeed_Injected, addr 0x6efe944, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shutterSpeed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoConvergence, addr 0x6f02d74, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoConvergence(float_t value);

  /// @brief Method set_stereoConvergence_Injected, addr 0x6f02e04, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoConvergence_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoSeparation, addr 0x6f02bdc, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoSeparation(float_t value);

  /// @brief Method set_stereoSeparation_Injected, addr 0x6f02c6c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoSeparation_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoTargetEye, addr 0x6f02f90, size 0xfc, virtual false, abstract: false, final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal, addr 0x6f0308c, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoTargetEyeInternal(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal_Injected, addr 0x6f03158, size 0x44, virtual false, abstract: false, final false
  static inline void set_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_targetDisplay, addr 0x6f00780, size 0x90, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetDisplay_Injected, addr 0x6f00810, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetDisplay_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_targetTexture, addr 0x6f00434, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_targetTexture_Injected, addr 0x6f004f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_transparencySortAxis, addr 0x6efbf30, size 0x98, virtual false, abstract: false, final false
  inline void set_transparencySortAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_transparencySortAxis_Injected, addr 0x6efbfc8, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_transparencySortMode, addr 0x6efbd78, size 0x90, virtual false, abstract: false, final false
  inline void set_transparencySortMode(::UnityEngine::TransparencySortMode value);

  /// @brief Method set_transparencySortMode_Injected, addr 0x6efbe08, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::TransparencySortMode value);

  /// @brief Method set_useInteractiveLightBakingData, addr 0x6efd28c, size 0x90, virtual false, abstract: false, final false
  inline void set_useInteractiveLightBakingData(bool value);

  /// @brief Method set_useInteractiveLightBakingData_Injected, addr 0x6efd31c, size 0x44, virtual false, abstract: false, final false
  static inline void set_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x6f01290, size 0x90, virtual false, abstract: false, final false
  inline void set_useJitteredProjectionMatrixForTransparentRendering(bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6f01320, size 0x44, virtual false, abstract: false, final false
  static inline void set_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useOcclusionCulling, addr 0x6efd798, size 0x90, virtual false, abstract: false, final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method set_useOcclusionCulling_Injected, addr 0x6efd828, size 0x44, virtual false, abstract: false, final false
  static inline void set_useOcclusionCulling_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_usePhysicalProperties, addr 0x6efe594, size 0x90, virtual false, abstract: false, final false
  inline void set_usePhysicalProperties(bool value);

  /// @brief Method set_usePhysicalProperties_Injected, addr 0x6efe624, size 0x44, virtual false, abstract: false, final false
  static inline void set_usePhysicalProperties_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_worldToCameraMatrix, addr 0x6f00d60, size 0x90, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_worldToCameraMatrix_Injected, addr 0x6f00df0, size 0x44, virtual false, abstract: false, final false
  static inline void set_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Camera(Camera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Camera(Camera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9669 };

  /// @brief Field kMaxAperture offset 0xffffffff size 0x4
  static constexpr float_t kMaxAperture{ static_cast<float_t>(32.0f) };

  /// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxBladeCount{ static_cast<int32_t>(0xb) };

  /// @brief Field kMinAperture offset 0xffffffff size 0x4
  static constexpr float_t kMinAperture{ static_cast<float_t>(0.7f) };

  /// @brief Field kMinBladeCount offset 0xffffffff size 0x4
  static constexpr int32_t kMinBladeCount{ static_cast<int32_t>(0x3) };

  /// @brief Field m_NonSerializedVersion, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_NonSerializedVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera, ___m_NonSerializedVersion) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera) == 0x20, "Size mismatch!");

} // namespace UnityEngine
