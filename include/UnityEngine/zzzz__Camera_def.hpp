#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
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
struct Camera_RenderRequestMode;
}
namespace UnityEngine {
struct Camera_RenderRequestOutputSpace;
}
namespace UnityEngine {
struct Camera_RenderRequest;
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
struct Camera_RenderRequestMode;
}
namespace UnityEngine {
struct Camera_RenderRequestOutputSpace;
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
namespace UnityEngine {
struct Camera_RenderRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Camera_GateFitMode);
MARK_VAL_T(::UnityEngine::Camera_MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::Camera_ProjectionMatrixMode);
MARK_VAL_T(::UnityEngine::Camera_RenderRequestMode);
MARK_VAL_T(::UnityEngine::Camera_RenderRequestOutputSpace);
MARK_VAL_T(::UnityEngine::Camera_SceneViewFilterMode);
MARK_VAL_T(::UnityEngine::Camera_StereoscopicEye);
MARK_REF_PTR_T(::UnityEngine::Camera);
MARK_REF_PTR_T(::UnityEngine::Camera_CameraCallback);
MARK_VAL_T(::UnityEngine::Camera_GateFitParameters);
MARK_VAL_T(::UnityEngine::Camera_RenderRequest);
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_ProjectionMatrixMode(int32_t value__) noexcept;

  /// @brief Field Explicit value: I32(0)
  static ::UnityEngine::Camera_ProjectionMatrixMode const Explicit;

  /// @brief Field Implicit value: I32(1)
  static ::UnityEngine::Camera_ProjectionMatrixMode const Implicit;

  /// @brief Field PhysicalPropertiesBased value: I32(2)
  static ::UnityEngine::Camera_ProjectionMatrixMode const PhysicalPropertiesBased;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_ProjectionMatrixMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_ProjectionMatrixMode, 0x4>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_GateFitMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_GateFitMode, 0x4>, "Size mismatch!");

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

  /// @brief Method get_aspect, addr 0x486b478, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method get_mode, addr 0x486b470, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_mode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_GateFitParameters();

  // Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::Camera_GateFitMode", modifiers: "", def_value: None }, CppParam { name: "_aspect_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Camera_GateFitParameters(::UnityEngine::Camera_GateFitMode _mode_k__BackingField, float_t _aspect_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <mode>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Camera_GateFitMode _mode_k__BackingField;

  /// @brief Field <aspect>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _aspect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_GateFitParameters, _mode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Camera_GateFitParameters, _aspect_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_GateFitParameters, 0x8>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_StereoscopicEye(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::Camera_StereoscopicEye const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::Camera_StereoscopicEye const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_StereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_StereoscopicEye, 0x4>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_MonoOrStereoscopicEye(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Left;

  /// @brief Field Mono value: I32(2)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Mono;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::Camera_MonoOrStereoscopicEye const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_MonoOrStereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_MonoOrStereoscopicEye, 0x4>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_SceneViewFilterMode(int32_t value__) noexcept;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Camera_SceneViewFilterMode const Off;

  /// @brief Field ShowFiltered value: I32(1)
  static ::UnityEngine::Camera_SceneViewFilterMode const ShowFiltered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_SceneViewFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_SceneViewFilterMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/RenderRequestMode
struct CORDL_TYPE Camera_RenderRequestMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_RenderRequestMode_Unwrapped
  enum struct __Camera_RenderRequestMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ObjectId = static_cast<int32_t>(0x1),
    __E_Depth = static_cast<int32_t>(0x2),
    __E_VertexNormal = static_cast<int32_t>(0x3),
    __E_WorldPosition = static_cast<int32_t>(0x4),
    __E_EntityId = static_cast<int32_t>(0x5),
    __E_BaseColor = static_cast<int32_t>(0x6),
    __E_SpecularColor = static_cast<int32_t>(0x7),
    __E_Metallic = static_cast<int32_t>(0x8),
    __E_Emission = static_cast<int32_t>(0x9),
    __E_Normal = static_cast<int32_t>(0xa),
    __E_Smoothness = static_cast<int32_t>(0xb),
    __E_Occlusion = static_cast<int32_t>(0xc),
    __E_DiffuseColor = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_RenderRequestMode_Unwrapped() const noexcept {
    return static_cast<__Camera_RenderRequestMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_RenderRequestMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_RenderRequestMode(int32_t value__) noexcept;

  /// @brief Field BaseColor value: I32(6)
  static ::UnityEngine::Camera_RenderRequestMode const BaseColor;

  /// @brief Field Depth value: I32(2)
  static ::UnityEngine::Camera_RenderRequestMode const Depth;

  /// @brief Field DiffuseColor value: I32(13)
  static ::UnityEngine::Camera_RenderRequestMode const DiffuseColor;

  /// @brief Field Emission value: I32(9)
  static ::UnityEngine::Camera_RenderRequestMode const Emission;

  /// @brief Field EntityId value: I32(5)
  static ::UnityEngine::Camera_RenderRequestMode const EntityId;

  /// @brief Field Metallic value: I32(8)
  static ::UnityEngine::Camera_RenderRequestMode const Metallic;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Camera_RenderRequestMode const None;

  /// @brief Field Normal value: I32(10)
  static ::UnityEngine::Camera_RenderRequestMode const Normal;

  /// @brief Field ObjectId value: I32(1)
  static ::UnityEngine::Camera_RenderRequestMode const ObjectId;

  /// @brief Field Occlusion value: I32(12)
  static ::UnityEngine::Camera_RenderRequestMode const Occlusion;

  /// @brief Field Smoothness value: I32(11)
  static ::UnityEngine::Camera_RenderRequestMode const Smoothness;

  /// @brief Field SpecularColor value: I32(7)
  static ::UnityEngine::Camera_RenderRequestMode const SpecularColor;

  /// @brief Field VertexNormal value: I32(3)
  static ::UnityEngine::Camera_RenderRequestMode const VertexNormal;

  /// @brief Field WorldPosition value: I32(4)
  static ::UnityEngine::Camera_RenderRequestMode const WorldPosition;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10675 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_RenderRequestMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_RenderRequestMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/RenderRequestOutputSpace
struct CORDL_TYPE Camera_RenderRequestOutputSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Camera_RenderRequestOutputSpace_Unwrapped
  enum struct __Camera_RenderRequestOutputSpace_Unwrapped : int32_t {
    __E_ScreenSpace = static_cast<int32_t>(0xffffffff),
    __E_UV0 = static_cast<int32_t>(0x0),
    __E_UV1 = static_cast<int32_t>(0x1),
    __E_UV2 = static_cast<int32_t>(0x2),
    __E_UV3 = static_cast<int32_t>(0x3),
    __E_UV4 = static_cast<int32_t>(0x4),
    __E_UV5 = static_cast<int32_t>(0x5),
    __E_UV6 = static_cast<int32_t>(0x6),
    __E_UV7 = static_cast<int32_t>(0x7),
    __E_UV8 = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Camera_RenderRequestOutputSpace_Unwrapped() const noexcept {
    return static_cast<__Camera_RenderRequestOutputSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_RenderRequestOutputSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Camera_RenderRequestOutputSpace(int32_t value__) noexcept;

  /// @brief Field ScreenSpace value: I32(-1)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const ScreenSpace;

  /// @brief Field UV0 value: I32(0)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV0;

  /// @brief Field UV1 value: I32(1)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV1;

  /// @brief Field UV2 value: I32(2)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV2;

  /// @brief Field UV3 value: I32(3)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV3;

  /// @brief Field UV4 value: I32(4)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV4;

  /// @brief Field UV5 value: I32(5)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV5;

  /// @brief Field UV6 value: I32(6)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV6;

  /// @brief Field UV7 value: I32(7)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV7;

  /// @brief Field UV8 value: I32(8)
  static ::UnityEngine::Camera_RenderRequestOutputSpace const UV8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10676 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_RenderRequestOutputSpace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_RenderRequestOutputSpace, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Camera::RenderRequestMode, UnityEngine.Camera::RenderRequestOutputSpace
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/RenderRequest
struct CORDL_TYPE Camera_RenderRequest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_RenderRequest();

  // Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "::UnityEngine::Camera_RenderRequestMode", modifiers: "", def_value: None }, CppParam { name: "m_ResultRT", ty:
  // "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_OutputSpace", ty: "::UnityEngine::Camera_RenderRequestOutputSpace", modifiers: "", def_value: None
  // }]
  constexpr Camera_RenderRequest(::UnityEngine::Camera_RenderRequestMode m_CameraRenderMode, ::UnityW<::UnityEngine::RenderTexture> m_ResultRT,
                                 ::UnityEngine::Camera_RenderRequestOutputSpace m_OutputSpace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10677 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_CameraRenderMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Camera_RenderRequestMode m_CameraRenderMode;

  /// @brief Field m_ResultRT, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_ResultRT;

  /// @brief Field m_OutputSpace, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Camera_RenderRequestOutputSpace m_OutputSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_RenderRequest, m_CameraRenderMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Camera_RenderRequest, m_ResultRT) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Camera_RenderRequest, m_OutputSpace) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_RenderRequest, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera/CameraCallback
class CORDL_TYPE Camera_CameraCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x486b51c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Camera* cam);

  static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x486b480, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera_CameraCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Camera_CameraCallback(Camera_CameraCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Camera_CameraCallback(Camera_CameraCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_CameraCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
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

  using RenderRequest = ::UnityEngine::Camera_RenderRequest;

  using RenderRequestMode = ::UnityEngine::Camera_RenderRequestMode;

  using RenderRequestOutputSpace = ::UnityEngine::Camera_RenderRequestOutputSpace;

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

  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  __declspec(property(get = get_fieldOfView, put = set_fieldOfView)) float_t fieldOfView;

  __declspec(property(get = get_focalLength, put = set_focalLength)) float_t focalLength;

  __declspec(property(get = get_focusDistance, put = set_focusDistance)) float_t focusDistance;

  __declspec(property(get = get_forceIntoRenderTexture, put = set_forceIntoRenderTexture)) bool forceIntoRenderTexture;

  __declspec(property(get = get_gateFit, put = set_gateFit)) ::UnityEngine::Camera_GateFitMode gateFit;

  __declspec(property(get = get_iso, put = set_iso)) int32_t iso;

  __declspec(property(get = get_layerCullDistances, put = set_layerCullDistances)) ::ArrayW<float_t, ::Array<float_t>*> layerCullDistances;

  __declspec(property(get = get_layerCullSpherical, put = set_layerCullSpherical)) bool layerCullSpherical;

  __declspec(property(get = get_lensShift, put = set_lensShift)) ::UnityEngine::Vector2 lensShift;

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

  __declspec(property(get = get_overrideSceneCullingMask, put = set_overrideSceneCullingMask)) uint64_t overrideSceneCullingMask;

  __declspec(property(get = get_pixelHeight)) int32_t pixelHeight;

  __declspec(property(get = get_pixelRect, put = set_pixelRect)) ::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_pixelWidth)) int32_t pixelWidth;

  __declspec(property(get = get_previousViewProjectionMatrix)) ::UnityEngine::Matrix4x4 previousViewProjectionMatrix;

  __declspec(property(get = get_projectionMatrix, put = set_projectionMatrix)) ::UnityEngine::Matrix4x4 projectionMatrix;

  __declspec(property(get = get_projectionMatrixMode)) ::UnityEngine::Camera_ProjectionMatrixMode projectionMatrixMode;

  __declspec(property(get = get_rect, put = set_rect)) ::UnityEngine::Rect rect;

  __declspec(property(get = get_renderingPath, put = set_renderingPath)) ::UnityEngine::RenderingPath renderingPath;

  __declspec(property(get = get_scaledPixelHeight)) int32_t scaledPixelHeight;

  __declspec(property(get = get_scaledPixelWidth)) int32_t scaledPixelWidth;

  __declspec(property(get = get_scene, put = set_scene)) ::UnityEngine::SceneManagement::Scene scene;

  __declspec(property(get = get_sceneCullingMask)) uint64_t sceneCullingMask;

  __declspec(property(get = get_sceneViewFilterMode)) ::UnityEngine::Camera_SceneViewFilterMode sceneViewFilterMode;

  __declspec(property(get = get_sensorSize, put = set_sensorSize)) ::UnityEngine::Vector2 sensorSize;

  __declspec(property(get = get_shutterSpeed, put = set_shutterSpeed)) float_t shutterSpeed;

  __declspec(property(get = get_skyboxMaterial)) ::UnityW<::UnityEngine::Material> skyboxMaterial;

  __declspec(property(get = get_stereoActiveEye)) ::UnityEngine::Camera_MonoOrStereoscopicEye stereoActiveEye;

  __declspec(property(get = get_stereoConvergence, put = set_stereoConvergence)) float_t stereoConvergence;

  __declspec(property(get = get_stereoEnabled)) bool stereoEnabled;

  __declspec(property(get = get_stereoSeparation, put = set_stereoSeparation)) float_t stereoSeparation;

  __declspec(property(get = get_stereoTargetEye, put = set_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask stereoTargetEye;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_targetTexture, put = set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_transparencySortAxis, put = set_transparencySortAxis)) ::UnityEngine::Vector3 transparencySortAxis;

  __declspec(property(get = get_transparencySortMode, put = set_transparencySortMode)) ::UnityEngine::TransparencySortMode transparencySortMode;

  __declspec(property(get = get_useJitteredProjectionMatrixForTransparentRendering,
                      put = set_useJitteredProjectionMatrixForTransparentRendering)) bool useJitteredProjectionMatrixForTransparentRendering;

  __declspec(property(get = get_useOcclusionCulling, put = set_useOcclusionCulling)) bool useOcclusionCulling;

  __declspec(property(get = get_usePhysicalProperties, put = set_usePhysicalProperties)) bool usePhysicalProperties;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldToCameraMatrix, put = set_worldToCameraMatrix)) ::UnityEngine::Matrix4x4 worldToCameraMatrix;

  /// @brief Method AddCommandBuffer, addr 0x486ae34, size 0x134, virtual false, abstract: false, final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsync, addr 0x486af68, size 0x144, virtual false, abstract: false, final false
  inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method AddCommandBufferAsyncImpl, addr 0x486ad84, size 0x5c, virtual false, abstract: false, final false
  inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method AddCommandBufferImpl, addr 0x486ad30, size 0x54, virtual false, abstract: false, final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method CalculateFrustumCorners, addr 0x4869860, size 0xb4, virtual false, abstract: false, final false
  inline void CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> outCorners);

  /// @brief Method CalculateFrustumCornersInternal, addr 0x4869778, size 0x7c, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                              ::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> outCorners);

  /// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x48697f4, size 0x6c, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal_Injected(::ByRef<::UnityEngine::Rect> viewport, float_t z, ::UnityEngine::Camera_MonoOrStereoscopicEye eye,
                                                       ::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> outCorners);

  /// @brief Method CalculateObliqueMatrix, addr 0x4868e8c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method CalculateObliqueMatrix_Injected, addr 0x4868f04, size 0x54, virtual false, abstract: false, final false
  inline void CalculateObliqueMatrix_Injected(::ByRef<::UnityEngine::Vector4> clipPlane, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x4869a30, size 0xc, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalProperties(::ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize, ::UnityEngine::Vector2 lensShift,
                                                                     float_t nearClip, float_t farClip, ::UnityEngine::Camera_GateFitParameters gateFitParameters);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x4869914, size 0x90, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(::ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                             ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                             ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x48699a4, size 0x8c, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(::ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ::ByRef<::UnityEngine::Vector2> sensorSize,
                                                                                      ::ByRef<::UnityEngine::Vector2> lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                      ::UnityEngine::Camera_GateFitMode gateFitMode);

  /// @brief Method CopyFrom, addr 0x486ac30, size 0x44, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x486a08c, size 0x44, virtual false, abstract: false, final false
  inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method FieldOfViewToFocalLength, addr 0x4869a7c, size 0x40, virtual false, abstract: false, final false
  static inline float_t FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize);

  /// @brief Method FireOnPostRender, addr 0x486b2fc, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPreCull, addr 0x486b224, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPreRender, addr 0x486b290, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// @brief Method FocalLengthToFieldOfView, addr 0x4869a3c, size 0x40, virtual false, abstract: false, final false
  static inline float_t FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize);

  /// @brief Method GetAllCameras, addr 0x486a494, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method GetAllCamerasCount, addr 0x486a368, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasCount();

  /// @brief Method GetAllCamerasImpl, addr 0x486a390, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl(::ByRef<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>> cam);

  /// @brief Method GetCameraBufferWarnings, addr 0x4868850, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCameraBufferWarnings();

  /// @brief Method GetCommandBuffers, addr 0x486b1e0, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*, ::Array<::UnityEngine::Rendering::CommandBuffer*>*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method GetCullingParameters_Internal, addr 0x486b3bc, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                   int32_t managedCullingParametersSize);

  /// @brief Method GetFilterMode, addr 0x486a6f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetFilterMode();

  /// @brief Method GetFrustumPlaneSizeAt, addr 0x4869420, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t distance);

  /// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x4869484, size 0x54, virtual false, abstract: false, final false
  inline void GetFrustumPlaneSizeAt_Injected(float_t distance, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetGateFittedFieldOfView, addr 0x48680f0, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetGateFittedFieldOfView();

  /// @brief Method GetGateFittedLensShift, addr 0x486812c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetGateFittedLensShift();

  /// @brief Method GetGateFittedLensShift_Injected, addr 0x4868178, size 0x44, virtual false, abstract: false, final false
  inline void GetGateFittedLensShift_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetLayerCullDistances, addr 0x4867194, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetLayerCullDistances();

  /// @brief Method GetLocalSpaceAim, addr 0x48681bc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalSpaceAim();

  /// @brief Method GetLocalSpaceAim_Injected, addr 0x4868218, size 0x44, virtual false, abstract: false, final false
  inline void GetLocalSpaceAim_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x4869eec, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x4869f68, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoNonJitteredProjectionMatrix_Injected(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetStereoProjectionMatrix, addr 0x486a0d0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoProjectionMatrix_Injected, addr 0x486a14c, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoProjectionMatrix_Injected(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetStereoViewMatrix, addr 0x4869fbc, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye);

  /// @brief Method GetStereoViewMatrix_Injected, addr 0x486a038, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoViewMatrix_Injected(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method HorizontalToVerticalFieldOfView, addr 0x4869abc, size 0x40, virtual false, abstract: false, final false
  static inline float_t HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio);

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method OnlyUsedForTesting1, addr 0x486b368, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting1();

  /// @brief Method OnlyUsedForTesting2, addr 0x486b36c, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting2();

  /// @brief Method RemoveAllCommandBuffers, addr 0x486acf4, size 0x3c, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffers();

  /// @brief Method RemoveCommandBuffer, addr 0x486b0ac, size 0x134, virtual false, abstract: false, final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBufferImpl, addr 0x486ade0, size 0x54, virtual false, abstract: false, final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBuffers, addr 0x486acb0, size 0x44, virtual false, abstract: false, final false
  inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method Render, addr 0x486a828, size 0x3c, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RenderDontRestore, addr 0x486a8b8, size 0x3c, virtual false, abstract: false, final false
  inline void RenderDontRestore();

  /// @brief Method RenderToCubemap, addr 0x486a614, size 0x48, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap);

  /// @brief Method RenderToCubemap, addr 0x486a5c0, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x486a6b0, size 0x48, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method RenderToCubemap, addr 0x486a65c, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x486a7cc, size 0x5c, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemapEyeImpl, addr 0x486a770, size 0x5c, virtual false, abstract: false, final false
  inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::Camera_MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemapImpl, addr 0x486a56c, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, int32_t faceMask);

  /// @brief Method RenderWithShader, addr 0x486a864, size 0x54, virtual false, abstract: false, final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method Reset, addr 0x48666f8, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetAspect, addr 0x4866dc0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetAspect();

  /// @brief Method ResetCullingMatrix, addr 0x48674b0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCullingMatrix();

  /// @brief Method ResetProjectionMatrix, addr 0x4868e50, size 0x3c, virtual false, abstract: false, final false
  inline void ResetProjectionMatrix();

  /// @brief Method ResetReplacementShader, addr 0x48677f4, size 0x3c, virtual false, abstract: false, final false
  inline void ResetReplacementShader();

  /// @brief Method ResetStereoProjectionMatrices, addr 0x486a248, size 0x3c, virtual false, abstract: false, final false
  inline void ResetStereoProjectionMatrices();

  /// @brief Method ResetStereoViewMatrices, addr 0x486a32c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetStereoViewMatrices();

  /// @brief Method ResetTransparencySortSettings, addr 0x4866c74, size 0x3c, virtual false, abstract: false, final false
  inline void ResetTransparencySortSettings();

  /// @brief Method ResetWorldToCameraMatrix, addr 0x4868e14, size 0x3c, virtual false, abstract: false, final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method ScreenPointToRay, addr 0x4869628, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x4869734, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ScreenPointToRay, addr 0x48696fc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay_Injected, addr 0x48696a0, size 0x5c, virtual false, abstract: false, final false
  inline void ScreenPointToRay_Injected(::ByRef<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Ray> ret);

  /// @brief Method ScreenToViewportPoint, addr 0x48692a8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint_Injected, addr 0x4869310, size 0x54, virtual false, abstract: false, final false
  inline void ScreenToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToWorldPoint, addr 0x48692a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToWorldPoint, addr 0x48691bc, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ScreenToWorldPoint_Injected, addr 0x486922c, size 0x5c, virtual false, abstract: false, final false
  inline void ScreenToWorldPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetLayerCullDistances, addr 0x48671d0, size 0x44, virtual false, abstract: false, final false
  inline void SetLayerCullDistances(::ArrayW<float_t, ::Array<float_t>*> d);

  /// @brief Method SetReplacementShader, addr 0x48677a0, size 0x54, virtual false, abstract: false, final false
  inline void SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method SetStereoProjectionMatrix, addr 0x486a1a0, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoProjectionMatrix_Injected, addr 0x486a1f4, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix_Injected(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method SetStereoViewMatrix, addr 0x486a284, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method SetStereoViewMatrix_Injected, addr 0x486a2d8, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix_Injected(::UnityEngine::Camera_StereoscopicEye eye, ::ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method SetTargetBuffers, addr 0x486884c, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffers, addr 0x486879c, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffersImpl, addr 0x48686f0, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersImpl_Injected, addr 0x4868748, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl_Injected(::ByRef<::UnityEngine::RenderBuffer> color, ::ByRef<::UnityEngine::RenderBuffer> depth);

  /// @brief Method SetTargetBuffersMRTImpl, addr 0x48687a0, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x48687f8, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl_Injected(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::ByRef<::UnityEngine::RenderBuffer> depth);

  /// @brief Method SetupCurrent, addr 0x486abf4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetupCurrent(::UnityEngine::Camera* cur);

  /// @brief Method SubmitBuiltInObjectIDRenderRequest, addr 0x486ab88, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture* target, int32_t mipLevel,
                                                                                                                                 ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename RequestData> inline void SubmitRenderRequest(RequestData renderRequest);

  /// @brief Method SubmitRenderRequests, addr 0x486a8f4, size 0x148, virtual false, abstract: false, final false
  inline void SubmitRenderRequests(::System::Collections::Generic::List_1<::UnityEngine::Camera_RenderRequest>* renderRequests);

  /// @brief Method SubmitRenderRequestsInternal, addr 0x486ab44, size 0x44, virtual false, abstract: false, final false
  inline void SubmitRenderRequestsInternal(::System::Object* requests);

  /// @brief Method TryGetCullingParameters, addr 0x486b370, size 0x4c, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method TryGetCullingParameters, addr 0x486b418, size 0x58, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(bool stereoAware, ::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method VerticalToHorizontalFieldOfView, addr 0x4869afc, size 0x40, virtual false, abstract: false, final false
  static inline float_t VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio);

  /// @brief Method ViewportPointToRay, addr 0x48694d8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x48695e4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ViewportPointToRay, addr 0x48695ac, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay_Injected, addr 0x4869550, size 0x5c, virtual false, abstract: false, final false
  inline void ViewportPointToRay_Injected(::ByRef<::UnityEngine::Vector2> pos, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Ray> ret);

  /// @brief Method ViewportToScreenPoint, addr 0x4869364, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToScreenPoint_Injected, addr 0x48693cc, size 0x54, virtual false, abstract: false, final false
  inline void ViewportToScreenPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint, addr 0x4869298, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToWorldPoint, addr 0x48690f0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint_Injected, addr 0x4869160, size 0x5c, virtual false, abstract: false, final false
  inline void ViewportToWorldPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToScreenPoint, addr 0x4869288, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToScreenPoint, addr 0x4868f58, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint_Injected, addr 0x4868fc8, size 0x5c, virtual false, abstract: false, final false
  inline void WorldToScreenPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint, addr 0x4869290, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint, addr 0x4869024, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint_Injected, addr 0x4869094, size 0x5c, virtual false, abstract: false, final false
  inline void WorldToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method .ctor, addr 0x486649c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull();

  static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender();

  /// @brief Method get_PreviewCullingLayer, addr 0x48672f0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_PreviewCullingLayer();

  /// @brief Method get_activeTexture, addr 0x4868634, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture();

  /// @brief Method get_actualRenderingPath, addr 0x48666bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method get_allCameras, addr 0x486a3f4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> get_allCameras();

  /// @brief Method get_allCamerasCount, addr 0x486a3cc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method get_allowDynamicResolution, addr 0x4866834, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowDynamicResolution();

  /// @brief Method get_allowHDR, addr 0x4866734, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowHDR();

  /// @brief Method get_allowMSAA, addr 0x48667b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowMSAA();

  /// @brief Method get_anamorphism, addr 0x4867db0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_anamorphism();

  /// @brief Method get_aperture, addr 0x48679f4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_aperture();

  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x4869df4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance();

  /// @brief Method get_aspect, addr 0x4866d38, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method get_backgroundColor, addr 0x48674ec, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x4867544, size 0x44, virtual false, abstract: false, final false
  inline void get_backgroundColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_barrelClipping, addr 0x4867d28, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_barrelClipping();

  /// @brief Method get_bladeCount, addr 0x4867b8c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_bladeCount();

  /// @brief Method get_cameraToWorldMatrix, addr 0x486888c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix();

  /// @brief Method get_cameraToWorldMatrix_Injected, addr 0x48688f8, size 0x44, virtual false, abstract: false, final false
  inline void get_cameraToWorldMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_cameraType, addr 0x486701c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraType get_cameraType();

  /// @brief Method get_clearFlags, addr 0x4867620, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method get_clearStencilAfterLightingPass, addr 0x4867720, size 0x3c, virtual false, abstract: false, final false
  inline bool get_clearStencilAfterLightingPass();

  /// @brief Method get_commandBufferCount, addr 0x486ac74, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_commandBufferCount();

  /// @brief Method get_cullingMask, addr 0x4866e9c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMatrix, addr 0x4867378, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cullingMatrix();

  /// @brief Method get_cullingMatrix_Injected, addr 0x48673e4, size 0x44, virtual false, abstract: false, final false
  inline void get_cullingMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_current, addr 0x4869b64, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_current();

  /// @brief Method get_curvature, addr 0x4867c0c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_curvature();

  /// @brief Method get_curvature_Injected, addr 0x4867c58, size 0x44, virtual false, abstract: false, final false
  inline void get_curvature_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_depth, addr 0x4866cb0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// @brief Method get_depthTextureMode, addr 0x48676a0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method get_eventMask, addr 0x4866f1c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_eventMask();

  /// @brief Method get_farClipPlane, addr 0x486652c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_fieldOfView, addr 0x48665b4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method get_focalLength, addr 0x4867b04, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_focalLength();

  /// @brief Method get_focusDistance, addr 0x4867a7c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_focusDistance();

  /// @brief Method get_forceIntoRenderTexture, addr 0x48668b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_forceIntoRenderTexture();

  /// @brief Method get_gateFit, addr 0x4868070, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_GateFitMode get_gateFit();

  /// @brief Method get_iso, addr 0x48678ec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_iso();

  /// @brief Method get_layerCullDistances, addr 0x4867214, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_layerCullDistances();

  /// @brief Method get_layerCullSpherical, addr 0x4866f9c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_layerCullSpherical();

  /// @brief Method get_lensShift, addr 0x4867f54, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lensShift();

  /// @brief Method get_lensShift_Injected, addr 0x4867fa0, size 0x44, virtual false, abstract: false, final false
  inline void get_lensShift_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_main, addr 0x4869b3c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_main();

  /// @brief Method get_nearClipPlane, addr 0x48664a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nonJitteredProjectionMatrix, addr 0x4868bac, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix();

  /// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x4868c18, size 0x44, virtual false, abstract: false, final false
  inline void get_nonJitteredProjectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_opaqueSortMode, addr 0x4866a3c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();

  /// @brief Method get_orthographic, addr 0x48669bc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_orthographic();

  /// @brief Method get_orthographicSize, addr 0x4866934, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method get_overrideSceneCullingMask, addr 0x48670d8, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_overrideSceneCullingMask();

  /// @brief Method get_pixelHeight, addr 0x4868500, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_pixelRect, addr 0x4868390, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_pixelRect_Injected, addr 0x48683e8, size 0x44, virtual false, abstract: false, final false
  inline void get_pixelRect_Injected(::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_pixelWidth, addr 0x48684c4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_previousViewProjectionMatrix, addr 0x4868d64, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x4868dd0, size 0x44, virtual false, abstract: false, final false
  inline void get_previousViewProjectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_projectionMatrix, addr 0x4868a74, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method get_projectionMatrixMode, addr 0x4867830, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_ProjectionMatrixMode get_projectionMatrixMode();

  /// @brief Method get_projectionMatrix_Injected, addr 0x4868ae0, size 0x44, virtual false, abstract: false, final false
  inline void get_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_rect, addr 0x486825c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x48682b4, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_renderingPath, addr 0x486663c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_renderingPath();

  /// @brief Method get_scaledPixelHeight, addr 0x4868578, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelHeight();

  /// @brief Method get_scaledPixelWidth, addr 0x486853c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelWidth();

  /// @brief Method get_scene, addr 0x4869b8c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method get_sceneCullingMask, addr 0x4867158, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method get_sceneViewFilterMode, addr 0x486a734, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_SceneViewFilterMode get_sceneViewFilterMode();

  /// @brief Method get_scene_Injected, addr 0x4869bd8, size 0x44, virtual false, abstract: false, final false
  inline void get_scene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method get_sensorSize, addr 0x4867e38, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sensorSize();

  /// @brief Method get_sensorSize_Injected, addr 0x4867e84, size 0x44, virtual false, abstract: false, final false
  inline void get_sensorSize_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_shutterSpeed, addr 0x486796c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shutterSpeed();

  /// @brief Method get_skyboxMaterial, addr 0x486709c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial();

  /// @brief Method get_stereoActiveEye, addr 0x4869eb0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye();

  /// @brief Method get_stereoConvergence, addr 0x4869d6c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stereoConvergence();

  /// @brief Method get_stereoEnabled, addr 0x4869ca8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoSeparation, addr 0x4869ce4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stereoSeparation();

  /// @brief Method get_stereoTargetEye, addr 0x4869e30, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method get_targetDisplay, addr 0x4868670, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetTexture, addr 0x48685b4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_transparencySortAxis, addr 0x4866b3c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method get_transparencySortAxis_Injected, addr 0x4866b98, size 0x44, virtual false, abstract: false, final false
  inline void get_transparencySortAxis_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_transparencySortMode, addr 0x4866abc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x4868ce4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useJitteredProjectionMatrixForTransparentRendering();

  /// @brief Method get_useOcclusionCulling, addr 0x48672f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useOcclusionCulling();

  /// @brief Method get_usePhysicalProperties, addr 0x486786c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_usePhysicalProperties();

  /// @brief Method get_velocity, addr 0x4866dfc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x4866e58, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldToCameraMatrix, addr 0x486893c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method get_worldToCameraMatrix_Injected, addr 0x48689a8, size 0x44, virtual false, abstract: false, final false
  inline void get_worldToCameraMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback* value);

  static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback* value);

  /// @brief Method set_allowDynamicResolution, addr 0x4866870, size 0x44, virtual false, abstract: false, final false
  inline void set_allowDynamicResolution(bool value);

  /// @brief Method set_allowHDR, addr 0x4866770, size 0x44, virtual false, abstract: false, final false
  inline void set_allowHDR(bool value);

  /// @brief Method set_allowMSAA, addr 0x48667f0, size 0x44, virtual false, abstract: false, final false
  inline void set_allowMSAA(bool value);

  /// @brief Method set_anamorphism, addr 0x4867dec, size 0x4c, virtual false, abstract: false, final false
  inline void set_anamorphism(float_t value);

  /// @brief Method set_aperture, addr 0x4867a30, size 0x4c, virtual false, abstract: false, final false
  inline void set_aperture(float_t value);

  /// @brief Method set_aspect, addr 0x4866d74, size 0x4c, virtual false, abstract: false, final false
  inline void set_aspect(float_t value);

  /// @brief Method set_backgroundColor, addr 0x4867588, size 0x54, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x48675dc, size 0x44, virtual false, abstract: false, final false
  inline void set_backgroundColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_barrelClipping, addr 0x4867d64, size 0x4c, virtual false, abstract: false, final false
  inline void set_barrelClipping(float_t value);

  /// @brief Method set_bladeCount, addr 0x4867bc8, size 0x44, virtual false, abstract: false, final false
  inline void set_bladeCount(int32_t value);

  /// @brief Method set_cameraType, addr 0x4867058, size 0x44, virtual false, abstract: false, final false
  inline void set_cameraType(::UnityEngine::CameraType value);

  /// @brief Method set_clearFlags, addr 0x486765c, size 0x44, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method set_clearStencilAfterLightingPass, addr 0x486775c, size 0x44, virtual false, abstract: false, final false
  inline void set_clearStencilAfterLightingPass(bool value);

  /// @brief Method set_cullingMask, addr 0x4866ed8, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMatrix, addr 0x4867428, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_cullingMatrix_Injected, addr 0x486746c, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_curvature, addr 0x4867c9c, size 0x48, virtual false, abstract: false, final false
  inline void set_curvature(::UnityEngine::Vector2 value);

  /// @brief Method set_curvature_Injected, addr 0x4867ce4, size 0x44, virtual false, abstract: false, final false
  inline void set_curvature_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_depth, addr 0x4866cec, size 0x4c, virtual false, abstract: false, final false
  inline void set_depth(float_t value);

  /// @brief Method set_depthTextureMode, addr 0x48676dc, size 0x44, virtual false, abstract: false, final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method set_eventMask, addr 0x4866f58, size 0x44, virtual false, abstract: false, final false
  inline void set_eventMask(int32_t value);

  /// @brief Method set_farClipPlane, addr 0x4866568, size 0x4c, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_fieldOfView, addr 0x48665f0, size 0x4c, virtual false, abstract: false, final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method set_focalLength, addr 0x4867b40, size 0x4c, virtual false, abstract: false, final false
  inline void set_focalLength(float_t value);

  /// @brief Method set_focusDistance, addr 0x4867ab8, size 0x4c, virtual false, abstract: false, final false
  inline void set_focusDistance(float_t value);

  /// @brief Method set_forceIntoRenderTexture, addr 0x48668f0, size 0x44, virtual false, abstract: false, final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method set_gateFit, addr 0x48680ac, size 0x44, virtual false, abstract: false, final false
  inline void set_gateFit(::UnityEngine::Camera_GateFitMode value);

  /// @brief Method set_iso, addr 0x4867928, size 0x44, virtual false, abstract: false, final false
  inline void set_iso(int32_t value);

  /// @brief Method set_layerCullDistances, addr 0x4867250, size 0xa0, virtual false, abstract: false, final false
  inline void set_layerCullDistances(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method set_layerCullSpherical, addr 0x4866fd8, size 0x44, virtual false, abstract: false, final false
  inline void set_layerCullSpherical(bool value);

  /// @brief Method set_lensShift, addr 0x4867fe4, size 0x48, virtual false, abstract: false, final false
  inline void set_lensShift(::UnityEngine::Vector2 value);

  /// @brief Method set_lensShift_Injected, addr 0x486802c, size 0x44, virtual false, abstract: false, final false
  inline void set_lensShift_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_nearClipPlane, addr 0x48664e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nonJitteredProjectionMatrix, addr 0x4868c5c, size 0x44, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x4868ca0, size 0x44, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_opaqueSortMode, addr 0x4866a78, size 0x44, virtual false, abstract: false, final false
  inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method set_orthographic, addr 0x48669f8, size 0x44, virtual false, abstract: false, final false
  inline void set_orthographic(bool value);

  /// @brief Method set_orthographicSize, addr 0x4866970, size 0x4c, virtual false, abstract: false, final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method set_overrideSceneCullingMask, addr 0x4867114, size 0x44, virtual false, abstract: false, final false
  inline void set_overrideSceneCullingMask(uint64_t value);

  /// @brief Method set_pixelRect, addr 0x486842c, size 0x54, virtual false, abstract: false, final false
  inline void set_pixelRect(::UnityEngine::Rect value);

  /// @brief Method set_pixelRect_Injected, addr 0x4868480, size 0x44, virtual false, abstract: false, final false
  inline void set_pixelRect_Injected(::ByRef<::UnityEngine::Rect> value);

  /// @brief Method set_projectionMatrix, addr 0x4868b24, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_projectionMatrix_Injected, addr 0x4868b68, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_rect, addr 0x48682f8, size 0x54, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_rect_Injected, addr 0x486834c, size 0x44, virtual false, abstract: false, final false
  inline void set_rect_Injected(::ByRef<::UnityEngine::Rect> value);

  /// @brief Method set_renderingPath, addr 0x4866678, size 0x44, virtual false, abstract: false, final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method set_scene, addr 0x4869c1c, size 0x48, virtual false, abstract: false, final false
  inline void set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method set_scene_Injected, addr 0x4869c64, size 0x44, virtual false, abstract: false, final false
  inline void set_scene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> value);

  /// @brief Method set_sensorSize, addr 0x4867ec8, size 0x48, virtual false, abstract: false, final false
  inline void set_sensorSize(::UnityEngine::Vector2 value);

  /// @brief Method set_sensorSize_Injected, addr 0x4867f10, size 0x44, virtual false, abstract: false, final false
  inline void set_sensorSize_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_shutterSpeed, addr 0x48679a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_shutterSpeed(float_t value);

  /// @brief Method set_stereoConvergence, addr 0x4869da8, size 0x4c, virtual false, abstract: false, final false
  inline void set_stereoConvergence(float_t value);

  /// @brief Method set_stereoSeparation, addr 0x4869d20, size 0x4c, virtual false, abstract: false, final false
  inline void set_stereoSeparation(float_t value);

  /// @brief Method set_stereoTargetEye, addr 0x4869e6c, size 0x44, virtual false, abstract: false, final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method set_targetDisplay, addr 0x48686ac, size 0x44, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetTexture, addr 0x48685f0, size 0x44, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_transparencySortAxis, addr 0x4866bdc, size 0x54, virtual false, abstract: false, final false
  inline void set_transparencySortAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_transparencySortAxis_Injected, addr 0x4866c30, size 0x44, virtual false, abstract: false, final false
  inline void set_transparencySortAxis_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_transparencySortMode, addr 0x4866af8, size 0x44, virtual false, abstract: false, final false
  inline void set_transparencySortMode(::UnityEngine::TransparencySortMode value);

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x4868d20, size 0x44, virtual false, abstract: false, final false
  inline void set_useJitteredProjectionMatrixForTransparentRendering(bool value);

  /// @brief Method set_useOcclusionCulling, addr 0x4867334, size 0x44, virtual false, abstract: false, final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method set_usePhysicalProperties, addr 0x48678a8, size 0x44, virtual false, abstract: false, final false
  inline void set_usePhysicalProperties(bool value);

  /// @brief Method set_worldToCameraMatrix, addr 0x48689ec, size 0x44, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_worldToCameraMatrix_Injected, addr 0x4868a30, size 0x44, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Camera(Camera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Camera(Camera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10679 };

  /// @brief Field kMaxAperture offset 0xffffffff size 0x4
  static constexpr float_t kMaxAperture{ static_cast<float_t>(32.0f) };

  /// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxBladeCount{ static_cast<int32_t>(0xb) };

  /// @brief Field kMinAperture offset 0xffffffff size 0x4
  static constexpr float_t kMinAperture{ static_cast<float_t>(0.7f) };

  /// @brief Field kMinBladeCount offset 0xffffffff size 0x4
  static constexpr int32_t kMinBladeCount{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_GateFitMode, "UnityEngine", "Camera/GateFitMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_ProjectionMatrixMode, "UnityEngine", "Camera/ProjectionMatrixMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_RenderRequestMode, "UnityEngine", "Camera/RenderRequestMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_SceneViewFilterMode, "UnityEngine", "Camera/SceneViewFilterMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(::UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera*, "UnityEngine", "Camera");
NEED_NO_BOX(::UnityEngine::Camera_CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_CameraCallback*, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_GateFitParameters, "UnityEngine", "Camera/GateFitParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_RenderRequest, "UnityEngine", "Camera/RenderRequest");
