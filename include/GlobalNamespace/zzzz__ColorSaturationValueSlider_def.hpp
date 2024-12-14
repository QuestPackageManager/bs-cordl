#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSaturationValueSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorSaturationValueSlider)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class Slider2D;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSaturationValueSlider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSaturationValueSlider);
// Dependencies HMUI.Slider2D, UnityEngine.Color, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerUpHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSaturationValueSlider
class CORDL_TYPE ColorSaturationValueSlider : public ::HMUI::Slider2D {
public:
  // Declarations
  /// @brief Field _darkColor, offset 0x138, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor)) ::UnityEngine::Color _darkColor;

  /// @brief Field _graphics, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__graphics, put = __cordl_internal_set__graphics)) ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>
      _graphics;

  /// @brief Field _hue, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get__hue, put = __cordl_internal_set__hue)) float_t _hue;

  /// @brief Field _lightColor, offset 0x148, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field colorSaturationOrValueDidChangeEvent, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSaturationOrValueDidChangeEvent,
                      put = __cordl_internal_set_colorSaturationOrValueDidChangeEvent)) ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2,
                                                                                                           ::GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method Awake, addr 0x3c246f8, size 0x90, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x3c24958, size 0x24, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::Slider2D* slider, ::UnityEngine::Vector2 normalizedValue);

  static inline ::GlobalNamespace::ColorSaturationValueSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c24788, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x3c2497c, size 0x44, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method SetHue, addr 0x3c24818, size 0x14, virtual false, abstract: false, final false
  inline void SetHue(float_t hue);

  /// @brief Method UpdateVisuals, addr 0x3c2482c, size 0x12c, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> const& __cordl_internal_get__graphics() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>& __cordl_internal_get__graphics();

  constexpr float_t const& __cordl_internal_get__hue() const;

  constexpr float_t& __cordl_internal_get__hue();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* const&
  __cordl_internal_get_colorSaturationOrValueDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*&
  __cordl_internal_get_colorSaturationOrValueDidChangeEvent();

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__graphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> value);

  constexpr void __cordl_internal_set__hue(float_t value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorSaturationOrValueDidChangeEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x3c249c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorSaturationOrValueDidChangeEvent, addr 0x3c24590, size 0xb4, virtual false, abstract: false, final false
  inline void
  add_colorSaturationOrValueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method remove_colorSaturationOrValueDidChangeEvent, addr 0x3c24644, size 0xb4, virtual false, abstract: false, final false
  inline void
  remove_colorSaturationOrValueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSaturationValueSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSaturationValueSlider(ColorSaturationValueSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSaturationValueSlider(ColorSaturationValueSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18988 };

  /// @brief Field _hue, offset: 0x12c, size: 0x4, def value: None
  float_t ____hue;

  /// @brief Field _graphics, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> ____graphics;

  /// @brief Field _darkColor, offset: 0x138, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorSaturationOrValueDidChangeEvent, offset: 0x158, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* ___colorSaturationOrValueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSaturationValueSlider, ____hue) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSaturationValueSlider, ____graphics) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSaturationValueSlider, ____darkColor) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSaturationValueSlider, ____lightColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSaturationValueSlider, ___colorSaturationOrValueDidChangeEvent) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSaturationValueSlider, 0x160>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSaturationValueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSaturationValueSlider*, "", "ColorSaturationValueSlider");
