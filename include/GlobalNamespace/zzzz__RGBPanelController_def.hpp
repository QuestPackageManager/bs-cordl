#pragma once
// IWYU pragma private; include "GlobalNamespace/RGBPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RGBPanelController)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class ColorGradientSlider;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RGBPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RGBPanelController);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RGBPanelController
class CORDL_TYPE RGBPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blueSlider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__blueSlider, put = __cordl_internal_set__blueSlider)) ::UnityW<::HMUI::ColorGradientSlider> _blueSlider;

  /// @brief Field _color, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _greenSlider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__greenSlider, put = __cordl_internal_set__greenSlider)) ::UnityW<::HMUI::ColorGradientSlider> _greenSlider;

  /// @brief Field _redSlider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redSlider, put = __cordl_internal_set__redSlider)) ::UnityW<::HMUI::ColorGradientSlider> _redSlider;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  /// @brief Field colorDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_colorDidChangeEvent,
                      put = __cordl_internal_set_colorDidChangeEvent)) ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Method Awake, addr 0x3c22004, size 0xf8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleSliderColorDidChange, addr 0x3c2229c, size 0x3c, virtual false, abstract: false, final false
  inline void HandleSliderColorDidChange(::HMUI::ColorGradientSlider* slider, ::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  static inline ::GlobalNamespace::RGBPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c220fc, size 0x1a0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshSlidersColors, addr 0x3c21e40, size 0x178, virtual false, abstract: false, final false
  inline void RefreshSlidersColors();

  /// @brief Method RefreshSlidersValues, addr 0x3c21fb8, size 0x4c, virtual false, abstract: false, final false
  inline void RefreshSlidersValues();

  constexpr ::UnityW<::HMUI::ColorGradientSlider> const& __cordl_internal_get__blueSlider() const;

  constexpr ::UnityW<::HMUI::ColorGradientSlider>& __cordl_internal_get__blueSlider();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityW<::HMUI::ColorGradientSlider> const& __cordl_internal_get__greenSlider() const;

  constexpr ::UnityW<::HMUI::ColorGradientSlider>& __cordl_internal_get__greenSlider();

  constexpr ::UnityW<::HMUI::ColorGradientSlider> const& __cordl_internal_get__redSlider() const;

  constexpr ::UnityW<::HMUI::ColorGradientSlider>& __cordl_internal_get__redSlider();

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* const& __cordl_internal_get_colorDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorDidChangeEvent();

  constexpr void __cordl_internal_set__blueSlider(::UnityW<::HMUI::ColorGradientSlider> value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__greenSlider(::UnityW<::HMUI::ColorGradientSlider> value);

  constexpr void __cordl_internal_set__redSlider(::UnityW<::HMUI::ColorGradientSlider> value);

  constexpr void __cordl_internal_set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x3c222d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorDidChangeEvent, addr 0x3c21cb4, size 0xb0, virtual false, abstract: false, final false
  inline void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method get_color, addr 0x3c21e14, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method remove_colorDidChangeEvent, addr 0x3c21d64, size 0xb0, virtual false, abstract: false, final false
  inline void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method set_color, addr 0x3c21e20, size 0x20, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RGBPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RGBPanelController(RGBPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RGBPanelController(RGBPanelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19002 };

  /// @brief Field _redSlider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ColorGradientSlider> ____redSlider;

  /// @brief Field _greenSlider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ColorGradientSlider> ____greenSlider;

  /// @brief Field _blueSlider, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ColorGradientSlider> ____blueSlider;

  /// @brief Field colorDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  /// @brief Field _color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____redSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____greenSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____blueSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ___colorDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____color) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RGBPanelController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RGBPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RGBPanelController*, "", "RGBPanelController");
