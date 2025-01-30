#pragma once
// IWYU pragma private; include "GlobalNamespace/PreviousColorPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreviousColorPanelController)
namespace HMUI {
class ButtonBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviousColorPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviousColorPanelController);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PreviousColorPanelController
class CORDL_TYPE PreviousColorPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonBinder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _color, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _graphics, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__graphics, put = __cordl_internal_set__graphics)) ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>
      _graphics;

  /// @brief Field _graphicsColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__graphicsColor, put = __cordl_internal_set__graphicsColor)) ::UnityEngine::Color _graphicsColor;

  /// @brief Field colorWasSelectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_colorWasSelectedEvent, put = __cordl_internal_set_colorWasSelectedEvent)) ::System::Action_1<::UnityEngine::Color>* colorWasSelectedEvent;

  /// @brief Method AddColor, addr 0x3c28574, size 0xa4, virtual false, abstract: false, final false
  inline void AddColor(::UnityEngine::Color color);

  /// @brief Method Awake, addr 0x3c28498, size 0xc0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DiscardUpcomingColor, addr 0x3c28618, size 0xc, virtual false, abstract: false, final false
  inline void DiscardUpcomingColor();

  static inline ::GlobalNamespace::PreviousColorPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c28558, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method <Awake>b__9_0, addr 0x3c28638, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__9_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> const& __cordl_internal_get__graphics() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>& __cordl_internal_get__graphics();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__graphicsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__graphicsColor();

  constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_colorWasSelectedEvent() const;

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_colorWasSelectedEvent();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__graphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> value);

  constexpr void __cordl_internal_set__graphicsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method .ctor, addr 0x3c28624, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorWasSelectedEvent, addr 0x3c28338, size 0xb0, virtual false, abstract: false, final false
  inline void add_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method remove_colorWasSelectedEvent, addr 0x3c283e8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_colorWasSelectedEvent(::System::Action_1<::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviousColorPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviousColorPanelController(PreviousColorPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviousColorPanelController(PreviousColorPanelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18995 };

  /// @brief Field kMaxColors offset 0xffffffff size 0x4
  static constexpr int32_t kMaxColors{ static_cast<int32_t>(0x2) };

  /// @brief Field _graphics, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> ____graphics;

  /// @brief Field _button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field colorWasSelectedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___colorWasSelectedEvent;

  /// @brief Field _buttonBinder, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _graphicsColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____graphicsColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____graphics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ___colorWasSelectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____buttonBinder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviousColorPanelController, ____graphicsColor) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviousColorPanelController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviousColorPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviousColorPanelController*, "", "PreviousColorPanelController");
