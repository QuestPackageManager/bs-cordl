#pragma once
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
struct __OVRPlugin__OverlayShape;
}
namespace UnityEngine {
class Renderer;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizei;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct __OVROverlay__LayerTexture;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDesc;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayType;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerLayout;
}
namespace UnityEngine {
struct Rect;
}
namespace GlobalNamespace {
class __OVROverlay__ExternalSurfaceObjectCreated;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeTextureFormat;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7654))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVROverlay__OverlayShape(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__OverlayShape();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Quad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Quad;

  /// @brief Field Cylinder value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Cylinder;

  /// @brief Field Cubemap value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Cubemap;

  /// @brief Field OffcenterCubemap value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const OffcenterCubemap;

  /// @brief Field Equirect value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Equirect;

  /// @brief Field ReconstructionPassthrough value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const ReconstructionPassthrough;

  /// @brief Field SurfaceProjectedPassthrough value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const SurfaceProjectedPassthrough;

  /// @brief Field Fisheye value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const Fisheye;

  /// @brief Field KeyboardHandsPassthrough value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const KeyboardHandsPassthrough;

  /// @brief Field KeyboardMaskedHandsPassthrough value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVROverlay__OverlayShape const KeyboardMaskedHandsPassthrough;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7655))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVROverlay__OverlayType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__OverlayType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVROverlay__OverlayType const None;

  /// @brief Field Underlay value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVROverlay__OverlayType const Underlay;

  /// @brief Field Overlay value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVROverlay__OverlayType const Overlay;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7656))
// CS Name: ::OVROverlay::ExternalSurfaceObjectCreated*
class CORDL_TYPE __OVROverlay__ExternalSurfaceObjectCreated : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x274a5a8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x274a664, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  /// @brief Method BeginInvoke, addr 0x274a678, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x274a698, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OVROverlay__ExternalSurfaceObjectCreated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVROverlay__ExternalSurfaceObjectCreated(__OVROverlay__ExternalSurfaceObjectCreated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVROverlay__ExternalSurfaceObjectCreated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVROverlay__ExternalSurfaceObjectCreated(__OVROverlay__ExternalSurfaceObjectCreated const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__ExternalSurfaceObjectCreated();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerTexture
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7657))
// CS Name: ::OVROverlay::LayerTexture
struct CORDL_TYPE __OVROverlay__LayerTexture {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "appTexturePtr", ty: "void*", modifiers: "", def_value: None },
  // CppParam { name: "swapChain", ty: "::ArrayW<::UnityEngine::Texture*,::Array<::UnityEngine::Texture*>*>", modifiers: "", def_value: None }, CppParam { name: "swapChainPtr", ty:
  // "::ArrayW<void*,::Array<void*>*>", modifiers: "", def_value: None }]
  constexpr __OVROverlay__LayerTexture(::UnityEngine::Texture* appTexture, void* appTexturePtr, ::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> swapChain,
                                       ::ArrayW<void*, ::Array<void*>*> swapChainPtr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlay__LayerTexture();

  /// @brief Field appTexture, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture* appTexture;

  /// @brief Field appTexturePtr, offset: 0x8, size: 0x8, def value: None
  void* appTexturePtr;

  /// @brief Field swapChain, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> swapChain;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7727)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(7702)),
// TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(7635)),
// TypeDefinitionIndex(TypeDefinitionIndex(7761)), TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(7655)), TypeDefinitionIndex(TypeDefinitionIndex(7654)),
// TypeDefinitionIndex(TypeDefinitionIndex(3336))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7658)) CS Name: ::OVROverlay*
class CORDL_TYPE OVROverlay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LayerTexture = ::GlobalNamespace::__OVROverlay__LayerTexture;

  using ExternalSurfaceObjectCreated = ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated;

  using OverlayType = ::GlobalNamespace::__OVROverlay__OverlayType;

  using OverlayShape = ::GlobalNamespace::__OVROverlay__OverlayShape;

  /// @brief Field currentOverlayType, offset 0x18, size 0x4
  __declspec(property(get = __get_currentOverlayType, put = __set_currentOverlayType))::GlobalNamespace::__OVROverlay__OverlayType currentOverlayType;

  /// @brief Field isDynamic, offset 0x1c, size 0x1
  __declspec(property(get = __get_isDynamic, put = __set_isDynamic)) bool isDynamic;

  /// @brief Field isProtectedContent, offset 0x1d, size 0x1
  __declspec(property(get = __get_isProtectedContent, put = __set_isProtectedContent)) bool isProtectedContent;

  /// @brief Field srcRectLeft, offset 0x20, size 0x10
  __declspec(property(get = __get_srcRectLeft, put = __set_srcRectLeft))::UnityEngine::Rect srcRectLeft;

  /// @brief Field srcRectRight, offset 0x30, size 0x10
  __declspec(property(get = __get_srcRectRight, put = __set_srcRectRight))::UnityEngine::Rect srcRectRight;

  /// @brief Field destRectLeft, offset 0x40, size 0x10
  __declspec(property(get = __get_destRectLeft, put = __set_destRectLeft))::UnityEngine::Rect destRectLeft;

  /// @brief Field destRectRight, offset 0x50, size 0x10
  __declspec(property(get = __get_destRectRight, put = __set_destRectRight))::UnityEngine::Rect destRectRight;

  /// @brief Field invertTextureRects, offset 0x60, size 0x1
  __declspec(property(get = __get_invertTextureRects, put = __set_invertTextureRects)) bool invertTextureRects;

  /// @brief Field textureRectMatrix, offset 0x64, size 0x40
  __declspec(property(get = __get_textureRectMatrix, put = __set_textureRectMatrix))::GlobalNamespace::__OVRPlugin__TextureRectMatrixf textureRectMatrix;

  /// @brief Field overrideTextureRectMatrix, offset 0xa4, size 0x1
  __declspec(property(get = __get_overrideTextureRectMatrix, put = __set_overrideTextureRectMatrix)) bool overrideTextureRectMatrix;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0xa5, size 0x1
  __declspec(property(get = __get_overridePerLayerColorScaleAndOffset, put = __set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset 0xa8, size 0x10
  __declspec(property(get = __get_colorScale, put = __set_colorScale))::UnityEngine::Vector4 colorScale;

  /// @brief Field colorOffset, offset 0xb8, size 0x10
  __declspec(property(get = __get_colorOffset, put = __set_colorOffset))::UnityEngine::Vector4 colorOffset;

  /// @brief Field useExpensiveSuperSample, offset 0xc8, size 0x1
  __declspec(property(get = __get_useExpensiveSuperSample, put = __set_useExpensiveSuperSample)) bool useExpensiveSuperSample;

  /// @brief Field useExpensiveSharpen, offset 0xc9, size 0x1
  __declspec(property(get = __get_useExpensiveSharpen, put = __set_useExpensiveSharpen)) bool useExpensiveSharpen;

  /// @brief Field hidden, offset 0xca, size 0x1
  __declspec(property(get = __get_hidden, put = __set_hidden)) bool hidden;

  /// @brief Field isExternalSurface, offset 0xcb, size 0x1
  __declspec(property(get = __get_isExternalSurface, put = __set_isExternalSurface)) bool isExternalSurface;

  /// @brief Field externalSurfaceWidth, offset 0xcc, size 0x4
  __declspec(property(get = __get_externalSurfaceWidth, put = __set_externalSurfaceWidth)) int32_t externalSurfaceWidth;

  /// @brief Field externalSurfaceHeight, offset 0xd0, size 0x4
  __declspec(property(get = __get_externalSurfaceHeight, put = __set_externalSurfaceHeight)) int32_t externalSurfaceHeight;

  /// @brief Field compositionDepth, offset 0xd4, size 0x4
  __declspec(property(get = __get_compositionDepth, put = __set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field layerCompositionDepth, offset 0xd8, size 0x4
  __declspec(property(get = __get_layerCompositionDepth, put = __set_layerCompositionDepth)) int32_t layerCompositionDepth;

  /// @brief Field noDepthBufferTesting, offset 0xdc, size 0x1
  __declspec(property(get = __get_noDepthBufferTesting, put = __set_noDepthBufferTesting)) bool noDepthBufferTesting;

  /// @brief Field layerTextureFormat, offset 0xe0, size 0x4
  __declspec(property(get = __get_layerTextureFormat, put = __set_layerTextureFormat))::GlobalNamespace::__OVRPlugin__EyeTextureFormat layerTextureFormat;

  /// @brief Field currentOverlayShape, offset 0xe4, size 0x4
  __declspec(property(get = __get_currentOverlayShape, put = __set_currentOverlayShape))::GlobalNamespace::__OVROverlay__OverlayShape currentOverlayShape;

  /// @brief Field prevOverlayShape, offset 0xe8, size 0x4
  __declspec(property(get = __get_prevOverlayShape, put = __set_prevOverlayShape))::GlobalNamespace::__OVROverlay__OverlayShape prevOverlayShape;

  /// @brief Field textures, offset 0xf0, size 0x8
  __declspec(property(get = __get_textures, put = __set_textures))::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> textures;

  /// @brief Field isAlphaPremultiplied, offset 0xf8, size 0x1
  __declspec(property(get = __get_isAlphaPremultiplied, put = __set_isAlphaPremultiplied)) bool isAlphaPremultiplied;

  /// @brief Field useBicubicFiltering, offset 0xf9, size 0x1
  __declspec(property(get = __get_useBicubicFiltering, put = __set_useBicubicFiltering)) bool useBicubicFiltering;

  /// @brief Field useLegacyCubemapRotation, offset 0xfa, size 0x1
  __declspec(property(get = __get_useLegacyCubemapRotation, put = __set_useLegacyCubemapRotation)) bool useLegacyCubemapRotation;

  /// @brief Field useEfficientSupersample, offset 0xfb, size 0x1
  __declspec(property(get = __get_useEfficientSupersample, put = __set_useEfficientSupersample)) bool useEfficientSupersample;

  /// @brief Field useEfficientSharpen, offset 0xfc, size 0x1
  __declspec(property(get = __get_useEfficientSharpen, put = __set_useEfficientSharpen)) bool useEfficientSharpen;

  /// @brief Field useAutomaticFiltering, offset 0xfd, size 0x1
  __declspec(property(get = __get_useAutomaticFiltering, put = __set_useAutomaticFiltering)) bool useAutomaticFiltering;

  /// @brief Field _previewInEditor, offset 0xfe, size 0x1
  __declspec(property(get = __get__previewInEditor, put = __set__previewInEditor)) bool _previewInEditor;

  /// @brief Field texturePtrs, offset 0x100, size 0x8
  __declspec(property(get = __get_texturePtrs, put = __set_texturePtrs))::ArrayW<void*, ::Array<void*>*> texturePtrs;

  /// @brief Field externalSurfaceObject, offset 0x108, size 0x8
  __declspec(property(get = __get_externalSurfaceObject, put = __set_externalSurfaceObject)) void* externalSurfaceObject;

  /// @brief Field externalSurfaceObjectCreated, offset 0x110, size 0x8
  __declspec(property(get = __get_externalSurfaceObjectCreated, put = __set_externalSurfaceObjectCreated))::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* externalSurfaceObjectCreated;

  /// @brief Field isOverridePending, offset 0x118, size 0x1
  __declspec(property(get = __get_isOverridePending, put = __set_isOverridePending)) bool isOverridePending;

  /// @brief Field <layerId>k__BackingField, offset 0x11c, size 0x4
  __declspec(property(get = __get__layerId_k__BackingField, put = __set__layerId_k__BackingField)) int32_t _layerId_k__BackingField;

  /// @brief Field layerTextures, offset 0x120, size 0x8
  __declspec(property(get = __get_layerTextures,
                      put = __set_layerTextures))::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> layerTextures;

  /// @brief Field layerDesc, offset 0x128, size 0x50
  __declspec(property(get = __get_layerDesc, put = __set_layerDesc))::GlobalNamespace::__OVRPlugin__LayerDesc layerDesc;

  /// @brief Field stageCount, offset 0x178, size 0x4
  __declspec(property(get = __get_stageCount, put = __set_stageCount)) int32_t stageCount;

  /// @brief Field layerIndex, offset 0x17c, size 0x4
  __declspec(property(get = __get_layerIndex, put = __set_layerIndex)) int32_t layerIndex;

  /// @brief Field layerIdHandle, offset 0x180, size 0x8
  __declspec(property(get = __get_layerIdHandle, put = __set_layerIdHandle))::System::Runtime::InteropServices::GCHandle layerIdHandle;

  /// @brief Field layerIdPtr, offset 0x188, size 0x8
  __declspec(property(get = __get_layerIdPtr, put = __set_layerIdPtr)) void* layerIdPtr;

  /// @brief Field frameIndex, offset 0x190, size 0x4
  __declspec(property(get = __get_frameIndex, put = __set_frameIndex)) int32_t frameIndex;

  /// @brief Field prevFrameIndex, offset 0x194, size 0x4
  __declspec(property(get = __get_prevFrameIndex, put = __set_prevFrameIndex)) int32_t prevFrameIndex;

  /// @brief Field rend, offset 0x198, size 0x8
  __declspec(property(get = __get_rend, put = __set_rend))::UnityEngine::Renderer* rend;

  /// @brief Field OpenVROverlayHandle, offset 0x1a0, size 0x8
  __declspec(property(get = __get_OpenVROverlayHandle, put = __set_OpenVROverlayHandle)) uint64_t OpenVROverlayHandle;

  /// @brief Field OpenVRUVOffsetAndScale, offset 0x1a8, size 0x10
  __declspec(property(get = __get_OpenVRUVOffsetAndScale, put = __set_OpenVRUVOffsetAndScale))::UnityEngine::Vector4 OpenVRUVOffsetAndScale;

  /// @brief Field OpenVRMouseScale, offset 0x1b8, size 0x8
  __declspec(property(get = __get_OpenVRMouseScale, put = __set_OpenVRMouseScale))::UnityEngine::Vector2 OpenVRMouseScale;

  /// @brief Field constructedOverlayXRDevice, offset 0x1c0, size 0x4
  __declspec(property(get = __get_constructedOverlayXRDevice, put = __set_constructedOverlayXRDevice))::GlobalNamespace::__OVRManager__XRDevice constructedOverlayXRDevice;

  /// @brief Field xrDeviceConstructed, offset 0x1c4, size 0x1
  __declspec(property(get = __get_xrDeviceConstructed, put = __set_xrDeviceConstructed)) bool xrDeviceConstructed;

  /// @brief Field instances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instances, put = setStaticF_instances))::ArrayW<::GlobalNamespace::OVROverlay*, ::Array<::GlobalNamespace::OVROverlay*>*> instances;

  /// @brief Field tex2DMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tex2DMaterial, put = setStaticF_tex2DMaterial))::UnityEngine::Material* tex2DMaterial;

  /// @brief Field cubeMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cubeMaterial, put = setStaticF_cubeMaterial))::UnityEngine::Material* cubeMaterial;

  __declspec(property(get = get_previewInEditor, put = set_previewInEditor)) bool previewInEditor;

  __declspec(property(get = get_layerId, put = set_layerId)) int32_t layerId;

  __declspec(property(get = get_layout))::GlobalNamespace::__OVRPlugin__LayerLayout layout;

  __declspec(property(get = get_texturesPerStage)) int32_t texturesPerStage;

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType& __get_currentOverlayType();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& __get_currentOverlayType() const;

  constexpr void __set_currentOverlayType(::GlobalNamespace::__OVROverlay__OverlayType value);

  constexpr bool& __get_isDynamic();

  constexpr bool const& __get_isDynamic() const;

  constexpr void __set_isDynamic(bool value);

  constexpr bool& __get_isProtectedContent();

  constexpr bool const& __get_isProtectedContent() const;

  constexpr void __set_isProtectedContent(bool value);

  constexpr ::UnityEngine::Rect& __get_srcRectLeft();

  constexpr ::UnityEngine::Rect const& __get_srcRectLeft() const;

  constexpr void __set_srcRectLeft(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_srcRectRight();

  constexpr ::UnityEngine::Rect const& __get_srcRectRight() const;

  constexpr void __set_srcRectRight(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_destRectLeft();

  constexpr ::UnityEngine::Rect const& __get_destRectLeft() const;

  constexpr void __set_destRectLeft(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_destRectRight();

  constexpr ::UnityEngine::Rect const& __get_destRectRight() const;

  constexpr void __set_destRectRight(::UnityEngine::Rect value);

  constexpr bool& __get_invertTextureRects();

  constexpr bool const& __get_invertTextureRects() const;

  constexpr void __set_invertTextureRects(bool value);

  constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf& __get_textureRectMatrix();

  constexpr ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf const& __get_textureRectMatrix() const;

  constexpr void __set_textureRectMatrix(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf value);

  constexpr bool& __get_overrideTextureRectMatrix();

  constexpr bool const& __get_overrideTextureRectMatrix() const;

  constexpr void __set_overrideTextureRectMatrix(bool value);

  constexpr bool& __get_overridePerLayerColorScaleAndOffset();

  constexpr bool const& __get_overridePerLayerColorScaleAndOffset() const;

  constexpr void __set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr ::UnityEngine::Vector4& __get_colorScale();

  constexpr ::UnityEngine::Vector4 const& __get_colorScale() const;

  constexpr void __set_colorScale(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector4& __get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __get_colorOffset() const;

  constexpr void __set_colorOffset(::UnityEngine::Vector4 value);

  constexpr bool& __get_useExpensiveSuperSample();

  constexpr bool const& __get_useExpensiveSuperSample() const;

  constexpr void __set_useExpensiveSuperSample(bool value);

  constexpr bool& __get_useExpensiveSharpen();

  constexpr bool const& __get_useExpensiveSharpen() const;

  constexpr void __set_useExpensiveSharpen(bool value);

  constexpr bool& __get_hidden();

  constexpr bool const& __get_hidden() const;

  constexpr void __set_hidden(bool value);

  constexpr bool& __get_isExternalSurface();

  constexpr bool const& __get_isExternalSurface() const;

  constexpr void __set_isExternalSurface(bool value);

  constexpr int32_t& __get_externalSurfaceWidth();

  constexpr int32_t const& __get_externalSurfaceWidth() const;

  constexpr void __set_externalSurfaceWidth(int32_t value);

  constexpr int32_t& __get_externalSurfaceHeight();

  constexpr int32_t const& __get_externalSurfaceHeight() const;

  constexpr void __set_externalSurfaceHeight(int32_t value);

  constexpr int32_t& __get_compositionDepth();

  constexpr int32_t const& __get_compositionDepth() const;

  constexpr void __set_compositionDepth(int32_t value);

  constexpr int32_t& __get_layerCompositionDepth();

  constexpr int32_t const& __get_layerCompositionDepth() const;

  constexpr void __set_layerCompositionDepth(int32_t value);

  constexpr bool& __get_noDepthBufferTesting();

  constexpr bool const& __get_noDepthBufferTesting() const;

  constexpr void __set_noDepthBufferTesting(bool value);

  constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat& __get_layerTextureFormat();

  constexpr ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const& __get_layerTextureFormat() const;

  constexpr void __set_layerTextureFormat(::GlobalNamespace::__OVRPlugin__EyeTextureFormat value);

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& __get_currentOverlayShape();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& __get_currentOverlayShape() const;

  constexpr void __set_currentOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape value);

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& __get_prevOverlayShape();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& __get_prevOverlayShape() const;

  constexpr void __set_prevOverlayShape(::GlobalNamespace::__OVROverlay__OverlayShape value);

  constexpr ::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*>& __get_textures();

  constexpr ::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> const& __get_textures() const;

  constexpr void __set_textures(::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> value);

  constexpr bool& __get_isAlphaPremultiplied();

  constexpr bool const& __get_isAlphaPremultiplied() const;

  constexpr void __set_isAlphaPremultiplied(bool value);

  constexpr bool& __get_useBicubicFiltering();

  constexpr bool const& __get_useBicubicFiltering() const;

  constexpr void __set_useBicubicFiltering(bool value);

  constexpr bool& __get_useLegacyCubemapRotation();

  constexpr bool const& __get_useLegacyCubemapRotation() const;

  constexpr void __set_useLegacyCubemapRotation(bool value);

  constexpr bool& __get_useEfficientSupersample();

  constexpr bool const& __get_useEfficientSupersample() const;

  constexpr void __set_useEfficientSupersample(bool value);

  constexpr bool& __get_useEfficientSharpen();

  constexpr bool const& __get_useEfficientSharpen() const;

  constexpr void __set_useEfficientSharpen(bool value);

  constexpr bool& __get_useAutomaticFiltering();

  constexpr bool const& __get_useAutomaticFiltering() const;

  constexpr void __set_useAutomaticFiltering(bool value);

  constexpr bool& __get__previewInEditor();

  constexpr bool const& __get__previewInEditor() const;

  constexpr void __set__previewInEditor(bool value);

  constexpr ::ArrayW<void*, ::Array<void*>*>& __get_texturePtrs();

  constexpr ::ArrayW<void*, ::Array<void*>*> const& __get_texturePtrs() const;

  constexpr void __set_texturePtrs(::ArrayW<void*, ::Array<void*>*> value);

  constexpr void*& __get_externalSurfaceObject();

  constexpr void* const& __get_externalSurfaceObject() const;

  constexpr void __set_externalSurfaceObject(void* value);

  constexpr ::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*& __get_externalSurfaceObjectCreated();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated*> const& __get_externalSurfaceObjectCreated() const;

  constexpr void __set_externalSurfaceObjectCreated(::GlobalNamespace::__OVROverlay__ExternalSurfaceObjectCreated* value);

  constexpr bool& __get_isOverridePending();

  constexpr bool const& __get_isOverridePending() const;

  constexpr void __set_isOverridePending(bool value);

  constexpr int32_t& __get__layerId_k__BackingField();

  constexpr int32_t const& __get__layerId_k__BackingField() const;

  constexpr void __set__layerId_k__BackingField(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*>& __get_layerTextures();

  constexpr ::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> const& __get_layerTextures() const;

  constexpr void __set_layerTextures(::ArrayW<::GlobalNamespace::__OVROverlay__LayerTexture, ::Array<::GlobalNamespace::__OVROverlay__LayerTexture>*> value);

  constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc& __get_layerDesc();

  constexpr ::GlobalNamespace::__OVRPlugin__LayerDesc const& __get_layerDesc() const;

  constexpr void __set_layerDesc(::GlobalNamespace::__OVRPlugin__LayerDesc value);

  constexpr int32_t& __get_stageCount();

  constexpr int32_t const& __get_stageCount() const;

  constexpr void __set_stageCount(int32_t value);

  constexpr int32_t& __get_layerIndex();

  constexpr int32_t const& __get_layerIndex() const;

  constexpr void __set_layerIndex(int32_t value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get_layerIdHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get_layerIdHandle() const;

  constexpr void __set_layerIdHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void*& __get_layerIdPtr();

  constexpr void* const& __get_layerIdPtr() const;

  constexpr void __set_layerIdPtr(void* value);

  constexpr int32_t& __get_frameIndex();

  constexpr int32_t const& __get_frameIndex() const;

  constexpr void __set_frameIndex(int32_t value);

  constexpr int32_t& __get_prevFrameIndex();

  constexpr int32_t const& __get_prevFrameIndex() const;

  constexpr void __set_prevFrameIndex(int32_t value);

  constexpr ::UnityEngine::Renderer*& __get_rend();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get_rend() const;

  constexpr void __set_rend(::UnityEngine::Renderer* value);

  constexpr uint64_t& __get_OpenVROverlayHandle();

  constexpr uint64_t const& __get_OpenVROverlayHandle() const;

  constexpr void __set_OpenVROverlayHandle(uint64_t value);

  constexpr ::UnityEngine::Vector4& __get_OpenVRUVOffsetAndScale();

  constexpr ::UnityEngine::Vector4 const& __get_OpenVRUVOffsetAndScale() const;

  constexpr void __set_OpenVRUVOffsetAndScale(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector2& __get_OpenVRMouseScale();

  constexpr ::UnityEngine::Vector2 const& __get_OpenVRMouseScale() const;

  constexpr void __set_OpenVRMouseScale(::UnityEngine::Vector2 value);

  constexpr ::GlobalNamespace::__OVRManager__XRDevice& __get_constructedOverlayXRDevice();

  constexpr ::GlobalNamespace::__OVRManager__XRDevice const& __get_constructedOverlayXRDevice() const;

  constexpr void __set_constructedOverlayXRDevice(::GlobalNamespace::__OVRManager__XRDevice value);

  constexpr bool& __get_xrDeviceConstructed();

  constexpr bool const& __get_xrDeviceConstructed() const;

  constexpr void __set_xrDeviceConstructed(bool value);

  static inline void setStaticF_instances(::ArrayW<::GlobalNamespace::OVROverlay*, ::Array<::GlobalNamespace::OVROverlay*>*> value);

  static inline ::ArrayW<::GlobalNamespace::OVROverlay*, ::Array<::GlobalNamespace::OVROverlay*>*> getStaticF_instances();

  static inline void setStaticF_tex2DMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_tex2DMaterial();

  static inline void setStaticF_cubeMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_cubeMaterial();

  /// @brief Method get_previewInEditor, addr 0x27460cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_previewInEditor();

  /// @brief Method set_previewInEditor, addr 0x27460d4, size 0x18, virtual false, abstract: false, final false
  inline void set_previewInEditor(bool value);

  /// @brief Method OverrideOverlayTextureInfo, addr 0x27460f0, size 0xbc, virtual false, abstract: false, final false
  inline void OverrideOverlayTextureInfo(::UnityEngine::Texture* srcTexture, void* nativePtr, ::UnityEngine::XR::XRNode node);

  /// @brief Method get_layerId, addr 0x27461ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layerId();

  /// @brief Method set_layerId, addr 0x27461b4, size 0x8, virtual false, abstract: false, final false
  inline void set_layerId(int32_t value);

  /// @brief Method get_layout, addr 0x27461bc, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__LayerLayout get_layout();

  /// @brief Method get_texturesPerStage, addr 0x2746288, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_texturesPerStage();

  /// @brief Method NeedsTexturesForShape, addr 0x27462a4, size 0x60, virtual false, abstract: false, final false
  static inline bool NeedsTexturesForShape(::GlobalNamespace::__OVROverlay__OverlayShape shape);

  /// @brief Method CreateLayer, addr 0x274635c, size 0x410, virtual false, abstract: false, final false
  inline bool CreateLayer(int32_t mipLevels, int32_t sampleCount, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat etFormat, int32_t flags, ::GlobalNamespace::__OVRPlugin__Sizei size,
                          ::GlobalNamespace::__OVRPlugin__OverlayShape shape);

  /// @brief Method CreateLayerTextures, addr 0x274676c, size 0x548, virtual false, abstract: false, final false
  inline bool CreateLayerTextures(bool useMipmaps, ::GlobalNamespace::__OVRPlugin__Sizei size, bool isHdr);

  /// @brief Method DestroyLayerTextures, addr 0x2746cb4, size 0x124, virtual false, abstract: false, final false
  inline void DestroyLayerTextures();

  /// @brief Method DestroyLayer, addr 0x2746dd8, size 0x2cc, virtual false, abstract: false, final false
  inline void DestroyLayer();

  /// @brief Method SetSrcDestRects, addr 0x27470a4, size 0x1c, virtual false, abstract: false, final false
  inline void SetSrcDestRects(::UnityEngine::Rect srcLeft, ::UnityEngine::Rect srcRight, ::UnityEngine::Rect destLeft, ::UnityEngine::Rect destRight);

  /// @brief Method UpdateTextureRectMatrix, addr 0x27470c0, size 0x414, virtual false, abstract: false, final false
  inline void UpdateTextureRectMatrix();

  /// @brief Method SetPerLayerColorScaleAndOffset, addr 0x27474d4, size 0x14, virtual false, abstract: false, final false
  inline void SetPerLayerColorScaleAndOffset(::UnityEngine::Vector4 scale, ::UnityEngine::Vector4 offset);

  /// @brief Method LatchLayerTextures, addr 0x27474e8, size 0x46c, virtual false, abstract: false, final false
  inline bool LatchLayerTextures();

  /// @brief Method GetCurrentLayerDesc, addr 0x2747954, size 0x4f8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__LayerDesc GetCurrentLayerDesc();

  /// @brief Method GetBlitRect, addr 0x2747e4c, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetBlitRect(int32_t eyeId);

  /// @brief Method BlitSubImage, addr 0x2747fb8, size 0x404, virtual false, abstract: false, final false
  inline void BlitSubImage(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dst, ::UnityEngine::Material* mat, ::UnityEngine::Rect rect);

  /// @brief Method PopulateLayer, addr 0x27483bc, size 0x698, virtual false, abstract: false, final false
  inline bool PopulateLayer(int32_t mipLevels, bool isHdr, ::GlobalNamespace::__OVRPlugin__Sizei size, int32_t sampleCount, int32_t stage);

  /// @brief Method SubmitLayer, addr 0x2748a54, size 0x468, virtual false, abstract: false, final false
  inline bool SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, ::GlobalNamespace::OVRPose pose, ::UnityEngine::Vector3 scale, int32_t frameIndex);

  /// @brief Method SetupEditorPreview, addr 0x27460ec, size 0x4, virtual false, abstract: false, final false
  inline void SetupEditorPreview();

  /// @brief Method IsPassthroughShape, addr 0x2746304, size 0x58, virtual false, abstract: false, final false
  static inline bool IsPassthroughShape(::GlobalNamespace::__OVROverlay__OverlayShape shape);

  /// @brief Method Awake, addr 0x2748ebc, size 0x2f0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method get_OpenVROverlayKey, addr 0x27491ac, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW get_OpenVROverlayKey();

  /// @brief Method OnEnable, addr 0x2749228, size 0x70, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method InitOVROverlay, addr 0x2749298, size 0x16c, virtual false, abstract: false, final false
  inline void InitOVROverlay();

  /// @brief Method OnDisable, addr 0x2749404, size 0x124, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2749528, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ComputePoseAndScale, addr 0x2749540, size 0x388, virtual false, abstract: false, final false
  inline void ComputePoseAndScale(ByRef<::GlobalNamespace::OVRPose> pose, ByRef<::UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked);

  /// @brief Method ComputeSubmit, addr 0x27498c8, size 0x2a0, virtual false, abstract: false, final false
  inline bool ComputeSubmit(ByRef<::GlobalNamespace::OVRPose> pose, ByRef<::UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked);

  /// @brief Method OpenVROverlayUpdate, addr 0x2749b68, size 0x300, virtual false, abstract: false, final false
  inline void OpenVROverlayUpdate(::UnityEngine::Vector3 scale, ::GlobalNamespace::OVRPose pose);

  /// @brief Method LateUpdate, addr 0x2749e68, size 0x524, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OVROverlay* New_ctor();

  /// @brief Method .ctor, addr 0x274a38c, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROverlay(OVROverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROverlay(OVROverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlay();

public:
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
  ::ArrayW<::UnityEngine::Texture*, ::Array<::UnityEngine::Texture*>*> ___textures;

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
  ::UnityEngine::Renderer* ___rend;

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
