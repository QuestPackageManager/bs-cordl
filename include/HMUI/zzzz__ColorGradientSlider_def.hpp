#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorGradientSlider)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class ImageView;
}
namespace HMUI {
class TextSlider;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HMUI {
class ColorGradientSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ColorGradientSlider);
// Type: HMUI::ColorGradientSlider
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ColorGradientSlider*
class CORDL_TYPE ColorGradientSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _color0, offset 0x148, size 0x10
  __declspec(property(get = __cordl_internal_get__color0, put = __cordl_internal_set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x158, size 0x10
  __declspec(property(get = __cordl_internal_get__color1, put = __cordl_internal_set__color1))::UnityEngine::Color _color1;

  /// @brief Field _darkColor, offset 0x170, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor))::UnityEngine::Color _darkColor;

  /// @brief Field _gradientImages, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__gradientImages,
                      put = __cordl_internal_set__gradientImages))::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> _gradientImages;

  /// @brief Field _lightColor, offset 0x180, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor))::UnityEngine::Color _lightColor;

  /// @brief Field _stringBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__stringBuilder, put = setStaticF__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _textPrefix, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__textPrefix, put = __cordl_internal_set__textPrefix))::StringW _textPrefix;

  /// @brief Field colorDidChangeEvent, offset 0x190, size 0x8
  __declspec(property(
      get = __cordl_internal_get_colorDidChangeEvent,
      put = __cordl_internal_set_colorDidChangeEvent))::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method Awake, addr 0x240b72c, size 0x98, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x240c34c, size 0x58, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  static inline ::HMUI::ColorGradientSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x240b908, size 0x8c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x240c3a4, size 0xa0, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method SetColors, addr 0x240ba48, size 0x30, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color color0, ::UnityEngine::Color color1);

  /// @brief Method TextForNormalizedValue, addr 0x240c1ac, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method UpdateVisuals, addr 0x240ba78, size 0x1a4, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> const& __cordl_internal_get__gradientImages() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*>& __cordl_internal_get__gradientImages();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::StringW const& __cordl_internal_get__textPrefix() const;

  constexpr ::StringW& __cordl_internal_get__textPrefix();

  constexpr ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*> const&
  __cordl_internal_get_colorDidChangeEvent() const;

  constexpr void __cordl_internal_set__color0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__gradientImages(::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__textPrefix(::StringW value);

  constexpr void __cordl_internal_set_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x240c444, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorDidChangeEvent, addr 0x240b5c4, size 0xb4, virtual false, abstract: false, final false
  inline void add_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  static inline ::System::Text::StringBuilder* getStaticF__stringBuilder();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method remove_colorDidChangeEvent, addr 0x240b678, size 0xb4, virtual false, abstract: false, final false
  inline void remove_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  static inline void setStaticF__stringBuilder(::System::Text::StringBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradientSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradientSlider(ColorGradientSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradientSlider(ColorGradientSlider const&) = delete;

  /// @brief Field _textPrefix, offset: 0x140, size: 0x8, def value: None
  ::StringW ____textPrefix;

  /// @brief Field _color0, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x158, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _gradientImages, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> ____gradientImages;

  /// @brief Field _darkColor, offset: 0x170, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x180, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorDidChangeEvent, offset: 0x190, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ColorGradientSlider, 0x198>, "Size mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____textPrefix) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____color0) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____color1) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____gradientImages) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____darkColor) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____lightColor) == 0x180, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ___colorDidChangeEvent) == 0x190, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ColorGradientSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
