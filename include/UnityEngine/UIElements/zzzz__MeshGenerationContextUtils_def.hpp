#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContextUtils)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationContextUtils;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContextUtils);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams);
// Type: ::BorderParams
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10093)), TypeDefinitionIndex(TypeDefinitionIndex(10170)),
// TypeDefinitionIndex(TypeDefinitionIndex(7418))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7419)) CS Name: ::MeshGenerationContextUtils::BorderParams
struct CORDL_TYPE __MeshGenerationContextUtils__BorderParams {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
  // None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam
  // { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2",
  // modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*",
  // modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "topColorPage", ty:
  // "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam
  // { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }]
  constexpr __MeshGenerationContextUtils__BorderParams(::UnityEngine::Rect rect, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor,
                                                       ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth,
                                                       ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
                                                       ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Material* material, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                                       ::UnityEngine::UIElements::ColorPage topColorPage, ::UnityEngine::UIElements::ColorPage rightColorPage,
                                                       ::UnityEngine::UIElements::ColorPage bottomColorPage) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshGenerationContextUtils__BorderParams();

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field playmodeTintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color playmodeTintColor;

  /// @brief Field leftColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color leftColor;

  /// @brief Field topColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color topColor;

  /// @brief Field rightColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color rightColor;

  /// @brief Field bottomColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color bottomColor;

  /// @brief Field leftWidth, offset: 0x60, size: 0x4, def value: None
  float_t leftWidth;

  /// @brief Field topWidth, offset: 0x64, size: 0x4, def value: None
  float_t topWidth;

  /// @brief Field rightWidth, offset: 0x68, size: 0x4, def value: None
  float_t rightWidth;

  /// @brief Field bottomWidth, offset: 0x6c, size: 0x4, def value: None
  float_t bottomWidth;

  /// @brief Field topLeftRadius, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 topLeftRadius;

  /// @brief Field topRightRadius, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 topRightRadius;

  /// @brief Field bottomRightRadius, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomRightRadius;

  /// @brief Field bottomLeftRadius, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomLeftRadius;

  /// @brief Field material, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field leftColorPage, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColorPage leftColorPage;

  /// @brief Field topColorPage, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColorPage topColorPage;

  /// @brief Field rightColorPage, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColorPage rightColorPage;

  /// @brief Field bottomColorPage, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColorPage bottomColorPage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, playmodeTintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topLeftRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topRightRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomRightRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomLeftRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, material) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftColorPage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topColorPage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightColorPage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomColorPage) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::RectangleParams
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14813)), TypeDefinitionIndex(TypeDefinitionIndex(7418)), TypeDefinitionIndex(TypeDefinitionIndex(10093)),
// TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(7423))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7420)) CS Name: ::MeshGenerationContextUtils::RectangleParams
struct CORDL_TYPE __MeshGenerationContextUtils__RectangleParams {
public:
  // Declarations
  /// @brief Method AdjustUVsForScaleMode addr 0x2d11088 size 0x320 virtual false final false
  static inline void AdjustUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture, ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut,
                                           ByRef<::UnityEngine::Rect> uvOut);

  /// @brief Method AdjustSpriteUVsForScaleMode addr 0x2d113a8 size 0x760 virtual false final false
  static inline void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Rect geomRect, ::UnityEngine::Texture* texture, ::UnityEngine::Sprite* sprite,
                                                 ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut, ByRef<::UnityEngine::Rect> uvOut);

  /// @brief Method RectIntersection addr 0x2d11b08 size 0x120 virtual false final false
  static inline ::UnityEngine::Rect RectIntersection(::UnityEngine::Rect a, ::UnityEngine::Rect b);

  /// @brief Method ComputeGeomRect addr 0x2d11c28 size 0xd8 virtual false final false
  static inline ::UnityEngine::Rect ComputeGeomRect(::UnityEngine::Sprite* sprite);

  /// @brief Method ComputeUVRect addr 0x2d11d00 size 0xd8 virtual false final false
  static inline ::UnityEngine::Rect ComputeUVRect(::UnityEngine::Sprite* sprite);

  /// @brief Method ApplyPackingRotation addr 0x2d11dd8 size 0x12c virtual false final false
  static inline ::UnityEngine::Rect ApplyPackingRotation(::UnityEngine::Rect uv, ::UnityEngine::SpritePackingRotation rotation);

  /// @brief Method MakeTextured addr 0x2d11f04 size 0x16c virtual false final false
  static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture,
                                                                                                      ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext);

  /// @brief Method MakeSprite addr 0x2d12070 size 0x6c4 virtual false final false
  static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeSprite(::UnityEngine::Rect rect, ::UnityEngine::Sprite* sprite, ::UnityEngine::ScaleMode scaleMode,
                                                                                                    ::UnityEngine::UIElements::ContextType panelContext, bool hasRadius,
                                                                                                    ByRef<::UnityEngine::Vector4> slices);

  /// @brief Method MakeVectorTextured addr 0x2d12734 size 0x11c virtual false final false
  static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeVectorTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv,
                                                                                                            ::UnityEngine::UIElements::VectorImage* vectorImage, ::UnityEngine::ScaleMode scaleMode,
                                                                                                            ::UnityEngine::UIElements::ContextType panelContext);

  /// @brief Method HasRadius addr 0x2d12850 size 0x1074 virtual false final false
  inline bool HasRadius(float_t epsilon);

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam
  // { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name:
  // "sprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: None }, CppParam
  // { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam {
  // name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam
  // { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "",
  // def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "meshFlags", ty:
  // "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: None }]
  constexpr __MeshGenerationContextUtils__RectangleParams(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Color color, ::UnityEngine::Texture* texture, ::UnityEngine::Sprite* sprite,
                                                          ::UnityEngine::UIElements::VectorImage* vectorImage, ::UnityEngine::Material* material, ::UnityEngine::ScaleMode scaleMode,
                                                          ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius,
                                                          ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, int32_t leftSlice, int32_t topSlice, int32_t rightSlice,
                                                          int32_t bottomSlice, float_t sliceScale, ::UnityEngine::Rect spriteGeomRect, ::UnityEngine::UIElements::ColorPage colorPage,
                                                          ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags meshFlags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshGenerationContextUtils__RectangleParams();

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field uv, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rect uv;

  /// @brief Field color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field texture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Texture* texture;

  /// @brief Field sprite, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Sprite* sprite;

  /// @brief Field vectorImage, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::VectorImage* vectorImage;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field scaleMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::ScaleMode scaleMode;

  /// @brief Field playmodeTintColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color playmodeTintColor;

  /// @brief Field topLeftRadius, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 topLeftRadius;

  /// @brief Field topRightRadius, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 topRightRadius;

  /// @brief Field bottomRightRadius, offset: 0x74, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomRightRadius;

  /// @brief Field bottomLeftRadius, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomLeftRadius;

  /// @brief Field leftSlice, offset: 0x84, size: 0x4, def value: None
  int32_t leftSlice;

  /// @brief Field topSlice, offset: 0x88, size: 0x4, def value: None
  int32_t topSlice;

  /// @brief Field rightSlice, offset: 0x8c, size: 0x4, def value: None
  int32_t rightSlice;

  /// @brief Field bottomSlice, offset: 0x90, size: 0x4, def value: None
  int32_t bottomSlice;

  /// @brief Field sliceScale, offset: 0x94, size: 0x4, def value: None
  float_t sliceScale;

  /// @brief Field spriteGeomRect, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rect spriteGeomRect;

  /// @brief Field colorPage, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColorPage colorPage;

  /// @brief Field meshFlags, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags meshFlags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, texture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, sprite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, vectorImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, scaleMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, playmodeTintColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topLeftRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topRightRadius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomRightRadius) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomLeftRadius) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, leftSlice) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topSlice) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, rightSlice) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomSlice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, sliceScale) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, spriteGeomRect) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, colorPage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, meshFlags) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TextParams
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10093)), TypeDefinitionIndex(TypeDefinitionIndex(15788)), TypeDefinitionIndex(TypeDefinitionIndex(6979)),
// TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(6980)), TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(7370)),
// TypeDefinitionIndex(TypeDefinitionIndex(15793)), TypeDefinitionIndex(TypeDefinitionIndex(6973))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7421)) CS Name:
// ::MeshGenerationContextUtils::TextParams
struct CORDL_TYPE __MeshGenerationContextUtils__TextParams {
public:
  // Declarations
  /// @brief Method GetHashCode addr 0x2d138c4 size 0x2a0 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method MakeStyleBased addr 0x2d13b64 size 0x3a8 virtual false final false
  static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams MakeStyleBased(::UnityEngine::UIElements::VisualElement* ve, ::StringW text);

  /// @brief Method GetTextNativeSettings addr 0x2d13f0c size 0xd4 virtual false final false
  static inline ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, float_t scaling);

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "fontDefinition", ty: "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None },
  // CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam
  // { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paragraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "fontColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor",
  // ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name:
  // "textOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal",
  // modifiers: "", def_value: None }, CppParam { name: "panel", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None }]
  constexpr __MeshGenerationContextUtils__TextParams(::UnityEngine::Rect rect, ::StringW text, ::UnityEngine::Font* font, ::UnityEngine::UIElements::FontDefinition fontDefinition, int32_t fontSize,
                                                     ::UnityEngine::UIElements::Length letterSpacing, ::UnityEngine::UIElements::Length wordSpacing, ::UnityEngine::UIElements::Length paragraphSpacing,
                                                     ::UnityEngine::FontStyle fontStyle, ::UnityEngine::Color fontColor, ::UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth,
                                                     bool richText, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::UIElements::TextOverflow textOverflow,
                                                     ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition, ::UnityEngine::UIElements::OverflowInternal overflow,
                                                     ::UnityEngine::UIElements::IPanel* panel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshGenerationContextUtils__TextParams();

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field font, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Font* font;

  /// @brief Field fontDefinition, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::UIElements::FontDefinition fontDefinition;

  /// @brief Field fontSize, offset: 0x30, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field letterSpacing, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length letterSpacing;

  /// @brief Field wordSpacing, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length wordSpacing;

  /// @brief Field paragraphSpacing, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length paragraphSpacing;

  /// @brief Field fontStyle, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::FontStyle fontStyle;

  /// @brief Field fontColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color fontColor;

  /// @brief Field anchor, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::TextAnchor anchor;

  /// @brief Field wordWrap, offset: 0x64, size: 0x1, def value: None
  bool wordWrap;

  /// @brief Field wordWrapWidth, offset: 0x68, size: 0x4, def value: None
  float_t wordWrapWidth;

  /// @brief Field richText, offset: 0x6c, size: 0x1, def value: None
  bool richText;

  /// @brief Field playmodeTintColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color playmodeTintColor;

  /// @brief Field textOverflow, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextOverflow textOverflow;

  /// @brief Field textOverflowPosition, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition;

  /// @brief Field overflow, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::UIElements::OverflowInternal overflow;

  /// @brief Field panel, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* panel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, font) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, fontDefinition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, fontSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, letterSpacing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, wordSpacing) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, paragraphSpacing) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, fontStyle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, fontColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, anchor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, wordWrap) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, wordWrapWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, richText) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, playmodeTintColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, textOverflow) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, textOverflowPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, overflow) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, panel) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContextUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7422))
// CS Name: ::UnityEngine.UIElements::MeshGenerationContextUtils*
class CORDL_TYPE MeshGenerationContextUtils : public ::System::Object {
public:
  // Declarations
  using TextParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams;

  using RectangleParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams;

  using BorderParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams;

  /// @brief Method Rectangle addr 0x2d10728 size 0x100 virtual false final false
  static inline void Rectangle(::UnityEngine::UIElements::MeshGenerationContext* mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method Text addr 0x2d10828 size 0x134 virtual false final false
  static inline void Text(::UnityEngine::UIElements::MeshGenerationContext* mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams,
                          ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  /// @brief Method ConvertBorderRadiusPercentToPoints addr 0x2d1095c size 0x3c virtual false final false
  static inline ::UnityEngine::Vector2 ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2 borderRectSize, ::UnityEngine::UIElements::Length length);

  /// @brief Method GetVisualElementRadii addr 0x2d10998 size 0x29c virtual false final false
  static inline void GetVisualElementRadii(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::Vector2> topLeft, ByRef<::UnityEngine::Vector2> bottomLeft,
                                           ByRef<::UnityEngine::Vector2> topRight, ByRef<::UnityEngine::Vector2> bottomRight);

  /// @brief Method AdjustBackgroundSizeForBorders addr 0x2d10c34 size 0x454 virtual false final false
  static inline void AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement* visualElement, ByRef<::UnityEngine::Rect> rect);

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationContextUtils(MeshGenerationContextUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationContextUtils(MeshGenerationContextUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationContextUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContextUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContextUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContextUtils*, "UnityEngine.UIElements", "MeshGenerationContextUtils");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/BorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/RectangleParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/TextParams");
