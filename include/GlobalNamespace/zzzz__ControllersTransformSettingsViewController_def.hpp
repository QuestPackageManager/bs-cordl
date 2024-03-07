#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllersTransformSettingsViewController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace HMUI {
class RangeValuesTextSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllersTransformSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ControllersTransformSettingsViewController);
// Type: ::ControllersTransformSettingsViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ControllersTransformSettingsViewController*
class CORDL_TYPE ControllersTransformSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _controllerPosition, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerPosition, put = __cordl_internal_set__controllerPosition))::UnityW<::GlobalNamespace::Vector3SO> _controllerPosition;

  /// @brief Field _controllerRotation, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerRotation, put = __cordl_internal_set__controllerRotation))::UnityW<::GlobalNamespace::Vector3SO> _controllerRotation;

  /// @brief Field _posXSlider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__posXSlider, put = __cordl_internal_set__posXSlider))::UnityW<::HMUI::RangeValuesTextSlider> _posXSlider;

  /// @brief Field _posYSlider, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__posYSlider, put = __cordl_internal_set__posYSlider))::UnityW<::HMUI::RangeValuesTextSlider> _posYSlider;

  /// @brief Field _posZSlider, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__posZSlider, put = __cordl_internal_set__posZSlider))::UnityW<::HMUI::RangeValuesTextSlider> _posZSlider;

  /// @brief Field _rotXSlider, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__rotXSlider, put = __cordl_internal_set__rotXSlider))::UnityW<::HMUI::RangeValuesTextSlider> _rotXSlider;

  /// @brief Field _rotYSlider, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rotYSlider, put = __cordl_internal_set__rotYSlider))::UnityW<::HMUI::RangeValuesTextSlider> _rotYSlider;

  /// @brief Field _rotZSlider, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__rotZSlider, put = __cordl_internal_set__rotZSlider))::UnityW<::HMUI::RangeValuesTextSlider> _rotZSlider;

  /// @brief Field _vrPlatformHelper, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method DidActivate, addr 0x24140e8, size 0x570, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2414658, size 0xac, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandlePositionSliderValueDidChange, addr 0x2414a3c, size 0x120, virtual false, abstract: false, final false
  inline void HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method HandleRotationSliderValueDidChange, addr 0x2414b5c, size 0x118, virtual false, abstract: false, final false
  inline void HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  static inline ::GlobalNamespace::ControllersTransformSettingsViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2414704, size 0x338, virtual true, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__controllerPosition() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__controllerPosition();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__controllerRotation() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__controllerRotation();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__posXSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__posXSlider();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__posYSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__posYSlider();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__posZSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__posZSlider();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__rotXSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__rotXSlider();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__rotYSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__rotYSlider();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__rotZSlider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__rotZSlider();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__controllerPosition(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr void __cordl_internal_set__controllerRotation(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr void __cordl_internal_set__posXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x2414c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllersTransformSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllersTransformSettingsViewController(ControllersTransformSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllersTransformSettingsViewController(ControllersTransformSettingsViewController const&) = delete;

  /// @brief Field _controllerPosition, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____controllerPosition;

  /// @brief Field _controllerRotation, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____controllerRotation;

  /// @brief Field _posXSlider, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posXSlider;

  /// @brief Field _posYSlider, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posYSlider;

  /// @brief Field _posZSlider, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posZSlider;

  /// @brief Field _rotXSlider, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotXSlider;

  /// @brief Field _rotYSlider, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotYSlider;

  /// @brief Field _rotZSlider, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotZSlider;

  /// @brief Field _vrPlatformHelper, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field kPositionMul offset 0xffffffff size 0x4
  static constexpr float_t kPositionMul{ 100.0 };

  /// @brief Field kPositionStep offset 0xffffffff size 0x4
  static constexpr float_t kPositionStep{ 0.1 };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ControllersTransformSettingsViewController, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____controllerPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____controllerRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posXSlider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posYSlider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posZSlider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotXSlider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotYSlider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotZSlider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____vrPlatformHelper) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ControllersTransformSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ControllersTransformSettingsViewController*, "", "ControllersTransformSettingsViewController");
