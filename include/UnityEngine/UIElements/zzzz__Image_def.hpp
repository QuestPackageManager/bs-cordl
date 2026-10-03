#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Image.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Image)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class ICustomStyle;
}
namespace UnityEngine::UIElements {
class Image_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Image_UxmlTraits;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Image;
}
namespace UnityEngine::UIElements {
class Image_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Image_UxmlTraits;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Image*);
MARK_REF_T(::UnityEngine::UIElements::Image_UxmlFactory*);
MARK_REF_T(::UnityEngine::UIElements::Image_UxmlTraits*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Image*, "UnityEngine.UIElements", "Image");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Image_UxmlFactory*, "UnityEngine.UIElements", "Image/UxmlFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Image_UxmlTraits*, "UnityEngine.UIElements", "Image/UxmlTraits");
// [Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Image/UxmlFactory
class CORDL_TYPE Image_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Image*, ::UnityEngine::UIElements::Image_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Image_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x71bdab0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Image_UxmlFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image_UxmlFactory(Image_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image_UxmlFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image_UxmlFactory(Image_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Image_UxmlFactory) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Image/UxmlTraits
class CORDL_TYPE Image_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Image_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x71bdb18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Image_UxmlTraits", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image_UxmlTraits(Image_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image_UxmlTraits", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image_UxmlTraits(Image_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Image_UxmlTraits) == 0x88, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.ScaleMode, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.CustomStyleProperty`1<T>, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Image
class CORDL_TYPE Image : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Image_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Image_UxmlTraits;

  /// @brief [CreateProperty]
  __declspec(property(get = get_image, put = set_image)) ::UnityW<::UnityEngine::Texture> image;

  /// @brief Field imageProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_imageProperty, put = setStaticF_imageProperty)) ::UnityEngine::UIElements::BindingId imageProperty;

  /// @brief Field m_Image, offset 0x2d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::Object> m_Image;

  /// @brief Field m_ImageIsInline, offset 0x2f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImageIsInline, put = __cordl_internal_set_m_ImageIsInline)) bool m_ImageIsInline;

  /// @brief Field m_ScaleMode, offset 0x2c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleMode, put = __cordl_internal_set_m_ScaleMode)) ::UnityEngine::ScaleMode m_ScaleMode;

  /// @brief Field m_ScaleModeIsInline, offset 0x2f9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ScaleModeIsInline, put = __cordl_internal_set_m_ScaleModeIsInline)) bool m_ScaleModeIsInline;

  /// @brief Field m_TintColor, offset 0x2e8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TintColor, put = __cordl_internal_set_m_TintColor)) ::UnityEngine::Color m_TintColor;

  /// @brief Field m_TintColorIsInline, offset 0x2fa, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TintColorIsInline, put = __cordl_internal_set_m_TintColorIsInline)) bool m_TintColorIsInline;

  /// @brief Field m_UV, offset 0x2d8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_UV, put = __cordl_internal_set_m_UV)) ::UnityEngine::Rect m_UV;

  /// @brief Field s_ImageProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ImageProperty, put = setStaticF_s_ImageProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> s_ImageProperty;

  /// @brief Field s_ScaleModeProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ScaleModeProperty, put = setStaticF_s_ScaleModeProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> s_ScaleModeProperty;

  /// @brief Field s_SpriteProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SpriteProperty, put = setStaticF_s_SpriteProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> s_SpriteProperty;

  /// @brief Field s_TintColorProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TintColorProperty, put = setStaticF_s_TintColorProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> s_TintColorProperty;

  /// @brief Field s_VectorImageProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VectorImageProperty,
                      put = setStaticF_s_VectorImageProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>>
      s_VectorImageProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_scaleMode, put = set_scaleMode)) ::UnityEngine::ScaleMode scaleMode;

  /// @brief Field scaleModeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_scaleModeProperty, put = setStaticF_scaleModeProperty)) ::UnityEngine::UIElements::BindingId scaleModeProperty;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief [CreateProperty]
  __declspec(property(get = get_source, put = set_source)) ::UnityW<::UnityEngine::Object> source;

  /// @brief Field sourceProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_sourceProperty, put = setStaticF_sourceProperty)) ::UnityEngine::UIElements::BindingId sourceProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_sourceRect, put = set_sourceRect)) ::UnityEngine::Rect sourceRect;

  /// @brief Field sourceRectProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_sourceRectProperty, put = setStaticF_sourceRectProperty)) ::UnityEngine::UIElements::BindingId sourceRectProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  /// @brief Field spriteProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_spriteProperty, put = setStaticF_spriteProperty)) ::UnityEngine::UIElements::BindingId spriteProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_tintColor, put = set_tintColor)) ::UnityEngine::Color tintColor;

  /// @brief Field tintColorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_tintColorProperty, put = setStaticF_tintColorProperty)) ::UnityEngine::UIElements::BindingId tintColorProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief [CreateProperty]
  __declspec(property(get = get_uv, put = set_uv)) ::UnityEngine::Rect uv;

  /// @brief Field uvProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_uvProperty, put = setStaticF_uvProperty)) ::UnityEngine::UIElements::BindingId uvProperty;

  /// @brief [CreateProperty]
  __declspec(property(get = get_vectorImage, put = set_vectorImage)) ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage;

  /// @brief Field vectorImageProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_vectorImageProperty, put = setStaticF_vectorImageProperty)) ::UnityEngine::UIElements::BindingId vectorImageProperty;

  /// @brief Method CalculateUV, addr 0x71bbcd8, size 0x22c, virtual false, abstract: false, final false
  inline void CalculateUV(::UnityEngine::Rect srcRect);

  /// @brief Method ClearProperty, addr 0x71bd3b8, size 0x14, virtual false, abstract: false, final false
  inline void ClearProperty();

  /// @brief Method DoMeasure, addr 0x71bc4c4, size 0x304, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method GetSourceRect, addr 0x71bb84c, size 0x274, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetSourceRect();

  /// @brief Method GetTextureDisplaySize, addr 0x71bc388, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureDisplaySize(::UnityEngine::Sprite* sprite);

  /// @brief Method GetTextureDisplaySize, addr 0x71bc2a4, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTextureDisplaySize(::UnityEngine::Texture* texture);

  static inline ::UnityEngine::UIElements::Image* New_ctor();

  /// @brief Method OnCustomStyleResolved, addr 0x71bcde8, size 0x38, virtual false, abstract: false, final false
  inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method OnGenerateVisualContent, addr 0x71bc7c8, size 0x620, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(Il2CppObject* mgc);

  /// @brief Method ReadCustomProperties, addr 0x71bce20, size 0x484, virtual false, abstract: false, final false
  inline void ReadCustomProperties(::UnityEngine::UIElements::ICustomStyle* customStyleProvider);

  /// @brief Method SetCustomProperty, addr 0x71bd2a4, size 0x114, virtual false, abstract: false, final false
  inline void SetCustomProperty(::UnityEngine::Object* value, ::UnityEngine::UIElements::BindingId binding);

  /// @brief Method SetInlineProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetInlineProperty(::UnityEngine::Object* value, ::UnityEngine::UIElements::BindingId binding);

  /// @brief Method SetScaleMode, addr 0x71bc060, size 0xb4, virtual false, abstract: false, final false
  inline void SetScaleMode(::UnityEngine::ScaleMode mode);

  /// @brief Method SetTintColor, addr 0x71bc18c, size 0x118, virtual false, abstract: false, final false
  inline void SetTintColor(::UnityEngine::Color color);

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Image();

  constexpr bool const& __cordl_internal_get_m_ImageIsInline() const;

  constexpr bool& __cordl_internal_get_m_ImageIsInline();

  constexpr ::UnityEngine::ScaleMode const& __cordl_internal_get_m_ScaleMode() const;

  constexpr ::UnityEngine::ScaleMode& __cordl_internal_get_m_ScaleMode();

  constexpr bool const& __cordl_internal_get_m_ScaleModeIsInline() const;

  constexpr bool& __cordl_internal_get_m_ScaleModeIsInline();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_TintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_TintColor();

  constexpr bool const& __cordl_internal_get_m_TintColorIsInline() const;

  constexpr bool& __cordl_internal_get_m_TintColorIsInline();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_UV() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_UV();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_ImageIsInline(bool value);

  constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::ScaleMode value);

  constexpr void __cordl_internal_set_m_ScaleModeIsInline(bool value);

  constexpr void __cordl_internal_set_m_TintColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_TintColorIsInline(bool value);

  constexpr void __cordl_internal_set_m_UV(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x71abc94, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_imageProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> getStaticF_s_ImageProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> getStaticF_s_ScaleModeProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> getStaticF_s_SpriteProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_TintColorProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> getStaticF_s_VectorImageProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_scaleModeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_sourceProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_sourceRectProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_spriteProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_tintColorProperty();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_uvProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_vectorImageProperty();

  /// @brief Method get_image, addr 0x71bb700, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_image();

  /// @brief Method get_scaleMode, addr 0x71bc034, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ScaleMode get_scaleMode();

  /// @brief Method get_source, addr 0x71bb568, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_source();

  /// @brief Method get_sourceRect, addr 0x71bb848, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_sourceRect();

  /// @brief Method get_sprite, addr 0x71bb780, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_tintColor, addr 0x71bc114, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_tintColor();

  /// @brief Method get_uv, addr 0x71bbf04, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_uv();

  /// @brief Method get_vectorImage, addr 0x71bb7e4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VectorImage> get_vectorImage();

  static inline void setStaticF_imageProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_s_ImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> value);

  static inline void setStaticF_s_ScaleModeProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> value);

  static inline void setStaticF_s_SpriteProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> value);

  static inline void setStaticF_s_TintColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline void setStaticF_s_VectorImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> value);

  static inline void setStaticF_scaleModeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_sourceProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_sourceRectProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_spriteProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tintColorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_uvProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_vectorImageProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_image, addr 0x71ab604, size 0xac, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Texture* value);

  /// @brief Method set_scaleMode, addr 0x71bc03c, size 0x24, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::ScaleMode value);

  /// @brief Method set_source, addr 0x71bb570, size 0x190, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Object* value);

  /// @brief Method set_sourceRect, addr 0x71bbac0, size 0x218, virtual false, abstract: false, final false
  inline void set_sourceRect(::UnityEngine::Rect value);

  /// @brief Method set_sprite, addr 0x71ab6b0, size 0xac, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_tintColor, addr 0x71bc128, size 0x64, virtual false, abstract: false, final false
  inline void set_tintColor(::UnityEngine::Color value);

  /// @brief Method set_uv, addr 0x71bbf18, size 0x11c, virtual false, abstract: false, final false
  inline void set_uv(::UnityEngine::Rect value);

  /// @brief Method set_vectorImage, addr 0x71ab75c, size 0xac, virtual false, abstract: false, final false
  inline void set_vectorImage(::UnityEngine::UIElements::VectorImage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image(Image&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image(Image const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4221 };

  /// @brief Field m_ScaleMode, offset: 0x2c8, size: 0x4, def value: None
  ::UnityEngine::ScaleMode ___m_ScaleMode;

  /// @brief Field m_Image, offset: 0x2d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_Image;

  /// @brief Field m_UV, offset: 0x2d8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_UV;

  /// @brief Field m_TintColor, offset: 0x2e8, size: 0x10, def value: None
  ::UnityEngine::Color ___m_TintColor;

  /// @brief Field m_ImageIsInline, offset: 0x2f8, size: 0x1, def value: None
  bool ___m_ImageIsInline;

  /// @brief Field m_ScaleModeIsInline, offset: 0x2f9, size: 0x1, def value: None
  bool ___m_ScaleModeIsInline;

  /// @brief Field m_TintColorIsInline, offset: 0x2fa, size: 0x1, def value: None
  bool ___m_TintColorIsInline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_ScaleMode) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_Image) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_UV) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_TintColor) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_ImageIsInline) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_ScaleModeIsInline) == 0x2f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Image, ___m_TintColorIsInline) == 0x2fa, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Image) == 0x300, "Size mismatch!");

} // namespace UnityEngine::UIElements
