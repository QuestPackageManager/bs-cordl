#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllersTransformSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllersTransformSettings)
namespace BeatSaber::GameSettings {
class ControllerProfile;
}
namespace HMUI {
class RangeValuesTextSlider;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllersTransformSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllersTransformSettings);
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllersTransformSettings
class CORDL_TYPE ControllersTransformSettings : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isLeft, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isLeft, put = __cordl_internal_set__isLeft)) bool _isLeft;

  /// @brief Field _posXSlider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__posXSlider, put = __cordl_internal_set__posXSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posXSlider;

  /// @brief Field _posYSlider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__posYSlider, put = __cordl_internal_set__posYSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posYSlider;

  /// @brief Field _posZSlider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__posZSlider, put = __cordl_internal_set__posZSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _posZSlider;

  /// @brief Field _rotXSlider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rotXSlider, put = __cordl_internal_set__rotXSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotXSlider;

  /// @brief Field _rotYSlider, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rotYSlider, put = __cordl_internal_set__rotYSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotYSlider;

  /// @brief Field _rotZSlider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rotZSlider, put = __cordl_internal_set__rotZSlider)) ::UnityW<::HMUI::RangeValuesTextSlider> _rotZSlider;

  /// @brief Field _selectedControllerProfile, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedControllerProfile,
                      put = __cordl_internal_set__selectedControllerProfile)) ::BeatSaber::GameSettings::ControllerProfile* _selectedControllerProfile;

  __declspec(property(get = get_selectedControllerProfile)) ::BeatSaber::GameSettings::ControllerProfile* selectedControllerProfile;

  /// @brief Method Deactivate, addr 0x2270b30, size 0x8, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method HandlePositionSliderValueDidChange, addr 0x22711a4, size 0x90, virtual false, abstract: false, final false
  inline void HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method HandleRotationSliderValueDidChange, addr 0x2271234, size 0x90, virtual false, abstract: false, final false
  inline void HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method Initialize, addr 0x2270590, size 0x43c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::BeatSaber::GameSettings::ControllersTransformSettings* New_ctor();

  /// @brief Method RefreshView, addr 0x2270f1c, size 0x12c, virtual false, abstract: false, final false
  inline void RefreshView(::BeatSaber::GameSettings::ControllerProfile* controllerProfile);

  /// @brief Method SetInteractable, addr 0x2271104, size 0xa0, virtual false, abstract: false, final false
  inline void SetInteractable(bool interactable);

  constexpr bool const& __cordl_internal_get__isLeft() const;

  constexpr bool& __cordl_internal_get__isLeft();

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

  constexpr ::BeatSaber::GameSettings::ControllerProfile* const& __cordl_internal_get__selectedControllerProfile() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfile*& __cordl_internal_get__selectedControllerProfile();

  constexpr void __cordl_internal_set__isLeft(bool value);

  constexpr void __cordl_internal_set__posXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__posZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__rotZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__selectedControllerProfile(::BeatSaber::GameSettings::ControllerProfile* value);

  /// @brief Method .ctor, addr 0x22712c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_selectedControllerProfile, addr 0x22710a8, size 0x5c, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfile* get_selectedControllerProfile();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllersTransformSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllersTransformSettings(ControllersTransformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllersTransformSettings(ControllersTransformSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18100 };

  /// @brief Field kPositionMul offset 0xffffffff size 0x4
  static constexpr float_t kPositionMul{ static_cast<float_t>(100.0f) };

  /// @brief Field kPositionStep offset 0xffffffff size 0x4
  static constexpr float_t kPositionStep{ static_cast<float_t>(0.1f) };

  /// @brief Field kRotationStep offset 0xffffffff size 0x4
  static constexpr float_t kRotationStep{ static_cast<float_t>(1.0f) };

  /// @brief Field _isLeft, offset: 0x20, size: 0x1, def value: None
  bool ____isLeft;

  /// @brief Field _posXSlider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posXSlider;

  /// @brief Field _posYSlider, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posYSlider;

  /// @brief Field _posZSlider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____posZSlider;

  /// @brief Field _rotXSlider, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotXSlider;

  /// @brief Field _rotYSlider, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotYSlider;

  /// @brief Field _rotZSlider, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____rotZSlider;

  /// @brief Field _selectedControllerProfile, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfile* ____selectedControllerProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____isLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____posXSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____posYSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____posZSlider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____rotXSlider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____rotYSlider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____rotZSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllersTransformSettings, ____selectedControllerProfile) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllersTransformSettings, 0x60>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllersTransformSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllersTransformSettings*, "BeatSaber.GameSettings", "ControllersTransformSettings");
