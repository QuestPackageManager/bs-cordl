#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageView)
namespace UnityEngine {
struct Vector4;
}
namespace HMUI {
struct __ImageView__GradientDirection;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Color32;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace GlobalNamespace {
class IComponentRefresher;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace HMUI {
struct __ImageView__GradientDirection;
}
namespace HMUI {
class ImageView;
}
// Write type traits
MARK_VAL_T(::HMUI::__ImageView__GradientDirection);
MARK_REF_PTR_T(::HMUI::ImageView);
// Type: ::GradientDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13626))
// CS Name: ::ImageView::GradientDirection
struct CORDL_TYPE __ImageView__GradientDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ImageView__GradientDirection_Unwrapped
  enum struct ____ImageView__GradientDirection_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ImageView__GradientDirection_Unwrapped() const noexcept {
    return static_cast<____ImageView__GradientDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ImageView__GradientDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImageView__GradientDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::HMUI::__ImageView__GradientDirection const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::HMUI::__ImageView__GradientDirection const Vertical;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ImageView__GradientDirection, 0x4>, "Size mismatch!");

} // namespace HMUI
// Type: HMUI::ImageView
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13055)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13626)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10246))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(13627)) CS Name: ::HMUI::ImageView*
class CORDL_TYPE ImageView : public ::UnityEngine::UI::Image {
public:
  // Declarations
  using GradientDirection = ::HMUI::__ImageView__GradientDirection;

  /// @brief Field _useScriptableObjectColors, offset 0x108, size 0x1
  __declspec(property(get = __get__useScriptableObjectColors, put = __set__useScriptableObjectColors)) bool _useScriptableObjectColors;

  /// @brief Field _colorSo, offset 0x110, size 0x8
  __declspec(property(get = __get__colorSo, put = __set__colorSo))::GlobalNamespace::ColorSO* _colorSo;

  /// @brief Field _color0So, offset 0x118, size 0x8
  __declspec(property(get = __get__color0So, put = __set__color0So))::GlobalNamespace::ColorSO* _color0So;

  /// @brief Field _color1So, offset 0x120, size 0x8
  __declspec(property(get = __get__color1So, put = __set__color1So))::GlobalNamespace::ColorSO* _color1So;

  /// @brief Field _skew, offset 0x128, size 0x4
  __declspec(property(get = __get__skew, put = __set__skew)) float_t _skew;

  /// @brief Field _gradient, offset 0x12c, size 0x1
  __declspec(property(get = __get__gradient, put = __set__gradient)) bool _gradient;

  /// @brief Field _color0, offset 0x130, size 0x10
  __declspec(property(get = __get__color0, put = __set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x140, size 0x10
  __declspec(property(get = __get__color1, put = __set__color1))::UnityEngine::Color _color1;

  /// @brief Field _gradientDirection, offset 0x150, size 0x4
  __declspec(property(get = __get__gradientDirection, put = __set__gradientDirection))::HMUI::__ImageView__GradientDirection _gradientDirection;

  /// @brief Field _flipGradientColors, offset 0x154, size 0x1
  __declspec(property(get = __get__flipGradientColors, put = __set__flipGradientColors)) bool _flipGradientColors;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x158, size 0x8
  __declspec(property(get = __get__curvedCanvasSettingsHelper, put = __set__curvedCanvasSettingsHelper))::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  /// @brief Field kVec2Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kVec2Zero, put = setStaticF_kVec2Zero))::UnityEngine::Vector2 kVec2Zero;

  /// @brief Field kVec3Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_kVec3Zero, put = setStaticF_kVec3Zero))::UnityEngine::Vector3 kVec3Zero;

  /// @brief Field kVec4Zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kVec4Zero, put = setStaticF_kVec4Zero))::UnityEngine::Vector4 kVec4Zero;

  /// @brief Field s_VertScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertScratch, put = setStaticF_s_VertScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_VertScratch;

  /// @brief Field s_UVScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UVScratch, put = setStaticF_s_UVScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UVScratch;

  /// @brief Field s_UV1Scratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UV1Scratch, put = setStaticF_s_UV1Scratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UV1Scratch;

  /// @brief Field s_ColorScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ColorScratch, put = setStaticF_s_ColorScratch))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> s_ColorScratch;

  /// @brief Field s_Xy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Xy, put = setStaticF_s_Xy))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Xy;

  /// @brief Field s_Uv, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Uv, put = setStaticF_s_Uv))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Uv;

  __declspec(property(get = get_useScriptableObjectColors, put = set_useScriptableObjectColors)) bool useScriptableObjectColors;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_skew)) float_t skew;

  __declspec(property(get = get_gradient, put = set_gradient)) bool gradient;

  __declspec(property(get = get_color0, put = set_color0))::UnityEngine::Color color0;

  __declspec(property(get = get_color1, put = set_color1))::UnityEngine::Color color1;

  /// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
  constexpr operator ::GlobalNamespace::IComponentRefresher*() noexcept;

  constexpr bool& __get__useScriptableObjectColors();

  constexpr bool const& __get__useScriptableObjectColors() const;

  constexpr void __set__useScriptableObjectColors(bool value);

  constexpr ::GlobalNamespace::ColorSO*& __get__colorSo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__colorSo() const;

  constexpr void __set__colorSo(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__color0So();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__color0So() const;

  constexpr void __set__color0So(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__color1So();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__color1So() const;

  constexpr void __set__color1So(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get__skew();

  constexpr float_t const& __get__skew() const;

  constexpr void __set__skew(float_t value);

  constexpr bool& __get__gradient();

  constexpr bool const& __get__gradient() const;

  constexpr void __set__gradient(bool value);

  constexpr ::UnityEngine::Color& __get__color0();

  constexpr ::UnityEngine::Color const& __get__color0() const;

  constexpr void __set__color0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__color1();

  constexpr ::UnityEngine::Color const& __get__color1() const;

  constexpr void __set__color1(::UnityEngine::Color value);

  constexpr ::HMUI::__ImageView__GradientDirection& __get__gradientDirection();

  constexpr ::HMUI::__ImageView__GradientDirection const& __get__gradientDirection() const;

  constexpr void __set__gradientDirection(::HMUI::__ImageView__GradientDirection value);

  constexpr bool& __get__flipGradientColors();

  constexpr bool const& __get__flipGradientColors() const;

  constexpr void __set__flipGradientColors(bool value);

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __get__curvedCanvasSettingsHelper();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& __get__curvedCanvasSettingsHelper() const;

  constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  static inline void setStaticF_kVec2Zero(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_kVec2Zero();

  static inline void setStaticF_kVec3Zero(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kVec3Zero();

  static inline void setStaticF_kVec4Zero(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_kVec4Zero();

  static inline void setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_VertScratch();

  static inline void setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UVScratch();

  static inline void setStaticF_s_UV1Scratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UV1Scratch();

  static inline void setStaticF_s_ColorScratch(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  static inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> getStaticF_s_ColorScratch();

  static inline void setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Xy();

  static inline void setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Uv();

  /// @brief Method get_useScriptableObjectColors addr 0x2137ca4 size 0x8 virtual false final false
  inline bool get_useScriptableObjectColors();

  /// @brief Method set_useScriptableObjectColors addr 0x2137cac size 0xc virtual false final false
  inline void set_useScriptableObjectColors(bool value);

  /// @brief Method get_color addr 0x2137cb8 size 0x88 virtual true final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2137d40 size 0x8 virtual true final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_skew addr 0x2137d48 size 0x8 virtual false final false
  inline float_t get_skew();

  /// @brief Method get_gradient addr 0x2137d50 size 0x8 virtual false final false
  inline bool get_gradient();

  /// @brief Method set_gradient addr 0x2137d58 size 0x18 virtual false final false
  inline void set_gradient(bool value);

  /// @brief Method get_color0 addr 0x2137d70 size 0x90 virtual false final false
  inline ::UnityEngine::Color get_color0();

  /// @brief Method set_color0 addr 0x2130018 size 0x20 virtual false final false
  inline void set_color0(::UnityEngine::Color value);

  /// @brief Method get_color1 addr 0x2137e00 size 0x90 virtual false final false
  inline ::UnityEngine::Color get_color1();

  /// @brief Method set_color1 addr 0x2130038 size 0x20 virtual false final false
  inline void set_color1(::UnityEngine::Color value);

  /// @brief Method OnEnable addr 0x2137e90 size 0x28 virtual true final false
  inline void OnEnable();

  /// @brief Method OnPopulateMesh addr 0x2137eb8 size 0x174 virtual true final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method __Refresh addr 0x213e930 size 0x10 virtual true final true
  inline void __Refresh();

  /// @brief Method GenerateSimpleSprite addr 0x213802c size 0x14c0 virtual false final false
  inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float_t curvedUIRadius);

  /// @brief Method GenerateSlicedSprite addr 0x21394ec size 0x1bcc virtual false final false
  inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill, float_t curvedUIRadius);

  /// @brief Method GenerateTiledSprite addr 0x213b0b8 size 0x2394 virtual false final false
  inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill, float_t curvedUIRadius);

  /// @brief Method AddQuad addr 0x2140144 size 0xe4 virtual false final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions, ::UnityEngine::Color32 color,
                             ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs);

  /// @brief Method AddQuad addr 0x213fed0 size 0x274 virtual false final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin,
                             ::UnityEngine::Vector2 uvMax, float_t elementWidthScale, float_t curvedUIRadius);

  /// @brief Method AddQuad addr 0x213fbec size 0x2e4 virtual false final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0Min,
                             ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min, ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor,
                             float_t skewOffset);

  /// @brief Method AddQuadWithHorizontalGradient addr 0x213f034 size 0x8c4 virtual false final false
  static inline void AddQuadWithHorizontalGradient(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color0,
                                                   ::UnityEngine::Color32 color1, ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min,
                                                   ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset);

  /// @brief Method AddQuadWithVerticalGradient addr 0x213f8f8 size 0x2f4 virtual false final false
  static inline void AddQuadWithVerticalGradient(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color0,
                                                 ::UnityEngine::Color32 color1, ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min,
                                                 ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset);

  /// @brief Method GetAdjustedBorders addr 0x213ef5c size 0xd8 virtual false final false
  static inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect rect);

  /// @brief Method GenerateFilledSprite addr 0x213d44c size 0x14e4 virtual false final false
  inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect, float_t curvedUIRadius);

  /// @brief Method RadialCut addr 0x2140228 size 0x120 virtual false final false
  static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv, float_t fill, bool invert,
                               int32_t corner);

  /// @brief Method RadialCut addr 0x2140348 size 0x3ec virtual false final false
  static inline void RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner);

  /// @brief Method GetNumberOfElements addr 0x213eec8 size 0x94 virtual false final false
  static inline int32_t GetNumberOfElements(float_t curvedUIRadius, float_t width);

  /// @brief Method GetDrawingDimensions addr 0x213e940 size 0x588 virtual false final false
  inline ::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);

  static inline ::HMUI::ImageView* New_ctor();

  /// @brief Method .ctor addr 0x2140734 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ImageView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageView(ImageView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageView(ImageView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageView();

public:
  /// @brief Field _useScriptableObjectColors, offset: 0x108, size: 0x1, def value: None
  bool ____useScriptableObjectColors;

  /// @brief Field _colorSo, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____colorSo;

  /// @brief Field _color0So, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____color0So;

  /// @brief Field _color1So, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____color1So;

  /// @brief Field _skew, offset: 0x128, size: 0x4, def value: None
  float_t ____skew;

  /// @brief Field _gradient, offset: 0x12c, size: 0x1, def value: None
  bool ____gradient;

  /// @brief Field _color0, offset: 0x130, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x140, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _gradientDirection, offset: 0x150, size: 0x4, def value: None
  ::HMUI::__ImageView__GradientDirection ____gradientDirection;

  /// @brief Field _flipGradientColors, offset: 0x154, size: 0x1, def value: None
  bool ____flipGradientColors;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x158, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ImageView, 0x160>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ImageView__GradientDirection, "HMUI", "ImageView/GradientDirection");
NEED_NO_BOX(::HMUI::ImageView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ImageView*, "HMUI", "ImageView");
