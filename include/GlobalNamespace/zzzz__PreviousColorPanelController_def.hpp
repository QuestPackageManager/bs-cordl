#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreviousColorPanelController)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviousColorPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviousColorPanelController);
// Type: ::PreviousColorPanelController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5509))
// CS Name: ::PreviousColorPanelController*
class CORDL_TYPE PreviousColorPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _graphics, offset 0x18, size 0x8
  __declspec(property(get = __get__graphics, put = __set__graphics))::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> _graphics;

  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  /// @brief Field colorWasSelectedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_colorWasSelectedEvent, put = __set_colorWasSelectedEvent))::System::Action_1<::UnityEngine::Color>* colorWasSelectedEvent;

  /// @brief Field _buttonBinder, offset 0x30, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _graphicsColor, offset 0x48, size 0x10
  __declspec(property(get = __get__graphicsColor, put = __set__graphicsColor))::UnityEngine::Color _graphicsColor;

  constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*>& __get__graphics();

  constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> const& __get__graphics() const;

  constexpr void __set__graphics(::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> value);

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get_colorWasSelectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get_colorWasSelectedEvent() const;

  constexpr void __set_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__graphicsColor();

  constexpr ::UnityEngine::Color const& __get__graphicsColor() const;

  constexpr void __set__graphicsColor(::UnityEngine::Color value);

  /// @brief Method add_colorWasSelectedEvent addr 0x2132524 size 0xb0 virtual false final false
  inline void add_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method remove_colorWasSelectedEvent addr 0x2132770 size 0xb0 virtual false final false
  inline void remove_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method Awake addr 0x2133670 size 0xc4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2133734 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method AddColor addr 0x21321cc size 0xa4 virtual false final false
  inline void AddColor(::UnityEngine::Color color);

  /// @brief Method DiscardUpcomingColor addr 0x2132988 size 0xc virtual false final false
  inline void DiscardUpcomingColor();

  static inline ::GlobalNamespace::PreviousColorPanelController* New_ctor();

  /// @brief Method .ctor addr 0x2133750 size 0x18 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__9_0 addr 0x2133768 size 0x24 virtual false final false
  inline void _Awake_b__9_0();

  // Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviousColorPanelController(PreviousColorPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviousColorPanelController(PreviousColorPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviousColorPanelController();

public:
  /// @brief Field _graphics, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> ____graphics;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  /// @brief Field colorWasSelectedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___colorWasSelectedEvent;

  /// @brief Field _buttonBinder, offset: 0x30, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _graphicsColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____graphicsColor;

  /// @brief Field kMaxColors offset 0xffffffff size 0x4
  static constexpr int32_t kMaxColors{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviousColorPanelController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____graphics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ___colorWasSelectedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____buttonBinder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____graphicsColor) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviousColorPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviousColorPanelController*, "", "PreviousColorPanelController");
