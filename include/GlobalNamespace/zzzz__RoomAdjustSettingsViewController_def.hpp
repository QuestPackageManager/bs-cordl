#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomAdjustSettingsViewController)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class StepValuePicker;
}
namespace GlobalNamespace {
class Vector3SO;
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
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomAdjustSettingsViewController*
class CORDL_TYPE RoomAdjustSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _resetButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__resetButton, put = __cordl_internal_set__resetButton))::UnityW<::UnityEngine::UI::Button> _resetButton;

  /// @brief Field _roomCenter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__roomCenter, put = __cordl_internal_set__roomCenter))::UnityW<::GlobalNamespace::Vector3SO> _roomCenter;

  /// @brief Field _roomRotation, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__roomRotation, put = __cordl_internal_set__roomRotation))::UnityW<::GlobalNamespace::FloatSO> _roomRotation;

  /// @brief Field _rotStepValuePicker, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__rotStepValuePicker, put = __cordl_internal_set__rotStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _rotStepValuePicker;

  /// @brief Field _xStepValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__xStepValuePicker, put = __cordl_internal_set__xStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__yStepValuePicker, put = __cordl_internal_set__yStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__zStepValuePicker, put = __cordl_internal_set__zStepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _zStepValuePicker;

  /// @brief Method DidActivate, addr 0x243a610, size 0x30c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Move, addr 0x243ab34, size 0x94, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 move);

  static inline ::GlobalNamespace::RoomAdjustSettingsViewController* New_ctor();

  /// @brief Method RefreshTexts, addr 0x243a91c, size 0x218, virtual false, abstract: false, final false
  inline void RefreshTexts();

  /// @brief Method ResetRoom, addr 0x243ac50, size 0x8c, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method Rotate, addr 0x243abc8, size 0x88, virtual false, abstract: false, final false
  inline void Rotate(float_t rotation);

  /// @brief Method <DidActivate>b__10_0, addr 0x243ace4, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_0();

  /// @brief Method <DidActivate>b__10_1, addr 0x243acf8, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_1();

  /// @brief Method <DidActivate>b__10_2, addr 0x243ad0c, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_2();

  /// @brief Method <DidActivate>b__10_3, addr 0x243ad20, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_3();

  /// @brief Method <DidActivate>b__10_4, addr 0x243ad34, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_4();

  /// @brief Method <DidActivate>b__10_5, addr 0x243ad48, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_5();

  /// @brief Method <DidActivate>b__10_6, addr 0x243ad5c, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_6();

  /// @brief Method <DidActivate>b__10_7, addr 0x243ad64, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_7();

  /// @brief Method <DidActivate>b__10_8, addr 0x243ad6c, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_8();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__resetButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__resetButton();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__roomCenter() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__roomCenter();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__roomRotation() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__roomRotation();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__rotStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__rotStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__xStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__xStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__yStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__yStepValuePicker();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__zStepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__zStepValuePicker();

  constexpr void __cordl_internal_set__resetButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__roomCenter(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr void __cordl_internal_set__roomRotation(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__rotStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__xStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__yStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  constexpr void __cordl_internal_set__zStepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x243acdc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _roomCenter, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____roomCenter;

  /// @brief Field _roomRotation, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____roomRotation;

  /// @brief Field _xStepValuePicker, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____zStepValuePicker;

  /// @brief Field _rotStepValuePicker, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____rotStepValuePicker;

  /// @brief Field _resetButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____resetButton;

  /// @brief Field kHorizontalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalMoveStep{ 0.1 };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ 5.0 };

  /// @brief Field kVerticalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kVerticalMoveStep{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomAdjustSettingsViewController, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____roomCenter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____roomRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____xStepValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____yStepValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____zStepValuePicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____rotStepValuePicker) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAdjustSettingsViewController, ____resetButton) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomAdjustSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
