#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RGBPanelController)
namespace HMUI {
class ColorGradientSlider;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class RGBPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RGBPanelController);
// Type: ::RGBPanelController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16179))
// CS Name: ::RGBPanelController*
class CORDL_TYPE RGBPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _redSlider, offset 0x18, size 0x8
  __declspec(property(get = __get__redSlider, put = __set__redSlider))::HMUI::ColorGradientSlider* _redSlider;

  /// @brief Field _greenSlider, offset 0x20, size 0x8
  __declspec(property(get = __get__greenSlider, put = __set__greenSlider))::HMUI::ColorGradientSlider* _greenSlider;

  /// @brief Field _blueSlider, offset 0x28, size 0x8
  __declspec(property(get = __get__blueSlider, put = __set__blueSlider))::HMUI::ColorGradientSlider* _blueSlider;

  /// @brief Field colorDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_colorDidChangeEvent, put = __set_colorDidChangeEvent))::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::HMUI::ColorGradientSlider*& __get__redSlider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> const& __get__redSlider() const;

  constexpr void __set__redSlider(::HMUI::ColorGradientSlider* value);

  constexpr ::HMUI::ColorGradientSlider*& __get__greenSlider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> const& __get__greenSlider() const;

  constexpr void __set__greenSlider(::HMUI::ColorGradientSlider* value);

  constexpr ::HMUI::ColorGradientSlider*& __get__blueSlider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> const& __get__blueSlider() const;

  constexpr void __set__blueSlider(::HMUI::ColorGradientSlider* value);

  constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& __get_colorDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*> const& __get_colorDidChangeEvent() const;

  constexpr void __set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method add_colorDidChangeEvent, addr 0x23e3b74, size 0xb0, virtual false, abstract: false, final false
  inline void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorDidChangeEvent, addr 0x23e3c24, size 0xb0, virtual false, abstract: false, final false
  inline void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method get_color, addr 0x23e3cd4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x23e3ce0, size 0x20, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method Awake, addr 0x23e3ec4, size 0x104, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x23e3fc8, size 0x1ac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSliderColorDidChange, addr 0x23e4174, size 0x3c, virtual false, abstract: false, final false
  inline void HandleSliderColorDidChange(::HMUI::ColorGradientSlider* slider, ::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method RefreshSlidersValues, addr 0x23e3e78, size 0x4c, virtual false, abstract: false, final false
  inline void RefreshSlidersValues();

  /// @brief Method RefreshSlidersColors, addr 0x23e3d00, size 0x178, virtual false, abstract: false, final false
  inline void RefreshSlidersColors();

  static inline ::GlobalNamespace::RGBPanelController* New_ctor();

  /// @brief Method .ctor, addr 0x23e41b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RGBPanelController(RGBPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RGBPanelController(RGBPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RGBPanelController();

public:
  /// @brief Field _redSlider, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ColorGradientSlider* ____redSlider;

  /// @brief Field _greenSlider, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ColorGradientSlider* ____greenSlider;

  /// @brief Field _blueSlider, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ColorGradientSlider* ____blueSlider;

  /// @brief Field colorDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* ___colorDidChangeEvent;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RGBPanelController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____redSlider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____greenSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____blueSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ___colorDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RGBPanelController, ____color) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RGBPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RGBPanelController*, "", "RGBPanelController");
