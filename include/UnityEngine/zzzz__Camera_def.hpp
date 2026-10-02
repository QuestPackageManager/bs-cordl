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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9655 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9656 };

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
  /// @brief Method get_aspect, addr 0x6ec7c5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_mode, addr 0x6ec7c54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_mode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_GateFitParameters();

  // Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::Camera_GateFitMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_aspect_k__BackingField",
  // ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Camera_GateFitParameters(::UnityEngine::Camera_GateFitMode _mode_k__BackingField, float_t _aspect_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9657 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9658 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9659 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9660 };

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
  /// @brief Method Invoke, addr 0x6ec7ce0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Camera* cam);

  static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6ec7c64, size 0x7c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9661 };

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

  /// @brief Method AddCommandBuffer, addr 0x6ec72cc, size 0x1c8, virtual false, abstract: false, final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsync, addr 0x6ec7494, size 0x1d0, virtual false, abstract: false, final false
  inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBufferAsync")]
  /// @brief Method AddCommandBufferAsyncImpl, addr 0x6ec705c, size 0xe8, virtual false, abstract: false, final false
  inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer,
                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method AddCommandBufferAsyncImpl_Injected, addr 0x6ec7144, size 0x5c, virtual false, abstract: false, final false
  static inline void AddCommandBufferAsyncImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer,
                                                        ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeName("AddCommandBuffer")]
  /// @brief Method AddCommandBufferImpl, addr 0x6ec6f30, size 0xd8, virtual false, abstract: false, final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferImpl_Injected, addr 0x6ec7008, size 0x54, virtual false, abstract: false, final false
  static inline void AddCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// [RequiredByNativeCode]
  /// @brief Method BumpNonSerializedVersion, addr 0x6ec7b14, size 0x1c, virtual false, abstract: false, final false
  static inline void BumpNonSerializedVersion(::UnityEngine::Camera* cam);

  /// @brief Method CalculateFrustumCorners, addr 0x6ec45dc, size 0xb4, virtual false, abstract: false, final false
  inline void CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ArrayW<::UnityEngine::Vector3> outCorners);

  /// [FreeFunction("CameraScripting::CalculateViewportRayVectors", HasExplicitThis = true)]
  /// @brief Method CalculateFrustumCornersInternal, addr 0x6ec43f0, size 0x180, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::by_ref<::ArrayW<::UnityEngine::Vector3>> outCorners);

  /// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x6ec4570, size 0x6c, virtual false, abstract: false, final false
  static inline void CalculateFrustumCornersInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                              ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> outCorners);

  /// [FreeFunction("CameraScripting::CalculateObliqueMatrix", HasExplicitThis = true)]
  /// @brief Method CalculateObliqueMatrix, addr 0x6ec385c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method CalculateObliqueMatrix_Injected, addr 0x6ec3920, size 0x54, virtual false, abstract: false, final false
  static inline void CalculateObliqueMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> clipPlane, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x6ec47ac, size 0xc, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalProperties(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                     ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, ::UnityEngine::Camera_GateFitParameters gateFitParameters);

  /// [NativeName("CalculateProjectionMatrixFromPhysicalProperties")]
  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x6ec4690, size 0x90, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                             ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                             ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x6ec4720, size 0x8c, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(::by_ref<::UnityEngine::Matrix4x4> output, float_t focalLength, ::by_ref<::UnityEngine::Vector2> sensorSize,
                                                                                      ::by_ref<::UnityEngine::Vector2> lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                      ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// [FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
  /// @brief Method CopyFrom, addr 0x6ec6a3c, size 0xc0, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method CopyFrom_Injected, addr 0x6ec6afc, size 0x44, virtual false, abstract: false, final false
  static inline void CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x6ec5704, size 0x90, virtual false, abstract: false, final false
  inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered_Injected, addr 0x6ec5794, size 0x44, virtual false, abstract: false, final false
  static inline void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye);

  /// [NativeName("FieldOfViewToFocalLength_Safe")]
  /// @brief Method FieldOfViewToFocalLength, addr 0x6ec47f8, size 0x40, virtual false, abstract: false, final false
  static inline float_t FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPostRender, addr 0x6ec7aa4, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreCull, addr 0x6ec79c4, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// [RequiredByNativeCode]
  /// @brief Method FireOnPreRender, addr 0x6ec7a34, size 0x70, virtual false, abstract: false, final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// [NativeName("FocalLengthToFieldOfView_Safe")]
  /// @brief Method FocalLengthToFieldOfView, addr 0x6ec47b8, size 0x40, virtual false, abstract: false, final false
  static inline float_t FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize);

  /// @brief Method GetAllCameras, addr 0x6ec5dc0, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*> cameras);

  /// [FreeFunction("CameraScripting::GetAllCamerasCount")]
  /// @brief Method GetAllCamerasCount, addr 0x6ec5c3c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasCount();

  /// [FreeFunction("CameraScripting::GetAllCameras")]
  /// @brief Method GetAllCamerasImpl, addr 0x6ec5c64, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Camera*>> cam);

  /// @brief Method GetAllCamerasImpl_Injected, addr 0x6ec5ce0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl_Injected(::by_ref<::ArrayW<::UnityEngine::Camera*>> cam);

  /// @brief Method GetCameraBufferWarnings, addr 0x6ec2d30, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetCameraBufferWarnings();

  /// @brief Method GetCameraBufferWarnings_Injected, addr 0x6ec2db0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetCameraBufferWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCommandBuffers, addr 0x6ec782c, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::GetCommandBuffers", HasExplicitThis = true)]
  /// @brief Method GetCommandBuffersImpl, addr 0x6ec78f0, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method GetCommandBuffersImpl_Injected, addr 0x6ec7980, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> GetCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
  /// [FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
  /// @brief Method GetCullingParameters_Internal, addr 0x6ec7b48, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                   int32_t managedCullingParametersSize);

  /// @brief Method GetCullingParameters_Internal_Injected, addr 0x6ec7bf8, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal_Injected(::System::IntPtr camera, bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                            int32_t managedCullingParametersSize);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetFilterMode, addr 0x6ec5fa8, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetFilterMode();

  /// @brief Method GetFilterMode_Injected, addr 0x6ec6028, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetFilterMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetFrustumPlaneSizeAt, addr 0x6ec3ff4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t distance);

  /// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x6ec4094, size 0x54, virtual false, abstract: false, final false
  static inline void GetFrustumPlaneSizeAt_Injected(::System::IntPtr _unity_self, float_t distance, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method GetGateFittedFieldOfView, addr 0x6ec1c48, size 0x80, virtual false, abstract: false, final false
  inline float_t GetGateFittedFieldOfView();

  /// @brief Method GetGateFittedFieldOfView_Injected, addr 0x6ec1cc8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetGateFittedFieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetGateFittedLensShift, addr 0x6ec1d04, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetGateFittedLensShift();

  /// @brief Method GetGateFittedLensShift_Injected, addr 0x6ec1d9c, size 0x44, virtual false, abstract: false, final false
  static inline void GetGateFittedLensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("CameraScripting::GetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method GetLayerCullDistances, addr 0x6ebf5e4, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetLayerCullDistances();

  /// @brief Method GetLayerCullDistances_Injected, addr 0x6ebf744, size 0x44, virtual false, abstract: false, final false
  static inline void GetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetLocalSpaceAim, addr 0x6ec1de0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalSpaceAim();

  /// @brief Method GetLocalSpaceAim_Injected, addr 0x6ec1e80, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalSpaceAim_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x6ec54dc, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x6ec559c, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoNonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoProjectionMatrix, addr 0x6ec57d8, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoProjectionMatrix_Injected, addr 0x6ec5898, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
  /// @brief Method GetStereoViewMatrix, addr 0x6ec55f0, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoViewMatrix_Injected, addr 0x6ec56b0, size 0x54, virtual false, abstract: false, final false
  static inline void GetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [NativeName("HorizontalToVerticalFieldOfView_Safe")]
  /// @brief Method HorizontalToVerticalFieldOfView, addr 0x6ec4838, size 0x40, virtual false, abstract: false, final false
  static inline float_t HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio);

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method OnlyUsedForTesting1, addr 0x6ec7b30, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting1();

  /// @brief Method OnlyUsedForTesting2, addr 0x6ec7b34, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting2();

  /// @brief Method RemoveAllCommandBuffers, addr 0x6ec6e68, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffers();

  /// [NativeName("RemoveAllCommandBuffers")]
  /// @brief Method RemoveAllCommandBuffersImpl, addr 0x6ec6cd0, size 0x80, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffersImpl();

  /// @brief Method RemoveAllCommandBuffersImpl_Injected, addr 0x6ec6d50, size 0x3c, virtual false, abstract: false, final false
  static inline void RemoveAllCommandBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method RemoveCommandBuffer, addr 0x6ec7664, size 0x1c8, virtual false, abstract: false, final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// [NativeName("RemoveCommandBuffer")]
  /// @brief Method RemoveCommandBufferImpl, addr 0x6ec71a0, size 0xd8, virtual false, abstract: false, final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, /* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBufferImpl_Injected, addr 0x6ec7278, size 0x54, virtual false, abstract: false, final false
  static inline void RemoveCommandBufferImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt, ::System::IntPtr buffer);

  /// @brief Method RemoveCommandBuffers, addr 0x6ec6d8c, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// [NativeName("RemoveCommandBuffers")]
  /// @brief Method RemoveCommandBuffersImpl, addr 0x6ec6bfc, size 0x90, virtual false, abstract: false, final false
  inline void RemoveCommandBuffersImpl(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method RemoveCommandBuffersImpl_Injected, addr 0x6ec6c8c, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveCommandBuffersImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraEvent evt);

  /// [FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
  /// @brief Method Render, addr 0x6ec6330, size 0x80, virtual false, abstract: false, final false
  inline void Render();

  /// [FreeFunction("CameraScripting::RenderDontRestore", HasExplicitThis = true)]
  /// @brief Method RenderDontRestore, addr 0x6ec65e8, size 0x80, virtual false, abstract: false, final false
  inline void RenderDontRestore();

  /// @brief Method RenderDontRestore_Injected, addr 0x6ec6668, size 0x3c, virtual false, abstract: false, final false
  static inline void RenderDontRestore_Injected(::System::IntPtr _unity_self);

  /// @brief Method RenderToCubemap, addr 0x6ec5f94, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6ec5f90, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6ec5fa0, size 0x8, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method RenderToCubemap, addr 0x6ec5f9c, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x6ec632c, size 0x4, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [NativeName("RenderToCubemap")]
  /// @brief Method RenderToCubemapEyeImpl, addr 0x6ec61f8, size 0xd8, virtual false, abstract: false, final false
  inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemapEyeImpl_Injected, addr 0x6ec62d0, size 0x5c, virtual false, abstract: false, final false
  static inline bool RenderToCubemapEyeImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// [FreeFunction("CameraScripting::RenderToCubemap", HasExplicitThis = true)]
  /// @brief Method RenderToCubemapImpl, addr 0x6ec5e74, size 0xc8, virtual false, abstract: false, final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// @brief Method RenderToCubemapImpl_Injected, addr 0x6ec5f3c, size 0x54, virtual false, abstract: false, final false
  static inline bool RenderToCubemapImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr tex, /* [DefaultValue("63")] */ int32_t faceMask);

  /// [FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
  /// @brief Method RenderWithShader, addr 0x6ec63ec, size 0x1a8, virtual false, abstract: false, final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method RenderWithShader_Injected, addr 0x6ec6594, size 0x54, virtual false, abstract: false, final false
  static inline void RenderWithShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method Render_Injected, addr 0x6ec63b0, size 0x3c, virtual false, abstract: false, final false
  static inline void Render_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset, addr 0x6ebd38c, size 0x80, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetAspect, addr 0x6ebe67c, size 0x80, virtual false, abstract: false, final false
  inline void ResetAspect();

  /// @brief Method ResetAspect_Injected, addr 0x6ebe6fc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetAspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCullingMatrix, addr 0x6ebfcc0, size 0x80, virtual false, abstract: false, final false
  inline void ResetCullingMatrix();

  /// @brief Method ResetCullingMatrix_Injected, addr 0x6ebfd40, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCullingMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetProjectionMatrix, addr 0x6ec37a0, size 0x80, virtual false, abstract: false, final false
  inline void ResetProjectionMatrix();

  /// @brief Method ResetProjectionMatrix_Injected, addr 0x6ec3820, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetProjectionMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetReplacementShader, addr 0x6ec05e4, size 0x80, virtual false, abstract: false, final false
  inline void ResetReplacementShader();

  /// @brief Method ResetReplacementShader_Injected, addr 0x6ec0664, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetReplacementShader_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoProjectionMatrices, addr 0x6ec59d8, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoProjectionMatrices();

  /// @brief Method ResetStereoProjectionMatrices_Injected, addr 0x6ec5a58, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoProjectionMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetStereoViewMatrices, addr 0x6ec5b80, size 0x80, virtual false, abstract: false, final false
  inline void ResetStereoViewMatrices();

  /// @brief Method ResetStereoViewMatrices_Injected, addr 0x6ec5c00, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetStereoViewMatrices_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetTransparencySortSettings, addr 0x6ebe290, size 0x80, virtual false, abstract: false, final false
  inline void ResetTransparencySortSettings();

  /// @brief Method ResetTransparencySortSettings_Injected, addr 0x6ebe310, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetTransparencySortSettings_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetWorldToCameraMatrix, addr 0x6ec36e4, size 0x80, virtual false, abstract: false, final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method ResetWorldToCameraMatrix_Injected, addr 0x6ec3764, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetWorldToCameraMatrix_Injected(::System::IntPtr _unity_self);

  /// @brief Method Reset_Injected, addr 0x6ebd40c, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset_Injected(::System::IntPtr _unity_self);

  /// @brief Method ScreenPointToRay, addr 0x6ec426c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x6ec43bc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ScreenPointToRay, addr 0x6ec438c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay_Injected, addr 0x6ec4330, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ScreenToViewportPoint, addr 0x6ec3df4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint_Injected, addr 0x6ec3ea0, size 0x54, virtual false, abstract: false, final false
  static inline void ScreenToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToWorldPoint, addr 0x6ec3dec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToWorldPoint, addr 0x6ec3cbc, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenToWorldPoint_Injected, addr 0x6ec3d78, size 0x5c, virtual false, abstract: false, final false
  static inline void ScreenToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// [FreeFunction("CameraScripting::SetLayerCullDistances", HasExplicitThis = true)]
  /// @brief Method SetLayerCullDistances, addr 0x6ebf788, size 0x120, virtual false, abstract: false, final false
  inline void SetLayerCullDistances(/* [NotNull] */ ::ArrayW<float_t> d);

  /// @brief Method SetLayerCullDistances_Injected, addr 0x6ebf8a8, size 0x44, virtual false, abstract: false, final false
  static inline void SetLayerCullDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> d);

  /// @brief Method SetReplacementShader, addr 0x6ec03e8, size 0x1a8, virtual false, abstract: false, final false
  inline void SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method SetReplacementShader_Injected, addr 0x6ec0590, size 0x54, virtual false, abstract: false, final false
  static inline void SetReplacementShader_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> replacementTag);

  /// @brief Method SetStereoProjectionMatrix, addr 0x6ec58ec, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoProjectionMatrix_Injected, addr 0x6ec5984, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoProjectionMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method SetStereoViewMatrix, addr 0x6ec5a94, size 0x98, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoViewMatrix_Injected, addr 0x6ec5b2c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStereoViewMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_StereoscopicEye eye, ::by_ref<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method SetTargetBuffers, addr 0x6ec2d2c, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffers, addr 0x6ec2bc8, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersImpl, addr 0x6ec2ad8, size 0x9c, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersImpl_Injected, addr 0x6ec2b74, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> color, ::by_ref<::UnityEngine::RenderBuffer> depth);

  /// [FreeFunction("CameraScripting::SetTargetBuffers", HasExplicitThis = true)]
  /// @brief Method SetTargetBuffersMRTImpl, addr 0x6ec2bcc, size 0x10c, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer> color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x6ec2cd8, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetBuffersMRTImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> color, ::by_ref<::UnityEngine::RenderBuffer> depth);

  /// [FreeFunction("CameraScripting::SetupCurrent")]
  /// @brief Method SetupCurrent, addr 0x6ec6980, size 0x80, virtual false, abstract: false, final false
  static inline void SetupCurrent(::UnityEngine::Camera* cur);

  /// @brief Method SetupCurrent_Injected, addr 0x6ec6a00, size 0x3c, virtual false, abstract: false, final false
  static inline void SetupCurrent_Injected(::System::IntPtr cur);

  /// [FreeFunction("CameraScripting::SubmitBuiltInObjectIDRenderRequest", HasExplicitThis = true)]
  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SubmitBuiltInObjectIDRenderRequest, addr 0x6ec6778, size 0xe0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture* target, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                                      int32_t depthSlice);

  /// @brief Method SubmitBuiltInObjectIDRenderRequest_Injected, addr 0x6ec6858, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> SubmitBuiltInObjectIDRenderRequest_Injected(::System::IntPtr _unity_self, ::System::IntPtr target, int32_t mipLevel,
                                                                                                      ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename RequestData> inline void SubmitRenderRequest(RequestData renderRequest);

  /// [FreeFunction("CameraScripting::SubmitRenderRequests", HasExplicitThis = true)]
  /// @brief Method SubmitRenderRequestsInternal, addr 0x6ec66a4, size 0x90, virtual false, abstract: false, final false
  inline void SubmitRenderRequestsInternal(::System::Object* requests);

  /// @brief Method SubmitRenderRequestsInternal_Injected, addr 0x6ec6734, size 0x44, virtual false, abstract: false, final false
  static inline void SubmitRenderRequestsInternal_Injected(::System::IntPtr _unity_self, ::System::Object* requests);

  /// @brief Method TryGetCullingParameters, addr 0x6ec7b38, size 0x10, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method TryGetCullingParameters, addr 0x6ec7bf0, size 0x8, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(bool stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method VerticalToHorizontalFieldOfView, addr 0x6ec4878, size 0x40, virtual false, abstract: false, final false
  static inline float_t VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio);

  /// @brief Method ViewportPointToRay, addr 0x6ec40e8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x6ec4238, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ViewportPointToRay, addr 0x6ec4208, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay_Injected, addr 0x6ec41ac, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportPointToRay_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::by_ref<::UnityEngine::Ray> ret);

  /// @brief Method ViewportToScreenPoint, addr 0x6ec3ef4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToScreenPoint_Injected, addr 0x6ec3fa0, size 0x54, virtual false, abstract: false, final false
  static inline void ViewportToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint, addr 0x6ec3de4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToWorldPoint, addr 0x6ec3ba4, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint_Injected, addr 0x6ec3c60, size 0x5c, virtual false, abstract: false, final false
  static inline void ViewportToWorldPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToScreenPoint, addr 0x6ec3dd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToScreenPoint, addr 0x6ec3974, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint_Injected, addr 0x6ec3a30, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToScreenPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                 ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint, addr 0x6ec3ddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint, addr 0x6ec3a8c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint_Injected, addr 0x6ec3b48, size 0x5c, virtual false, abstract: false, final false
  static inline void WorldToViewportPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                   ::by_ref<::UnityEngine::Vector3> ret);

  constexpr uint32_t const& __cordl_internal_get_m_NonSerializedVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_NonSerializedVersion();

  constexpr void __cordl_internal_set_m_NonSerializedVersion(uint32_t value);

  /// @brief Method .ctor, addr 0x6ebcc74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender();

  /// @brief Method get_PreviewCullingLayer, addr 0x6ebf958, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_PreviewCullingLayer();

  /// [NativeName("GetCurrentTargetTexture")]
  /// @brief Method get_activeTexture, addr 0x6ec27bc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture();

  /// @brief Method get_activeTexture_Injected, addr 0x6ec290c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_activeTexture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("CalculateRenderingPath")]
  /// @brief Method get_actualRenderingPath, addr 0x6ebd2d0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method get_actualRenderingPath_Injected, addr 0x6ebd350, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_actualRenderingPath_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allCameras, addr 0x6ec5d44, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_allCameras();

  /// @brief Method get_allCamerasCount, addr 0x6ec5d1c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method get_allowDynamicResolution, addr 0x6ebd768, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowDynamicResolution();

  /// @brief Method get_allowDynamicResolution_Injected, addr 0x6ebd7e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowDynamicResolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowHDR, addr 0x6ebd448, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowHDR();

  /// @brief Method get_allowHDR_Injected, addr 0x6ebd4c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowHDR_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowMSAA, addr 0x6ebd5d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowMSAA();

  /// @brief Method get_allowMSAA_Injected, addr 0x6ebd658, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowMSAA_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_anamorphism, addr 0x6ec15b8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_anamorphism();

  /// @brief Method get_anamorphism_Injected, addr 0x6ec1638, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_anamorphism_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aperture, addr 0x6ec0c14, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aperture();

  /// @brief Method get_aperture_Injected, addr 0x6ec0c94, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aperture_Injected(::System::IntPtr _unity_self);

  /// [NativeName("AreVRStereoViewMatricesWithinSingleCullTolerance")]
  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x6ec50d4, size 0x80, virtual false, abstract: false, final false
  inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance();

  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected, addr 0x6ec5154, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_aspect, addr 0x6ebe4e4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method get_aspect_Injected, addr 0x6ebe564, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_aspect_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_backgroundColor, addr 0x6ebfd7c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x6ebfe18, size 0x44, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_barrelClipping, addr 0x6ec1420, size 0x80, virtual false, abstract: false, final false
  inline float_t get_barrelClipping();

  /// @brief Method get_barrelClipping_Injected, addr 0x6ec14a0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_barrelClipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bladeCount, addr 0x6ec10dc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bladeCount();

  /// @brief Method get_bladeCount_Injected, addr 0x6ec115c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bladeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cameraToWorldMatrix, addr 0x6ec2dec, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix();

  /// @brief Method get_cameraToWorldMatrix_Injected, addr 0x6ec2ea4, size 0x44, virtual false, abstract: false, final false
  static inline void get_cameraToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_cameraType, addr 0x6ebeeec, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraType get_cameraType();

  /// @brief Method get_cameraType_Injected, addr 0x6ebef6c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraType get_cameraType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearFlags, addr 0x6ebff38, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method get_clearFlags_Injected, addr 0x6ebffb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CameraClearFlags get_clearFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clearStencilAfterLightingPass, addr 0x6ec0258, size 0x80, virtual false, abstract: false, final false
  inline bool get_clearStencilAfterLightingPass();

  /// @brief Method get_clearStencilAfterLightingPass_Injected, addr 0x6ec02d8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_commandBufferCount, addr 0x6ec6b40, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_commandBufferCount();

  /// @brief Method get_commandBufferCount_Injected, addr 0x6ec6bc0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_commandBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMask, addr 0x6ebe81c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMask_Injected, addr 0x6ebe89c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMatrix, addr 0x6ebfaf0, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cullingMatrix();

  /// @brief Method get_cullingMatrix_Injected, addr 0x6ebfba8, size 0x44, virtual false, abstract: false, final false
  static inline void get_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_current, addr 0x6ec49f4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_current();

  /// [FreeFunction("GetCurrentCameraPPtr")]
  /// @brief Method get_currentInternal, addr 0x6ec49f8, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_currentInternal();

  /// @brief Method get_currentInternal_Injected, addr 0x6ec4b0c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_currentInternal_Injected();

  /// @brief Method get_curvature, addr 0x6ec126c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_curvature();

  /// @brief Method get_curvature_Injected, addr 0x6ec1304, size 0x44, virtual false, abstract: false, final false
  static inline void get_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_depth, addr 0x6ebe34c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// @brief Method get_depthTextureMode, addr 0x6ec00c8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method get_depthTextureMode_Injected, addr 0x6ec0148, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::DepthTextureMode get_depthTextureMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_depth_Injected, addr 0x6ebe3cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_depth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_eventMask, addr 0x6ebe9ac, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_eventMask();

  /// @brief Method get_eventMask_Injected, addr 0x6ebea2c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_eventMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_farClipPlane, addr 0x6ebce10, size 0x80, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_farClipPlane_Injected, addr 0x6ebce90, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_farClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fieldOfView, addr 0x6ebcfa8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method get_fieldOfView_Injected, addr 0x6ebd028, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_fieldOfView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focalLength, addr 0x6ec0f44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focalLength();

  /// @brief Method get_focalLength_Injected, addr 0x6ec0fc4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focalLength_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_focusDistance, addr 0x6ec0dac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_focusDistance();

  /// @brief Method get_focusDistance_Injected, addr 0x6ec0e2c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_focusDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_forceIntoRenderTexture, addr 0x6ebd8f8, size 0x80, virtual false, abstract: false, final false
  inline bool get_forceIntoRenderTexture();

  /// @brief Method get_forceIntoRenderTexture_Injected, addr 0x6ebd978, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gateFit, addr 0x6ec1ab8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_gateFit();

  /// @brief Method get_gateFit_Injected, addr 0x6ec1b38, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_GateFitMode get_gateFit_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsProcessingRenderRequest")]
  /// @brief Method get_isProcessingRenderRequest, addr 0x6ec68c4, size 0x80, virtual false, abstract: false, final false
  inline bool get_isProcessingRenderRequest();

  /// @brief Method get_isProcessingRenderRequest_Injected, addr 0x6ec6944, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isProcessingRenderRequest_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_iso, addr 0x6ec08ec, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_iso();

  /// @brief Method get_iso_Injected, addr 0x6ec096c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_iso_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCullDistances, addr 0x6ebf8ec, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> get_layerCullDistances();

  /// @brief Method get_layerCullSpherical, addr 0x6ebeb3c, size 0x4, virtual false, abstract: false, final false
  inline bool get_layerCullSpherical();

  /// @brief Method get_layerCullSphericalInternal, addr 0x6ebeb40, size 0x80, virtual false, abstract: false, final false
  inline bool get_layerCullSphericalInternal();

  /// @brief Method get_layerCullSphericalInternal_Injected, addr 0x6ebee6c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lensShift, addr 0x6ec1904, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lensShift();

  /// @brief Method get_lensShift_Injected, addr 0x6ec199c, size 0x44, virtual false, abstract: false, final false
  static inline void get_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// [FreeFunction("FindMainCamera")]
  /// @brief Method get_main, addr 0x6ec48b8, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_main();

  /// @brief Method get_main_Injected, addr 0x6ec49cc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_main_Injected();

  /// @brief Method get_nearClipPlane, addr 0x6ebcc78, size 0x80, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nearClipPlane_Injected, addr 0x6ebccf8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_nearClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_nonJitteredProjectionMatrix, addr 0x6ec3288, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix();

  /// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x6ec3340, size 0x44, virtual false, abstract: false, final false
  static inline void get_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_opaqueSortMode, addr 0x6ebddb0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();

  /// @brief Method get_opaqueSortMode_Injected, addr 0x6ebde30, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic, addr 0x6ebdc20, size 0x80, virtual false, abstract: false, final false
  inline bool get_orthographic();

  /// @brief Method get_orthographicSize, addr 0x6ebda88, size 0x80, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method get_orthographicSize_Injected, addr 0x6ebdb08, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_orthographicSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_orthographic_Injected, addr 0x6ebdca0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_orthographic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_overrideSceneCullingMask, addr 0x6ebf208, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_overrideSceneCullingMask();

  /// @brief Method get_overrideSceneCullingMask_Injected, addr 0x6ebf288, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_pixelHeight, addr 0x6ec22f8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_pixelHeight_Injected, addr 0x6ec2378, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelRect, addr 0x6ec2080, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_pixelRect_Injected, addr 0x6ec211c, size 0x44, virtual false, abstract: false, final false
  static inline void get_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// [FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_pixelWidth, addr 0x6ec223c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_pixelWidth_Injected, addr 0x6ec22bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_pixelWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_previousViewProjectionMatrix, addr 0x6ec35e8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x6ec36a0, size 0x44, virtual false, abstract: false, final false
  static inline void get_previousViewProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_projectionMatrix, addr 0x6ec30b8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method get_projectionMatrixMode, addr 0x6ec06a0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode();

  /// @brief Method get_projectionMatrixMode_Injected, addr 0x6ec0720, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMatrix_Injected, addr 0x6ec3170, size 0x44, virtual false, abstract: false, final false
  static inline void get_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_rect, addr 0x6ec1ec4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x6ec1f60, size 0x44, virtual false, abstract: false, final false
  static inline void get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret);

  /// @brief Method get_renderCloudsInSceneView, addr 0x6ec6068, size 0x80, virtual false, abstract: false, final false
  inline bool get_renderCloudsInSceneView();

  /// @brief Method get_renderCloudsInSceneView_Injected, addr 0x6ec60e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderingPath, addr 0x6ebd140, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_renderingPath();

  /// @brief Method get_renderingPath_Injected, addr 0x6ebd1c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderingPath get_renderingPath_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelHeight", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelHeight, addr 0x6ec2470, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelHeight();

  /// @brief Method get_scaledPixelHeight_Injected, addr 0x6ec24f0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelHeight_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScaledPixelWidth", HasExplicitThis = true)]
  /// @brief Method get_scaledPixelWidth, addr 0x6ec23b4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelWidth();

  /// @brief Method get_scaledPixelWidth_Injected, addr 0x6ec2434, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_scaledPixelWidth_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetScene", HasExplicitThis = true)]
  /// @brief Method get_scene, addr 0x6ec4b34, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x6ebf398, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneCullingMask_Injected, addr 0x6ebf418, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sceneViewFilterMode, addr 0x6ec6064, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_SceneViewFilterMode get_sceneViewFilterMode();

  /// @brief Method get_scene_Injected, addr 0x6ec4bcc, size 0x44, virtual false, abstract: false, final false
  static inline void get_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_sensorSize, addr 0x6ec1750, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sensorSize();

  /// @brief Method get_sensorSize_Injected, addr 0x6ec17e8, size 0x44, virtual false, abstract: false, final false
  static inline void get_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_shutterSpeed, addr 0x6ec0a7c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shutterSpeed();

  /// @brief Method get_shutterSpeed_Injected, addr 0x6ec0afc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shutterSpeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skyboxMaterial, addr 0x6ebf07c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial();

  /// @brief Method get_skyboxMaterial_Injected, addr 0x6ebf1cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_skyboxMaterial_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("CameraScripting::GetStereoActiveEye", HasExplicitThis = true)]
  /// @brief Method get_stereoActiveEye, addr 0x6ec5420, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye();

  /// @brief Method get_stereoActiveEye_Injected, addr 0x6ec54a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoConvergence, addr 0x6ec4f3c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoConvergence();

  /// @brief Method get_stereoConvergence_Injected, addr 0x6ec4fbc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoConvergence_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetStereoEnabledForBuiltInOrSRP")]
  /// @brief Method get_stereoEnabled, addr 0x6ec4ce8, size 0x80, virtual false, abstract: false, final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoEnabled_Injected, addr 0x6ec4d68, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stereoEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoSeparation, addr 0x6ec4da4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stereoSeparation();

  /// @brief Method get_stereoSeparation_Injected, addr 0x6ec4e24, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stereoSeparation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stereoTargetEye, addr 0x6ec5190, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method get_stereoTargetEyeInternal, addr 0x6ec5194, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal();

  /// @brief Method get_stereoTargetEyeInternal_Injected, addr 0x6ec53a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetDisplay, addr 0x6ec2948, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetDisplay_Injected, addr 0x6ec29c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_targetDisplay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetTexture, addr 0x6ec252c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_targetTexture_Injected, addr 0x6ec267c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_transparencySortAxis, addr 0x6ebe0d0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method get_transparencySortAxis_Injected, addr 0x6ebe170, size 0x44, virtual false, abstract: false, final false
  static inline void get_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_transparencySortMode, addr 0x6ebdf40, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method get_transparencySortMode_Injected, addr 0x6ebdfc0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TransparencySortMode get_transparencySortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useInteractiveLightBakingData, addr 0x6ebf454, size 0x80, virtual false, abstract: false, final false
  inline bool get_useInteractiveLightBakingData();

  /// @brief Method get_useInteractiveLightBakingData_Injected, addr 0x6ebf4d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x6ec3458, size 0x80, virtual false, abstract: false, final false
  inline bool get_useJitteredProjectionMatrixForTransparentRendering();

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6ec34d8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useOcclusionCulling, addr 0x6ebf960, size 0x80, virtual false, abstract: false, final false
  inline bool get_useOcclusionCulling();

  /// @brief Method get_useOcclusionCulling_Injected, addr 0x6ebf9e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useOcclusionCulling_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_usePhysicalProperties, addr 0x6ec075c, size 0x80, virtual false, abstract: false, final false
  inline bool get_usePhysicalProperties();

  /// @brief Method get_usePhysicalProperties_Injected, addr 0x6ec07dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_usePhysicalProperties_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6ebe738, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6ebe7d8, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldToCameraMatrix, addr 0x6ec2ee8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method get_worldToCameraMatrix_Injected, addr 0x6ec2fa0, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback* value);

  /// @brief Method set_allowDynamicResolution, addr 0x6ebd824, size 0x90, virtual false, abstract: false, final false
  inline void set_allowDynamicResolution(bool value);

  /// @brief Method set_allowDynamicResolution_Injected, addr 0x6ebd8b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowDynamicResolution_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowHDR, addr 0x6ebd504, size 0x90, virtual false, abstract: false, final false
  inline void set_allowHDR(bool value);

  /// @brief Method set_allowHDR_Injected, addr 0x6ebd594, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowHDR_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowMSAA, addr 0x6ebd694, size 0x90, virtual false, abstract: false, final false
  inline void set_allowMSAA(bool value);

  /// @brief Method set_allowMSAA_Injected, addr 0x6ebd724, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowMSAA_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_anamorphism, addr 0x6ec1674, size 0x90, virtual false, abstract: false, final false
  inline void set_anamorphism(float_t value);

  /// @brief Method set_anamorphism_Injected, addr 0x6ec1704, size 0x4c, virtual false, abstract: false, final false
  static inline void set_anamorphism_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aperture, addr 0x6ec0cd0, size 0x90, virtual false, abstract: false, final false
  inline void set_aperture(float_t value);

  /// @brief Method set_aperture_Injected, addr 0x6ec0d60, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aperture_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_aspect, addr 0x6ebe5a0, size 0x90, virtual false, abstract: false, final false
  inline void set_aspect(float_t value);

  /// @brief Method set_aspect_Injected, addr 0x6ebe630, size 0x4c, virtual false, abstract: false, final false
  static inline void set_aspect_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_backgroundColor, addr 0x6ebfe5c, size 0x98, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x6ebfef4, size 0x44, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_barrelClipping, addr 0x6ec14dc, size 0x90, virtual false, abstract: false, final false
  inline void set_barrelClipping(float_t value);

  /// @brief Method set_barrelClipping_Injected, addr 0x6ec156c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_barrelClipping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_bladeCount, addr 0x6ec1198, size 0x90, virtual false, abstract: false, final false
  inline void set_bladeCount(int32_t value);

  /// @brief Method set_bladeCount_Injected, addr 0x6ec1228, size 0x44, virtual false, abstract: false, final false
  static inline void set_bladeCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cameraType, addr 0x6ebefa8, size 0x90, virtual false, abstract: false, final false
  inline void set_cameraType(::UnityEngine::CameraType value);

  /// @brief Method set_cameraType_Injected, addr 0x6ebf038, size 0x44, virtual false, abstract: false, final false
  static inline void set_cameraType_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraType value);

  /// @brief Method set_clearFlags, addr 0x6ebfff4, size 0x90, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearFlags_Injected, addr 0x6ec0084, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearStencilAfterLightingPass, addr 0x6ec0314, size 0x90, virtual false, abstract: false, final false
  inline void set_clearStencilAfterLightingPass(bool value);

  /// @brief Method set_clearStencilAfterLightingPass_Injected, addr 0x6ec03a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearStencilAfterLightingPass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cullingMask, addr 0x6ebe8d8, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMask_Injected, addr 0x6ebe968, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_cullingMatrix, addr 0x6ebfbec, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_cullingMatrix_Injected, addr 0x6ebfc7c, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_curvature, addr 0x6ec1348, size 0x94, virtual false, abstract: false, final false
  inline void set_curvature(::UnityEngine::Vector2 value);

  /// @brief Method set_curvature_Injected, addr 0x6ec13dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_curvature_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_depth, addr 0x6ebe408, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(float_t value);

  /// @brief Method set_depthTextureMode, addr 0x6ec0184, size 0x90, virtual false, abstract: false, final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depthTextureMode_Injected, addr 0x6ec0214, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthTextureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::DepthTextureMode value);

  /// @brief Method set_depth_Injected, addr 0x6ebe498, size 0x4c, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_eventMask, addr 0x6ebea68, size 0x90, virtual false, abstract: false, final false
  inline void set_eventMask(int32_t value);

  /// @brief Method set_eventMask_Injected, addr 0x6ebeaf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_eventMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_farClipPlane, addr 0x6ebcecc, size 0x90, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_farClipPlane_Injected, addr 0x6ebcf5c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fieldOfView, addr 0x6ebd064, size 0x90, virtual false, abstract: false, final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method set_fieldOfView_Injected, addr 0x6ebd0f4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_fieldOfView_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focalLength, addr 0x6ec1000, size 0x90, virtual false, abstract: false, final false
  inline void set_focalLength(float_t value);

  /// @brief Method set_focalLength_Injected, addr 0x6ec1090, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focalLength_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_focusDistance, addr 0x6ec0e68, size 0x90, virtual false, abstract: false, final false
  inline void set_focusDistance(float_t value);

  /// @brief Method set_focusDistance_Injected, addr 0x6ec0ef8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_focusDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_forceIntoRenderTexture, addr 0x6ebd9b4, size 0x90, virtual false, abstract: false, final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method set_forceIntoRenderTexture_Injected, addr 0x6ebda44, size 0x44, virtual false, abstract: false, final false
  static inline void set_forceIntoRenderTexture_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_gateFit, addr 0x6ec1b74, size 0x90, virtual false, abstract: false, final false
  inline void set_gateFit(::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_gateFit_Injected, addr 0x6ec1c04, size 0x44, virtual false, abstract: false, final false
  static inline void set_gateFit_Injected(::System::IntPtr _unity_self, ::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_iso, addr 0x6ec09a8, size 0x90, virtual false, abstract: false, final false
  inline void set_iso(int32_t value);

  /// @brief Method set_iso_Injected, addr 0x6ec0a38, size 0x44, virtual false, abstract: false, final false
  static inline void set_iso_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_layerCullDistances, addr 0x6ebf8f0, size 0x68, virtual false, abstract: false, final false
  inline void set_layerCullDistances(::ArrayW<float_t> value);

  /// @brief Method set_layerCullSpherical, addr 0x6ebebc0, size 0xfc, virtual false, abstract: false, final false
  inline void set_layerCullSpherical(bool value);

  /// @brief Method set_layerCullSphericalInternal, addr 0x6ebeddc, size 0x90, virtual false, abstract: false, final false
  inline void set_layerCullSphericalInternal(bool value);

  /// @brief Method set_layerCullSphericalInternal_Injected, addr 0x6ebeea8, size 0x44, virtual false, abstract: false, final false
  static inline void set_layerCullSphericalInternal_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lensShift, addr 0x6ec19e0, size 0x94, virtual false, abstract: false, final false
  inline void set_lensShift(::UnityEngine::Vector2 value);

  /// @brief Method set_lensShift_Injected, addr 0x6ec1a74, size 0x44, virtual false, abstract: false, final false
  static inline void set_lensShift_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_nearClipPlane, addr 0x6ebcd34, size 0x90, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nearClipPlane_Injected, addr 0x6ebcdc4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_nonJitteredProjectionMatrix, addr 0x6ec3384, size 0x90, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x6ec3414, size 0x44, virtual false, abstract: false, final false
  static inline void set_nonJitteredProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_opaqueSortMode, addr 0x6ebde6c, size 0x90, virtual false, abstract: false, final false
  inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_opaqueSortMode_Injected, addr 0x6ebdefc, size 0x44, virtual false, abstract: false, final false
  static inline void set_opaqueSortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_orthographic, addr 0x6ebdcdc, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographic(bool value);

  /// @brief Method set_orthographicSize, addr 0x6ebdb44, size 0x90, virtual false, abstract: false, final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method set_orthographicSize_Injected, addr 0x6ebdbd4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_orthographicSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_orthographic_Injected, addr 0x6ebdd6c, size 0x44, virtual false, abstract: false, final false
  static inline void set_orthographic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_overrideSceneCullingMask, addr 0x6ebf2c4, size 0x90, virtual false, abstract: false, final false
  inline void set_overrideSceneCullingMask(uint64_t value);

  /// @brief Method set_overrideSceneCullingMask_Injected, addr 0x6ebf354, size 0x44, virtual false, abstract: false, final false
  static inline void set_overrideSceneCullingMask_Injected(::System::IntPtr _unity_self, uint64_t value);

  /// @brief Method set_pixelRect, addr 0x6ec2160, size 0x98, virtual false, abstract: false, final false
  inline void set_pixelRect(::UnityEngine::Rect value);

  /// @brief Method set_pixelRect_Injected, addr 0x6ec21f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_pixelRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> value);

  /// @brief Method set_projectionMatrix, addr 0x6ec31b4, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_projectionMatrix_Injected, addr 0x6ec3244, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_rect, addr 0x6ec1fa4, size 0x98, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_rect_Injected, addr 0x6ec203c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> value);

  /// @brief Method set_renderCloudsInSceneView, addr 0x6ec6124, size 0x90, virtual false, abstract: false, final false
  inline void set_renderCloudsInSceneView(bool value);

  /// @brief Method set_renderCloudsInSceneView_Injected, addr 0x6ec61b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderCloudsInSceneView_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_renderingPath, addr 0x6ebd1fc, size 0x90, virtual false, abstract: false, final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method set_renderingPath_Injected, addr 0x6ebd28c, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderingPath_Injected(::System::IntPtr _unity_self, ::UnityEngine::RenderingPath value);

  /// [FreeFunction("CameraScripting::SetScene", HasExplicitThis = true)]
  /// @brief Method set_scene, addr 0x6ec4c10, size 0x94, virtual false, abstract: false, final false
  inline void set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method set_scene_Injected, addr 0x6ec4ca4, size 0x44, virtual false, abstract: false, final false
  static inline void set_scene_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene> value);

  /// @brief Method set_sensorSize, addr 0x6ec182c, size 0x94, virtual false, abstract: false, final false
  inline void set_sensorSize(::UnityEngine::Vector2 value);

  /// @brief Method set_sensorSize_Injected, addr 0x6ec18c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_sensorSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_shutterSpeed, addr 0x6ec0b38, size 0x90, virtual false, abstract: false, final false
  inline void set_shutterSpeed(float_t value);

  /// @brief Method set_shutterSpeed_Injected, addr 0x6ec0bc8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shutterSpeed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoConvergence, addr 0x6ec4ff8, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoConvergence(float_t value);

  /// @brief Method set_stereoConvergence_Injected, addr 0x6ec5088, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoConvergence_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoSeparation, addr 0x6ec4e60, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoSeparation(float_t value);

  /// @brief Method set_stereoSeparation_Injected, addr 0x6ec4ef0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stereoSeparation_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stereoTargetEye, addr 0x6ec5214, size 0xfc, virtual false, abstract: false, final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal, addr 0x6ec5310, size 0x90, virtual false, abstract: false, final false
  inline void set_stereoTargetEyeInternal(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_stereoTargetEyeInternal_Injected, addr 0x6ec53dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_stereoTargetEyeInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_targetDisplay, addr 0x6ec2a04, size 0x90, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetDisplay_Injected, addr 0x6ec2a94, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetDisplay_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_targetTexture, addr 0x6ec26b8, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_targetTexture_Injected, addr 0x6ec2778, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_transparencySortAxis, addr 0x6ebe1b4, size 0x98, virtual false, abstract: false, final false
  inline void set_transparencySortAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_transparencySortAxis_Injected, addr 0x6ebe24c, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_transparencySortMode, addr 0x6ebdffc, size 0x90, virtual false, abstract: false, final false
  inline void set_transparencySortMode(::UnityEngine::TransparencySortMode value);

  /// @brief Method set_transparencySortMode_Injected, addr 0x6ebe08c, size 0x44, virtual false, abstract: false, final false
  static inline void set_transparencySortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::TransparencySortMode value);

  /// @brief Method set_useInteractiveLightBakingData, addr 0x6ebf510, size 0x90, virtual false, abstract: false, final false
  inline void set_useInteractiveLightBakingData(bool value);

  /// @brief Method set_useInteractiveLightBakingData_Injected, addr 0x6ebf5a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_useInteractiveLightBakingData_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x6ec3514, size 0x90, virtual false, abstract: false, final false
  inline void set_useJitteredProjectionMatrixForTransparentRendering(bool value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x6ec35a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useOcclusionCulling, addr 0x6ebfa1c, size 0x90, virtual false, abstract: false, final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method set_useOcclusionCulling_Injected, addr 0x6ebfaac, size 0x44, virtual false, abstract: false, final false
  static inline void set_useOcclusionCulling_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_usePhysicalProperties, addr 0x6ec0818, size 0x90, virtual false, abstract: false, final false
  inline void set_usePhysicalProperties(bool value);

  /// @brief Method set_usePhysicalProperties_Injected, addr 0x6ec08a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_usePhysicalProperties_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_worldToCameraMatrix, addr 0x6ec2fe4, size 0x90, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_worldToCameraMatrix_Injected, addr 0x6ec3074, size 0x44, virtual false, abstract: false, final false
  static inline void set_worldToCameraMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9662 };

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
