#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllersTransformSettingsViewController.hpp"
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
class SettingsManager;
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
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllersTransformSettingsViewController
class CORDL_TYPE ControllersTransformSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _posXSlider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__posXSlider, put = __cordl_internal_set__posXSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posXSlider;

  /// @brief Field _posYSlider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__posYSlider, put = __cordl_internal_set__posYSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posYSlider;

  /// @brief Field _posZSlider, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__posZSlider, put = __cordl_internal_set__posZSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posZSlider;

  /// @brief Field _rotXSlider, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__rotXSlider, put = __cordl_internal_set__rotXSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotXSlider;

  /// @brief Field _rotYSlider, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__rotYSlider, put = __cordl_internal_set__rotYSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotYSlider;

  /// @brief Field _rotZSlider, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rotZSlider, put = __cordl_internal_set__rotZSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotZSlider;

  /// @brief Field _settingsManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _vrPlatformHelper, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method DidActivate, addr 0x3af8b44, size 0x520, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandlePositionSliderValueDidChange, addr 0x3af931c, size 0x124, virtual false, abstract: false, final false
  inline void HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method HandleRotationSliderValueDidChange, addr 0x3af9440, size 0x118, virtual false, abstract: false, final false
  inline void HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  static inline ::GlobalNamespace::ControllersTransformSettingsViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3af9064, size 0x2b8, virtual true, abstract: false, final false
  inline void OnDestroy();

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

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__posXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x3af9558, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4946 };

  /// @brief Field kPositionMul offset 0xffffffff size 0x4
  static constexpr float_t kPositionMul{ static_cast<float_t>(100.0f) };

  /// @brief Field kPositionStep offset 0xffffffff size 0x4
  static constexpr float_t kPositionStep{ static_cast<float_t>(0.1f) };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ static_cast<float_t>(1.0f) };

  /// @brief Field _posXSlider, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posXSlider;

  /// @brief Field _posYSlider, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posYSlider;

  /// @brief Field _posZSlider, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posZSlider;

  /// @brief Field _rotXSlider, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotXSlider;

  /// @brief Field _rotYSlider, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotYSlider;

  /// @brief Field _rotZSlider, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotZSlider;

  /// @brief Field _vrPlatformHelper, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _settingsManager, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posXSlider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posYSlider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____posZSlider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotXSlider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotYSlider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____rotZSlider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____vrPlatformHelper) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllersTransformSettingsViewController, ____settingsManager) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ControllersTransformSettingsViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ControllersTransformSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ControllersTransformSettingsViewController*, "", "ControllersTransformSettingsViewController");
