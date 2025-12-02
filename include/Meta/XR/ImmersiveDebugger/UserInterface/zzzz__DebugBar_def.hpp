#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/DebugBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugBar)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugPanel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugBar;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvasPanel
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar
class CORDL_TYPE DebugBar : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel {
public:
  // Declarations
  /// @brief Field _buttonsAnchor, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsAnchor, put = __cordl_internal_set__buttonsAnchor)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _buttonsAnchor;

  /// @brief Field _miniButtonsAnchor, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__miniButtonsAnchor, put = __cordl_internal_set__miniButtonsAnchor)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>
      _miniButtonsAnchor;

  /// @brief Field _panelToggles, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__panelToggles,
                      put = __cordl_internal_set__panelToggles)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>,
                                                                                                              ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>* _panelToggles;

  /// @brief Field _panels, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__panels,
                      put = __cordl_internal_set__panels)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* _panels;

  /// @brief Field _time, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _time;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar* New_ctor();

  /// @brief Method OnPanelVisibilityChanged, addr 0x5837f00, size 0xe8, virtual false, abstract: false, final false
  inline void OnPanelVisibilityChanged(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller);

  /// @brief Method RegisterControl, addr 0x5837ce8, size 0x218, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon, ::System::Action* callback);

  /// @brief Method RegisterPanel, addr 0x58378e8, size 0x340, virtual false, abstract: false, final false
  inline void RegisterPanel(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel* panel);

  /// @brief Method Setup, addr 0x583764c, size 0x29c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method Update, addr 0x5837fe8, size 0x138, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__buttonsAnchor() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__buttonsAnchor();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__miniButtonsAnchor() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__miniButtonsAnchor();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>,
                                                         ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>* const&
  __cordl_internal_get__panelToggles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>*&
  __cordl_internal_get__panelToggles();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* const& __cordl_internal_get__panels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>*& __cordl_internal_get__panels();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__time() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__time();

  constexpr void __cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__miniButtonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__panelToggles(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>* value);

  constexpr void __cordl_internal_set__panels(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* value);

  constexpr void __cordl_internal_set__time(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  /// @brief Method .ctor, addr 0x5838120, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugBar(DebugBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugBar(DebugBar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18315 };

  /// @brief Field _panels, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* ____panels;

  /// @brief Field _panelToggles, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>*
      ____panelToggles;

  /// @brief Field _buttonsAnchor, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____buttonsAnchor;

  /// @brief Field _miniButtonsAnchor, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____miniButtonsAnchor;

  /// @brief Field _time, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, ____panels) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, ____panelToggles) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, ____buttonsAnchor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, ____miniButtonsAnchor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, ____time) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar, 0xf0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*, "Meta.XR.ImmersiveDebugger.UserInterface", "DebugBar");
