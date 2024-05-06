#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomAdjustSettingsViewController)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class StepValuePicker;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomAdjustSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomAdjustSettingsViewController);
// Type: ::RoomAdjustSettingsViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomAdjustSettingsViewController*
class CORDL_TYPE RoomAdjustSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _resetButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__resetButton, put = __cordl_internal_set__resetButton))::UnityW<::UnityEngine::UI::Button> _resetButton;

  /// @brief Field _rotStepValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__rotStepValuePicker, put = __cordl_internal_set__rotStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _rotStepValuePicker;

  /// @brief Field _xStepValuePicker, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__xStepValuePicker, put = __cordl_internal_set__xStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__yStepValuePicker, put = __cordl_internal_set__yStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__zStepValuePicker, put = __cordl_internal_set__zStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _zStepValuePicker;

  /// @brief Method DidActivate, addr 0x26619d8, size 0x30c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Move, addr 0x2661e88, size 0xb4, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 move);

  static inline ::GlobalNamespace::RoomAdjustSettingsViewController* New_ctor();

  /// @brief Method RefreshRoomOffsetValuePicker, addr 0x2662098, size 0xc4, virtual false, abstract: false, final false
  inline void RefreshRoomOffsetValuePicker(::GlobalNamespace::StepValuePicker* stepValuePicker, float_t roomOffsetValue);

  /// @brief Method RefreshTexts, addr 0x2661ce4, size 0x1a4, virtual false, abstract: false, final false
  inline void RefreshTexts();

  /// @brief Method ResetRoom, addr 0x2661fe0, size 0xb8, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method Rotate, addr 0x2661f3c, size 0xa4, virtual false, abstract: false, final false
  inline void Rotate(float_t rotation);

  /// @brief Method <DidActivate>b__9_0, addr 0x2662164, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_0();

  /// @brief Method <DidActivate>b__9_1, addr 0x2662178, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_1();

  /// @brief Method <DidActivate>b__9_2, addr 0x266218c, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_2();

  /// @brief Method <DidActivate>b__9_3, addr 0x26621a0, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_3();

  /// @brief Method <DidActivate>b__9_4, addr 0x26621b4, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_4();

  /// @brief Method <DidActivate>b__9_5, addr 0x26621c8, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_5();

  /// @brief Method <DidActivate>b__9_6, addr 0x26621dc, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_6();

  /// @brief Method <DidActivate>b__9_7, addr 0x26621e4, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_7();

  /// @brief Method <DidActivate>b__9_8, addr 0x26621ec, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_8();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__resetButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__resetButton();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__rotStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__rotStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__xStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__xStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__yStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__yStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__zStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__zStepValuePicker();

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__resetButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__rotStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__xStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__yStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__zStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x266215c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomAdjustSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomAdjustSettingsViewController(RoomAdjustSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomAdjustSettingsViewController(RoomAdjustSettingsViewController const&) = delete;

  /// @brief Field _xStepValuePicker, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____zStepValuePicker;

  /// @brief Field _rotStepValuePicker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____rotStepValuePicker;

  /// @brief Field _resetButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____resetButton;

  /// @brief Field _mainSettingsHandler, offset: 0x98, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field kHorizontalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalMoveStep{ 0.1 };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ 5.0 };

  /// @brief Field kVerticalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kVerticalMoveStep{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomAdjustSettingsViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____xStepValuePicker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____yStepValuePicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____zStepValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____rotStepValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____resetButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____mainSettingsHandler) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomAdjustSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
