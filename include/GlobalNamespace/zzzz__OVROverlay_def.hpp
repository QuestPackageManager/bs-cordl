#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlay)
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class __OVROverlay__ExternalSurfaceObjectCreated;
}
namespace GlobalNamespace {
struct __OVROverlay__LayerTexture;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayType;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeTextureFormat;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDesc;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerLayout;
}
namespace GlobalNamespace {
struct __OVRPlugin__OverlayShape;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizei;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayType;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class __OVROverlay__ExternalSurfaceObjectCreated;
}
namespace GlobalNamespace {
struct __OVROverlay__LayerTexture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVROverlay__OverlayShape);
MARK_VAL_T(::GlobalNamespace::__OVROverlay__OverlayType);
MARK_REF_PTR_T(::GlobalNamespace::OVROverlay);
MARK_REF_PTR_T(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated);
MARK_VAL_T(::GlobalNamespace::__OVROverlay__LayerTexture);
// Type: ::OverlayShape
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVROverlay::OverlayShape
struct CORDL_TYPE __OVROverlay__OverlayShape {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVROverlay__OverlayShape_Unwrapped
  enum struct ____OVROverlay__OverlayShape_Unwrapped : int32_t {
    __E_Quad = static_cast<int32_t>(0x0),
    __E_Cylinder = static_cast<int32_t>(0x1),
    __E_Cubemap = static_cast<int32_t>(0x2),
    __E_OffcenterCubemap = static_cast<int32_t>(0x4),
    __E_Equirect = static_cast<int32_t>(0x5),
    __E_ReconstructionPassthrough = static_cast<int32_t>(0x7),
    __E_SurfaceProjectedPassthrough = static_cast<int32_t>(0x8),
    __E_Fisheye = static_cast<int32_t>(0x9),
    __E_KeyboardHandsPassthrough = static_cast<int32_t>(0xa),
    __E_KeyboardMaskedHandsPassthrough = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVROverlay__OverlayShape_Unwrapped() const noexcept {
    return static_cast<____OVROverlay__OverlayShape_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__OverlayShape();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVROverlay__OverlayShape(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cubemap value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Cubemap;

  /// @brief Field Cylinder value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Cylinder;

  /// @brief Field Equirect value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Equirect;

  /// @brief Field Fisheye value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Fisheye;

  /// @brief Field KeyboardHandsPassthrough value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const KeyboardHandsPassthrough;

  /// @brief Field KeyboardMaskedHandsPassthrough value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const KeyboardMaskedHandsPassthrough;

  /// @brief Field OffcenterCubemap value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const OffcenterCubemap;

  /// @brief Field Quad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Quad;

  /// @brief Field ReconstructionPassthrough value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const ReconstructionPassthrough;

  /// @brief Field SurfaceProjectedPassthrough value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const SurfaceProjectedPassthrough;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlay__OverlayShape, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__OverlayShape, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OverlayType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVROverlay::OverlayType
struct CORDL_TYPE __OVROverlay__OverlayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVROverlay__OverlayType_Unwrapped
  enum struct ____OVROverlay__OverlayType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Underlay = static_cast<int32_t>(0x1),
    __E_Overlay = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVROverlay__OverlayType_Unwrapped() const noexcept {
    return static_cast<____OVROverlay__OverlayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__OverlayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVROverlay__OverlayType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVROverlay__OverlayType const None;

  /// @brief Field Overlay value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVROverlay__OverlayType const Overlay;

  /// @brief Field Underlay value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVROverlay__OverlayType const Underlay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlay__OverlayType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__OverlayType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ExternalSurfaceObjectCreated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVROverlay::ExternalSurfaceObjectCreated*
class CORDL_TYPE __OVROverlay__ExternalSurfaceObjectCreated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2b1f648, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2b1f668, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2b1f634, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2b1f578, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__ExternalSurfaceObjectCreated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVROverlay__ExternalSurfaceObjectCreated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVROverlay__ExternalSurfaceObjectCreated(__OVROverlay__ExternalSurfaceObjectCreated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVROverlay__ExternalSurfaceObjectCreated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVROverlay__ExternalSurfaceObjectCreated(__OVROverlay__ExternalSurfaceObjectCreated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerTexture
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVROverlay::LayerTexture
struct CORDL_TYPE __OVROverlay__LayerTexture {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__LayerTexture();

  // Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "appTexturePtr", ty: "void*", modifiers: "", def_value:
  // None }, CppParam { name: "swapChain", ty: "::ArrayW<::UnityW<::UnityEngine::Texture>,::Array<::UnityW<::UnityEngine::Texture>>*>", modifiers: "", def_value: None }, CppParam { name:
  // "swapChainPtr", ty: "::ArrayW<void*,::Array<void*>*>", modifiers: "", def_value: None }]
  constexpr __OVROverlay__LayerTexture(::UnityW<::UnityEngine::Texture> appTexture, void* appTexturePtr,
                                       ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> swapChain, ::ArrayW<void*, ::Array<void*>*> swapChainPtr) noexcept;

  /// @brief Field appTexture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> appTexture;

  /// @brief Field appTexturePtr, offset: 0x8, size: 0x8, def value: None
  void* appTexturePtr;

  /// @brief Field swapChain, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> swapChain;

  /// @brief Field swapChainPtr, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<void*, ::Array<void*>*> swapChainPtr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlay__LayerTexture, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__LayerTexture, appTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__LayerTexture, appTexturePtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__LayerTexture, swapChain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlay__LayerTexture, swapChainPtr) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVROverlay
// SizeInfo { instance_size: 456, native_size: -1, calculated_instance_size: 456, calculated_native_size: 453, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVROverlay*
class CORDL_TYPE OVROverlay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ExternalSurfaceObjectCreated = ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated;

  using LayerTexture = ::GlobalNamespace::__OVROverlay__LayerTexture;

  using OverlayShape = ::GlobalNamespace::__OVROverlay__OverlayShape;

  using OverlayType = ::GlobalNamespace::__OVROverlay__OverlayType;

  /// @brief Field OpenVRMouseScale, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_OpenVRMouseScale, put = __cordl_internal_set_OpenVRMouseScale))::UnityEngine::Vector2 OpenVRMouseScale;

  /// @brief Field OpenVROverlayHandle, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_OpenVROverlayHandle, put = __cordl_internal_set_OpenVROverlayHandle)) uint64_t OpenVROverlayHandle;

  /// @brief Field OpenVRUVOffsetAndScale, offset 0x1a8, size 0x10
  __declspec(property(get = __cordl_internal_get_OpenVRUVOffsetAndScale, put = __cordl_internal_set_OpenVRUVOffsetAndScale))::UnityEngine::Vector4 OpenVRUVOffsetAndScale;

  /// @brief Field <layerId>k__BackingField, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get__layerId_k__BackingField, put = __cordl_internal_set__layerId_k__BackingField)) int32_t _layerId_k__BackingField;

  /// @brief Field _previewInEditor, offset 0xfe, size 0x1
  __declspec(property(get = __cordl_internal_get__previewInEditor, put = __cordl_internal_set__previewInEditor)) bool _previewInEditor;

  /// @brief Field colorOffset, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get_colorOffset, put = __cordl_internal_set_colorOffset))::UnityEngine::Vector4 colorOffset;

  /// @brief Field colorScale, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_colorScale, put = __cordl_internal_set_colorScale))::UnityEngine::Vector4 colorScale;

  /// @brief Field compositionDepth, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionDepth, put = __cordl_internal_set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field constructedOverlayXRDevice, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get_constructedOverlayXRDevice,
                      put = __cordl_internal_set_constructedOverlayXRDevice))::GlobalNamespace::__OVRManager__XRDevice constructedOverlayXRDevice;

  /// @brief Field cubeMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cubeMaterial, put = setStaticF_cubeMaterial))::UnityW<::UnityEngine::Material> cubeMaterial;

  /// @brief Field currentOverlayShape, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_currentOverlayShape, put = __cordl_internal_set_currentOverlayShape))::GlobalNamespace::__OVROverlay__OverlayShape currentOverlayShape;

  /// @brief Field currentOverlayType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentOverlayType, put = __cordl_internal_set_currentOverlayType))::GlobalNamespace::__OVROverlay__OverlayType currentOverlayType;

  /// @brief Field destRectLeft, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_destRectLeft, put = __cordl_internal_set_destRectLeft))::UnityEngine::Rect destRectLeft;

  /// @brief Field destRectRight, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_destRectRight, put = __cordl_internal_set_destRectRight))::UnityEngine::Rect destRectRight;

  /// @brief Field externalSurfaceHeight, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_externalSurfaceHeight, put = __cordl_internal_set_externalSurfaceHeight)) int32_t externalSurfaceHeight;

  /// @brief Field externalSurfaceObject, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_externalSurfaceObject, put = __cordl_internal_set_externalSurfaceObject)) void* externalSurfaceObject;

  /// @brief Field externalSurfaceObjectCreated, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_externalSurfaceObjectCreated,
                      put = __cordl_internal_set_externalSurfaceObjectCreated))::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* externalSurfaceObjectCreated;

  /// @brief Field externalSurfaceWidth, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_externalSurfaceWidth, put = __cordl_internal_set_externalSurfaceWidth)) int32_t externalSurfaceWidth;

  /// @brief Field frameIndex, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_frameIndex, put = __cordl_internal_set_frameIndex)) int32_t frameIndex;

  /// @brief Field hidden, offset 0xca, size 0x1
  __declspec(property(get = __cordl_internal_get_hidden, put = __cordl_internal_set_hidden)) bool hidden;

  /// @brief Field instances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instances, put = setStaticF_instances))::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*> instances;

  /// @brief Field invertTextureRects, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_invertTextureRects, put = __cordl_internal_set_invertTextureRects)) bool invertTextureRects;

  /// @brief Field isAlphaPremultiplied, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_isAlphaPremultiplied, put = __cordl_internal_set_isAlphaPremultiplied)) bool isAlphaPremultiplied;

  /// @brief Field isDynamic, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDynamic, put = __cordl_internal_set_isDynamic)) bool isDynamic;

  /// @brief Field isExternalSurface, offset 0xcb, size 0x1
  __declspec(property(get = __cordl_internal_get_isExternalSurface, put = __cordl_internal_set_isExternalSurface)) bool isExternalSurface;

  /// @brief Field isOverridePending, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_isOverridePending, put = __cordl_internal_set_isOverridePending)) bool isOverridePending;

  /// @brief Field isProtectedContent, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_isProtectedContent, put = __cordl_internal_set_isProtectedContent)) bool isProtectedContent;

  /// @brief Field layerCompositionDepth, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_layerCompositionDepth, put = __cordl_internal_set_layerCompositionDepth)) int32_t layerCompositionDepth;

  /// @brief Field layerDesc, offset 0x128, size 0x50
  __declspec(property(get = __cordl_internal_get_layerDesc, put = __cordl_internal_set_layerDesc))::GlobalNamespace::__OVRPlugin__LayerDesc layerDesc;

  __declspec(property(get = get_layerId, put = set_layerId)) int32_t layerId;

  /// @brief Field layerIdHandle, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_layerIdHandle, put = __cordl_internal_set_layerIdHandle))::System::Runtime::InteropServices::GCHandle layerIdHandle;

  /// @brief Field layerIdPtr, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_layerIdPtr, put = __cordl_internal_set_layerIdPtr)) void* layerIdPtr;

  /// @brief Field layerIndex, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_layerIndex, put = __cordl_internal_set_layerIndex)) int32_t layerIndex;

  /// @brief Field layerTextureFormat, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_layerTextureFormat, put = __cordl_internal_set_layerTextureFormat))::GlobalNamespace::__OVRPlugin__EyeTextureFormat layerTextureFormat;

  /// @brief Field layerTextures, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_layerTextures,
                      put = __cordl_internal_set_layerTextures))::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> layerTextures;

  __declspec(property(get = get_layout))::GlobalNamespace::__OVRPlugin__LayerLayout layout;

  /// @brief Field noDepthBufferTesting, offset 0xdc, size 0x1
  __declspec(property(get = __cordl_internal_get_noDepthBufferTesting, put = __cordl_internal_set_noDepthBufferTesting)) bool noDepthBufferTesting;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0xa5, size 0x1
  __declspec(property(get = __cordl_internal_get_overridePerLayerColorScaleAndOffset, put = __cordl_internal_set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field overrideTextureRectMatrix, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideTextureRectMatrix, put = __cordl_internal_set_overrideTextureRectMatrix)) bool overrideTextureRectMatrix;

  /// @brief Field prevFrameIndex, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_prevFrameIndex, put = __cordl_internal_set_prevFrameIndex)) int32_t prevFrameIndex;

  /// @brief Field prevOverlayShape, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_prevOverlayShape, put = __cordl_internal_set_prevOverlayShape))::GlobalNamespace::__OVROverlay__OverlayShape prevOverlayShape;

  __declspec(property(get = get_previewInEditor, put = set_previewInEditor)) bool previewInEditor;

  /// @brief Field rend, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_rend, put = __cordl_internal_set_rend))::UnityW<::UnityEngine::Renderer> rend;

  /// @brief Field srcRectLeft, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_srcRectLeft, put = __cordl_internal_set_srcRectLeft))::UnityEngine::Rect srcRectLeft;

  /// @brief Field srcRectRight, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_srcRectRight, put = __cordl_internal_set_srcRectRight))::UnityEngine::Rect srcRectRight;

  /// @brief Field stageCount, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_stageCount, put = __cordl_internal_set_stageCount)) int32_t stageCount;

  /// @brief Field tex2DMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tex2DMaterial, put = setStaticF_tex2DMaterial))::UnityW<::UnityEngine::Material> tex2DMaterial;

  /// @brief Field texturePtrs, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_texturePtrs, put = __cordl_internal_set_texturePtrs))::ArrayW<void*, ::Array<void*>*> texturePtrs;

  /// @brief Field textureRectMatrix, offset 0x64, size 0x40
  __declspec(property(get = __cordl_internal_get_textureRectMatrix, put = __cordl_internal_set_textureRectMatrix))::GlobalNamespace::__OVRPlugin__TextureRectMatrixf textureRectMatrix;

  /// @brief Field textures, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_textures, put = __cordl_internal_set_textures))::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> textures;

  __declspec(property(get = get_texturesPerStage)) int32_t texturesPerStage;

  /// @brief Field useAutomaticFiltering, offset 0xfd, size 0x1
  __declspec(property(get = __cordl_internal_get_useAutomaticFiltering, put = __cordl_internal_set_useAutomaticFiltering)) bool useAutomaticFiltering;

  /// @brief Field useBicubicFiltering, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get_useBicubicFiltering, put = __cordl_internal_set_useBicubicFiltering)) bool useBicubicFiltering;

  /// @brief Field useEfficientSharpen, offset 0xfc, size 0x1
  __declspec(property(get = __cordl_internal_get_useEfficientSharpen, put = __cordl_internal_set_useEfficientSharpen)) bool useEfficientSharpen;

  /// @brief Field useEfficientSupersample, offset 0xfb, size 0x1
  __declspec(property(get = __cordl_internal_get_useEfficientSupersample, put = __cordl_internal_set_useEfficientSupersample)) bool useEfficientSupersample;

  /// @brief Field useExpensiveSharpen, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get_useExpensiveSharpen, put = __cordl_internal_set_useExpensiveSharpen)) bool useExpensiveSharpen;

  /// @brief Field useExpensiveSuperSample, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_useExpensiveSuperSample, put = __cordl_internal_set_useExpensiveSuperSample)) bool useExpensiveSuperSample;

  /// @brief Field useLegacyCubemapRotation, offset 0xfa, size 0x1
  __declspec(property(get = __cordl_internal_get_useLegacyCubemapRotation, put = __cordl_internal_set_useLegacyCubemapRotation)) bool useLegacyCubemapRotation;

  /// @brief Field xrDeviceConstructed, offset 0x1c4, size 0x1
  __declspec(property(get = __cordl_internal_get_xrDeviceConstructed, put = __cordl_internal_set_xrDeviceConstructed)) bool xrDeviceConstructed;

  /// @brief Method Awake, addr 0x2b1de8c, size 0x2f0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BlitSubImage, addr 0x2b1cf88, size 0x404, virtual false, abstract: false, final false
  inline void BlitSubImage(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dst, ::UnityEngine::Material* mat, ::UnityEngine::Rect rect);

  /// @brief Method ComputePoseAndScale, addr 0x2b1e510, size 0x388, virtual false, abstract: false, final false
  inline void ComputePoseAndScale(ByRef<::GlobalNamespace::OVRPose> pose, ByRef<::UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked);

  /// @brief Method ComputeSubmit, addr 0x2b1e898, size 0x2a0, virtual false, abstract: false, final false
  inline bool ComputeSubmit(ByRef<::GlobalNamespace::OVRPose> pose, ByRef<::UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked);

  /// @brief Method CreateLayer, addr 0x2b1b32c, size 0x410, virtual false, abstract: false, final false
  inline bool CreateLayer(int32_t mipLevels, int32_t sampleCount, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat etFormat, int32_t flags, ::GlobalNamespace::__OVRPlugin__Sizei size,
                          ::GlobalNamespace::__OVRPlugin__OverlayShape shape);

  /// @brief Method CreateLayerTextures, addr 0x2b1b73c, size 0x548, virtual false, abstract: false, final false
  inline bool CreateLayerTextures(bool useMipmaps, ::GlobalNamespace::__OVRPlugin__Sizei size, bool isHdr);

  /// @brief Method DestroyLayer, addr 0x2b1bda8, size 0x2cc, virtual false, abstract: false, final false
  inline void DestroyLayer();

  /// @brief Method DestroyLayerTextures, addr 0x2b1bc84, size 0x124, virtual false, abstract: false, final false
  inline void DestroyLayerTextures();

  /// @brief Method GetBlitRect, addr 0x2b1ce1c, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetBlitRect(int32_t eyeId);

  /// @brief Method GetCurrentLayerDesc, addr 0x2b1c924, size 0x4f8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__LayerDesc GetCurrentLayerDesc();

  /// @brief Method InitOVROverlay, addr 0x2b1e268, size 0x16c, virtual false, abstract: false, final false
  inline void InitOVROverlay();

  /// @brief Method IsPassthroughShape, addr 0x2b1b2d4, size 0x58, virtual false, abstract: false, final false
  static inline bool IsPassthroughShape(::GlobalNamespace::__OVROverlay__OverlayShape shape);

  /// @brief Method LatchLayerTextures, addr 0x2b1c4b8, size 0x46c, virtual false, abstract: false, final false
  inline bool LatchLayerTextures();

  /// @brief Method LateUpdate, addr 0x2b1ee38, size 0x524, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method NeedsTexturesForShape, addr 0x2b1b274, size 0x60, virtual false, abstract: false, final false
  static inline bool NeedsTexturesForShape(::GlobalNamespace::__OVROverlay__OverlayShape shape);

  static inline ::GlobalNamespace::OVROverlay* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b1e4f8, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2b1e3d4, size 0x124, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2b1e1f8, size 0x70, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OpenVROverlayUpdate, addr 0x2b1eb38, size 0x300, virtual false, abstract: false, final false
  inline void OpenVROverlayUpdate(::UnityEngine::Vector3 scale, ::GlobalNamespace::OVRPose pose);

  /// @brief Method OverrideOverlayTextureInfo, addr 0x2b1b0c0, size 0xbc, virtual false, abstract: false, final false
  inline void OverrideOverlayTextureInfo(::UnityEngine::Texture* srcTexture, void* nativePtr, ::UnityEngine::XR::XRNode node);

  /// @brief Method PopulateLayer, addr 0x2b1d38c, size 0x698, virtual false, abstract: false, final false
  inline bool PopulateLayer(int32_t mipLevels, bool isHdr, ::GlobalNamespace::__OVRPlugin__Sizei size, int32_t sampleCount, int32_t stage);

  /// @brief Method SetPerLayerColorScaleAndOffset, addr 0x2b1c4a4, size 0x14, virtual false, abstract: false, final false
  inline void SetPerLayerColorScaleAndOffset(::UnityEngine::Vector4 scale, ::UnityEngine::Vector4 offset);

  /// @brief Method SetSrcDestRects, addr 0x2b1c074, size 0x1c, virtual false, abstract: false, final false
  inline void SetSrcDestRects(::UnityEngine::Rect srcLeft, ::UnityEngine::Rect srcRight, ::UnityEngine::Rect destLeft, ::UnityEngine::Rect destRight);

  /// @brief Method SetupEditorPreview, addr 0x2b1b0bc, size 0x4, virtual false, abstract: false, final false
  inline void SetupEditorPreview();

  /// @brief Method SubmitLayer, addr 0x2b1da24, size 0x468, virtual false, abstract: false, final false
  inline bool SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, ::GlobalNamespace::OVRPose pose, ::UnityEngine::Vector3 scale, int32_t frameIndex);

  /// @brief Method UpdateTextureRectMatrix, addr 0x2b1c090, size 0x414, virtual false, abstract: false, final false
  inline void UpdateTextureRectMatrix();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_OpenVRMouseScale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_OpenVRMouseScale();

  constexpr uint64_t const& __cordl_internal_get_OpenVROverlayHandle() const;

  constexpr uint64_t& __cordl_internal_get_OpenVROverlayHandle();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_OpenVRUVOffsetAndScale() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_OpenVRUVOffsetAndScale();

  constexpr int32_t const& __cordl_internal_get__layerId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__layerId_k__BackingField();

  constexpr bool const& __cordl_internal_get__previewInEditor() const;

  constexpr bool& __cordl_internal_get__previewInEditor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorScale() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorScale();

  constexpr int32_t const& __cordl_internal_get_compositionDepth() const;

  constexpr int32_t& __cordl_internal_get_compositionDepth();

  constexpr ::GlobalNamespace::__OVRManager__XRDevice const& __cordl_internal_get_constructedOverlayXRDevice() const;

  constexpr ::GlobalNamespace::__OVRManager__XRDevice& __cordl_internal_get_constructedOverlayXRDevice();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& __cordl_internal_get_currentOverlayShape() const;

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& __cordl_internal_get_currentOverlayShape();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& __cordl_internal_get_currentOverlayType() const;

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType& __cordl_internal_get_currentOverlayType();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_destRectLeft() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_destRectLeft();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_destRectRight() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_destRectRight();

  constexpr int32_t const& __cordl_internal_get_externalSurfaceHeight() const;

  constexpr int32_t& __cordl_internal_get_externalSurfaceHeight();

  constexpr void* const& __cordl_internal_get_externalSurfaceObject() const;

  constexpr void*& __cordl_internal_get_externalSurfaceObject();

  constexpr ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*& __cordl_internal_get_externalSurfaceObjectCreated();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*> const& __cordl_internal_get_externalSurfaceObjectCreated() const;

  constexpr int32_t const& __cordl_internal_get_externalSurfaceWidth() const;

  constexpr int32_t& __cordl_internal_get_externalSurfaceWidth();

  constexpr int32_t const& __cordl_internal_get_frameIndex() const;

  constexpr int32_t& __cordl_internal_get_frameIndex();

  constexpr bool const& __cordl_internal_get_hidden() const;

  constexpr bool& __cordl_internal_get_hidden();

  constexpr bool const& __cordl_internal_get_invertTextureRects() const;

  constexpr bool& __cordl_internal_get_invertTextureRects();

  constexpr bool const& __cordl_internal_get_isAlphaPremultiplied() const;

  constexpr bool& __cordl_internal_get_isAlphaPremultiplied();

  constexpr bool const& __cordl_internal_get_isDynamic() const;

  constexpr bool& __cordl_internal_get_isDynamic();

  constexpr bool const& __cordl_internal_get_isExternalSurface() const;

  constexpr bool& __cordl_internal_get_isExternalSurface();

  constexpr bool const& __cordl_internal_get_isOverridePending() const;

  constexpr bool& __cordl_internal_get_isOverridePending();

  constexpr bool const& __cordl_internal_get_isProtectedContent() const;

  constexpr bool& __cordl_internal_get_isProtectedContent();

  constexpr int32_t const& __cordl_internal_get_layerCompositionDepth() const;

  constexpr int32_t& __cordl_internal_get_layerCompositionDepth();

  constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc const& __cordl_internal_get_layerDesc() const;

  constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc& __cordl_internal_get_layerDesc();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_layerIdHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_layerIdHandle();

  constexpr void* const& __cordl_internal_get_layerIdPtr() const;

  constexpr void*& __cordl_internal_get_layerIdPtr();

  constexpr int32_t const& __cordl_internal_get_layerIndex() const;

  constexpr int32_t& __cordl_internal_get_layerIndex();

  constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const& __cordl_internal_get_layerTextureFormat() const;

  constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat& __cordl_internal_get_layerTextureFormat();

  constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> const& __cordl_internal_get_layerTextures() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>& __cordl_internal_get_layerTextures();

  constexpr bool const& __cordl_internal_get_noDepthBufferTesting() const;

  constexpr bool& __cordl_internal_get_noDepthBufferTesting();

  constexpr bool const& __cordl_internal_get_overridePerLayerColorScaleAndOffset() const;

  constexpr bool& __cordl_internal_get_overridePerLayerColorScaleAndOffset();

  constexpr bool const& __cordl_internal_get_overrideTextureRectMatrix() const;

  constexpr bool& __cordl_internal_get_overrideTextureRectMatrix();

  constexpr int32_t const& __cordl_internal_get_prevFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_prevFrameIndex();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& __cordl_internal_get_prevOverlayShape() const;

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& __cordl_internal_get_prevOverlayShape();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_rend() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_rend();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_srcRectLeft() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_srcRectLeft();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_srcRectRight() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_srcRectRight();

  constexpr int32_t const& __cordl_internal_get_stageCount() const;

  constexpr int32_t& __cordl_internal_get_stageCount();

  constexpr ::ArrayW<void*, ::Array<void*>*> const& __cordl_internal_get_texturePtrs() const;

  constexpr ::ArrayW<void*, ::Array<void*>*>& __cordl_internal_get_texturePtrs();

  constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf const& __cordl_internal_get_textureRectMatrix() const;

  constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf& __cordl_internal_get_textureRectMatrix();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> const& __cordl_internal_get_textures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*>& __cordl_internal_get_textures();

  constexpr bool const& __cordl_internal_get_useAutomaticFiltering() const;

  constexpr bool& __cordl_internal_get_useAutomaticFiltering();

  constexpr bool const& __cordl_internal_get_useBicubicFiltering() const;

  constexpr bool& __cordl_internal_get_useBicubicFiltering();

  constexpr bool const& __cordl_internal_get_useEfficientSharpen() const;

  constexpr bool& __cordl_internal_get_useEfficientSharpen();

  constexpr bool const& __cordl_internal_get_useEfficientSupersample() const;

  constexpr bool& __cordl_internal_get_useEfficientSupersample();

  constexpr bool const& __cordl_internal_get_useExpensiveSharpen() const;

  constexpr bool& __cordl_internal_get_useExpensiveSharpen();

  constexpr bool const& __cordl_internal_get_useExpensiveSuperSample() const;

  constexpr bool& __cordl_internal_get_useExpensiveSuperSample();

  constexpr bool const& __cordl_internal_get_useLegacyCubemapRotation() const;

  constexpr bool& __cordl_internal_get_useLegacyCubemapRotation();

  constexpr bool const& __cordl_internal_get_xrDeviceConstructed() const;

  constexpr bool& __cordl_internal_get_xrDeviceConstructed();

  constexpr void __cordl_internal_set_OpenVRMouseScale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_OpenVROverlayHandle(uint64_t value);

  constexpr void __cordl_internal_set_OpenVRUVOffsetAndScale(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set__layerId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__previewInEditor(bool value);

  constexpr void __cordl_internal_set_colorOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_colorScale(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_compositionDepth(int32_t value);

  constexpr void __cordl_internal_set_constructedOverlayXRDevice(::GlobalNamespace::__OVRManager__XRDevice value);

  constexpr void __cordl_internal_set_currentOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape value);

  constexpr void __cordl_internal_set_currentOverlayType(::GlobalNamespace::__OVROverlay__OverlayType value);

  constexpr void __cordl_internal_set_destRectLeft(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_destRectRight(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_externalSurfaceHeight(int32_t value);

  constexpr void __cordl_internal_set_externalSurfaceObject(void* value);

  constexpr void __cordl_internal_set_externalSurfaceObjectCreated(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* value);

  constexpr void __cordl_internal_set_externalSurfaceWidth(int32_t value);

  constexpr void __cordl_internal_set_frameIndex(int32_t value);

  constexpr void __cordl_internal_set_hidden(bool value);

  constexpr void __cordl_internal_set_invertTextureRects(bool value);

  constexpr void __cordl_internal_set_isAlphaPremultiplied(bool value);

  constexpr void __cordl_internal_set_isDynamic(bool value);

  constexpr void __cordl_internal_set_isExternalSurface(bool value);

  constexpr void __cordl_internal_set_isOverridePending(bool value);

  constexpr void __cordl_internal_set_isProtectedContent(bool value);

  constexpr void __cordl_internal_set_layerCompositionDepth(int32_t value);

  constexpr void __cordl_internal_set_layerDesc(::GlobalNamespace::__OVRPlugin__LayerDesc value);

  constexpr void __cordl_internal_set_layerIdHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_layerIdPtr(void* value);

  constexpr void __cordl_internal_set_layerIndex(int32_t value);

  constexpr void __cordl_internal_set_layerTextureFormat(::GlobalNamespace::__OVRPlugin__EyeTextureFormat value);

  constexpr void __cordl_internal_set_layerTextures(::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> value);

  constexpr void __cordl_internal_set_noDepthBufferTesting(bool value);

  constexpr void __cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr void __cordl_internal_set_overrideTextureRectMatrix(bool value);

  constexpr void __cordl_internal_set_prevFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_prevOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape value);

  constexpr void __cordl_internal_set_rend(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set_srcRectLeft(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_srcRectRight(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_stageCount(int32_t value);

  constexpr void __cordl_internal_set_texturePtrs(::ArrayW<void*, ::Array<void*>*> value);

  constexpr void __cordl_internal_set_textureRectMatrix(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf value);

  constexpr void __cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> value);

  constexpr void __cordl_internal_set_useAutomaticFiltering(bool value);

  constexpr void __cordl_internal_set_useBicubicFiltering(bool value);

  constexpr void __cordl_internal_set_useEfficientSharpen(bool value);

  constexpr void __cordl_internal_set_useEfficientSupersample(bool value);

  constexpr void __cordl_internal_set_useExpensiveSharpen(bool value);

  constexpr void __cordl_internal_set_useExpensiveSuperSample(bool value);

  constexpr void __cordl_internal_set_useLegacyCubemapRotation(bool value);

  constexpr void __cordl_internal_set_xrDeviceConstructed(bool value);

  /// @brief Method .ctor, addr 0x2b1f35c, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_cubeMaterial();

  static inline ::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*> getStaticF_instances();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_tex2DMaterial();

  /// @brief Method get_OpenVROverlayKey, addr 0x2b1e17c, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW get_OpenVROverlayKey();

  /// @brief Method get_layerId, addr 0x2b1b17c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerId();

  /// @brief Method get_layout, addr 0x2b1b18c, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__LayerLayout get_layout();

  /// @brief Method get_previewInEditor, addr 0x2b1b09c, size 0x8, virtual false, abstract: false, final false
  inline bool get_previewInEditor();

  /// @brief Method get_texturesPerStage, addr 0x2b1b258, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_texturesPerStage();

  static inline void setStaticF_cubeMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_instances(::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*> value);

  static inline void setStaticF_tex2DMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method set_layerId, addr 0x2b1b184, size 0x8, virtual false, abstract: false, final false
  inline void set_layerId(int32_t value);

  /// @brief Method set_previewInEditor, addr 0x2b1b0a4, size 0x18, virtual false, abstract: false, final false
  inline void set_previewInEditor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROverlay(OVROverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROverlay(OVROverlay const&) = delete;

  /// @brief Field currentOverlayType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVROverlay__OverlayType ___currentOverlayType;

  /// @brief Field isDynamic, offset: 0x1c, size: 0x1, def value: None
  bool ___isDynamic;

  /// @brief Field isProtectedContent, offset: 0x1d, size: 0x1, def value: None
  bool ___isProtectedContent;

  /// @brief Field srcRectLeft, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___srcRectLeft;

  /// @brief Field srcRectRight, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rect ___srcRectRight;

  /// @brief Field destRectLeft, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rect ___destRectLeft;

  /// @brief Field destRectRight, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rect ___destRectRight;

  /// @brief Field invertTextureRects, offset: 0x60, size: 0x1, def value: None
  bool ___invertTextureRects;

  /// @brief Field textureRectMatrix, offset: 0x64, size: 0x40, def value: None
  ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf ___textureRectMatrix;

  /// @brief Field overrideTextureRectMatrix, offset: 0xa4, size: 0x1, def value: None
  bool ___overrideTextureRectMatrix;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset: 0xa5, size: 0x1, def value: None
  bool ___overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorScale;

  /// @brief Field colorOffset, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorOffset;

  /// @brief Field useExpensiveSuperSample, offset: 0xc8, size: 0x1, def value: None
  bool ___useExpensiveSuperSample;

  /// @brief Field useExpensiveSharpen, offset: 0xc9, size: 0x1, def value: None
  bool ___useExpensiveSharpen;

  /// @brief Field hidden, offset: 0xca, size: 0x1, def value: None
  bool ___hidden;

  /// @brief Field isExternalSurface, offset: 0xcb, size: 0x1, def value: None
  bool ___isExternalSurface;

  /// @brief Field externalSurfaceWidth, offset: 0xcc, size: 0x4, def value: None
  int32_t ___externalSurfaceWidth;

  /// @brief Field externalSurfaceHeight, offset: 0xd0, size: 0x4, def value: None
  int32_t ___externalSurfaceHeight;

  /// @brief Field compositionDepth, offset: 0xd4, size: 0x4, def value: None
  int32_t ___compositionDepth;

  /// @brief Field layerCompositionDepth, offset: 0xd8, size: 0x4, def value: None
  int32_t ___layerCompositionDepth;

  /// @brief Field noDepthBufferTesting, offset: 0xdc, size: 0x1, def value: None
  bool ___noDepthBufferTesting;

  /// @brief Field layerTextureFormat, offset: 0xe0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat ___layerTextureFormat;

  /// @brief Field currentOverlayShape, offset: 0xe4, size: 0x4, def value: None
  ::GlobalNamespace::__OVROverlay__OverlayShape ___currentOverlayShape;

  /// @brief Field prevOverlayShape, offset: 0xe8, size: 0x4, def value: None
  ::GlobalNamespace::__OVROverlay__OverlayShape ___prevOverlayShape;

  /// @brief Field textures, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> ___textures;

  /// @brief Field isAlphaPremultiplied, offset: 0xf8, size: 0x1, def value: None
  bool ___isAlphaPremultiplied;

  /// @brief Field useBicubicFiltering, offset: 0xf9, size: 0x1, def value: None
  bool ___useBicubicFiltering;

  /// @brief Field useLegacyCubemapRotation, offset: 0xfa, size: 0x1, def value: None
  bool ___useLegacyCubemapRotation;

  /// @brief Field useEfficientSupersample, offset: 0xfb, size: 0x1, def value: None
  bool ___useEfficientSupersample;

  /// @brief Field useEfficientSharpen, offset: 0xfc, size: 0x1, def value: None
  bool ___useEfficientSharpen;

  /// @brief Field useAutomaticFiltering, offset: 0xfd, size: 0x1, def value: None
  bool ___useAutomaticFiltering;

  /// @brief Field _previewInEditor, offset: 0xfe, size: 0x1, def value: None
  bool ____previewInEditor;

  /// @brief Field texturePtrs, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<void*, ::Array<void*>*> ___texturePtrs;

  /// @brief Field externalSurfaceObject, offset: 0x108, size: 0x8, def value: None
  void* ___externalSurfaceObject;

  /// @brief Field externalSurfaceObjectCreated, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* ___externalSurfaceObjectCreated;

  /// @brief Field isOverridePending, offset: 0x118, size: 0x1, def value: None
  bool ___isOverridePending;

  /// @brief Field <layerId>k__BackingField, offset: 0x11c, size: 0x4, def value: None
  int32_t ____layerId_k__BackingField;

  /// @brief Field layerTextures, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> ___layerTextures;

  /// @brief Field layerDesc, offset: 0x128, size: 0x50, def value: None
  ::GlobalNamespace::__OVRPlugin__LayerDesc ___layerDesc;

  /// @brief Field stageCount, offset: 0x178, size: 0x4, def value: None
  int32_t ___stageCount;

  /// @brief Field layerIndex, offset: 0x17c, size: 0x4, def value: None
  int32_t ___layerIndex;

  /// @brief Field layerIdHandle, offset: 0x180, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___layerIdHandle;

  /// @brief Field layerIdPtr, offset: 0x188, size: 0x8, def value: None
  void* ___layerIdPtr;

  /// @brief Field frameIndex, offset: 0x190, size: 0x4, def value: None
  int32_t ___frameIndex;

  /// @brief Field prevFrameIndex, offset: 0x194, size: 0x4, def value: None
  int32_t ___prevFrameIndex;

  /// @brief Field rend, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ___rend;

  /// @brief Field OpenVROverlayHandle, offset: 0x1a0, size: 0x8, def value: None
  uint64_t ___OpenVROverlayHandle;

  /// @brief Field OpenVRUVOffsetAndScale, offset: 0x1a8, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___OpenVRUVOffsetAndScale;

  /// @brief Field OpenVRMouseScale, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___OpenVRMouseScale;

  /// @brief Field constructedOverlayXRDevice, offset: 0x1c0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__XRDevice ___constructedOverlayXRDevice;

  /// @brief Field xrDeviceConstructed, offset: 0x1c4, size: 0x1, def value: None
  bool ___xrDeviceConstructed;

  /// @brief Field maxInstances offset 0xffffffff size 0x4
  static constexpr int32_t maxInstances{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlay, 0x1c8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___currentOverlayType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isDynamic) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isProtectedContent) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___srcRectLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___srcRectRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___destRectLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___destRectRight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___invertTextureRects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___textureRectMatrix) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___overrideTextureRectMatrix) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___overridePerLayerColorScaleAndOffset) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___colorScale) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___colorOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useExpensiveSuperSample) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useExpensiveSharpen) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___hidden) == 0xca, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isExternalSurface) == 0xcb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceWidth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceHeight) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___compositionDepth) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerCompositionDepth) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___noDepthBufferTesting) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerTextureFormat) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___currentOverlayShape) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___prevOverlayShape) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___textures) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isAlphaPremultiplied) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useBicubicFiltering) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useLegacyCubemapRotation) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useEfficientSupersample) == 0xfb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useEfficientSharpen) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___useAutomaticFiltering) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____previewInEditor) == 0xfe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___texturePtrs) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceObject) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___externalSurfaceObjectCreated) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___isOverridePending) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ____layerId_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerTextures) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerDesc) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___stageCount) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerIndex) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerIdHandle) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___layerIdPtr) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___frameIndex) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___prevFrameIndex) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___rend) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVROverlayHandle) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVRUVOffsetAndScale) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___OpenVRMouseScale) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___constructedOverlayXRDevice) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay, ___xrDeviceConstructed) == 0x1c4, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVROverlay__OverlayShape, "", "OVROverlay/OverlayShape");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVROverlay__OverlayType, "", "OVROverlay/OverlayType");
NEED_NO_BOX(::GlobalNamespace::OVROverlay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlay*, "", "OVROverlay");
NEED_NO_BOX(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*, "", "OVROverlay/ExternalSurfaceObjectCreated");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVROverlay__LayerTexture, "", "OVROverlay/LayerTexture");
