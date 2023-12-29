#pragma once
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
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class HSVPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HSVPanelController);
// Type: ::HSVPanelController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5508))
// CS Name: ::HSVPanelController*
class CORDL_TYPE HSVPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorSaturationValueSlider, offset 0x18, size 0x8
  __declspec(property(get = __get__colorSaturationValueSlider, put = __set__colorSaturationValueSlider))::GlobalNamespace::ColorSaturationValueSlider* _colorSaturationValueSlider;

  /// @brief Field _colorHueSlider, offset 0x20, size 0x8
  __declspec(property(get = __get__colorHueSlider, put = __set__colorHueSlider))::GlobalNamespace::ColorHueSlider* _colorHueSlider;

  /// @brief Field colorDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_colorDidChangeEvent, put = __set_colorDidChangeEvent))::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Field _hsvColor, offset 0x30, size 0xc
  __declspec(property(get = __get__hsvColor, put = __set__hsvColor))::UnityEngine::Vector3 _hsvColor;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::ColorSaturationValueSlider*& __get__colorSaturationValueSlider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSaturationValueSlider*> const& __get__colorSaturationValueSlider() const;

  constexpr void __set__colorSaturationValueSlider(::GlobalNamespace::ColorSaturationValueSlider* value);

  constexpr ::GlobalNamespace::ColorHueSlider*& __get__colorHueSlider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorHueSlider*> const& __get__colorHueSlider() const;

  constexpr void __set__colorHueSlider(::GlobalNamespace::ColorHueSlider* value);

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __get_colorDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*> const& __get_colorDidChangeEvent() const;

  constexpr void __set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  constexpr ::UnityEngine::Vector3& __get__hsvColor();

  constexpr ::UnityEngine::Vector3 const& __get__hsvColor() const;

  constexpr void __set__hsvColor(::UnityEngine::Vector3 value);

  /// @brief Method add_colorDidChangeEvent addr 0x2132474 size 0xb0 virtual false final false
  inline void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorDidChangeEvent addr 0x21326c0 size 0xb0 virtual false final false
  inline void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method get_color addr 0x21332c0 size 0x14 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2132270 size 0x4c virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method Awake addr 0x213333c size 0xec virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2133428 size 0x160 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleColorSaturationOrValueDidChange addr 0x2133588 size 0x74 virtual false final false
  inline void HandleColorSaturationOrValueDidChange(::GlobalNamespace::ColorSaturationValueSlider* slider, ::UnityEngine::Vector2 colorSaturationAndValue,
                                                    ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandleColorHueDidChange addr 0x21335fc size 0x6c virtual false final false
  inline void HandleColorHueDidChange(::GlobalNamespace::ColorHueSlider* slider, float_t hue, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method RefreshSlidersValues addr 0x2133304 size 0x38 virtual false final false
  inline void RefreshSlidersValues();

  /// @brief Method RefreshSlidersColors addr 0x21332d4 size 0x30 virtual false final false
  inline void RefreshSlidersColors();

  static inline ::GlobalNamespace::HSVPanelController* New_ctor();

  /// @brief Method .ctor addr 0x2133668 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HSVPanelController(HSVPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HSVPanelController(HSVPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HSVPanelController();

public:
  /// @brief Field _colorSaturationValueSlider, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSaturationValueSlider* ____colorSaturationValueSlider;

  /// @brief Field _colorHueSlider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorHueSlider* ____colorHueSlider;

  /// @brief Field colorDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  /// @brief Field _hsvColor, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____hsvColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HSVPanelController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____colorSaturationValueSlider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____colorHueSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ___colorDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HSVPanelController, ____hsvColor) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HSVPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HSVPanelController*, "", "HSVPanelController");
