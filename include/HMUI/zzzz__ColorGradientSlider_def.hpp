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
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class TextSlider;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace System::Text {
class StringBuilder;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13560)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13555))
// CS Name: ::HMUI::ColorGradientSlider*
class CORDL_TYPE ColorGradientSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _textPrefix, offset 0x140, size 0x8
  __declspec(property(get = __get__textPrefix, put = __set__textPrefix))::StringW _textPrefix;

  /// @brief Field _color0, offset 0x148, size 0x10
  __declspec(property(get = __get__color0, put = __set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x158, size 0x10
  __declspec(property(get = __get__color1, put = __set__color1))::UnityEngine::Color _color1;

  /// @brief Field _gradientImages, offset 0x168, size 0x8
  __declspec(property(get = __get__gradientImages, put = __set__gradientImages))::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> _gradientImages;

  /// @brief Field _darkColor, offset 0x170, size 0x10
  __declspec(property(get = __get__darkColor, put = __set__darkColor))::UnityEngine::Color _darkColor;

  /// @brief Field _lightColor, offset 0x180, size 0x10
  __declspec(property(get = __get__lightColor, put = __set__lightColor))::UnityEngine::Color _lightColor;

  /// @brief Field colorDidChangeEvent, offset 0x190, size 0x8
  __declspec(property(get = __get_colorDidChangeEvent,
                      put = __set_colorDidChangeEvent))::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Field _stringBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__stringBuilder, put = setStaticF__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  constexpr ::StringW& __get__textPrefix();

  constexpr ::StringW const& __get__textPrefix() const;

  constexpr void __set__textPrefix(::StringW value);

  constexpr ::UnityEngine::Color& __get__color0();

  constexpr ::UnityEngine::Color const& __get__color0() const;

  constexpr void __set__color0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__color1();

  constexpr ::UnityEngine::Color const& __get__color1() const;

  constexpr void __set__color1(::UnityEngine::Color value);

  constexpr ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*>& __get__gradientImages();

  constexpr ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> const& __get__gradientImages() const;

  constexpr void __set__gradientImages(::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> value);

  constexpr ::UnityEngine::Color& __get__darkColor();

  constexpr ::UnityEngine::Color const& __get__darkColor() const;

  constexpr void __set__darkColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__lightColor();

  constexpr ::UnityEngine::Color const& __get__lightColor() const;

  constexpr void __set__lightColor(::UnityEngine::Color value);

  constexpr ::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __get_colorDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*> const&
  __get_colorDidChangeEvent() const;

  constexpr void __set_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  static inline void setStaticF__stringBuilder(::System::Text::StringBuilder* value);

  static inline ::System::Text::StringBuilder* getStaticF__stringBuilder();

  /// @brief Method add_colorDidChangeEvent addr 0x2121460 size 0xb4 virtual false final false
  inline void add_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorDidChangeEvent addr 0x2121514 size 0xb4 virtual false final false
  inline void remove_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method Awake addr 0x21215c8 size 0x98 virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21217a4 size 0x8c virtual true final false
  inline void OnDestroy();

  /// @brief Method SetColors addr 0x21218e4 size 0x30 virtual false final false
  inline void SetColors(::UnityEngine::Color color0, ::UnityEngine::Color color1);

  /// @brief Method UpdateVisuals addr 0x2121914 size 0x1a4 virtual true final false
  inline void UpdateVisuals();

  /// @brief Method TextForNormalizedValue addr 0x2122048 size 0x1a0 virtual true final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method HandleNormalizedValueDidChange addr 0x21221e8 size 0x58 virtual false final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  /// @brief Method OnPointerUp addr 0x2122240 size 0xa0 virtual true final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::ColorGradientSlider* New_ctor();

  /// @brief Method .ctor addr 0x21222e0 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradientSlider(ColorGradientSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradientSlider(ColorGradientSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradientSlider();

public:
  /// @brief Field _textPrefix, offset: 0x140, size: 0x8, def value: None
  ::StringW ____textPrefix;

  /// @brief Field _color0, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x158, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _gradientImages, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> ____gradientImages;

  /// @brief Field _darkColor, offset: 0x170, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x180, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorDidChangeEvent, offset: 0x190, size: 0x8, def value: None
  ::System::Action_3<::HMUI::ColorGradientSlider*, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ColorGradientSlider, 0x198>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ColorGradientSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
