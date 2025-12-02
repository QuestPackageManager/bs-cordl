#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/DebugInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Interface_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInterface)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Console;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugBar;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugInterface;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface
class CORDL_TYPE DebugInterface : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface {
public:
  // Declarations
  __declspec(property(get = get_FollowOverride, put = set_FollowOverride)) bool FollowOverride;

  __declspec(property(get = get_OpacityOverride, put = set_OpacityOverride)) bool OpacityOverride;

  __declspec(property(get = get_RotateOverride, put = set_RotateOverride)) bool RotateOverride;

  /// @brief Field _bar, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__bar, put = __cordl_internal_set__bar)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar> _bar;

  /// @brief Field _console, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__console, put = __cordl_internal_set__console)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> _console;

  /// @brief Field _distanceButton, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__distanceButton, put = __cordl_internal_set__distanceButton)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _distanceButton;

  /// @brief Field _distanceOptionSize, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__distanceOptionSize, put = __cordl_internal_set__distanceOptionSize)) int32_t _distanceOptionSize;

  /// @brief Field _distanceToggleIndex, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__distanceToggleIndex, put = __cordl_internal_set__distanceToggleIndex)) int32_t _distanceToggleIndex;

  /// @brief Field _followButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__followButton, put = __cordl_internal_set__followButton)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _followButton;

  /// @brief Field _inspectorPanel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__inspectorPanel, put = __cordl_internal_set__inspectorPanel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> _inspectorPanel;

  /// @brief Field _opacityButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__opacityButton, put = __cordl_internal_set__opacityButton)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _opacityButton;

  /// @brief Field _rotateButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__rotateButton, put = __cordl_internal_set__rotateButton)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _rotateButton;

  /// @brief Field _showAllButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__showAllButton, put = __cordl_internal_set__showAllButton)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _showAllButton;

  /// @brief Method Awake, addr 0x58385a4, size 0x9ec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method IsInspectorPanelVisible, addr 0x58393d4, size 0x28, virtual false, abstract: false, final false
  inline bool IsInspectorPanelVisible();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface* New_ctor();

  /// @brief Method SetTransparencyRecursive, addr 0x5838448, size 0x138, virtual false, abstract: false, final false
  inline void SetTransparencyRecursive(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller, bool transparent);

  /// @brief Method ToggleDistances, addr 0x5839100, size 0x48, virtual false, abstract: false, final false
  inline void ToggleDistances();

  /// @brief Method ToggleFollowRotation, addr 0x5839178, size 0x30, virtual false, abstract: false, final false
  inline void ToggleFollowRotation();

  /// @brief Method ToggleFollowTranslation, addr 0x5839148, size 0x30, virtual false, abstract: false, final false
  inline void ToggleFollowTranslation();

  /// @brief Method Update, addr 0x58392a4, size 0x130, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateVisibility, addr 0x58391a8, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateVisibility();

  /// @brief Method <Awake>b__20_0, addr 0x58394ac, size 0x20, virtual false, abstract: false, final false
  inline void _Awake_b__20_0();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar> const& __cordl_internal_get__bar() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar>& __cordl_internal_get__bar();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> const& __cordl_internal_get__console() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console>& __cordl_internal_get__console();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__distanceButton() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__distanceButton();

  constexpr int32_t const& __cordl_internal_get__distanceOptionSize() const;

  constexpr int32_t& __cordl_internal_get__distanceOptionSize();

  constexpr int32_t const& __cordl_internal_get__distanceToggleIndex() const;

  constexpr int32_t& __cordl_internal_get__distanceToggleIndex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__followButton() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__followButton();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const& __cordl_internal_get__inspectorPanel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& __cordl_internal_get__inspectorPanel();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__opacityButton() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__opacityButton();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__rotateButton() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__rotateButton();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__showAllButton() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__showAllButton();

  constexpr void __cordl_internal_set__bar(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar> value);

  constexpr void __cordl_internal_set__console(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> value);

  constexpr void __cordl_internal_set__distanceButton(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__distanceOptionSize(int32_t value);

  constexpr void __cordl_internal_set__distanceToggleIndex(int32_t value);

  constexpr void __cordl_internal_set__followButton(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__inspectorPanel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value);

  constexpr void __cordl_internal_set__opacityButton(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__rotateButton(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__showAllButton(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  /// @brief Method .ctor, addr 0x58393fc, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FollowOverride, addr 0x583821c, size 0x18, virtual true, abstract: false, final false
  inline bool get_FollowOverride();

  /// @brief Method get_OpacityOverride, addr 0x58382a4, size 0x18, virtual false, abstract: false, final false
  inline bool get_OpacityOverride();

  /// @brief Method get_RotateOverride, addr 0x5838260, size 0x18, virtual true, abstract: false, final false
  inline bool get_RotateOverride();

  /// @brief Method set_FollowOverride, addr 0x5838234, size 0x2c, virtual true, abstract: false, final false
  inline void set_FollowOverride(bool value);

  /// @brief Method set_OpacityOverride, addr 0x58382bc, size 0x18c, virtual false, abstract: false, final false
  inline void set_OpacityOverride(bool value);

  /// @brief Method set_RotateOverride, addr 0x5838278, size 0x2c, virtual true, abstract: false, final false
  inline void set_RotateOverride(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInterface(DebugInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInterface(DebugInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18316 };

  /// @brief Field _bar, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar> ____bar;

  /// @brief Field _showAllButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____showAllButton;

  /// @brief Field _followButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____followButton;

  /// @brief Field _rotateButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____rotateButton;

  /// @brief Field _opacityButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____opacityButton;

  /// @brief Field _distanceButton, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____distanceButton;

  /// @brief Field _inspectorPanel, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> ____inspectorPanel;

  /// @brief Field _console, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> ____console;

  /// @brief Field _distanceToggleIndex, offset: 0xd0, size: 0x4, def value: None
  int32_t ____distanceToggleIndex;

  /// @brief Field _distanceOptionSize, offset: 0xd4, size: 0x4, def value: None
  int32_t ____distanceOptionSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____bar) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____showAllButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____followButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____rotateButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____opacityButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____distanceButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____inspectorPanel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____console) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____distanceToggleIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, ____distanceOptionSize) == 0xd4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface, 0xd8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface*, "Meta.XR.ImmersiveDebugger.UserInterface", "DebugInterface");
