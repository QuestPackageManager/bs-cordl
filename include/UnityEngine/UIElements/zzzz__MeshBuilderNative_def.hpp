#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilderNative)
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeBorderParams;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeColorPage;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeRectParams;
}
namespace UnityEngine::UIElements {
struct MeshWriteDataInterface;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshBuilderNative;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeBorderParams;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeColorPage;
}
namespace UnityEngine::UIElements {
struct MeshBuilderNative_NativeRectParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshBuilderNative);
MARK_VAL_T(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams);
MARK_VAL_T(::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage);
MARK_VAL_T(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams);
// Dependencies UnityEngine.Color32
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeColorPage
struct CORDL_TYPE MeshBuilderNative_NativeColorPage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilderNative_NativeColorPage();

  // Ctor Parameters [CppParam { name: "isValid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr MeshBuilderNative_NativeColorPage(int32_t isValid, ::UnityEngine::Color32 pageAndID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5996 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field isValid, offset: 0x0, size: 0x4, def value: None
  int32_t isValid;

  /// @brief Field pageAndID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Color32 pageAndID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, pageAndID) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.UIElements.MeshBuilderNative::NativeColorPage, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeBorderParams
struct CORDL_TYPE MeshBuilderNative_NativeBorderParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilderNative_NativeBorderParams();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers:
  // "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2",
  // modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None }, CppParam { name:
  // "topColorPage", ty: "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty:
  // "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None }, CppParam { name: "bottomColorPage", ty:
  // "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None }]
  constexpr MeshBuilderNative_NativeBorderParams(::UnityEngine::Rect rect, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor,
                                                 ::UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth, ::UnityEngine::Vector2 topLeftRadius,
                                                 ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius,
                                                 ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage leftColorPage, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage topColorPage,
                                                 ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage rightColorPage,
                                                 ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage bottomColorPage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5997 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field leftColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color leftColor;

  /// @brief Field topColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color topColor;

  /// @brief Field rightColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color rightColor;

  /// @brief Field bottomColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color bottomColor;

  /// @brief Field leftWidth, offset: 0x50, size: 0x4, def value: None
  float_t leftWidth;

  /// @brief Field topWidth, offset: 0x54, size: 0x4, def value: None
  float_t topWidth;

  /// @brief Field rightWidth, offset: 0x58, size: 0x4, def value: None
  float_t rightWidth;

  /// @brief Field bottomWidth, offset: 0x5c, size: 0x4, def value: None
  float_t bottomWidth;

  /// @brief Field topLeftRadius, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 topLeftRadius;

  /// @brief Field topRightRadius, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 topRightRadius;

  /// @brief Field bottomRightRadius, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomRightRadius;

  /// @brief Field bottomLeftRadius, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomLeftRadius;

  /// @brief Field leftColorPage, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage leftColorPage;

  /// @brief Field topColorPage, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage topColorPage;

  /// @brief Field rightColorPage, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage rightColorPage;

  /// @brief Field bottomColorPage, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage bottomColorPage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, leftColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, topColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, rightColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, bottomColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, leftWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, topWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, rightWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, bottomWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, topLeftRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, topRightRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, bottomRightRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, bottomLeftRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, leftColorPage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, topColorPage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, rightColorPage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, bottomColorPage) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.ScaleMode, UnityEngine.UIElements.MeshBuilderNative::NativeColorPage, UnityEngine.Vector2, UnityEngine.Vector4
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeRectParams
struct CORDL_TYPE MeshBuilderNative_NativeRectParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilderNative_NativeRectParams();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None },
  // CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uvRegion", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name:
  // "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "",
  // def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None }]
  constexpr MeshBuilderNative_NativeRectParams(::UnityEngine::Rect rect, ::UnityEngine::Rect subRect, ::UnityEngine::Rect uv, ::UnityEngine::Rect uvRegion, ::UnityEngine::Color color,
                                               ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius,
                                               ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Vector2 contentSize,
                                               ::UnityEngine::Vector2 textureSize, float_t texturePixelsPerPoint, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice,
                                               float_t sliceScale, ::UnityEngine::Vector4 rectInset, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5998 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb4 };

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field subRect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rect subRect;

  /// @brief Field uv, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect uv;

  /// @brief Field uvRegion, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rect uvRegion;

  /// @brief Field color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field scaleMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::ScaleMode scaleMode;

  /// @brief Field topLeftRadius, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2 topLeftRadius;

  /// @brief Field topRightRadius, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 topRightRadius;

  /// @brief Field bottomRightRadius, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomRightRadius;

  /// @brief Field bottomLeftRadius, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 bottomLeftRadius;

  /// @brief Field contentSize, offset: 0x74, size: 0x8, def value: None
  ::UnityEngine::Vector2 contentSize;

  /// @brief Field textureSize, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::Vector2 textureSize;

  /// @brief Field texturePixelsPerPoint, offset: 0x84, size: 0x4, def value: None
  float_t texturePixelsPerPoint;

  /// @brief Field leftSlice, offset: 0x88, size: 0x4, def value: None
  int32_t leftSlice;

  /// @brief Field topSlice, offset: 0x8c, size: 0x4, def value: None
  int32_t topSlice;

  /// @brief Field rightSlice, offset: 0x90, size: 0x4, def value: None
  int32_t rightSlice;

  /// @brief Field bottomSlice, offset: 0x94, size: 0x4, def value: None
  int32_t bottomSlice;

  /// @brief Field sliceScale, offset: 0x98, size: 0x4, def value: None
  float_t sliceScale;

  /// @brief Field rectInset, offset: 0x9c, size: 0x10, def value: None
  ::UnityEngine::Vector4 rectInset;

  /// @brief Field colorPage, offset: 0xac, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, subRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, uv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, uvRegion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, scaleMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, topLeftRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, topRightRadius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, bottomRightRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, bottomLeftRadius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, contentSize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, textureSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, texturePixelsPerPoint) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, leftSlice) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, topSlice) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, rightSlice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, bottomSlice) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, sliceScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, rectInset) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, colorPage) == 0xac, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, 0xb4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshBuilderNative
class CORDL_TYPE MeshBuilderNative : public ::System::Object {
public:
  // Declarations
  using NativeBorderParams = ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams;

  using NativeColorPage = ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage;

  using NativeRectParams = ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams;

  /// @brief Method MakeBorder, addr 0x4a3c644, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeBorder(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams borderParams, float_t posZ);

  /// @brief Method MakeBorder_Injected, addr 0x4a3c6bc, size 0x54, virtual false, abstract: false, final false
  static inline void MakeBorder_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams> borderParams, float_t posZ,
                                         ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeSolidRect, addr 0x4a3c710, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeSolidRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams, float_t posZ);

  /// @brief Method MakeSolidRect_Injected, addr 0x4a3c788, size 0x54, virtual false, abstract: false, final false
  static inline void MakeSolidRect_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                            ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeTexturedRect, addr 0x4a3c7dc, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeTexturedRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams, float_t posZ);

  /// @brief Method MakeTexturedRect_Injected, addr 0x4a3c854, size 0x54, virtual false, abstract: false, final false
  static inline void MakeTexturedRect_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                               ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeVectorGraphics9SliceBackground, addr 0x4a3ca4c, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface
  MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices,
                                     float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB, ::UnityEngine::Color tint,
                                     ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage, int32_t settingIndexOffset);

  /// @brief Method MakeVectorGraphics9SliceBackground_Injected, addr 0x4a3cb04, size 0xa4, virtual false, abstract: false, final false
  static inline void MakeVectorGraphics9SliceBackground_Injected(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                 ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::ByRef<::UnityEngine::Rect> targetRect,
                                                                 ::ByRef<::UnityEngine::Vector4> sliceLTRB, ::ByRef<::UnityEngine::Color> tint,
                                                                 ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage, int32_t settingIndexOffset,
                                                                 ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeVectorGraphicsStretchBackground, addr 0x4a3c8a8, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface
  MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices,
                                      float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color tint,
                                      ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage, int32_t settingIndexOffset, ::ByRef<int32_t> finalVertexCount,
                                      ::ByRef<int32_t> finalIndexCount);

  /// @brief Method MakeVectorGraphicsStretchBackground_Injected, addr 0x4a3c988, size 0xc4, virtual false, abstract: false, final false
  static inline void MakeVectorGraphicsStretchBackground_Injected(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                  ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::ByRef<::UnityEngine::Rect> targetRect,
                                                                  ::ByRef<::UnityEngine::Rect> sourceUV, ::UnityEngine::ScaleMode scaleMode, ::ByRef<::UnityEngine::Color> tint,
                                                                  ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage, int32_t settingIndexOffset,
                                                                  ::ByRef<int32_t> finalVertexCount, ::ByRef<int32_t> finalIndexCount, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilderNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilderNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshBuilderNative(MeshBuilderNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilderNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshBuilderNative(MeshBuilderNative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshBuilderNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshBuilderNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative*, "UnityEngine.UIElements", "MeshBuilderNative");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeBorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, "UnityEngine.UIElements", "MeshBuilderNative/NativeColorPage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeRectParams");
