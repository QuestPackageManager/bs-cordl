#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionColorSaturationValueSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NoTransitionSlider2D_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoTransitionColorSaturationValueSlider)
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionColorSaturationValueSlider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoTransitionColorSaturationValueSlider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionColorSaturationValueSlider*, "", "NoTransitionColorSaturationValueSlider");
// Dependencies HMUI.NoTransitionSlider2D, UnityEngine.Color, UnityEngine.UI.Graphic
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionColorSaturationValueSlider
class CORDL_TYPE NoTransitionColorSaturationValueSlider : public ::HMUI::NoTransitionSlider2D {
public:
  // Declarations
  /// @brief Field _darkColor, offset 0x148, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor)) ::UnityEngine::Color _darkColor;

  /// @brief Field _graphics, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__graphics, put = __cordl_internal_set__graphics)) ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> _graphics;

  /// @brief Field _hue, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__hue, put = __cordl_internal_set__hue)) float_t _hue;

  /// @brief Field _lightColor, offset 0x158, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field colorSaturationOrValueDidChangeEvent, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSaturationOrValueDidChangeEvent,
                      put = __cordl_internal_set_colorSaturationOrValueDidChangeEvent)) ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2,
                                                                                                           ::GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent;

  /// @brief Method Awake, addr 0x5a2bd68, size 0x90, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x5a2c01c, size 0x28, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::Slider2D* slider, ::UnityEngine::Vector2 normalizedValue);

  static inline ::GlobalNamespace::NoTransitionColorSaturationValueSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x5a2bdf8, size 0x84, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x5a2c044, size 0x44, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method SetHue, addr 0x5a2be7c, size 0x14, virtual false, abstract: false, final false
  inline void SetHue(float_t hue);

  /// @brief Method UpdateVisuals, addr 0x5a2be90, size 0x18c, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> const& __cordl_internal_get__graphics() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>& __cordl_internal_get__graphics();

  constexpr float_t const& __cordl_internal_get__hue() const;

  constexpr float_t& __cordl_internal_get__hue();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* const&
  __cordl_internal_get_colorSaturationOrValueDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*&
  __cordl_internal_get_colorSaturationOrValueDidChangeEvent();

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__graphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> value);

  constexpr void __cordl_internal_set__hue(float_t value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorSaturationOrValueDidChangeEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x5a2c088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorSaturationOrValueDidChangeEvent, addr 0x5a2bbe8, size 0xc0, virtual false, abstract: false, final false
  inline void add_colorSaturationOrValueDidChangeEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorSaturationOrValueDidChangeEvent, addr 0x5a2bca8, size 0xc0, virtual false, abstract: false, final false
  inline void remove_colorSaturationOrValueDidChangeEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionColorSaturationValueSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionColorSaturationValueSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionColorSaturationValueSlider(NoTransitionColorSaturationValueSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionColorSaturationValueSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionColorSaturationValueSlider(NoTransitionColorSaturationValueSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23101 };

  /// @brief Field _hue, offset: 0x13c, size: 0x4, def value: None
  float_t ____hue;

  /// @brief Field _graphics, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> ____graphics;

  /// @brief Field _darkColor, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x158, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorSaturationOrValueDidChangeEvent, offset: 0x168, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* ___colorSaturationOrValueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoTransitionColorSaturationValueSlider, ____hue) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorSaturationValueSlider, ____graphics) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorSaturationValueSlider, ____darkColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorSaturationValueSlider, ____lightColor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorSaturationValueSlider, ___colorSaturationOrValueDidChangeEvent) == 0x168, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoTransitionColorSaturationValueSlider) == 0x170, "Size mismatch!");

} // namespace GlobalNamespace
