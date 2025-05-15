#pragma once
// IWYU pragma private; include "GlobalNamespace/HSVPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HSVPanelController)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace GlobalNamespace {
class ColorHueSlider;
}
namespace GlobalNamespace {
class ColorSaturationValueSlider;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class HSVPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HSVPanelController);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HSVPanelController
class CORDL_TYPE HSVPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorHueSlider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorHueSlider, put = __cordl_internal_set__colorHueSlider)) ::UnityW<::GlobalNamespace::ColorHueSlider> _colorHueSlider;

  /// @brief Field _colorSaturationValueSlider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSaturationValueSlider, put = __cordl_internal_set__colorSaturationValueSlider)) ::UnityW<::GlobalNamespace::ColorSaturationValueSlider>
      _colorSaturationValueSlider;

  /// @brief Field _hsvColor, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__hsvColor, put = __cordl_internal_set__hsvColor)) ::UnityEngine::Vector3 _hsvColor;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  /// @brief Field colorDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_colorDidChangeEvent,
                      put = __cordl_internal_set_colorDidChangeEvent)) ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Method Awake, addr 0x3c265e0, size 0xe4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleColorHueDidChange, addr 0x3c26890, size 0x6c, virtual false, abstract: false, final false
  inline void HandleColorHueDidChange(::GlobalNamespace::ColorHueSlider* slider, float_t hue, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandleColorSaturationOrValueDidChange, addr 0x3c2681c, size 0x74, virtual false, abstract: false, final false
  inline void HandleColorSaturationOrValueDidChange(::GlobalNamespace::ColorSaturationValueSlider* slider, ::UnityEngine::Vector2 colorSaturationAndValue,
                                                    ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  static inline ::GlobalNamespace::HSVPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c266c4, size 0x158, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshSlidersColors, addr 0x3c26578, size 0x30, virtual false, abstract: false, final false
  inline void RefreshSlidersColors();

  /// @brief Method RefreshSlidersValues, addr 0x3c265a8, size 0x38, virtual false, abstract: false, final false
  inline void RefreshSlidersValues();

  constexpr ::UnityW<::GlobalNamespace::ColorHueSlider> const& __cordl_internal_get__colorHueSlider() const;

  constexpr ::UnityW<::GlobalNamespace::ColorHueSlider>& __cordl_internal_get__colorHueSlider();

  constexpr ::UnityW<::GlobalNamespace::ColorSaturationValueSlider> const& __cordl_internal_get__colorSaturationValueSlider() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSaturationValueSlider>& __cordl_internal_get__colorSaturationValueSlider();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__hsvColor() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__hsvColor();

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* const& __cordl_internal_get_colorDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorDidChangeEvent();

  constexpr void __cordl_internal_set__colorHueSlider(::UnityW<::GlobalNamespace::ColorHueSlider> value);

  constexpr void __cordl_internal_set__colorSaturationValueSlider(::UnityW<::GlobalNamespace::ColorSaturationValueSlider> value);

  constexpr void __cordl_internal_set__hsvColor(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x3c268fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorDidChangeEvent, addr 0x3c263b8, size 0xb0, virtual false, abstract: false, final false
  inline void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method get_color, addr 0x3c26518, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method remove_colorDidChangeEvent, addr 0x3c26468, size 0xb0, virtual false, abstract: false, final false
  inline void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method set_color, addr 0x3c2652c, size 0x4c, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HSVPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HSVPanelController(HSVPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HSVPanelController(HSVPanelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19006 };

  /// @brief Field _colorSaturationValueSlider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSaturationValueSlider> ____colorSaturationValueSlider;

  /// @brief Field _colorHueSlider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorHueSlider> ____colorHueSlider;

  /// @brief Field colorDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  /// @brief Field _hsvColor, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____hsvColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____colorSaturationValueSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____colorHueSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ___colorDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____hsvColor) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HSVPanelController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HSVPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HSVPanelController*, "", "HSVPanelController");
