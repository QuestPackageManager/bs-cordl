#pragma once
// IWYU pragma private; include "HMUI/ColorGradientSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorGradientSlider)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class ImageViewBase;
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
// Dependencies HMUI.TextSlider, UnityEngine.Color, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerUpHandler
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ColorGradientSlider
class CORDL_TYPE ColorGradientSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _color0, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get__color0, put = __cordl_internal_set__color0)) ::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x160, size 0x10
  __declspec(property(get = __cordl_internal_get__color1, put = __cordl_internal_set__color1)) ::UnityEngine::Color _color1;

  /// @brief Field _darkColor, offset 0x178, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor)) ::UnityEngine::Color _darkColor;

  /// @brief Field _gradientImages, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__gradientImages, put = __cordl_internal_set__gradientImages)) ::ArrayW<::UnityW<::HMUI::ImageViewBase>, ::Array<::UnityW<::HMUI::ImageViewBase>>*>
      _gradientImages;

  /// @brief Field _lightColor, offset 0x188, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field _stringBuilder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__stringBuilder, put = setStaticF__stringBuilder)) ::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _textPrefix, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__textPrefix, put = __cordl_internal_set__textPrefix)) ::StringW _textPrefix;

  /// @brief Field colorDidChangeEvent, offset 0x198, size 0x8
  __declspec(property(
      get = __cordl_internal_get_colorDidChangeEvent,
      put = __cordl_internal_set_colorDidChangeEvent)) ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method Awake, addr 0x39f03dc, size 0x98, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x39f0fe4, size 0x54, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  static inline ::HMUI::ColorGradientSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x39f05b8, size 0x8c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x39f1038, size 0x98, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method SetColors, addr 0x39f06f8, size 0x30, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color color0, ::UnityEngine::Color color1);

  /// @brief Method TextForNormalizedValue, addr 0x39f0e4c, size 0x198, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method UpdateVisuals, addr 0x39f0728, size 0x1b4, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::ArrayW<::UnityW<::HMUI::ImageViewBase>, ::Array<::UnityW<::HMUI::ImageViewBase>>*> const& __cordl_internal_get__gradientImages() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ImageViewBase>, ::Array<::UnityW<::HMUI::ImageViewBase>>*>& __cordl_internal_get__gradientImages();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::StringW const& __cordl_internal_get__textPrefix() const;

  constexpr ::StringW& __cordl_internal_get__textPrefix();

  constexpr ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* const& __cordl_internal_get_colorDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorDidChangeEvent();

  constexpr void __cordl_internal_set__color0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__gradientImages(::ArrayW<::UnityW<::HMUI::ImageViewBase>, ::Array<::UnityW<::HMUI::ImageViewBase>>*> value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__textPrefix(::StringW value);

  constexpr void __cordl_internal_set_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x39f10d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorDidChangeEvent, addr 0x39f0274, size 0xb4, virtual false, abstract: false, final false
  inline void add_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  static inline ::System::Text::StringBuilder* getStaticF__stringBuilder();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method remove_colorDidChangeEvent, addr 0x39f0328, size 0xb4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16056 };

  /// @brief Field _textPrefix, offset: 0x148, size: 0x8, def value: None
  ::StringW ____textPrefix;

  /// @brief Field _color0, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x160, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _gradientImages, offset: 0x170, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ImageViewBase>, ::Array<::UnityW<::HMUI::ImageViewBase>>*> ____gradientImages;

  /// @brief Field _darkColor, offset: 0x178, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x188, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorDidChangeEvent, offset: 0x198, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ColorGradientSlider, ____textPrefix) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____color0) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____color1) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____gradientImages) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____darkColor) == 0x178, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ____lightColor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::HMUI::ColorGradientSlider, ___colorDidChangeEvent) == 0x198, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ColorGradientSlider, 0x1a0>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ColorGradientSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
