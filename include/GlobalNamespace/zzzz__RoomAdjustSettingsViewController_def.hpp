#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomAdjustSettingsViewController)
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class StepValuePicker;
}
namespace GlobalNamespace {
class FloatSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5744))
// CS Name: ::RoomAdjustSettingsViewController*
class CORDL_TYPE RoomAdjustSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _roomCenter, offset 0x70, size 0x8
  __declspec(property(get = __get__roomCenter, put = __set__roomCenter))::GlobalNamespace::Vector3SO* _roomCenter;

  /// @brief Field _roomRotation, offset 0x78, size 0x8
  __declspec(property(get = __get__roomRotation, put = __set__roomRotation))::GlobalNamespace::FloatSO* _roomRotation;

  /// @brief Field _xStepValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __get__xStepValuePicker, put = __set__xStepValuePicker))::GlobalNamespace::StepValuePicker* _xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __get__yStepValuePicker, put = __set__yStepValuePicker))::GlobalNamespace::StepValuePicker* _yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __get__zStepValuePicker, put = __set__zStepValuePicker))::GlobalNamespace::StepValuePicker* _zStepValuePicker;

  /// @brief Field _rotStepValuePicker, offset 0x98, size 0x8
  __declspec(property(get = __get__rotStepValuePicker, put = __set__rotStepValuePicker))::GlobalNamespace::StepValuePicker* _rotStepValuePicker;

  /// @brief Field _resetButton, offset 0xa0, size 0x8
  __declspec(property(get = __get__resetButton, put = __set__resetButton))::UnityEngine::UI::Button* _resetButton;

  constexpr ::GlobalNamespace::Vector3SO*& __get__roomCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get__roomCenter() const;

  constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__roomRotation();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__roomRotation() const;

  constexpr void __set__roomRotation(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::StepValuePicker*& __get__xStepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> const& __get__xStepValuePicker() const;

  constexpr void __set__xStepValuePicker(::GlobalNamespace::StepValuePicker* value);

  constexpr ::GlobalNamespace::StepValuePicker*& __get__yStepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> const& __get__yStepValuePicker() const;

  constexpr void __set__yStepValuePicker(::GlobalNamespace::StepValuePicker* value);

  constexpr ::GlobalNamespace::StepValuePicker*& __get__zStepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> const& __get__zStepValuePicker() const;

  constexpr void __set__zStepValuePicker(::GlobalNamespace::StepValuePicker* value);

  constexpr ::GlobalNamespace::StepValuePicker*& __get__rotStepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> const& __get__rotStepValuePicker() const;

  constexpr void __set__rotStepValuePicker(::GlobalNamespace::StepValuePicker* value);

  constexpr ::UnityEngine::UI::Button*& __get__resetButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__resetButton() const;

  constexpr void __set__resetButton(::UnityEngine::UI::Button* value);

  /// @brief Method DidActivate, addr 0x22d7790, size 0x30c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Move, addr 0x22d7cb4, size 0x94, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 move);

  /// @brief Method Rotate, addr 0x22d7d48, size 0x88, virtual false, abstract: false, final false
  inline void Rotate(float_t rotation);

  /// @brief Method ResetRoom, addr 0x22d7dd0, size 0x8c, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method RefreshTexts, addr 0x22d7a9c, size 0x218, virtual false, abstract: false, final false
  inline void RefreshTexts();

  static inline ::GlobalNamespace::RoomAdjustSettingsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d7e5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__10_0, addr 0x22d7e64, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_0();

  /// @brief Method <DidActivate>b__10_1, addr 0x22d7e78, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_1();

  /// @brief Method <DidActivate>b__10_2, addr 0x22d7e8c, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_2();

  /// @brief Method <DidActivate>b__10_3, addr 0x22d7ea0, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_3();

  /// @brief Method <DidActivate>b__10_4, addr 0x22d7eb4, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_4();

  /// @brief Method <DidActivate>b__10_5, addr 0x22d7ec8, size 0x14, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_5();

  /// @brief Method <DidActivate>b__10_6, addr 0x22d7edc, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_6();

  /// @brief Method <DidActivate>b__10_7, addr 0x22d7ee4, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_7();

  /// @brief Method <DidActivate>b__10_8, addr 0x22d7eec, size 0x4, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_8();

  // Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomAdjustSettingsViewController(RoomAdjustSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomAdjustSettingsViewController(RoomAdjustSettingsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomAdjustSettingsViewController();

public:
  /// @brief Field _roomCenter, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ____roomCenter;

  /// @brief Field _roomRotation, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____roomRotation;

  /// @brief Field _xStepValuePicker, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::StepValuePicker* ____xStepValuePicker;

  /// @brief Field _yStepValuePicker, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::StepValuePicker* ____yStepValuePicker;

  /// @brief Field _zStepValuePicker, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::StepValuePicker* ____zStepValuePicker;

  /// @brief Field _rotStepValuePicker, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::StepValuePicker* ____rotStepValuePicker;

  /// @brief Field _resetButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____resetButton;

  /// @brief Field kHorizontalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalMoveStep{ 0.1 };

  /// @brief Field kVerticalMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kVerticalMoveStep{ 0.05 };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ 5.0 };

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
