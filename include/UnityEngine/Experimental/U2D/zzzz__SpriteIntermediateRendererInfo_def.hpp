#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/U2D/SpriteIntermediateRendererInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteIntermediateRendererInfo)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Experimental::U2D {
struct SpriteIntermediateRendererInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo);
// Type: UnityEngine.Experimental.U2D::SpriteIntermediateRendererInfo
// SizeInfo { instance_size: 168, native_size: 168, calculated_instance_size: 168, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::U2D {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.U2D::SpriteIntermediateRendererInfo
struct CORDL_TYPE SpriteIntermediateRendererInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteIntermediateRendererInfo();

  // Ctor Parameters [CppParam { name: "SpriteID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TextureID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "MaterialID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "Transform", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "Layer", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "SortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortingOrder", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "IndexData", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "VertexData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VertexCount", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "ShaderChannelMask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteIntermediateRendererInfo(int32_t SpriteID, int32_t TextureID, int32_t MaterialID, ::UnityEngine::Color Color, ::UnityEngine::Matrix4x4 Transform, ::UnityEngine::Bounds Bounds,
                                           int32_t Layer, int32_t SortingLayer, int32_t SortingOrder, uint64_t SceneCullingMask, void* IndexData, void* VertexData, int32_t IndexCount,
                                           int32_t VertexCount, int32_t ShaderChannelMask) noexcept;

  /// @brief Field SpriteID, offset: 0x0, size: 0x4, def value: None
  int32_t SpriteID;

  /// @brief Field TextureID, offset: 0x4, size: 0x4, def value: None
  int32_t TextureID;

  /// @brief Field MaterialID, offset: 0x8, size: 0x4, def value: None
  int32_t MaterialID;

  /// @brief Field Color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Color Color;

  /// @brief Field Transform, offset: 0x1c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 Transform;

  /// @brief Field Bounds, offset: 0x5c, size: 0x18, def value: None
  ::UnityEngine::Bounds Bounds;

  /// @brief Field Layer, offset: 0x74, size: 0x4, def value: None
  int32_t Layer;

  /// @brief Field SortingLayer, offset: 0x78, size: 0x4, def value: None
  int32_t SortingLayer;

  /// @brief Field SortingOrder, offset: 0x7c, size: 0x4, def value: None
  int32_t SortingOrder;

  /// @brief Field SceneCullingMask, offset: 0x80, size: 0x8, def value: None
  uint64_t SceneCullingMask;

  /// @brief Field IndexData, offset: 0x88, size: 0x8, def value: None
  void* IndexData;

  /// @brief Field VertexData, offset: 0x90, size: 0x8, def value: None
  void* VertexData;

  /// @brief Field IndexCount, offset: 0x98, size: 0x4, def value: None
  int32_t IndexCount;

  /// @brief Field VertexCount, offset: 0x9c, size: 0x4, def value: None
  int32_t VertexCount;

  /// @brief Field ShaderChannelMask, offset: 0xa0, size: 0x4, def value: None
  int32_t ShaderChannelMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, SpriteID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, TextureID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, MaterialID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, Color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, Transform) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, Bounds) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, Layer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, SortingLayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, SortingOrder) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, SceneCullingMask) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, IndexData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, VertexData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, IndexCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, VertexCount) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, ShaderChannelMask) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::U2D
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, "UnityEngine.Experimental.U2D", "SpriteIntermediateRendererInfo");
