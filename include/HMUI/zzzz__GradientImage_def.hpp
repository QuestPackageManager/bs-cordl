#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GradientImage)
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace UnityEngine::UI {
class VertexHelper;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace HMUI {
class GradientImage;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::GradientImage);
// Type: HMUI::GradientImage
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 304, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::GradientImage*
class CORDL_TYPE GradientImage : public ::UnityEngine::UI::Image {
public:
  // Declarations
  /// @brief Field _color0, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get__color0, put = __cordl_internal_set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get__color1, put = __cordl_internal_set__color1))::UnityEngine::Color _color1;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvasSettingsHelper, put = __cordl_internal_set__curvedCanvasSettingsHelper))::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  __declspec(property(get = get_color0, put = set_color0))::UnityEngine::Color color0;

  __declspec(property(get = get_color1, put = set_color1))::UnityEngine::Color color1;

  /// @brief Field kVec2Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kVec2Zero, put = setStaticF_kVec2Zero))::UnityEngine::Vector2 kVec2Zero;

  /// @brief Field kVec3Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_kVec3Zero, put = setStaticF_kVec3Zero))::UnityEngine::Vector3 kVec3Zero;

  /// @brief Field kVec4Zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kVec4Zero, put = setStaticF_kVec4Zero))::UnityEngine::Vector4 kVec4Zero;

  /// @brief Field s_ColorScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ColorScratch, put = setStaticF_s_ColorScratch))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> s_ColorScratch;

  /// @brief Field s_UVScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UVScratch, put = setStaticF_s_UVScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UVScratch;

  /// @brief Field s_Uv, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Uv, put = setStaticF_s_Uv))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Uv;

  /// @brief Field s_VertScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertScratch, put = setStaticF_s_VertScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_VertScratch;

  /// @brief Field s_Xy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Xy, put = setStaticF_s_Xy))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Xy;

  /// @brief Method AddQuad, addr 0x251a29c, size 0x154, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin,
                             ::UnityEngine::Vector2 uvMax);

  /// @brief Method AddQuad, addr 0x25199f4, size 0x8a8, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color0, ::UnityEngine::Color32 color1,
                             ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, float_t elementWidthScale, float_t curvedUIRadius);

  /// @brief Method AddQuad, addr 0x251a3f0, size 0xe4, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions, ::UnityEngine::Color32 color,
                             ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs);

  /// @brief Method GenerateFilledSprite, addr 0x2517f64, size 0x1430, virtual false, abstract: false, final false
  inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);

  /// @brief Method GenerateSimpleSprite, addr 0x2514440, size 0xab8, virtual false, abstract: false, final false
  inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float_t curvedUIRadius);

  /// @brief Method GenerateSlicedSprite, addr 0x2514ef8, size 0xd80, virtual false, abstract: false, final false
  inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* vh, float_t curvedUIRadius);

  /// @brief Method GenerateTiledSprite, addr 0x2515c78, size 0x22ec, virtual false, abstract: false, final false
  inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GetAdjustedBorders, addr 0x251991c, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect rect);

  /// @brief Method GetDrawingDimensions, addr 0x2519394, size 0x588, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);

  static inline ::HMUI::GradientImage* New_ctor();

  /// @brief Method OnPopulateMesh, addr 0x25142cc, size 0x174, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method RadialCut, addr 0x251a4d4, size 0x120, virtual false, abstract: false, final false
  static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv, float_t fill, bool invert,
                               int32_t corner);

  /// @brief Method RadialCut, addr 0x251a5f4, size 0x3ec, virtual false, abstract: false, final false
  static inline void RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color1();

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __cordl_internal_get__curvedCanvasSettingsHelper();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& __cordl_internal_get__curvedCanvasSettingsHelper() const;

  constexpr void __cordl_internal_set__color0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  /// @brief Method .ctor, addr 0x251a9e0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector2 getStaticF_kVec2Zero();

  static inline ::UnityEngine::Vector3 getStaticF_kVec3Zero();

  static inline ::UnityEngine::Vector4 getStaticF_kVec4Zero();

  static inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> getStaticF_s_ColorScratch();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UVScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Uv();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_VertScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Xy();

  /// @brief Method get_color0, addr 0x2514234, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color0();

  /// @brief Method get_color1, addr 0x2514280, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color1();

  static inline void setStaticF_kVec2Zero(::UnityEngine::Vector2 value);

  static inline void setStaticF_kVec3Zero(::UnityEngine::Vector3 value);

  static inline void setStaticF_kVec4Zero(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_ColorScratch(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  static inline void setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_color0, addr 0x2514248, size 0x38, virtual false, abstract: false, final false
  inline void set_color0(::UnityEngine::Color value);

  /// @brief Method set_color1, addr 0x2514294, size 0x38, virtual false, abstract: false, final false
  inline void set_color1(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientImage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientImage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientImage(GradientImage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientImage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientImage(GradientImage const&) = delete;

  /// @brief Field _color0, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x128, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::GradientImage, 0x130>, "Size mismatch!");

static_assert(offsetof(::HMUI::GradientImage, ____color0) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::GradientImage, ____color1) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::GradientImage, ____curvedCanvasSettingsHelper) == 0x128, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::GradientImage);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::GradientImage*, "HMUI", "GradientImage");
