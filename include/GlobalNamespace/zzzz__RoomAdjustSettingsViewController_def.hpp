#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomAdjustSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomAdjustSettingsViewController)
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
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
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomAdjustSettingsViewController
class CORDL_TYPE RoomAdjustSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _resetButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__resetButton, put = __cordl_internal_set__resetButton)) ::UnityW<::UnityEngine::UI::Button> _resetButton;

  /// @brief Field _rotStepValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__rotStepValuePicker, put = __cordl_internal_set__rotStepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _rotStepValuePicker;

  /// @brief Field _settingsApplicator, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _xStepValuePicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__xStepValuePicker, put = __cordl_internal_set__xStepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__yStepValuePicker, put = __cordl_internal_set__yStepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__zStepValuePicker, put = __cordl_internal_set__zStepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _zStepValuePicker;

  /// @brief Method DidActivate, addr 0x3afaae4, size 0x2e8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Move, addr 0x3afaf3c, size 0x64, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 move);

  static inline ::GlobalNamespace::RoomAdjustSettingsViewController* New_ctor();

  /// @brief Method RefreshRoomOffsetValuePicker, addr 0x3afb030, size 0xc4, virtual false, abstract: false, final false
  inline void RefreshRoomOffsetValuePicker(::GlobalNamespace::StepValuePicker* stepValuePicker, float_t value);

  /// @brief Method RefreshTexts, addr 0x3afadcc, size 0x170, virtual false, abstract: false, final false
  inline void RefreshTexts();

  /// @brief Method ResetRoom, addr 0x3afaff0, size 0x40, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method Rotate, addr 0x3afafa0, size 0x50, virtual false, abstract: false, final false
  inline void Rotate(float_t rotation);

  /// @brief Method <DidActivate>b__10_0, addr 0x3afb0fc, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_0();

  /// @brief Method <DidActivate>b__10_1, addr 0x3afb110, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_1();

  /// @brief Method <DidActivate>b__10_2, addr 0x3afb124, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_2();

  /// @brief Method <DidActivate>b__10_3, addr 0x3afb138, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_3();

  /// @brief Method <DidActivate>b__10_4, addr 0x3afb14c, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_4();

  /// @brief Method <DidActivate>b__10_5, addr 0x3afb160, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_5();

  /// @brief Method <DidActivate>b__10_6, addr 0x3afb174, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_6();

  /// @brief Method <DidActivate>b__10_7, addr 0x3afb17c, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_7();

  /// @brief Method <DidActivate>b__10_8, addr 0x3afb184, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_8();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__resetButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__resetButton();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__rotStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__rotStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__xStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__xStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__yStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__yStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__zStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__zStepValuePicker();

  constexpr void __cordl_internal_set__resetButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__rotStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__xStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__yStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__zStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x3afb0f4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4955 };

  /// @brief Field kHorizontalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalMoveStep{ static_cast<float_t>(0.1f) };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ static_cast<float_t>(5.0f) };

  /// @brief Field kVerticalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kVerticalMoveStep{ static_cast<float_t>(0.05f) };

  /// @brief Field _xStepValuePicker, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____zStepValuePicker;

  /// @brief Field _rotStepValuePicker, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____rotStepValuePicker;

  /// @brief Field _resetButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____resetButton;

  /// @brief Field _settingsManager, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _settingsApplicator, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____xStepValuePicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____yStepValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____zStepValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____rotStepValuePicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____resetButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____settingsManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____settingsApplicator) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomAdjustSettingsViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomAdjustSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
