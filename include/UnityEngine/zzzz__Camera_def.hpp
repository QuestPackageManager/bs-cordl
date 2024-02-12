#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
struct Color;
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
namespace UnityEngine {
class __Camera__CameraCallback;
}
namespace UnityEngine {
struct __Camera__GateFitMode;
}
namespace UnityEngine {
struct __Camera__GateFitParameters;
}
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct __Camera__ProjectionMatrixMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
namespace UnityEngine {
struct __Camera__SceneViewFilterMode;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
// Forward declare root types
namespace UnityEngine {
struct __Camera__GateFitMode;
}
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct __Camera__ProjectionMatrixMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct __Camera__SceneViewFilterMode;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class __Camera__CameraCallback;
}
namespace UnityEngine {
struct __Camera__GateFitParameters;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__Camera__GateFitMode);
MARK_VAL_T(::UnityEngine::__Camera__MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::__Camera__ProjectionMatrixMode);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestMode);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestOutputSpace);
MARK_VAL_T(::UnityEngine::__Camera__SceneViewFilterMode);
MARK_VAL_T(::UnityEngine::__Camera__StereoscopicEye);
MARK_REF_PTR_T(::UnityEngine::Camera);
MARK_REF_PTR_T(::UnityEngine::__Camera__CameraCallback);
MARK_VAL_T(::UnityEngine::__Camera__GateFitParameters);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequest);
// Type: ::ProjectionMatrixMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8891))
// CS Name: ::Camera::ProjectionMatrixMode
struct CORDL_TYPE __Camera__ProjectionMatrixMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__ProjectionMatrixMode_Unwrapped
  enum struct ____Camera__ProjectionMatrixMode_Unwrapped : int32_t {
    __E_Explicit = static_cast<int32_t>(0x0),
    __E_Implicit = static_cast<int32_t>(0x1),
    __E_PhysicalPropertiesBased = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Camera__ProjectionMatrixMode_Unwrapped() const noexcept {
    return static_cast<____Camera__ProjectionMatrixMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__ProjectionMatrixMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__ProjectionMatrixMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Explicit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__ProjectionMatrixMode const Explicit;

  /// @brief Field Implicit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__ProjectionMatrixMode const Implicit;

  /// @brief Field PhysicalPropertiesBased value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Camera__ProjectionMatrixMode const PhysicalPropertiesBased;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__ProjectionMatrixMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__ProjectionMatrixMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::GateFitMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8892))
// CS Name: ::Camera::GateFitMode
struct CORDL_TYPE __Camera__GateFitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__GateFitMode_Unwrapped
  enum struct ____Camera__GateFitMode_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x1),
    __E_Horizontal = static_cast<int32_t>(0x2),
    __E_Fill = static_cast<int32_t>(0x3),
    __E_Overscan = static_cast<int32_t>(0x4),
    __E_None = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Camera__GateFitMode_Unwrapped() const noexcept {
    return static_cast<____Camera__GateFitMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__GateFitMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__GateFitMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__GateFitMode const Vertical;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Camera__GateFitMode const Horizontal;

  /// @brief Field Fill value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__Camera__GateFitMode const Fill;

  /// @brief Field Overscan value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__Camera__GateFitMode const Overscan;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__GateFitMode const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__GateFitMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::GateFitParameters
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8892))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8893))
// CS Name: ::Camera::GateFitParameters
struct CORDL_TYPE __Camera__GateFitParameters {
public:
  // Declarations
  __declspec(property(get = get_mode))::UnityEngine::__Camera__GateFitMode mode;

  __declspec(property(get = get_aspect)) float_t aspect;

  /// @brief Method get_mode, addr 0x2ccf65c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::__Camera__GateFitMode get_mode();

  /// @brief Method get_aspect, addr 0x2ccf664, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspect();

  // Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::__Camera__GateFitMode", modifiers: "", def_value: None }, CppParam { name: "_aspect_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __Camera__GateFitParameters(::UnityEngine::__Camera__GateFitMode _mode_k__BackingField, float_t _aspect_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__GateFitParameters();

  /// @brief Field <mode>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::__Camera__GateFitMode _mode_k__BackingField;

  /// @brief Field <aspect>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _aspect_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__GateFitParameters, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitParameters, _mode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitParameters, _aspect_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::StereoscopicEye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8894))
// CS Name: ::Camera::StereoscopicEye
struct CORDL_TYPE __Camera__StereoscopicEye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__StereoscopicEye_Unwrapped
  enum struct ____Camera__StereoscopicEye_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Camera__StereoscopicEye_Unwrapped() const noexcept {
    return static_cast<____Camera__StereoscopicEye_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__StereoscopicEye(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__StereoscopicEye();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__StereoscopicEye const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__StereoscopicEye const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__StereoscopicEye, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__StereoscopicEye, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::MonoOrStereoscopicEye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8895))
// CS Name: ::Camera::MonoOrStereoscopicEye
struct CORDL_TYPE __Camera__MonoOrStereoscopicEye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__MonoOrStereoscopicEye_Unwrapped
  enum struct ____Camera__MonoOrStereoscopicEye_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Mono = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Camera__MonoOrStereoscopicEye_Unwrapped() const noexcept {
    return static_cast<____Camera__MonoOrStereoscopicEye_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__MonoOrStereoscopicEye(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__MonoOrStereoscopicEye();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Right;

  /// @brief Field Mono value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Mono;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__MonoOrStereoscopicEye, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__MonoOrStereoscopicEye, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::SceneViewFilterMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8896))
// CS Name: ::Camera::SceneViewFilterMode
struct CORDL_TYPE __Camera__SceneViewFilterMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__SceneViewFilterMode_Unwrapped
  enum struct ____Camera__SceneViewFilterMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_ShowFiltered = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Camera__SceneViewFilterMode_Unwrapped() const noexcept {
    return static_cast<____Camera__SceneViewFilterMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__SceneViewFilterMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__SceneViewFilterMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__SceneViewFilterMode const Off;

  /// @brief Field ShowFiltered value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__SceneViewFilterMode const ShowFiltered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__SceneViewFilterMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__SceneViewFilterMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::RenderRequestMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8897))
// CS Name: ::Camera::RenderRequestMode
struct CORDL_TYPE __Camera__RenderRequestMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__RenderRequestMode_Unwrapped
  enum struct ____Camera__RenderRequestMode_Unwrapped : int32_t {
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
  constexpr operator ____Camera__RenderRequestMode_Unwrapped() const noexcept {
    return static_cast<____Camera__RenderRequestMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__RenderRequestMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__RenderRequestMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__RenderRequestMode const None;

  /// @brief Field ObjectId value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__RenderRequestMode const ObjectId;

  /// @brief Field Depth value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Camera__RenderRequestMode const Depth;

  /// @brief Field VertexNormal value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__Camera__RenderRequestMode const VertexNormal;

  /// @brief Field WorldPosition value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__Camera__RenderRequestMode const WorldPosition;

  /// @brief Field EntityId value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__Camera__RenderRequestMode const EntityId;

  /// @brief Field BaseColor value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__Camera__RenderRequestMode const BaseColor;

  /// @brief Field SpecularColor value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__Camera__RenderRequestMode const SpecularColor;

  /// @brief Field Metallic value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__Camera__RenderRequestMode const Metallic;

  /// @brief Field Emission value: static_cast<int32_t>(0x9)
  static ::UnityEngine::__Camera__RenderRequestMode const Emission;

  /// @brief Field Normal value: static_cast<int32_t>(0xa)
  static ::UnityEngine::__Camera__RenderRequestMode const Normal;

  /// @brief Field Smoothness value: static_cast<int32_t>(0xb)
  static ::UnityEngine::__Camera__RenderRequestMode const Smoothness;

  /// @brief Field Occlusion value: static_cast<int32_t>(0xc)
  static ::UnityEngine::__Camera__RenderRequestMode const Occlusion;

  /// @brief Field DiffuseColor value: static_cast<int32_t>(0xd)
  static ::UnityEngine::__Camera__RenderRequestMode const DiffuseColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequestMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequestMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::RenderRequestOutputSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8898))
// CS Name: ::Camera::RenderRequestOutputSpace
struct CORDL_TYPE __Camera__RenderRequestOutputSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Camera__RenderRequestOutputSpace_Unwrapped
  enum struct ____Camera__RenderRequestOutputSpace_Unwrapped : int32_t {
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
  constexpr operator ____Camera__RenderRequestOutputSpace_Unwrapped() const noexcept {
    return static_cast<____Camera__RenderRequestOutputSpace_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Camera__RenderRequestOutputSpace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__RenderRequestOutputSpace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ScreenSpace value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const ScreenSpace;

  /// @brief Field UV0 value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV0;

  /// @brief Field UV1 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV1;

  /// @brief Field UV2 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV2;

  /// @brief Field UV3 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV3;

  /// @brief Field UV4 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV4;

  /// @brief Field UV5 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV5;

  /// @brief Field UV6 value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV6;

  /// @brief Field UV7 value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV7;

  /// @brief Field UV8 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequestOutputSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequestOutputSpace, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::RenderRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8897)), TypeDefinitionIndex(TypeDefinitionIndex(8898))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8899))
// CS Name: ::Camera::RenderRequest
struct CORDL_TYPE __Camera__RenderRequest {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "::UnityEngine::__Camera__RenderRequestMode", modifiers: "", def_value: None }, CppParam { name: "m_ResultRT", ty:
  // "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_OutputSpace", ty: "::UnityEngine::__Camera__RenderRequestOutputSpace", modifiers: "", def_value:
  // None }]
  constexpr __Camera__RenderRequest(::UnityEngine::__Camera__RenderRequestMode m_CameraRenderMode, ::UnityW<::UnityEngine::RenderTexture> m_ResultRT,
                                    ::UnityEngine::__Camera__RenderRequestOutputSpace m_OutputSpace) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__RenderRequest();

  /// @brief Field m_CameraRenderMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::__Camera__RenderRequestMode m_CameraRenderMode;

  /// @brief Field m_ResultRT, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_ResultRT;

  /// @brief Field m_OutputSpace, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::__Camera__RenderRequestOutputSpace m_OutputSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequest, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_CameraRenderMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_ResultRT) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_OutputSpace) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::CameraCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8900))
// CS Name: ::Camera::CameraCallback*
class CORDL_TYPE __Camera__CameraCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__Camera__CameraCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ccf66c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ccf740, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Camera* cam);

  // Ctor Parameters [CppParam { name: "", ty: "__Camera__CameraCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Camera__CameraCallback(__Camera__CameraCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Camera__CameraCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Camera__CameraCallback(__Camera__CameraCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__CameraCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__CameraCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Camera
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8901))
// CS Name: ::UnityEngine::Camera*
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using CameraCallback = ::UnityEngine::__Camera__CameraCallback;

  using RenderRequest = ::UnityEngine::__Camera__RenderRequest;

  using RenderRequestOutputSpace = ::UnityEngine::__Camera__RenderRequestOutputSpace;

  using RenderRequestMode = ::UnityEngine::__Camera__RenderRequestMode;

  using SceneViewFilterMode = ::UnityEngine::__Camera__SceneViewFilterMode;

  using MonoOrStereoscopicEye = ::UnityEngine::__Camera__MonoOrStereoscopicEye;

  using StereoscopicEye = ::UnityEngine::__Camera__StereoscopicEye;

  using GateFitParameters = ::UnityEngine::__Camera__GateFitParameters;

  using GateFitMode = ::UnityEngine::__Camera__GateFitMode;

  using ProjectionMatrixMode = ::UnityEngine::__Camera__ProjectionMatrixMode;

  /// @brief Field onPreCull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPreCull, put = setStaticF_onPreCull))::UnityEngine::__Camera__CameraCallback* onPreCull;

  /// @brief Field onPreRender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPreRender, put = setStaticF_onPreRender))::UnityEngine::__Camera__CameraCallback* onPreRender;

  /// @brief Field onPostRender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPostRender, put = setStaticF_onPostRender))::UnityEngine::__Camera__CameraCallback* onPostRender;

  __declspec(property(get = get_nearClipPlane, put = set_nearClipPlane)) float_t nearClipPlane;

  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  __declspec(property(get = get_fieldOfView, put = set_fieldOfView)) float_t fieldOfView;

  __declspec(property(get = get_renderingPath, put = set_renderingPath))::UnityEngine::RenderingPath renderingPath;

  __declspec(property(get = get_actualRenderingPath))::UnityEngine::RenderingPath actualRenderingPath;

  __declspec(property(get = get_allowHDR, put = set_allowHDR)) bool allowHDR;

  __declspec(property(get = get_allowMSAA, put = set_allowMSAA)) bool allowMSAA;

  __declspec(property(get = get_allowDynamicResolution, put = set_allowDynamicResolution)) bool allowDynamicResolution;

  __declspec(property(get = get_forceIntoRenderTexture, put = set_forceIntoRenderTexture)) bool forceIntoRenderTexture;

  __declspec(property(get = get_orthographicSize, put = set_orthographicSize)) float_t orthographicSize;

  __declspec(property(get = get_orthographic, put = set_orthographic)) bool orthographic;

  __declspec(property(get = get_opaqueSortMode, put = set_opaqueSortMode))::UnityEngine::Rendering::OpaqueSortMode opaqueSortMode;

  __declspec(property(get = get_transparencySortMode, put = set_transparencySortMode))::UnityEngine::TransparencySortMode transparencySortMode;

  __declspec(property(get = get_transparencySortAxis, put = set_transparencySortAxis))::UnityEngine::Vector3 transparencySortAxis;

  __declspec(property(get = get_depth, put = set_depth)) float_t depth;

  __declspec(property(get = get_aspect, put = set_aspect)) float_t aspect;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_eventMask, put = set_eventMask)) int32_t eventMask;

  __declspec(property(get = get_layerCullSpherical, put = set_layerCullSpherical)) bool layerCullSpherical;

  __declspec(property(get = get_cameraType, put = set_cameraType))::UnityEngine::CameraType cameraType;

  __declspec(property(get = get_skyboxMaterial))::UnityW<::UnityEngine::Material> skyboxMaterial;

  __declspec(property(get = get_overrideSceneCullingMask, put = set_overrideSceneCullingMask)) uint64_t overrideSceneCullingMask;

  __declspec(property(get = get_sceneCullingMask)) uint64_t sceneCullingMask;

  __declspec(property(get = get_layerCullDistances, put = set_layerCullDistances))::ArrayW<float_t, ::Array<float_t>*> layerCullDistances;

  __declspec(property(get = get_useOcclusionCulling, put = set_useOcclusionCulling)) bool useOcclusionCulling;

  __declspec(property(get = get_cullingMatrix, put = set_cullingMatrix))::UnityEngine::Matrix4x4 cullingMatrix;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_clearFlags, put = set_clearFlags))::UnityEngine::CameraClearFlags clearFlags;

  __declspec(property(get = get_depthTextureMode, put = set_depthTextureMode))::UnityEngine::DepthTextureMode depthTextureMode;

  __declspec(property(get = get_clearStencilAfterLightingPass, put = set_clearStencilAfterLightingPass)) bool clearStencilAfterLightingPass;

  __declspec(property(get = get_projectionMatrixMode))::UnityEngine::__Camera__ProjectionMatrixMode projectionMatrixMode;

  __declspec(property(get = get_usePhysicalProperties, put = set_usePhysicalProperties)) bool usePhysicalProperties;

  __declspec(property(get = get_sensorSize, put = set_sensorSize))::UnityEngine::Vector2 sensorSize;

  __declspec(property(get = get_lensShift, put = set_lensShift))::UnityEngine::Vector2 lensShift;

  __declspec(property(get = get_focalLength, put = set_focalLength)) float_t focalLength;

  __declspec(property(get = get_gateFit, put = set_gateFit))::UnityEngine::__Camera__GateFitMode gateFit;

  __declspec(property(get = get_rect, put = set_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_pixelRect, put = set_pixelRect))::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_pixelWidth)) int32_t pixelWidth;

  __declspec(property(get = get_pixelHeight)) int32_t pixelHeight;

  __declspec(property(get = get_scaledPixelWidth)) int32_t scaledPixelWidth;

  __declspec(property(get = get_scaledPixelHeight)) int32_t scaledPixelHeight;

  __declspec(property(get = get_targetTexture, put = set_targetTexture))::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_activeTexture))::UnityW<::UnityEngine::RenderTexture> activeTexture;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_cameraToWorldMatrix))::UnityEngine::Matrix4x4 cameraToWorldMatrix;

  __declspec(property(get = get_worldToCameraMatrix, put = set_worldToCameraMatrix))::UnityEngine::Matrix4x4 worldToCameraMatrix;

  __declspec(property(get = get_projectionMatrix, put = set_projectionMatrix))::UnityEngine::Matrix4x4 projectionMatrix;

  __declspec(property(get = get_nonJitteredProjectionMatrix, put = set_nonJitteredProjectionMatrix))::UnityEngine::Matrix4x4 nonJitteredProjectionMatrix;

  __declspec(property(get = get_useJitteredProjectionMatrixForTransparentRendering,
                      put = set_useJitteredProjectionMatrixForTransparentRendering)) bool useJitteredProjectionMatrixForTransparentRendering;

  __declspec(property(get = get_previousViewProjectionMatrix))::UnityEngine::Matrix4x4 previousViewProjectionMatrix;

  __declspec(property(get = get_scene, put = set_scene))::UnityEngine::SceneManagement::Scene scene;

  __declspec(property(get = get_stereoEnabled)) bool stereoEnabled;

  __declspec(property(get = get_stereoSeparation, put = set_stereoSeparation)) float_t stereoSeparation;

  __declspec(property(get = get_stereoConvergence, put = set_stereoConvergence)) float_t stereoConvergence;

  __declspec(property(get = get_areVRStereoViewMatricesWithinSingleCullTolerance)) bool areVRStereoViewMatricesWithinSingleCullTolerance;

  __declspec(property(get = get_stereoTargetEye, put = set_stereoTargetEye))::UnityEngine::StereoTargetEyeMask stereoTargetEye;

  __declspec(property(get = get_stereoActiveEye))::UnityEngine::__Camera__MonoOrStereoscopicEye stereoActiveEye;

  __declspec(property(get = get_sceneViewFilterMode))::UnityEngine::__Camera__SceneViewFilterMode sceneViewFilterMode;

  __declspec(property(get = get_commandBufferCount)) int32_t commandBufferCount;

  static inline void setStaticF_onPreCull(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreCull();

  static inline void setStaticF_onPreRender(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreRender();

  static inline void setStaticF_onPostRender(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method .ctor, addr 0x2ccaba8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_nearClipPlane, addr 0x2ccabac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method set_nearClipPlane, addr 0x2ccabe8, size 0x4c, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method get_farClipPlane, addr 0x2ccac34, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method set_farClipPlane, addr 0x2ccac70, size 0x4c, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method get_fieldOfView, addr 0x2ccacbc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method set_fieldOfView, addr 0x2ccacf8, size 0x4c, virtual false, abstract: false, final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method get_renderingPath, addr 0x2ccad44, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_renderingPath();

  /// @brief Method set_renderingPath, addr 0x2ccad80, size 0x44, virtual false, abstract: false, final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method get_actualRenderingPath, addr 0x2ccadc4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method Reset, addr 0x2ccae00, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_allowHDR, addr 0x2ccae3c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowHDR();

  /// @brief Method set_allowHDR, addr 0x2ccae78, size 0x44, virtual false, abstract: false, final false
  inline void set_allowHDR(bool value);

  /// @brief Method get_allowMSAA, addr 0x2ccaebc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowMSAA();

  /// @brief Method set_allowMSAA, addr 0x2ccaef8, size 0x44, virtual false, abstract: false, final false
  inline void set_allowMSAA(bool value);

  /// @brief Method get_allowDynamicResolution, addr 0x2ccaf3c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowDynamicResolution();

  /// @brief Method set_allowDynamicResolution, addr 0x2ccaf78, size 0x44, virtual false, abstract: false, final false
  inline void set_allowDynamicResolution(bool value);

  /// @brief Method get_forceIntoRenderTexture, addr 0x2ccafbc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_forceIntoRenderTexture();

  /// @brief Method set_forceIntoRenderTexture, addr 0x2ccaff8, size 0x44, virtual false, abstract: false, final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method get_orthographicSize, addr 0x2ccb03c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method set_orthographicSize, addr 0x2ccb078, size 0x4c, virtual false, abstract: false, final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method get_orthographic, addr 0x2ccb0c4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_orthographic();

  /// @brief Method set_orthographic, addr 0x2ccb100, size 0x44, virtual false, abstract: false, final false
  inline void set_orthographic(bool value);

  /// @brief Method get_opaqueSortMode, addr 0x2ccb144, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();

  /// @brief Method set_opaqueSortMode, addr 0x2ccb180, size 0x44, virtual false, abstract: false, final false
  inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode value);

  /// @brief Method get_transparencySortMode, addr 0x2ccb1c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method set_transparencySortMode, addr 0x2ccb200, size 0x44, virtual false, abstract: false, final false
  inline void set_transparencySortMode(::UnityEngine::TransparencySortMode value);

  /// @brief Method get_transparencySortAxis, addr 0x2ccb244, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method set_transparencySortAxis, addr 0x2ccb2e4, size 0x54, virtual false, abstract: false, final false
  inline void set_transparencySortAxis(::UnityEngine::Vector3 value);

  /// @brief Method ResetTransparencySortSettings, addr 0x2ccb37c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetTransparencySortSettings();

  /// @brief Method get_depth, addr 0x2ccb3b8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// @brief Method set_depth, addr 0x2ccb3f4, size 0x4c, virtual false, abstract: false, final false
  inline void set_depth(float_t value);

  /// @brief Method get_aspect, addr 0x2ccb440, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_aspect();

  /// @brief Method set_aspect, addr 0x2ccb47c, size 0x4c, virtual false, abstract: false, final false
  inline void set_aspect(float_t value);

  /// @brief Method ResetAspect, addr 0x2ccb4c8, size 0x3c, virtual false, abstract: false, final false
  inline void ResetAspect();

  /// @brief Method get_velocity, addr 0x2ccb504, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_cullingMask, addr 0x2ccb5a4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method set_cullingMask, addr 0x2ccb5e0, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method get_eventMask, addr 0x2ccb624, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_eventMask();

  /// @brief Method set_eventMask, addr 0x2ccb660, size 0x44, virtual false, abstract: false, final false
  inline void set_eventMask(int32_t value);

  /// @brief Method get_layerCullSpherical, addr 0x2ccb6a4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_layerCullSpherical();

  /// @brief Method set_layerCullSpherical, addr 0x2ccb6e0, size 0x44, virtual false, abstract: false, final false
  inline void set_layerCullSpherical(bool value);

  /// @brief Method get_cameraType, addr 0x2ccb724, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraType get_cameraType();

  /// @brief Method set_cameraType, addr 0x2ccb760, size 0x44, virtual false, abstract: false, final false
  inline void set_cameraType(::UnityEngine::CameraType value);

  /// @brief Method get_skyboxMaterial, addr 0x2ccb7a4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial();

  /// @brief Method get_overrideSceneCullingMask, addr 0x2ccb7e0, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_overrideSceneCullingMask();

  /// @brief Method set_overrideSceneCullingMask, addr 0x2ccb81c, size 0x44, virtual false, abstract: false, final false
  inline void set_overrideSceneCullingMask(uint64_t value);

  /// @brief Method get_sceneCullingMask, addr 0x2ccb860, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_sceneCullingMask();

  /// @brief Method GetLayerCullDistances, addr 0x2ccb89c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetLayerCullDistances();

  /// @brief Method SetLayerCullDistances, addr 0x2ccb8d8, size 0x44, virtual false, abstract: false, final false
  inline void SetLayerCullDistances(::ArrayW<float_t, ::Array<float_t>*> d);

  /// @brief Method get_layerCullDistances, addr 0x2ccb91c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_layerCullDistances();

  /// @brief Method set_layerCullDistances, addr 0x2ccb958, size 0xa0, virtual false, abstract: false, final false
  inline void set_layerCullDistances(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method get_PreviewCullingLayer, addr 0x2ccba70, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_PreviewCullingLayer();

  /// @brief Method get_useOcclusionCulling, addr 0x2ccba78, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useOcclusionCulling();

  /// @brief Method set_useOcclusionCulling, addr 0x2ccbab4, size 0x44, virtual false, abstract: false, final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method get_cullingMatrix, addr 0x2ccbaf8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cullingMatrix();

  /// @brief Method set_cullingMatrix, addr 0x2ccbba8, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method ResetCullingMatrix, addr 0x2ccbc30, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCullingMatrix();

  /// @brief Method get_backgroundColor, addr 0x2ccbc6c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method set_backgroundColor, addr 0x2ccbd08, size 0x54, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method get_clearFlags, addr 0x2ccbda0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method set_clearFlags, addr 0x2ccbddc, size 0x44, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method get_depthTextureMode, addr 0x2ccbe20, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method set_depthTextureMode, addr 0x2ccbe5c, size 0x44, virtual false, abstract: false, final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method get_clearStencilAfterLightingPass, addr 0x2ccbea0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_clearStencilAfterLightingPass();

  /// @brief Method set_clearStencilAfterLightingPass, addr 0x2ccbedc, size 0x44, virtual false, abstract: false, final false
  inline void set_clearStencilAfterLightingPass(bool value);

  /// @brief Method SetReplacementShader, addr 0x2ccbf20, size 0x54, virtual false, abstract: false, final false
  inline void SetReplacementShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method ResetReplacementShader, addr 0x2ccbf74, size 0x3c, virtual false, abstract: false, final false
  inline void ResetReplacementShader();

  /// @brief Method get_projectionMatrixMode, addr 0x2ccbfb0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::__Camera__ProjectionMatrixMode get_projectionMatrixMode();

  /// @brief Method get_usePhysicalProperties, addr 0x2ccbfec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_usePhysicalProperties();

  /// @brief Method set_usePhysicalProperties, addr 0x2ccc028, size 0x44, virtual false, abstract: false, final false
  inline void set_usePhysicalProperties(bool value);

  /// @brief Method get_sensorSize, addr 0x2ccc06c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sensorSize();

  /// @brief Method set_sensorSize, addr 0x2ccc0fc, size 0x48, virtual false, abstract: false, final false
  inline void set_sensorSize(::UnityEngine::Vector2 value);

  /// @brief Method get_lensShift, addr 0x2ccc188, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lensShift();

  /// @brief Method set_lensShift, addr 0x2ccc218, size 0x48, virtual false, abstract: false, final false
  inline void set_lensShift(::UnityEngine::Vector2 value);

  /// @brief Method get_focalLength, addr 0x2ccc2a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_focalLength();

  /// @brief Method set_focalLength, addr 0x2ccc2e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_focalLength(float_t value);

  /// @brief Method get_gateFit, addr 0x2ccc32c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::__Camera__GateFitMode get_gateFit();

  /// @brief Method set_gateFit, addr 0x2ccc368, size 0x44, virtual false, abstract: false, final false
  inline void set_gateFit(::UnityEngine::__Camera__GateFitMode value);

  /// @brief Method GetGateFittedFieldOfView, addr 0x2ccc3ac, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetGateFittedFieldOfView();

  /// @brief Method GetGateFittedLensShift, addr 0x2ccc3e8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetGateFittedLensShift();

  /// @brief Method GetLocalSpaceAim, addr 0x2ccc478, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalSpaceAim();

  /// @brief Method get_rect, addr 0x2ccc518, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method set_rect, addr 0x2ccc5b4, size 0x54, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method get_pixelRect, addr 0x2ccc64c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method set_pixelRect, addr 0x2ccc6e8, size 0x54, virtual false, abstract: false, final false
  inline void set_pixelRect(::UnityEngine::Rect value);

  /// @brief Method get_pixelWidth, addr 0x2ccc780, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_pixelHeight, addr 0x2ccc7bc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_scaledPixelWidth, addr 0x2ccc7f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelWidth();

  /// @brief Method get_scaledPixelHeight, addr 0x2ccc834, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_scaledPixelHeight();

  /// @brief Method get_targetTexture, addr 0x2ccc870, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method set_targetTexture, addr 0x2ccc8ac, size 0x44, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method get_activeTexture, addr 0x2ccc8f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture();

  /// @brief Method get_targetDisplay, addr 0x2ccc92c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method set_targetDisplay, addr 0x2ccc968, size 0x44, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method SetTargetBuffersImpl, addr 0x2ccc9ac, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffers, addr 0x2ccca58, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method SetTargetBuffersMRTImpl, addr 0x2ccca5c, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::UnityEngine::RenderBuffer depth);

  /// @brief Method SetTargetBuffers, addr 0x2cccb08, size 0x4, virtual false, abstract: false, final false
  inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> colorBuffer, ::UnityEngine::RenderBuffer depthBuffer);

  /// @brief Method GetCameraBufferWarnings, addr 0x2cccb0c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCameraBufferWarnings();

  /// @brief Method get_cameraToWorldMatrix, addr 0x2cccb48, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix();

  /// @brief Method get_worldToCameraMatrix, addr 0x2cccbf8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method set_worldToCameraMatrix, addr 0x2cccca8, size 0x44, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_projectionMatrix, addr 0x2cccd30, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method set_projectionMatrix, addr 0x2cccde0, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_nonJitteredProjectionMatrix, addr 0x2ccce68, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix();

  /// @brief Method set_nonJitteredProjectionMatrix, addr 0x2cccf18, size 0x44, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x2cccfa0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useJitteredProjectionMatrixForTransparentRendering();

  /// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x2cccfdc, size 0x44, virtual false, abstract: false, final false
  inline void set_useJitteredProjectionMatrixForTransparentRendering(bool value);

  /// @brief Method get_previousViewProjectionMatrix, addr 0x2ccd020, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method ResetWorldToCameraMatrix, addr 0x2ccd0d0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method ResetProjectionMatrix, addr 0x2ccd10c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetProjectionMatrix();

  /// @brief Method CalculateObliqueMatrix, addr 0x2ccd148, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method WorldToScreenPoint, addr 0x2ccd214, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint, addr 0x2ccd2e0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint, addr 0x2ccd3ac, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ScreenToWorldPoint, addr 0x2ccd478, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint, addr 0x2ccd544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint, addr 0x2ccd54c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToWorldPoint, addr 0x2ccd554, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToWorldPoint, addr 0x2ccd55c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint, addr 0x2ccd564, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ViewportToScreenPoint, addr 0x2ccd620, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method GetFrustumPlaneSizeAt, addr 0x2ccd6dc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t distance);

  /// @brief Method ViewportPointToRay, addr 0x2ccd794, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x2ccd868, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ViewportPointToRay, addr 0x2ccd8a0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method ScreenPointToRay, addr 0x2ccd8ec, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x2ccd9c0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay, addr 0x2ccd9f8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method CalculateFrustumCornersInternal, addr 0x2ccda44, size 0x7c, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye,
                                              ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> outCorners);

  /// @brief Method CalculateFrustumCorners, addr 0x2ccdb2c, size 0xbc, virtual false, abstract: false, final false
  inline void CalculateFrustumCorners(::UnityEngine::Rect viewport, float_t z, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye,
                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> outCorners);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x2ccdbe8, size 0x90, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize,
                                                                             ::UnityEngine::Vector2 lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                             ::UnityEngine::__Camera__GateFitMode gateFitMode);

  /// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x2ccdd04, size 0xc, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalProperties(ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ::UnityEngine::Vector2 sensorSize, ::UnityEngine::Vector2 lensShift,
                                                                     float_t nearClip, float_t farClip, ::UnityEngine::__Camera__GateFitParameters gateFitParameters);

  /// @brief Method FocalLengthToFieldOfView, addr 0x2ccdd10, size 0x40, virtual false, abstract: false, final false
  static inline float_t FocalLengthToFieldOfView(float_t focalLength, float_t sensorSize);

  /// @brief Method FieldOfViewToFocalLength, addr 0x2ccdd50, size 0x40, virtual false, abstract: false, final false
  static inline float_t FieldOfViewToFocalLength(float_t fieldOfView, float_t sensorSize);

  /// @brief Method HorizontalToVerticalFieldOfView, addr 0x2ccdd90, size 0x40, virtual false, abstract: false, final false
  static inline float_t HorizontalToVerticalFieldOfView(float_t horizontalFieldOfView, float_t aspectRatio);

  /// @brief Method VerticalToHorizontalFieldOfView, addr 0x2ccddd0, size 0x40, virtual false, abstract: false, final false
  static inline float_t VerticalToHorizontalFieldOfView(float_t verticalFieldOfView, float_t aspectRatio);

  /// @brief Method get_main, addr 0x2ccde10, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_main();

  /// @brief Method get_current, addr 0x2ccde38, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> get_current();

  /// @brief Method get_scene, addr 0x2ccde60, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_scene();

  /// @brief Method set_scene, addr 0x2ccdef0, size 0x48, virtual false, abstract: false, final false
  inline void set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method get_stereoEnabled, addr 0x2ccdf7c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoSeparation, addr 0x2ccdfb8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stereoSeparation();

  /// @brief Method set_stereoSeparation, addr 0x2ccdff4, size 0x4c, virtual false, abstract: false, final false
  inline void set_stereoSeparation(float_t value);

  /// @brief Method get_stereoConvergence, addr 0x2cce040, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stereoConvergence();

  /// @brief Method set_stereoConvergence, addr 0x2cce07c, size 0x4c, virtual false, abstract: false, final false
  inline void set_stereoConvergence(float_t value);

  /// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x2cce0c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance();

  /// @brief Method get_stereoTargetEye, addr 0x2cce104, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method set_stereoTargetEye, addr 0x2cce140, size 0x44, virtual false, abstract: false, final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method get_stereoActiveEye, addr 0x2cce184, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::__Camera__MonoOrStereoscopicEye get_stereoActiveEye();

  /// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x2cce1c0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye eye);

  /// @brief Method GetStereoViewMatrix, addr 0x2cce290, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::__Camera__StereoscopicEye eye);

  /// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x2cce360, size 0x44, virtual false, abstract: false, final false
  inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::__Camera__StereoscopicEye eye);

  /// @brief Method GetStereoProjectionMatrix, addr 0x2cce3a4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye eye);

  /// @brief Method SetStereoProjectionMatrix, addr 0x2cce474, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method ResetStereoProjectionMatrices, addr 0x2cce51c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetStereoProjectionMatrices();

  /// @brief Method SetStereoViewMatrix, addr 0x2cce558, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix(::UnityEngine::__Camera__StereoscopicEye eye, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method ResetStereoViewMatrices, addr 0x2cce600, size 0x3c, virtual false, abstract: false, final false
  inline void ResetStereoViewMatrices();

  /// @brief Method GetAllCamerasCount, addr 0x2cce63c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasCount();

  /// @brief Method GetAllCamerasImpl, addr 0x2cce664, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllCamerasImpl(ByRef<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>> cam);

  /// @brief Method get_allCamerasCount, addr 0x2cce6a0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method get_allCameras, addr 0x2cce6c8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> get_allCameras();

  /// @brief Method GetAllCameras, addr 0x2cce768, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method RenderToCubemapImpl, addr 0x2cce84c, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x2cce8a0, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x2cce8f4, size 0x48, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::Cubemap* cubemap);

  /// @brief Method RenderToCubemap, addr 0x2cce93c, size 0x54, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask);

  /// @brief Method RenderToCubemap, addr 0x2cce990, size 0x48, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method GetFilterMode, addr 0x2cce9d8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetFilterMode();

  /// @brief Method get_sceneViewFilterMode, addr 0x2ccea14, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::__Camera__SceneViewFilterMode get_sceneViewFilterMode();

  /// @brief Method RenderToCubemapEyeImpl, addr 0x2ccea50, size 0x5c, virtual false, abstract: false, final false
  inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::__Camera__MonoOrStereoscopicEye stereoEye);

  /// @brief Method RenderToCubemap, addr 0x2cceaac, size 0x5c, virtual false, abstract: false, final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap, int32_t faceMask, ::UnityEngine::__Camera__MonoOrStereoscopicEye stereoEye);

  /// @brief Method Render, addr 0x2cceb08, size 0x3c, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RenderWithShader, addr 0x2cceb44, size 0x54, virtual false, abstract: false, final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method RenderDontRestore, addr 0x2cceb98, size 0x3c, virtual false, abstract: false, final false
  inline void RenderDontRestore();

  /// @brief Method SubmitRenderRequests, addr 0x2ccebd4, size 0x14c, virtual false, abstract: false, final false
  inline void SubmitRenderRequests(::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests);

  /// @brief Method SubmitRenderRequestsInternal, addr 0x2cced84, size 0x44, virtual false, abstract: false, final false
  inline void SubmitRenderRequestsInternal(::System::Object* requests);

  /// @brief Method SetupCurrent, addr 0x2ccedc8, size 0x3c, virtual false, abstract: false, final false
  static inline void SetupCurrent(::UnityEngine::Camera* cur);

  /// @brief Method CopyFrom, addr 0x2ccee04, size 0x44, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method get_commandBufferCount, addr 0x2ccee48, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_commandBufferCount();

  /// @brief Method RemoveCommandBuffers, addr 0x2ccee84, size 0x44, virtual false, abstract: false, final false
  inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method RemoveAllCommandBuffers, addr 0x2cceec8, size 0x3c, virtual false, abstract: false, final false
  inline void RemoveAllCommandBuffers();

  /// @brief Method AddCommandBufferImpl, addr 0x2ccef04, size 0x54, virtual false, abstract: false, final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsyncImpl, addr 0x2ccef58, size 0x5c, virtual false, abstract: false, final false
  inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method RemoveCommandBufferImpl, addr 0x2ccefb4, size 0x54, virtual false, abstract: false, final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBuffer, addr 0x2ccf008, size 0x13c, virtual false, abstract: false, final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBufferAsync, addr 0x2ccf144, size 0x14c, virtual false, abstract: false, final false
  inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method RemoveCommandBuffer, addr 0x2ccf290, size 0x13c, virtual false, abstract: false, final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method GetCommandBuffers, addr 0x2ccf3cc, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*, ::Array<::UnityEngine::Rendering::CommandBuffer*>*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent evt);

  /// @brief Method FireOnPreCull, addr 0x2ccf410, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPreRender, addr 0x2ccf47c, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPostRender, addr 0x2ccf4e8, size 0x6c, virtual false, abstract: false, final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// @brief Method OnlyUsedForTesting1, addr 0x2ccf554, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting1();

  /// @brief Method OnlyUsedForTesting2, addr 0x2ccf558, size 0x4, virtual false, abstract: false, final false
  inline void OnlyUsedForTesting2();

  /// @brief Method TryGetCullingParameters, addr 0x2ccf55c, size 0x4c, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method TryGetCullingParameters, addr 0x2ccf604, size 0x58, virtual false, abstract: false, final false
  inline bool TryGetCullingParameters(bool stereoAware, ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters);

  /// @brief Method GetCullingParameters_Internal, addr 0x2ccf5a8, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetCullingParameters_Internal(::UnityEngine::Camera* camera, bool stereoAware, ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                   int32_t managedCullingParametersSize);

  /// @brief Method get_transparencySortAxis_Injected, addr 0x2ccb2a0, size 0x44, virtual false, abstract: false, final false
  inline void get_transparencySortAxis_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_transparencySortAxis_Injected, addr 0x2ccb338, size 0x44, virtual false, abstract: false, final false
  inline void set_transparencySortAxis_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_velocity_Injected, addr 0x2ccb560, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_cullingMatrix_Injected, addr 0x2ccbb64, size 0x44, virtual false, abstract: false, final false
  inline void get_cullingMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_cullingMatrix_Injected, addr 0x2ccbbec, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method get_backgroundColor_Injected, addr 0x2ccbcc4, size 0x44, virtual false, abstract: false, final false
  inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_backgroundColor_Injected, addr 0x2ccbd5c, size 0x44, virtual false, abstract: false, final false
  inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method get_sensorSize_Injected, addr 0x2ccc0b8, size 0x44, virtual false, abstract: false, final false
  inline void get_sensorSize_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_sensorSize_Injected, addr 0x2ccc144, size 0x44, virtual false, abstract: false, final false
  inline void set_sensorSize_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_lensShift_Injected, addr 0x2ccc1d4, size 0x44, virtual false, abstract: false, final false
  inline void get_lensShift_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_lensShift_Injected, addr 0x2ccc260, size 0x44, virtual false, abstract: false, final false
  inline void set_lensShift_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method GetGateFittedLensShift_Injected, addr 0x2ccc434, size 0x44, virtual false, abstract: false, final false
  inline void GetGateFittedLensShift_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetLocalSpaceAim_Injected, addr 0x2ccc4d4, size 0x44, virtual false, abstract: false, final false
  inline void GetLocalSpaceAim_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rect_Injected, addr 0x2ccc570, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method set_rect_Injected, addr 0x2ccc608, size 0x44, virtual false, abstract: false, final false
  inline void set_rect_Injected(ByRef<::UnityEngine::Rect> value);

  /// @brief Method get_pixelRect_Injected, addr 0x2ccc6a4, size 0x44, virtual false, abstract: false, final false
  inline void get_pixelRect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method set_pixelRect_Injected, addr 0x2ccc73c, size 0x44, virtual false, abstract: false, final false
  inline void set_pixelRect_Injected(ByRef<::UnityEngine::Rect> value);

  /// @brief Method SetTargetBuffersImpl_Injected, addr 0x2ccca04, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetBuffersImpl_Injected(ByRef<::UnityEngine::RenderBuffer> color, ByRef<::UnityEngine::RenderBuffer> depth);

  /// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x2cccab4, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetBuffersMRTImpl_Injected(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ByRef<::UnityEngine::RenderBuffer> depth);

  /// @brief Method get_cameraToWorldMatrix_Injected, addr 0x2cccbb4, size 0x44, virtual false, abstract: false, final false
  inline void get_cameraToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_worldToCameraMatrix_Injected, addr 0x2cccc64, size 0x44, virtual false, abstract: false, final false
  inline void get_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_worldToCameraMatrix_Injected, addr 0x2ccccec, size 0x44, virtual false, abstract: false, final false
  inline void set_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method get_projectionMatrix_Injected, addr 0x2cccd9c, size 0x44, virtual false, abstract: false, final false
  inline void get_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_projectionMatrix_Injected, addr 0x2ccce24, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x2ccced4, size 0x44, virtual false, abstract: false, final false
  inline void get_nonJitteredProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x2cccf5c, size 0x44, virtual false, abstract: false, final false
  inline void set_nonJitteredProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x2ccd08c, size 0x44, virtual false, abstract: false, final false
  inline void get_previousViewProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method CalculateObliqueMatrix_Injected, addr 0x2ccd1c0, size 0x54, virtual false, abstract: false, final false
  inline void CalculateObliqueMatrix_Injected(ByRef<::UnityEngine::Vector4> clipPlane, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method WorldToScreenPoint_Injected, addr 0x2ccd284, size 0x5c, virtual false, abstract: false, final false
  inline void WorldToScreenPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint_Injected, addr 0x2ccd350, size 0x5c, virtual false, abstract: false, final false
  inline void WorldToViewportPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint_Injected, addr 0x2ccd41c, size 0x5c, virtual false, abstract: false, final false
  inline void ViewportToWorldPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToWorldPoint_Injected, addr 0x2ccd4e8, size 0x5c, virtual false, abstract: false, final false
  inline void ScreenToWorldPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToViewportPoint_Injected, addr 0x2ccd5cc, size 0x54, virtual false, abstract: false, final false
  inline void ScreenToViewportPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToScreenPoint_Injected, addr 0x2ccd688, size 0x54, virtual false, abstract: false, final false
  inline void ViewportToScreenPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x2ccd740, size 0x54, virtual false, abstract: false, final false
  inline void GetFrustumPlaneSizeAt_Injected(float_t distance, ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method ViewportPointToRay_Injected, addr 0x2ccd80c, size 0x5c, virtual false, abstract: false, final false
  inline void ViewportPointToRay_Injected(ByRef<::UnityEngine::Vector2> pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Ray> ret);

  /// @brief Method ScreenPointToRay_Injected, addr 0x2ccd964, size 0x5c, virtual false, abstract: false, final false
  inline void ScreenPointToRay_Injected(ByRef<::UnityEngine::Vector2> pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Ray> ret);

  /// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x2ccdac0, size 0x6c, virtual false, abstract: false, final false
  inline void CalculateFrustumCornersInternal_Injected(ByRef<::UnityEngine::Rect> viewport, float_t z, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye,
                                                       ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> outCorners);

  /// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x2ccdc78, size 0x8c, virtual false, abstract: false, final false
  static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(ByRef<::UnityEngine::Matrix4x4> output, float_t focalLength, ByRef<::UnityEngine::Vector2> sensorSize,
                                                                                      ByRef<::UnityEngine::Vector2> lensShift, float_t nearClip, float_t farClip, float_t gateAspect,
                                                                                      ::UnityEngine::__Camera__GateFitMode gateFitMode);

  /// @brief Method get_scene_Injected, addr 0x2ccdeac, size 0x44, virtual false, abstract: false, final false
  inline void get_scene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method set_scene_Injected, addr 0x2ccdf38, size 0x44, virtual false, abstract: false, final false
  inline void set_scene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> value);

  /// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x2cce23c, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoNonJitteredProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetStereoViewMatrix_Injected, addr 0x2cce30c, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoViewMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetStereoProjectionMatrix_Injected, addr 0x2cce420, size 0x54, virtual false, abstract: false, final false
  inline void GetStereoProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method SetStereoProjectionMatrix_Injected, addr 0x2cce4c8, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method SetStereoViewMatrix_Injected, addr 0x2cce5ac, size 0x54, virtual false, abstract: false, final false
  inline void SetStereoViewMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> matrix);

  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Camera(Camera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Camera(Camera const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Camera();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__GateFitMode, "UnityEngine", "Camera/GateFitMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__ProjectionMatrixMode, "UnityEngine", "Camera/ProjectionMatrixMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestMode, "UnityEngine", "Camera/RenderRequestMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__SceneViewFilterMode, "UnityEngine", "Camera/SceneViewFilterMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(::UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera*, "UnityEngine", "Camera");
NEED_NO_BOX(::UnityEngine::__Camera__CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__CameraCallback*, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__GateFitParameters, "UnityEngine", "Camera/GateFitParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequest, "UnityEngine", "Camera/RenderRequest");
