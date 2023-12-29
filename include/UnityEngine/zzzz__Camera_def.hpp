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
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class __Camera__CameraCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
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
struct __Camera__RenderRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__Camera__MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestMode);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestOutputSpace);
MARK_VAL_T(::UnityEngine::__Camera__StereoscopicEye);
MARK_REF_PTR_T(::UnityEngine::Camera);
MARK_REF_PTR_T(::UnityEngine::__Camera__CameraCallback);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequest);
// Type: ::StereoscopicEye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10079))
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10080))
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
// Type: ::RenderRequestMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10081))
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10082))
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10082)), TypeDefinitionIndex(TypeDefinitionIndex(10081))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10083))
// CS Name: ::Camera::RenderRequest
struct CORDL_TYPE __Camera__RenderRequest {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "::UnityEngine::__Camera__RenderRequestMode", modifiers: "", def_value: None }, CppParam { name: "m_ResultRT", ty:
  // "::UnityEngine::RenderTexture*", modifiers: "", def_value: None }, CppParam { name: "m_OutputSpace", ty: "::UnityEngine::__Camera__RenderRequestOutputSpace", modifiers: "", def_value: None }]
  constexpr __Camera__RenderRequest(::UnityEngine::__Camera__RenderRequestMode m_CameraRenderMode, ::UnityEngine::RenderTexture* m_ResultRT,
                                    ::UnityEngine::__Camera__RenderRequestOutputSpace m_OutputSpace) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Camera__RenderRequest();

  /// @brief Field m_CameraRenderMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::__Camera__RenderRequestMode m_CameraRenderMode;

  /// @brief Field m_ResultRT, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* m_ResultRT;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10084))
// CS Name: ::Camera::CameraCallback*
class CORDL_TYPE __Camera__CameraCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__Camera__CameraCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b62164 size 0xd4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b62238 size 0x14 virtual true final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10085))
// CS Name: ::UnityEngine::Camera*
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using CameraCallback = ::UnityEngine::__Camera__CameraCallback;

  using RenderRequest = ::UnityEngine::__Camera__RenderRequest;

  using RenderRequestOutputSpace = ::UnityEngine::__Camera__RenderRequestOutputSpace;

  using RenderRequestMode = ::UnityEngine::__Camera__RenderRequestMode;

  using MonoOrStereoscopicEye = ::UnityEngine::__Camera__MonoOrStereoscopicEye;

  using StereoscopicEye = ::UnityEngine::__Camera__StereoscopicEye;

  /// @brief Field onPreCull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPreCull, put = setStaticF_onPreCull))::UnityEngine::__Camera__CameraCallback* onPreCull;

  /// @brief Field onPreRender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPreRender, put = setStaticF_onPreRender))::UnityEngine::__Camera__CameraCallback* onPreRender;

  /// @brief Field onPostRender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPostRender, put = setStaticF_onPostRender))::UnityEngine::__Camera__CameraCallback* onPostRender;

  __declspec(property(get = get_nearClipPlane, put = set_nearClipPlane)) float_t nearClipPlane;

  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  __declspec(property(get = get_fieldOfView, put = set_fieldOfView)) float_t fieldOfView;

  __declspec(property(put = set_renderingPath))::UnityEngine::RenderingPath renderingPath;

  __declspec(property(get = get_actualRenderingPath))::UnityEngine::RenderingPath actualRenderingPath;

  __declspec(property(put = set_allowHDR)) bool allowHDR;

  __declspec(property(put = set_allowMSAA)) bool allowMSAA;

  __declspec(property(put = set_forceIntoRenderTexture)) bool forceIntoRenderTexture;

  __declspec(property(put = set_orthographicSize)) float_t orthographicSize;

  __declspec(property(get = get_orthographic, put = set_orthographic)) bool orthographic;

  __declspec(property(get = get_depth, put = set_depth)) float_t depth;

  __declspec(property(get = get_aspect, put = set_aspect)) float_t aspect;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_eventMask)) int32_t eventMask;

  __declspec(property(put = set_useOcclusionCulling)) bool useOcclusionCulling;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_clearFlags, put = set_clearFlags))::UnityEngine::CameraClearFlags clearFlags;

  __declspec(property(get = get_depthTextureMode, put = set_depthTextureMode))::UnityEngine::DepthTextureMode depthTextureMode;

  __declspec(property(put = set_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_pixelRect))::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_pixelWidth)) int32_t pixelWidth;

  __declspec(property(get = get_pixelHeight)) int32_t pixelHeight;

  __declspec(property(get = get_targetTexture, put = set_targetTexture))::UnityEngine::RenderTexture* targetTexture;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_worldToCameraMatrix, put = set_worldToCameraMatrix))::UnityEngine::Matrix4x4 worldToCameraMatrix;

  __declspec(property(get = get_projectionMatrix, put = set_projectionMatrix))::UnityEngine::Matrix4x4 projectionMatrix;

  __declspec(property(get = get_stereoEnabled)) bool stereoEnabled;

  __declspec(property(get = get_stereoTargetEye, put = set_stereoTargetEye))::UnityEngine::StereoTargetEyeMask stereoTargetEye;

  static inline void setStaticF_onPreCull(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreCull();

  static inline void setStaticF_onPreRender(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreRender();

  static inline void setStaticF_onPostRender(::UnityEngine::__Camera__CameraCallback* value);

  static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPostRender();

  static inline ::UnityEngine::Camera* New_ctor();

  /// @brief Method .ctor addr 0x2b6059c size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method get_nearClipPlane addr 0x2b605a4 size 0x3c virtual false final false
  inline float_t get_nearClipPlane();

  /// @brief Method set_nearClipPlane addr 0x2b605e0 size 0x4c virtual false final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method get_farClipPlane addr 0x2b6062c size 0x3c virtual false final false
  inline float_t get_farClipPlane();

  /// @brief Method set_farClipPlane addr 0x2b60668 size 0x4c virtual false final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method get_fieldOfView addr 0x2b606b4 size 0x3c virtual false final false
  inline float_t get_fieldOfView();

  /// @brief Method set_fieldOfView addr 0x2b606f0 size 0x4c virtual false final false
  inline void set_fieldOfView(float_t value);

  /// @brief Method set_renderingPath addr 0x2b6073c size 0x44 virtual false final false
  inline void set_renderingPath(::UnityEngine::RenderingPath value);

  /// @brief Method get_actualRenderingPath addr 0x2b60780 size 0x3c virtual false final false
  inline ::UnityEngine::RenderingPath get_actualRenderingPath();

  /// @brief Method set_allowHDR addr 0x2b607bc size 0x44 virtual false final false
  inline void set_allowHDR(bool value);

  /// @brief Method set_allowMSAA addr 0x2b60800 size 0x44 virtual false final false
  inline void set_allowMSAA(bool value);

  /// @brief Method set_forceIntoRenderTexture addr 0x2b60844 size 0x44 virtual false final false
  inline void set_forceIntoRenderTexture(bool value);

  /// @brief Method set_orthographicSize addr 0x2b60888 size 0x4c virtual false final false
  inline void set_orthographicSize(float_t value);

  /// @brief Method get_orthographic addr 0x2b608d4 size 0x3c virtual false final false
  inline bool get_orthographic();

  /// @brief Method set_orthographic addr 0x2b60910 size 0x44 virtual false final false
  inline void set_orthographic(bool value);

  /// @brief Method get_depth addr 0x2b60954 size 0x3c virtual false final false
  inline float_t get_depth();

  /// @brief Method set_depth addr 0x2b60990 size 0x4c virtual false final false
  inline void set_depth(float_t value);

  /// @brief Method get_aspect addr 0x2b609dc size 0x3c virtual false final false
  inline float_t get_aspect();

  /// @brief Method set_aspect addr 0x2b60a18 size 0x4c virtual false final false
  inline void set_aspect(float_t value);

  /// @brief Method get_cullingMask addr 0x2b60a64 size 0x3c virtual false final false
  inline int32_t get_cullingMask();

  /// @brief Method set_cullingMask addr 0x2b60aa0 size 0x44 virtual false final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method get_eventMask addr 0x2b60ae4 size 0x3c virtual false final false
  inline int32_t get_eventMask();

  /// @brief Method set_useOcclusionCulling addr 0x2b60b20 size 0x44 virtual false final false
  inline void set_useOcclusionCulling(bool value);

  /// @brief Method get_backgroundColor addr 0x2b60b64 size 0x58 virtual false final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method set_backgroundColor addr 0x2b60c00 size 0x54 virtual false final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method get_clearFlags addr 0x2b60c98 size 0x3c virtual false final false
  inline ::UnityEngine::CameraClearFlags get_clearFlags();

  /// @brief Method set_clearFlags addr 0x2b60cd4 size 0x44 virtual false final false
  inline void set_clearFlags(::UnityEngine::CameraClearFlags value);

  /// @brief Method get_depthTextureMode addr 0x2b60d18 size 0x3c virtual false final false
  inline ::UnityEngine::DepthTextureMode get_depthTextureMode();

  /// @brief Method set_depthTextureMode addr 0x2b60d54 size 0x44 virtual false final false
  inline void set_depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method set_rect addr 0x2b60d98 size 0x54 virtual false final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method get_pixelRect addr 0x2b60e30 size 0x58 virtual false final false
  inline ::UnityEngine::Rect get_pixelRect();

  /// @brief Method get_pixelWidth addr 0x2b60ecc size 0x3c virtual false final false
  inline int32_t get_pixelWidth();

  /// @brief Method get_pixelHeight addr 0x2b60f08 size 0x3c virtual false final false
  inline int32_t get_pixelHeight();

  /// @brief Method get_targetTexture addr 0x2b60f44 size 0x3c virtual false final false
  inline ::UnityEngine::RenderTexture* get_targetTexture();

  /// @brief Method set_targetTexture addr 0x2b60f80 size 0x44 virtual false final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method get_targetDisplay addr 0x2b60fc4 size 0x3c virtual false final false
  inline int32_t get_targetDisplay();

  /// @brief Method set_targetDisplay addr 0x2b61000 size 0x44 virtual false final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method get_worldToCameraMatrix addr 0x2b61044 size 0x6c virtual false final false
  inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix();

  /// @brief Method set_worldToCameraMatrix addr 0x2b610f4 size 0x44 virtual false final false
  inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_projectionMatrix addr 0x2b6117c size 0x6c virtual false final false
  inline ::UnityEngine::Matrix4x4 get_projectionMatrix();

  /// @brief Method set_projectionMatrix addr 0x2b6122c size 0x44 virtual false final false
  inline void set_projectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method ResetWorldToCameraMatrix addr 0x2b612b4 size 0x3c virtual false final false
  inline void ResetWorldToCameraMatrix();

  /// @brief Method CalculateObliqueMatrix addr 0x2b612f0 size 0x78 virtual false final false
  inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4 clipPlane);

  /// @brief Method WorldToScreenPoint addr 0x2b613bc size 0x70 virtual false final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method WorldToViewportPoint addr 0x2b61488 size 0x70 virtual false final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ViewportToWorldPoint addr 0x2b61554 size 0x70 virtual false final false
  inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3 position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method WorldToScreenPoint addr 0x2b61620 size 0x8 virtual false final false
  inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 position);

  /// @brief Method WorldToViewportPoint addr 0x2b61628 size 0x8 virtual false final false
  inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenToViewportPoint addr 0x2b61630 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 position);

  /// @brief Method ScreenPointToRay addr 0x2b616ec size 0x78 virtual false final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay addr 0x2b617c0 size 0x38 virtual false final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye);

  /// @brief Method ScreenPointToRay addr 0x2b617f8 size 0x4c virtual false final false
  inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3 pos);

  /// @brief Method get_main addr 0x2b61844 size 0x28 virtual false final false
  static inline ::UnityEngine::Camera* get_main();

  /// @brief Method get_current addr 0x2b6186c size 0x28 virtual false final false
  static inline ::UnityEngine::Camera* get_current();

  /// @brief Method get_stereoEnabled addr 0x2b61894 size 0x3c virtual false final false
  inline bool get_stereoEnabled();

  /// @brief Method get_stereoTargetEye addr 0x2b618d0 size 0x3c virtual false final false
  inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();

  /// @brief Method set_stereoTargetEye addr 0x2b6190c size 0x44 virtual false final false
  inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask value);

  /// @brief Method GetStereoProjectionMatrix addr 0x2b61950 size 0x7c virtual false final false
  inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye eye);

  /// @brief Method GetAllCamerasCount addr 0x2b61a20 size 0x28 virtual false final false
  static inline int32_t GetAllCamerasCount();

  /// @brief Method GetAllCamerasImpl addr 0x2b61a48 size 0x3c virtual false final false
  static inline int32_t GetAllCamerasImpl(ByRef<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>> cam);

  /// @brief Method get_allCamerasCount addr 0x2b61a84 size 0x28 virtual false final false
  static inline int32_t get_allCamerasCount();

  /// @brief Method GetAllCameras addr 0x2b61aac size 0xe4 virtual false final false
  static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method RenderToCubemapImpl addr 0x2b61b90 size 0x54 virtual false final false
  inline bool RenderToCubemapImpl(::UnityEngine::Texture* tex, int32_t faceMask);

  /// @brief Method RenderToCubemap addr 0x2b61be4 size 0x48 virtual false final false
  inline bool RenderToCubemap(::UnityEngine::RenderTexture* cubemap);

  /// @brief Method Render addr 0x2b61c2c size 0x3c virtual false final false
  inline void Render();

  /// @brief Method RenderWithShader addr 0x2b61c68 size 0x54 virtual false final false
  inline void RenderWithShader(::UnityEngine::Shader* shader, ::StringW replacementTag);

  /// @brief Method CopyFrom addr 0x2b61cbc size 0x44 virtual false final false
  inline void CopyFrom(::UnityEngine::Camera* other);

  /// @brief Method AddCommandBufferImpl addr 0x2b61d00 size 0x54 virtual false final false
  inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBufferImpl addr 0x2b61d54 size 0x54 virtual false final false
  inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method AddCommandBuffer addr 0x2b61da8 size 0x13c virtual false final false
  inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method RemoveCommandBuffer addr 0x2b61ee4 size 0x13c virtual false final false
  inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method FireOnPreCull addr 0x2b62020 size 0x6c virtual false final false
  static inline void FireOnPreCull(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPreRender addr 0x2b6208c size 0x6c virtual false final false
  static inline void FireOnPreRender(::UnityEngine::Camera* cam);

  /// @brief Method FireOnPostRender addr 0x2b620f8 size 0x6c virtual false final false
  static inline void FireOnPostRender(::UnityEngine::Camera* cam);

  /// @brief Method get_backgroundColor_Injected addr 0x2b60bbc size 0x44 virtual false final false
  inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_backgroundColor_Injected addr 0x2b60c54 size 0x44 virtual false final false
  inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_rect_Injected addr 0x2b60dec size 0x44 virtual false final false
  inline void set_rect_Injected(ByRef<::UnityEngine::Rect> value);

  /// @brief Method get_pixelRect_Injected addr 0x2b60e88 size 0x44 virtual false final false
  inline void get_pixelRect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_worldToCameraMatrix_Injected addr 0x2b610b0 size 0x44 virtual false final false
  inline void get_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_worldToCameraMatrix_Injected addr 0x2b61138 size 0x44 virtual false final false
  inline void set_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method get_projectionMatrix_Injected addr 0x2b611e8 size 0x44 virtual false final false
  inline void get_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_projectionMatrix_Injected addr 0x2b61270 size 0x44 virtual false final false
  inline void set_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method CalculateObliqueMatrix_Injected addr 0x2b61368 size 0x54 virtual false final false
  inline void CalculateObliqueMatrix_Injected(ByRef<::UnityEngine::Vector4> clipPlane, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method WorldToScreenPoint_Injected addr 0x2b6142c size 0x5c virtual false final false
  inline void WorldToScreenPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method WorldToViewportPoint_Injected addr 0x2b614f8 size 0x5c virtual false final false
  inline void WorldToViewportPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ViewportToWorldPoint_Injected addr 0x2b615c4 size 0x5c virtual false final false
  inline void ViewportToWorldPoint_Injected(ByRef<::UnityEngine::Vector3> position, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenToViewportPoint_Injected addr 0x2b61698 size 0x54 virtual false final false
  inline void ScreenToViewportPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ScreenPointToRay_Injected addr 0x2b61764 size 0x5c virtual false final false
  inline void ScreenPointToRay_Injected(ByRef<::UnityEngine::Vector2> pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye eye, ByRef<::UnityEngine::Ray> ret);

  /// @brief Method GetStereoProjectionMatrix_Injected addr 0x2b619cc size 0x54 virtual false final false
  inline void GetStereoProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<::UnityEngine::Matrix4x4> ret);

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
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestMode, "UnityEngine", "Camera/RenderRequestMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(::UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera*, "UnityEngine", "Camera");
NEED_NO_BOX(::UnityEngine::__Camera__CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__CameraCallback*, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequest, "UnityEngine", "Camera/RenderRequest");
