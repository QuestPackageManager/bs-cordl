#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilderNative)
namespace UnityEngine::UIElements {
struct MeshWriteDataInterface;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeBorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeColorPage;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeRectParams;
}
namespace UnityEngine {
struct Color32;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshBuilderNative;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeBorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeColorPage;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeRectParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshBuilderNative);
MARK_VAL_T(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage);
MARK_VAL_T(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams);
// Type: ::NativeColorPage
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MeshBuilderNative::NativeColorPage
struct CORDL_TYPE __MeshBuilderNative__NativeColorPage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilderNative__NativeColorPage();

  // Ctor Parameters [CppParam { name: "isValid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr __MeshBuilderNative__NativeColorPage(int32_t isValid, ::UnityEngine::Color32 pageAndID) noexcept;

  /// @brief Field isValid, offset: 0x0, size: 0x4, def value: None
  int32_t isValid;

  /// @brief Field pageAndID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Color32 pageAndID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage, pageAndID) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::NativeBorderParams
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 176, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MeshBuilderNative::NativeBorderParams
struct CORDL_TYPE __MeshBuilderNative__NativeBorderParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilderNative__NativeBorderParams();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers:
  // "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2",
  // modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage", modifiers: "", def_value: None }, CppParam { name:
  // "topColorPage", ty: "::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty:
  // "::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage", modifiers: "", def_value: None }, CppParam { name: "bottomColorPage", ty:
  // "::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage", modifiers: "", def_value: None }]
  constexpr __MeshBuilderNative__NativeBorderParams(::UnityEngine::Rect rect, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor,
                                                    ::UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth,
                                                    ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
                                                    ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage leftColorPage,
                                                    ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage topColorPage,
                                                    ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage rightColorPage,
                                                    ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage bottomColorPage) noexcept;

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
  ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage leftColorPage;

  /// @brief Field topColorPage, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage topColorPage;

  /// @brief Field rightColorPage, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage rightColorPage;

  /// @brief Field bottomColorPage, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage bottomColorPage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, leftColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, topColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, rightColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, bottomColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, leftWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, topWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, rightWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, bottomWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, topLeftRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, topRightRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, bottomRightRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, bottomLeftRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, leftColorPage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, topColorPage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, rightColorPage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, bottomColorPage) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::NativeRectParams
// SizeInfo { instance_size: 180, native_size: 180, calculated_instance_size: 180, calculated_native_size: 196, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MeshBuilderNative::NativeRectParams
struct CORDL_TYPE __MeshBuilderNative__NativeRectParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilderNative__NativeRectParams();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None },
  // CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uvRegion", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name:
  // "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "",
  // def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage", modifiers: "", def_value: None }]
  constexpr __MeshBuilderNative__NativeRectParams(::UnityEngine::Rect rect, ::UnityEngine::Rect subRect, ::UnityEngine::Rect uv, ::UnityEngine::Rect uvRegion, ::UnityEngine::Color color,
                                                  ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius,
                                                  ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Vector2 contentSize,
                                                  ::UnityEngine::Vector2 textureSize, float_t texturePixelsPerPoint, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice,
                                                  float_t sliceScale, ::UnityEngine::Vector4 rectInset, ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage colorPage) noexcept;

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
  ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage colorPage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5963 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, 0xb4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, subRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, uv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, uvRegion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, scaleMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, topLeftRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, topRightRadius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, bottomRightRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, bottomLeftRadius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, contentSize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, textureSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, texturePixelsPerPoint) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, leftSlice) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, topSlice) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, rightSlice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, bottomSlice) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, sliceScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, rectInset) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, colorPage) == 0xac, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshBuilderNative
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MeshBuilderNative*
class CORDL_TYPE MeshBuilderNative : public ::System::Object {
public:
  // Declarations
  using NativeBorderParams = ::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams;

  using NativeColorPage = ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage;

  using NativeRectParams = ::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams;

  /// @brief Method MakeBorder, addr 0x49c6b50, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeBorder(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams borderParams, float_t posZ);

  /// @brief Method MakeBorder_Injected, addr 0x49c6bc8, size 0x54, virtual false, abstract: false, final false
  static inline void MakeBorder_Injected(ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams> borderParams, float_t posZ,
                                         ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeSolidRect, addr 0x49c6c1c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeSolidRect(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams rectParams, float_t posZ);

  /// @brief Method MakeSolidRect_Injected, addr 0x49c6c94, size 0x54, virtual false, abstract: false, final false
  static inline void MakeSolidRect_Injected(ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams> rectParams, float_t posZ,
                                            ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeTexturedRect, addr 0x49c6ce8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeTexturedRect(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams rectParams, float_t posZ);

  /// @brief Method MakeTexturedRect_Injected, addr 0x49c6d60, size 0x54, virtual false, abstract: false, final false
  static inline void MakeTexturedRect_Injected(ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams> rectParams, float_t posZ,
                                               ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeVectorGraphics9SliceBackground, addr 0x49c6f58, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface
  MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices,
                                     float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB, ::UnityEngine::Color tint,
                                     ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage colorPage, int32_t settingIndexOffset);

  /// @brief Method MakeVectorGraphics9SliceBackground_Injected, addr 0x49c7010, size 0xa4, virtual false, abstract: false, final false
  static inline void MakeVectorGraphics9SliceBackground_Injected(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                 ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ByRef<::UnityEngine::Rect> targetRect,
                                                                 ByRef<::UnityEngine::Vector4> sliceLTRB, ByRef<::UnityEngine::Color> tint,
                                                                 ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage> colorPage, int32_t settingIndexOffset,
                                                                 ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

  /// @brief Method MakeVectorGraphicsStretchBackground, addr 0x49c6db4, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MeshWriteDataInterface
  MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices,
                                      float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color tint,
                                      ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage colorPage, int32_t settingIndexOffset, ByRef<int32_t> finalVertexCount,
                                      ByRef<int32_t> finalIndexCount);

  /// @brief Method MakeVectorGraphicsStretchBackground_Injected, addr 0x49c6e94, size 0xc4, virtual false, abstract: false, final false
  static inline void MakeVectorGraphicsStretchBackground_Injected(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                                  ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ByRef<::UnityEngine::Rect> targetRect,
                                                                  ByRef<::UnityEngine::Rect> sourceUV, ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Color> tint,
                                                                  ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage> colorPage, int32_t settingIndexOffset,
                                                                  ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount, ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5964 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshBuilderNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshBuilderNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshBuilderNative*, "UnityEngine.UIElements", "MeshBuilderNative");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeBorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage, "UnityEngine.UIElements", "MeshBuilderNative/NativeColorPage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeRectParams");
