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
  /// @brief Method get_aspect, addr 0x6f048f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_mode, addr 0x6f048f0, size 0x8, virtual false, abstract: false, final false
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
  /// @brief Method Invoke, addr 0x6f0497c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Camera* cam);

  static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6f04900, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Method AddCommandBuffer, addr 0x6f03f68, size 0x1c8, virtual false, abstract: false, final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsync, addr 0x6f04130, size 0x1d0, virtual false, abstract: false, final false
  inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBufferAsync")]
  /// @brief Method AddCommandBufferAsyncImpl, addr 0x6f03cf8, size 0xe8, virtual false, abstract: false, final false
  inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer,
                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method AddCommandBufferAsyncImpl_Injected, addr 0x6f03de0, size 0x5c, virtual false, abstract: false, final false
  static inline void AddCommandBufferAsyncImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer,
                                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBuffer")]
  /// @brief Method AddCommandBufferImpl, addr 0x6f03bcc, size 0xd8, virtual false, abstract: false, final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferImpl_Injected, addr 0x6f03ca4, size 0x54, virtual false, abstract: false, final false
  static inline void AddCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// [RequiredByNativeCode]
  /// @brief Method BumpNonSerializedVersion, addr 0x6f047b0, size 0x1c, virtual false, abstract: false, final false
  static inline void BumpNonSerializedVersion(::UnityEngine::Camera* cam);

  /// @brief Method CalculateFrustumCorners, addr 0x6f01278, size 0xb4, virtual false, abstract: false, final false
  inline void CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners);

  /// [FreeFunction("CameraScripting::CalculateViewportRayVectors", HasExplicitThis = true)]
  /// @brief Method CalculateFrustumCornersInternal, addr 0x6f0108c, size 0x180, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners);

  /// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x6f0120c, size 0x6c, virtual false, abstract: false, final false
  static inline void CalculateFrustumCornersInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                              ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> outCorners);

  /// [FreeFunction("CameraScripting::CalculateObliqueMatrix", HasExplicitThis = true)]
  /// @brief Method CalculateObliqueMatrix, addr 0x6f004f8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method CalculateObliqueMatrix_Injected, addr 0x6f005bc, size 0x54, virtual false, abstract: false, final false
  static inline void CalculateObliqueMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4 const> clipPlane, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x6f01448, size 0xc, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalProperties(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                     ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, ::UnityEngine::Camera_GateFitParameters gateFitParameters);

  /// [NativeName("CalculateProjectionMatrixFromPhysicalProperties")]
  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x6f0132c, size 0x90, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                             ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                             ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x6f013bc, size 0x8c, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::by_ref<::UnityEngine::Vector2 const> sensorSize,
                                                                                      ::by_ref<::UnityEngine::Vector2 const> lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                      ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// [FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
  /// @brief Method CopyFrom, addr 0x6f036d8, size 0xc0, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method CopyFrom_Injected, addr 0x6f03798, size 0x44, virtual false, abstract: false, final false
  static inline void CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x6f023a0, size 0x90, virtual false, abstract: false, final false
  inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered_Injected, addr 0x6f02430, size 0x44, virtual false, abstract: false, final false
  static inline void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye);

  /// [NativeName("FieldOfViewToFocalLength_Safe")]
  /// @brief Method FieldOfViewToFocalLength, addr 0x6f01494, size 0x40, virtual false, abstract: false, final false
  static inline float_t FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPostRender, addr 0x6f04740, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreCull, addr 0x6f04660, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreRender, addr 0x6f046d0, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// [NativeName("FocalLengthToFieldOfView_Safe")]
  /// @brief Method FocalLengthToFieldOfView, addr 0x6f01454, size 0x40, virtual false, abstract: false, final false
  static inline float_t FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize);

  /// @brief Method GetAllCameras, addr 0x6f02a5c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*> cameras);

  /// [FreeFunction("CameraScripting::GetAllCamerasCount")]
  /// @brief Method GetAllCamerasCount, addr 0x6f028d8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasCount();

  /// [FreeFunction("CameraScripting::GetAllCameras")]
  /// @brief Method GetAllCamerasImpl, addr 0x6f02900, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Camera*> cam);

  /// @brief Method GetAllCamerasImpl_Injected, addr 0x6f0297c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl_Injected(::ArrayW<::UnityEngine::Camera*> cam);

  /// @brief Method GetCameraBufferWarnings, addr 0x6eff9cc, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetCameraBufferWarnings();

  /// @brief Method GetCameraBufferWarnings_Injected, addr 0x6effa4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetCameraBufferWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCommandBuffers, addr 0x6f044c8, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::GetCommandBuffers", HasExplicitThis = true)]
  /// @brief Method GetCommandBuffersImpl, addr 0x6f0458c, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method GetCommandBuffersImpl_Injected, addr 0x6f0461c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
  /// [FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
  /// @brief Method GetCullingParameters_Internal, addr 0x6f047e4, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                   int32_t managedCullingParametersSize);

  /// @brief Method GetCullingParameters_Internal_Injected, addr 0x6f04894, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal_Injected(::System::IntPtr camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                            int32_t managedCullingParametersSize);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetFilterMode, addr 0x6f02c44, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetFilterMode();

  /// @brief Method GetFilterMode_Injected, addr 0x6f02cc4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetFilterMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetFrustumPlaneSizeAt, addr 0x6f00c90, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t distance);

  /// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x6f00d30, size 0x54, virtual false, abstract: false, final false
  static inline void GetFrustumPlaneSizeAt_Injected(::System::IntPtr _unity_self, float_t distance, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method GetGateFittedFieldOfView, addr 0x6efe8e4, size 0x80, virtual false, abstract: false, final false
  inline float_t GetGateFittedFieldOfView();

  /// @brief Method GetGateFittedFieldOfView_Injected, addr 0x6efe964, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGateFittedFieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetGateFittedLensShift, addr 0x6efe9a0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetGateFittedLensShift();

  /// @brief Method GetGateFittedLensShift_Injected, addr 0x6efea38, size 0x44, virtual false, abstract: false, final false
  static inline void GetGateFittedLensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("CameraScripting::GetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method GetLayerCullDistances, addr 0x6efc280, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetLayerCullDistances();

  /// @brief Method GetLayerCullDistances_Injected, addr 0x6efc3e0, size 0x44, virtual false, abstract: false, final false
  static inline void GetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetLocalSpaceAim, addr 0x6efea7c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalSpaceAim();

  /// @brief Method GetLocalSpaceAim_Injected, addr 0x6efeb1c, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalSpaceAim_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x6f02178, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x6f02238, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoNonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoProjectionMatrix, addr 0x6f02474, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoProjectionMatrix_Injected, addr 0x6f02534, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoViewMatrix, addr 0x6f0228c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoViewMatrix_Injected, addr 0x6f0234c, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [NativeName("HorizontalToVerticalFieldOfView_Safe")]
  /// @brief Method HorizontalToVerticalFieldOfView, addr 0x6f014d4, size 0x40, virtual false, abstract: false, final false
  static inline float_t HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio);

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method OnlyUsedForTesting1, addr 0x6f047cc, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting1();

  /// @brief Method OnlyUsedForTesting2, addr 0x6f047d0, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting2();

  /// @brief Method RemoveAllCommandBuffers, addr 0x6f03b04, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffers();

  /// [NativeName("RemoveAllCommandBuffers")]
  /// @brief Method RemoveAllCommandBuffersImpl, addr 0x6f0396c, size 0x80, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffersImpl();

  /// @brief Method RemoveAllCommandBuffersImpl_Injected, addr 0x6f039ec, size 0x3c, virtual false, abstract: false, final false
  static inline void RemoveAllCommandBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method RemoveCommandBuffer, addr 0x6f04300, size 0x1c8, virtual false, abstract: false, final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// [NativeName("RemoveCommandBuffer")]
  /// @brief Method RemoveCommandBufferImpl, addr 0x6f03e3c, size 0xd8, virtual false, abstract: false, final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBufferImpl_Injected, addr 0x6f03f14, size 0x54, virtual false, abstract: false, final false
  static inline void RemoveCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// @brief Method RemoveCommandBuffers, addr 0x6f03a28, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeName("RemoveCommandBuffers")]
  /// @brief Method RemoveCommandBuffersImpl, addr 0x6f03898, size 0x90, virtual false, abstract: false, final false
  inline void RemoveCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method RemoveCommandBuffersImpl_Injected, addr 0x6f03928, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
  /// @brief Method Render, addr 0x6f02fcc, size 0x80, virtual false, abstract: false, final false
  inline void Render();

  /// [FreeFunction("CameraScripting::RenderDontRestore", HasExplicitThis = true)]
  /// @brief Method RenderDontRestore, addr 0x6f03284, size 0x80, virtual false, abstract: false, final false
  inline void RenderDontRestore();

  /// @brief Method RenderDontRestore_Injected, addr 0x6f03304, size 0x3c, virtual false, abstract: false, final false
  static inline void RenderDontRestore_Injected(::System::IntPtr _unity_self);

  /// @brief Method RenderToCubemap, addr 0x6f02c30, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6f02c2c, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6f02c3c, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6f02c38, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6f02fc8, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [NativeName("RenderToCubemap")]
  /// @brief Method RenderToCubemapEyeImpl, addr 0x6f02e94, size 0xd8, virtual false, abstract: false, final false
  inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemapEyeImpl_Injected, addr 0x6f02f6c, size 0x5c, virtual false, abstract: false, final false
  static inline bool RenderToCubemapEyeImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [FreeFunction("CameraScripting::RenderToCubemap", HasExplicitThis = true)]
  /// @brief Method RenderToCubemapImpl, addr 0x6f02b10, size 0xc8, virtual false, abstract: false, final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// @brief Method RenderToCubemapImpl_Injected, addr 0x6f02bd8, size 0x54, virtual false, abstract: false, final false
  static inline bool RenderToCubemapImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// [FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
  /// @brief Method RenderWithShader, addr 0x6f03088, size 0x1a8, virtual false, abstract: false, final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method RenderWithShader_Injected, addr 0x6f03230, size 0x54, virtual false, abstract: false, final false
  static inline void RenderWithShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method Render_Injected, addr 0x6f0304c, size 0x3c, virtual false, abstract: false, final false
  static inline void Render_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset, addr 0x6efa028, size 0x80, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetAspect, addr 0x6efb318, size 0x80, virtual false, abstract: false, final false
  inline void ResetAspect();

  /// @brief Method ResetAspect_Injected, addr 0x6efb398, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetAspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCullingMatrix, addr 0x6efc95c, size 0x80, virtual false, abstract: false, final false
  inline void ResetCullingMatrix();

  /// @brief Method ResetCullingMatrix_Injected, addr 0x6efc9dc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCullingMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetProjectionMatrix, addr 0x6f0043c, size 0x80, virtual false, abstract: false, final false
  inline void ResetProjectionMatrix();

  /// @brief Method ResetProjectionMatrix_Injected, addr 0x6f004bc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetProjectionMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetReplacementShader, addr 0x6efd280, size 0x80, virtual false, abstract: false, final false
  inline void ResetReplacementShader();

  /// @brief Method ResetReplacementShader_Injected, addr 0x6efd300, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetReplacementShader_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoProjectionMatrices, addr 0x6f02674, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoProjectionMatrices();

  /// @brief Method ResetStereoProjectionMatrices_Injected, addr 0x6f026f4, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoProjectionMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoViewMatrices, addr 0x6f0281c, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoViewMatrices();

  /// @brief Method ResetStereoViewMatrices_Injected, addr 0x6f0289c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoViewMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetTransparencySortSettings, addr 0x6efaf2c, size 0x80, virtual false, abstract: false, final false
  inline void ResetTransparencySortSettings();

  /// @brief Method ResetTransparencySortSettings_Injected, addr 0x6efafac, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetTransparencySortSettings_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetWorldToCameraMatrix, addr 0x6f00380, size 0x80, virtual false, abstract: false, final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method ResetWorldToCameraMatrix_Injected, addr 0x6f00400, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetWorldToCameraMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset_Injected, addr 0x6efa0a8, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset_Injected(::System::IntPtr _unity_self);

  /// @brief Method ScreenPointToRay, addr 0x6f00f08, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x6f01058, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ScreenPointToRay, addr 0x6f01028, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay_Injected, addr 0x6f00fcc, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                               ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ScreenToViewportPoint, addr 0x6f00a90, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint_Injected, addr 0x6f00b3c, size 0x54, virtual false, abstract: false, final false
  static inline void ScreenToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToWorldPoint, addr 0x6f00a88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToWorldPoint, addr 0x6f00958, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenToWorldPoint_Injected, addr 0x6f00a14, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// [FreeFunction("CameraScripting::SetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method SetLayerCullDistances, addr 0x6efc424, size 0x120, virtual false, abstract: false, final false
  inline void SetLayerCullDistances(/* [NotNull] */ ::ArrayW<float_t> d);

  /// @brief Method SetLayerCullDistances_Injected, addr 0x6efc544, size 0x44, virtual false, abstract: false, final false
  static inline void SetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> d);

  /// @brief Method SetReplacementShader, addr 0x6efd084, size 0x1a8, virtual false, abstract: false, final false
  inline void SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method SetReplacementShader_Injected, addr 0x6efd22c, size 0x54, virtual false, abstract: false, final false
  static inline void SetReplacementShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method SetStereoProjectionMatrix, addr 0x6f02588, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoProjectionMatrix_Injected, addr 0x6f02620, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  /// @brief Method SetStereoViewMatrix, addr 0x6f02730, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoViewMatrix_Injected, addr 0x6f027c8, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  /// @brief Method SetTargetBuffers, addr 0x6eff9c8, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffers, addr 0x6eff864, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersImpl, addr 0x6eff774, size 0x9c, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersImpl_Injected, addr 0x6eff810, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer const> color, ::by_ref<::UnityEngine::RenderBuffer const> depth);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersMRTImpl, addr 0x6eff868, size 0x10c, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer> color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x6eff974, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersMRTImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> color, ::by_ref<::UnityEngine::RenderBuffer const> depth);

  /// [FreeFunction("CameraScripting::SetupCurrent")]
  /// @brief Method SetupCurrent, addr 0x6f0361c, size 0x80, virtual false, abstract: false, final false
  static inline void SetupCurrent(::UnityEngine::Camera* cur);

  /// @brief Method SetupCurrent_Injected, addr 0x6f0369c, size 0x3c, virtual false, abstract: false, final false
  static inline void SetupCurrent_Injected(::System::IntPtr cur);

  /// [FreeFunction("CameraScripting::SubmitBuiltInObjectIDRenderRequest", HasExplicitThis = true)]
  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SubmitBuiltInObjectIDRenderRequest, addr 0x6f03414, size 0xe0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture* target, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                                      int32_t depthSlice);

  /// @brief Method SubmitBuiltInObjectIDRenderRequest_Injected, addr 0x6f034f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest_Injected(::System::IntPtr _unity_self, ::System::IntPtr target, int32_t mipLevel,
                                                                                                      ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename RequestData> inline void SubmitRenderRequest(RequestData renderRequest);

  /// [FreeFunction("CameraScripting::SubmitRenderRequests", HasExplicitThis = true)]
  /// @brief Method SubmitRenderRequestsInternal, addr 0x6f03340, size 0x90, virtual false, abstract: false, final false
  inline void SubmitRenderRequestsInternal(::System::Object* requests);

  /// @brief Method SubmitRenderRequestsInternal_Injected, addr 0x6f033d0, size 0x44, virtual false, abstract: false, final false
  static inline void SubmitRenderRequestsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* requests);

  /// @brief Method TryGetCullingParameters, addr 0x6f047d4, size 0x10, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method TryGetCullingParameters, addr 0x6f0488c, size 0x8, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method VerticalToHorizontalFieldOfView, addr 0x6f01514, size 0x40, virtual false, abstract: false, final false
  static inline float_t VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio);

  /// @brief Method ViewportPointToRay, addr 0x6f00d84, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x6f00ed4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ViewportPointToRay, addr 0x6f00ea4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay_Injected, addr 0x6f00e48, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ViewportToScreenPoint, addr 0x6f00b90, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToScreenPoint_Injected, addr 0x6f00c3c, size 0x54, virtual false, abstract: false, final false
  static inline void ViewportToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint, addr 0x6f00a80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToWorldPoint, addr 0x6f00840, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint_Injected, addr 0x6f008fc, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToScreenPoint, addr 0x6f00a70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToScreenPoint, addr 0x6f00610, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint_Injected, addr 0x6f006cc, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint, addr 0x6f00a78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint, addr 0x6f00728, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint_Injected, addr 0x6f007e4, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  constexpr uint32_t const& __cordl_internal_get_m_NonSerializedVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_NonSerializedVersion();

  constexpr void __cordl_internal_set_m_NonSerializedVersion(uint32_t value);

  /// @brief Method .ctor, addr 0x6ef9910, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender();

  /// @brief Method get_PreviewCullingLayer, addr 0x6efc5f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_PreviewCullingLayer();

  /// [NativeName("GetCurrentTargetTexture")]
  /// @brief Method get_activeTexture, addr 0x6eff458, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture();

  /// @brief Method get_activeTexture_Injected, addr 0x6eff5a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_activeTexture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("CalculateRenderingPath")]
  /// @brief Method get_actualRenderingPath, addr 0x6ef9f6c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method get_actualRenderingPath_Injected, addr 0x6ef9fec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_actualRenderingPath_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allCameras, addr 0x6f029e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_allCameras();

  /// @brief Method get_allCamerasCount, addr 0x6f029b8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method get_allowDynamicResolution, addr 0x6efa404, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowDynamicResolution();

  /// @brief Method get_allowDynamicResolution_Injected, addr 0x6efa484, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowDynamicResolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowHDR, addr 0x6efa0e4, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowHDR();

  /// @brief Method get_allowHDR_Injected, addr 0x6efa164, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowHDR_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowMSAA, addr 0x6efa274, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowMSAA();

  /// @brief Method get_allowMSAA_Injected, addr 0x6efa2f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowMSAA_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_anamorphism, addr 0x6efe254, size 0x80, virtual false, abstract: false, final false
  inline float_t get_anamorphism();

  /// @brief Method get_anamorphism_Injected, addr 0x6efe2d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_anamorphism_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aperture, addr 0x6efd8b0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aperture();

  /// @brief Method get_aperture_Injected, addr 0x6efd930, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aperture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("AreVRStereoViewMatricesWithinSingleCullTolerance")]
  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x6f01d70, size 0x80, virtual false, abstract: false, final false
  inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance();

  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected, addr 0x6f01df0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aspect, addr 0x6efb180, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method get_aspect_Injected, addr 0x6efb200, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_backgroundColor, addr 0x6efca18, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x6efcab4, size 0x44, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_barrelClipping, addr 0x6efe0bc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_barrelClipping();

  /// @brief Method get_barrelClipping_Injected, addr 0x6efe13c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_barrelClipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bladeCount, addr 0x6efdd78, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bladeCount();

  /// @brief Method get_bladeCount_Injected, addr 0x6efddf8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bladeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cameraToWorldMatrix, addr 0x6effa88, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix();

  /// @brief Method get_cameraToWorldMatrix_Injected, addr 0x6effb40, size 0x44, virtual false, abstract: false, final false
  static inline void get_cameraToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_cameraType, addr 0x6efbb88, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraType get_cameraType();

  /// @brief Method get_cameraType_Injected, addr 0x6efbc08, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraType get_cameraType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearFlags, addr 0x6efcbd4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method get_clearFlags_Injected, addr 0x6efcc54, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraClearFlags get_clearFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearStencilAfterLightingPass, addr 0x6efcef4, size 0x80, virtual false, abstract: false, final false
  inline bool get_clearStencilAfterLightingPass();

  /// @brief Method get_clearStencilAfterLightingPass_Injected, addr 0x6efcf74, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_commandBufferCount, addr 0x6f037dc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_commandBufferCount();

  /// @brief Method get_commandBufferCount_Injected, addr 0x6f0385c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_commandBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMask, addr 0x6efb4b8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMask_Injected, addr 0x6efb538, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMatrix, addr 0x6efc78c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cullingMatrix();

  /// @brief Method get_cullingMatrix_Injected, addr 0x6efc844, size 0x44, virtual false, abstract: false, final false
  static inline void get_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_current, addr 0x6f01690, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_current();

  /// [FreeFunction("GetCurrentCameraPPtr")]
  /// @brief Method get_currentInternal, addr 0x6f01694, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_currentInternal();

  /// @brief Method get_currentInternal_Injected, addr 0x6f017a8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_currentInternal_Injected();

  /// @brief Method get_curvature, addr 0x6efdf08, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_curvature();

  /// @brief Method get_curvature_Injected, addr 0x6efdfa0, size 0x44, virtual false, abstract: false, final false
  static inline void get_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_depth, addr 0x6efafe8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// @brief Method get_depthTextureMode, addr 0x6efcd64, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method get_depthTextureMode_Injected, addr 0x6efcde4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DepthTextureMode get_depthTextureMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_depth_Injected, addr 0x6efb068, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_depth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_eventMask, addr 0x6efb648, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_eventMask();

  /// @brief Method get_eventMask_Injected, addr 0x6efb6c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_eventMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_farClipPlane, addr 0x6ef9aac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_farClipPlane_Injected, addr 0x6ef9b2c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_farClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fieldOfView, addr 0x6ef9c44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method get_fieldOfView_Injected, addr 0x6ef9cc4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_fieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focalLength, addr 0x6efdbe0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focalLength();

  /// @brief Method get_focalLength_Injected, addr 0x6efdc60, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focalLength_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focusDistance, addr 0x6efda48, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focusDistance();

  /// @brief Method get_focusDistance_Injected, addr 0x6efdac8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focusDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_forceIntoRenderTexture, addr 0x6efa594, size 0x80, virtual false, abstract: false, final false
  inline bool get_forceIntoRenderTexture();

  /// @brief Method get_forceIntoRenderTexture_Injected, addr 0x6efa614, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gateFit, addr 0x6efe754, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_gateFit();

  /// @brief Method get_gateFit_Injected, addr 0x6efe7d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_GateFitMode get_gateFit_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsProcessingRenderRequest")]
  /// @brief Method get_isProcessingRenderRequest, addr 0x6f03560, size 0x80, virtual false, abstract: false, final false
  inline bool get_isProcessingRenderRequest();

  /// @brief Method get_isProcessingRenderRequest_Injected, addr 0x6f035e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isProcessingRenderRequest_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_iso, addr 0x6efd588, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_iso();

  /// @brief Method get_iso_Injected, addr 0x6efd608, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_iso_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCullDistances, addr 0x6efc588, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> get_layerCullDistances();

  /// @brief Method get_layerCullSpherical, addr 0x6efb7d8, size 0x4, virtual false, abstract: false, final false
  inline bool get_layerCullSpherical();

  /// @brief Method get_layerCullSphericalInternal, addr 0x6efb7dc, size 0x80, virtual false, abstract: false, final false
  inline bool get_layerCullSphericalInternal();

  /// @brief Method get_layerCullSphericalInternal_Injected, addr 0x6efbb08, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lensShift, addr 0x6efe5a0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lensShift();

  /// @brief Method get_lensShift_Injected, addr 0x6efe638, size 0x44, virtual false, abstract: false, final false
  static inline void get_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("FindMainCamera")]
  /// @brief Method get_main, addr 0x6f01554, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_main();

  /// @brief Method get_main_Injected, addr 0x6f01668, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_main_Injected();

  /// @brief Method get_nearClipPlane, addr 0x6ef9914, size 0x80, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nearClipPlane_Injected, addr 0x6ef9994, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_nearClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_nonJitteredProjectionMatrix, addr 0x6efff24, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix();

  /// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x6efffdc, size 0x44, virtual false, abstract: false, final false
  static inline void get_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_opaqueSortMode, addr 0x6efaa4c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();

  /// @brief Method get_opaqueSortMode_Injected, addr 0x6efaacc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic, addr 0x6efa8bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_orthographic();

  /// @brief Method get_orthographicSize, addr 0x6efa724, size 0x80, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method get_orthographicSize_Injected, addr 0x6efa7a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_orthographicSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic_Injected, addr 0x6efa93c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_orthographic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_overrideSceneCullingMask, addr 0x6efbea4, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_overrideSceneCullingMask();

  /// @brief Method get_overrideSceneCullingMask_Injected, addr 0x6efbf24, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_pixelHeight, addr 0x6efef94, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_pixelHeight_Injected, addr 0x6eff014, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelRect, addr 0x6efed1c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_pixelRect_Injected, addr 0x6efedb8, size 0x44, virtual false, abstract: false, final false
  static inline void get_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// [FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_pixelWidth, addr 0x6efeed8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_pixelWidth_Injected, addr 0x6efef58, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_previousViewProjectionMatrix, addr 0x6f00284, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x6f0033c, size 0x44, virtual false, abstract: false, final false
  static inline void get_previousViewProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_projectionMatrix, addr 0x6effd54, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method get_projectionMatrixMode, addr 0x6efd33c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode();

  /// @brief Method get_projectionMatrixMode_Injected, addr 0x6efd3bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMatrix_Injected, addr 0x6effe0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_rect, addr 0x6efeb60, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x6efebfc, size 0x44, virtual false, abstract: false, final false
  static inline void get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// @brief Method get_renderCloudsInSceneView, addr 0x6f02d04, size 0x80, virtual false, abstract: false, final false
  inline bool get_renderCloudsInSceneView();

  /// @brief Method get_renderCloudsInSceneView_Injected, addr 0x6f02d84, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderingPath, addr 0x6ef9ddc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_renderingPath();

  /// @brief Method get_renderingPath_Injected, addr 0x6ef9e5c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_renderingPath_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelHeight, addr 0x6eff10c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelHeight();

  /// @brief Method get_scaledPixelHeight_Injected, addr 0x6eff18c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelHeight_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelWidth, addr 0x6eff050, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelWidth();

  /// @brief Method get_scaledPixelWidth_Injected, addr 0x6eff0d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelWidth_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScene", HasExplicitThis = true)]
  /// @brief Method get_scene, addr 0x6f017d0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x6efc034, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneCullingMask_Injected, addr 0x6efc0b4, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sceneViewFilterMode, addr 0x6f02d00, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_SceneViewFilterMode get_sceneViewFilterMode();

  /// @brief Method get_scene_Injected, addr 0x6f01868, size 0x44, virtual false, abstract: false, final false
  static inline void get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_sensorSize, addr 0x6efe3ec, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sensorSize();

  /// @brief Method get_sensorSize_Injected, addr 0x6efe484, size 0x44, virtual false, abstract: false, final false
  static inline void get_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_shutterSpeed, addr 0x6efd718, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shutterSpeed();

  /// @brief Method get_shutterSpeed_Injected, addr 0x6efd798, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shutterSpeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skyboxMaterial, addr 0x6efbd18, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial();

  /// @brief Method get_skyboxMaterial_Injected, addr 0x6efbe68, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_skyboxMaterial_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetStereoActiveEye", HasExplicitThis = true)]
  /// @brief Method get_stereoActiveEye, addr 0x6f020bc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye();

  /// @brief Method get_stereoActiveEye_Injected, addr 0x6f0213c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoConvergence, addr 0x6f01bd8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoConvergence();

  /// @brief Method get_stereoConvergence_Injected, addr 0x6f01c58, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoConvergence_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetStereoEnabledForBuiltInOrSRP")]
  /// @brief Method get_stereoEnabled, addr 0x6f01984, size 0x80, virtual false, abstract: false, final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoEnabled_Injected, addr 0x6f01a04, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stereoEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoSeparation, addr 0x6f01a40, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoSeparation();

  /// @brief Method get_stereoSeparation_Injected, addr 0x6f01ac0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoSeparation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoTargetEye, addr 0x6f01e2c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method get_stereoTargetEyeInternal, addr 0x6f01e30, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal();

  /// @brief Method get_stereoTargetEyeInternal_Injected, addr 0x6f0203c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetDisplay, addr 0x6eff5e4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetDisplay_Injected, addr 0x6eff664, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_targetDisplay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetTexture, addr 0x6eff1c8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_targetTexture_Injected, addr 0x6eff318, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_transparencySortAxis, addr 0x6efad6c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method get_transparencySortAxis_Injected, addr 0x6efae0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_transparencySortMode, addr 0x6efabdc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method get_transparencySortMode_Injected, addr 0x6efac5c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TransparencySortMode get_transparencySortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useInteractiveLightBakingData, addr 0x6efc0f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useInteractiveLightBakingData();

  /// @brief Method get_useInteractiveLightBakingData_Injected, addr 0x6efc170, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x6f000f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_useJitteredProjectionMatrixForTransparentRendering();

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6f00174, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useOcclusionCulling, addr 0x6efc5fc, size 0x80, virtual false, abstract: false, final false
  inline bool get_useOcclusionCulling();

  /// @brief Method get_useOcclusionCulling_Injected, addr 0x6efc67c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useOcclusionCulling_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_usePhysicalProperties, addr 0x6efd3f8, size 0x80, virtual false, abstract: false, final false
  inline bool get_usePhysicalProperties();

  /// @brief Method get_usePhysicalProperties_Injected, addr 0x6efd478, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_usePhysicalProperties_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6efb3d4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6efb474, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldToCameraMatrix, addr 0x6effb84, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method get_worldToCameraMatrix_Injected, addr 0x6effc3c, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback* value);

  /// @brief Method set_allowDynamicResolution, addr 0x6efa4c0, size 0x90, virtual false, abstract: false, final false
  inline void set_allowDynamicResolution(bool value);

  /// @brief Method set_allowDynamicResolution_Injected, addr 0x6efa550, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowDynamicResolution_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowHDR, addr 0x6efa1a0, size 0x90, virtual false, abstract: false, final false
  inline void set_allowHDR(bool value);

  /// @brief Method set_allowHDR_Injected, addr 0x6efa230, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowHDR_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowMSAA, addr 0x6efa330, size 0x90, virtual false, abstract: false, final false
  inline void set_allowMSAA(bool value);

  /// @brief Method set_allowMSAA_Injected, addr 0x6efa3c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowMSAA_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_anamorphism, addr 0x6efe310, size 0x90, virtual false, abstract: false, final false
  inline void set_anamorphism(float_t value);

  /// @brief Method set_anamorphism_Injected, addr 0x6efe3a0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_anamorphism_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aperture, addr 0x6efd96c, size 0x90, virtual false, abstract: false, final false
  inline void set_aperture(float_t value);

  /// @brief Method set_aperture_Injected, addr 0x6efd9fc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aperture_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aspect, addr 0x6efb23c, size 0x90, virtual false, abstract: false, final false
  inline void set_aspect(float_t value);

  /// @brief Method set_aspect_Injected, addr 0x6efb2cc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aspect_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_backgroundColor, addr 0x6efcaf8, size 0x98, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x6efcb90, size 0x44, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_barrelClipping, addr 0x6efe178, size 0x90, virtual false, abstract: false, final false
  inline void set_barrelClipping(float_t value);

  /// @brief Method set_barrelClipping_Injected, addr 0x6efe208, size 0x4c, virtual false, abstract: false, final false
  static inline void set_barrelClipping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_bladeCount, addr 0x6efde34, size 0x90, virtual false, abstract: false, final false
  inline void set_bladeCount(int32_t value);

  /// @brief Method set_bladeCount_Injected, addr 0x6efdec4, size 0x44, virtual false, abstract: false, final false
  static inline void set_bladeCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cameraType, addr 0x6efbc44, size 0x90, virtual false, abstract: false, final false
  inline void set_cameraType(::UnityEngine::CameraType value);

  /// @brief Method set_cameraType_Injected, addr 0x6efbcd4, size 0x44, virtual false, abstract: false, final false
  static inline void set_cameraType_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraType value);

  /// @brief Method set_clearFlags, addr 0x6efcc90, size 0x90, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearFlags_Injected, addr 0x6efcd20, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearStencilAfterLightingPass, addr 0x6efcfb0, size 0x90, virtual false, abstract: false, final false
  inline void set_clearStencilAfterLightingPass(bool value);

  /// @brief Method set_clearStencilAfterLightingPass_Injected, addr 0x6efd040, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cullingMask, addr 0x6efb574, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMask_Injected, addr 0x6efb604, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cullingMatrix, addr 0x6efc888, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_cullingMatrix_Injected, addr 0x6efc918, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_curvature, addr 0x6efdfe4, size 0x94, virtual false, abstract: false, final false
  inline void set_curvature(::UnityEngine::Vector2 value);

  /// @brief Method set_curvature_Injected, addr 0x6efe078, size 0x44, virtual false, abstract: false, final false
  static inline void set_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_depth, addr 0x6efb0a4, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(float_t value);

  /// @brief Method set_depthTextureMode, addr 0x6efce20, size 0x90, virtual false, abstract: false, final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depthTextureMode_Injected, addr 0x6efceb0, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthTextureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depth_Injected, addr 0x6efb134, size 0x4c, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_eventMask, addr 0x6efb704, size 0x90, virtual false, abstract: false, final false
  inline void set_eventMask(int32_t value);

  /// @brief Method set_eventMask_Injected, addr 0x6efb794, size 0x44, virtual false, abstract: false, final false
  static inline void set_eventMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_farClipPlane, addr 0x6ef9b68, size 0x90, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_farClipPlane_Injected, addr 0x6ef9bf8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fieldOfView, addr 0x6ef9d00, size 0x90, virtual false, abstract: false, final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method set_fieldOfView_Injected, addr 0x6ef9d90, size 0x4c, virtual false, abstract: false, final false
  static inline void set_fieldOfView_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focalLength, addr 0x6efdc9c, size 0x90, virtual false, abstract: false, final false
  inline void set_focalLength(float_t value);

  /// @brief Method set_focalLength_Injected, addr 0x6efdd2c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focalLength_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focusDistance, addr 0x6efdb04, size 0x90, virtual false, abstract: false, final false
  inline void set_focusDistance(float_t value);

  /// @brief Method set_focusDistance_Injected, addr 0x6efdb94, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focusDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_forceIntoRenderTexture, addr 0x6efa650, size 0x90, virtual false, abstract: false, final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method set_forceIntoRenderTexture_Injected, addr 0x6efa6e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_gateFit, addr 0x6efe810, size 0x90, virtual false, abstract: false, final false
  inline void set_gateFit(::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_gateFit_Injected, addr 0x6efe8a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_gateFit_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_iso, addr 0x6efd644, size 0x90, virtual false, abstract: false, final false
  inline void set_iso(int32_t value);

  /// @brief Method set_iso_Injected, addr 0x6efd6d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_iso_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_layerCullDistances, addr 0x6efc58c, size 0x68, virtual false, abstract: false, final false
  inline void set_layerCullDistances(::ArrayW<float_t> value);

  /// @brief Method set_layerCullSpherical, addr 0x6efb85c, size 0xfc, virtual false, abstract: false, final false
  inline void set_layerCullSpherical(bool value);

  /// @brief Method set_layerCullSphericalInternal, addr 0x6efba78, size 0x90, virtual false, abstract: false, final false
  inline void set_layerCullSphericalInternal(bool value);

  /// @brief Method set_layerCullSphericalInternal_Injected, addr 0x6efbb44, size 0x44, virtual false, abstract: false, final false
  static inline void set_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lensShift, addr 0x6efe67c, size 0x94, virtual false, abstract: false, final false
  inline void set_lensShift(::UnityEngine::Vector2 value);

  /// @brief Method set_lensShift_Injected, addr 0x6efe710, size 0x44, virtual false, abstract: false, final false
  static inline void set_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_nearClipPlane, addr 0x6ef99d0, size 0x90, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nearClipPlane_Injected, addr 0x6ef9a60, size 0x4c, virtual false, abstract: false, final false
  static inline void set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_nonJitteredProjectionMatrix, addr 0x6f00020, size 0x90, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x6f000b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_opaqueSortMode, addr 0x6efab08, size 0x90, virtual false, abstract: false, final false
  inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_opaqueSortMode_Injected, addr 0x6efab98, size 0x44, virtual false, abstract: false, final false
  static inline void set_opaqueSortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_orthographic, addr 0x6efa978, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographic(bool value);

  /// @brief Method set_orthographicSize, addr 0x6efa7e0, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method set_orthographicSize_Injected, addr 0x6efa870, size 0x4c, virtual false, abstract: false, final false
  static inline void set_orthographicSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_orthographic_Injected, addr 0x6efaa08, size 0x44, virtual false, abstract: false, final false
  static inline void set_orthographic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_overrideSceneCullingMask, addr 0x6efbf60, size 0x90, virtual false, abstract: false, final false
  inline void set_overrideSceneCullingMask(uint64_t value);

  /// @brief Method set_overrideSceneCullingMask_Injected, addr 0x6efbff0, size 0x44, virtual false, abstract: false, final false
  static inline void set_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self, uint64_t value);

  /// @brief Method set_pixelRect, addr 0x6efedfc, size 0x98, virtual false, abstract: false, final false
  inline void set_pixelRect(::UnityEngine::Rect value);

  /// @brief Method set_pixelRect_Injected, addr 0x6efee94, size 0x44, virtual false, abstract: false, final false
  static inline void set_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> value);

  /// @brief Method set_projectionMatrix, addr 0x6effe50, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_projectionMatrix_Injected, addr 0x6effee0, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method set_rect, addr 0x6efec40, size 0x98, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_rect_Injected, addr 0x6efecd8, size 0x44, virtual false, abstract: false, final false
  static inline void set_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> value);

  /// @brief Method set_renderCloudsInSceneView, addr 0x6f02dc0, size 0x90, virtual false, abstract: false, final false
  inline void set_renderCloudsInSceneView(bool value);

  /// @brief Method set_renderCloudsInSceneView_Injected, addr 0x6f02e50, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_renderingPath, addr 0x6ef9e98, size 0x90, virtual false, abstract: false, final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method set_renderingPath_Injected, addr 0x6ef9f28, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderingPath_Injected(::System::IntPtr _unity_self, ::UnityEngine::RenderingPath value);

  /// [FreeFunction("CameraScripting::SetScene", HasExplicitThis = true)]
  /// @brief Method set_scene, addr 0x6f018ac, size 0x94, virtual false, abstract: false, final false
  inline void set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method set_scene_Injected, addr 0x6f01940, size 0x44, virtual false, abstract: false, final false
  static inline void set_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene const> value);

  /// @brief Method set_sensorSize, addr 0x6efe4c8, size 0x94, virtual false, abstract: false, final false
  inline void set_sensorSize(::UnityEngine::Vector2 value);

  /// @brief Method set_sensorSize_Injected, addr 0x6efe55c, size 0x44, virtual false, abstract: false, final false
  static inline void set_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_shutterSpeed, addr 0x6efd7d4, size 0x90, virtual false, abstract: false, final false
  inline void set_shutterSpeed(float_t value);

  /// @brief Method set_shutterSpeed_Injected, addr 0x6efd864, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shutterSpeed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoConvergence, addr 0x6f01c94, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoConvergence(float_t value);

  /// @brief Method set_stereoConvergence_Injected, addr 0x6f01d24, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoConvergence_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoSeparation, addr 0x6f01afc, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoSeparation(float_t value);

  /// @brief Method set_stereoSeparation_Injected, addr 0x6f01b8c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoSeparation_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoTargetEye, addr 0x6f01eb0, size 0xfc, virtual false, abstract: false, final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal, addr 0x6f01fac, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoTargetEyeInternal(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal_Injected, addr 0x6f02078, size 0x44, virtual false, abstract: false, final false
  static inline void set_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_targetDisplay, addr 0x6eff6a0, size 0x90, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetDisplay_Injected, addr 0x6eff730, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetDisplay_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_targetTexture, addr 0x6eff354, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_targetTexture_Injected, addr 0x6eff414, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_transparencySortAxis, addr 0x6efae50, size 0x98, virtual false, abstract: false, final false
  inline void set_transparencySortAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_transparencySortAxis_Injected, addr 0x6efaee8, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_transparencySortMode, addr 0x6efac98, size 0x90, virtual false, abstract: false, final false
  inline void set_transparencySortMode(::UnityEngine::TransparencySortMode value);

  /// @brief Method set_transparencySortMode_Injected, addr 0x6efad28, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::TransparencySortMode value);

  /// @brief Method set_useInteractiveLightBakingData, addr 0x6efc1ac, size 0x90, virtual false, abstract: false, final false
  inline void set_useInteractiveLightBakingData(bool value);

  /// @brief Method set_useInteractiveLightBakingData_Injected, addr 0x6efc23c, size 0x44, virtual false, abstract: false, final false
  static inline void set_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x6f001b0, size 0x90, virtual false, abstract: false, final false
  inline void set_useJitteredProjectionMatrixForTransparentRendering(bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6f00240, size 0x44, virtual false, abstract: false, final false
  static inline void set_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useOcclusionCulling, addr 0x6efc6b8, size 0x90, virtual false, abstract: false, final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method set_useOcclusionCulling_Injected, addr 0x6efc748, size 0x44, virtual false, abstract: false, final false
  static inline void set_useOcclusionCulling_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_usePhysicalProperties, addr 0x6efd4b4, size 0x90, virtual false, abstract: false, final false
  inline void set_usePhysicalProperties(bool value);

  /// @brief Method set_usePhysicalProperties_Injected, addr 0x6efd544, size 0x44, virtual false, abstract: false, final false
  static inline void set_usePhysicalProperties_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_worldToCameraMatrix, addr 0x6effc80, size 0x90, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_worldToCameraMatrix_Injected, addr 0x6effd10, size 0x44, virtual false, abstract: false, final false
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
