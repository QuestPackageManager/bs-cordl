#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/ButtonControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::ButtonControl);
// Dependencies UnityEngine.InputSystem.Controls.AxisControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.ButtonControl
class CORDL_TYPE ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
  // Declarations
  /// @brief Field <needsToCheckFramePress>k__BackingField, offset 0x139, size 0x1
  __declspec(property(get = __cordl_internal_get__needsToCheckFramePress_k__BackingField,
                      put = __cordl_internal_set__needsToCheckFramePress_k__BackingField)) bool _needsToCheckFramePress_k__BackingField;

  __declspec(property(get = get_isPressed)) bool isPressed;

  /// @brief Field m_LastUpdateWasPress, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LastUpdateWasPress, put = __cordl_internal_set_m_LastUpdateWasPress)) bool m_LastUpdateWasPress;

  /// @brief Field m_NeedsToCheckFramePress, offset 0x12c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsToCheckFramePress, put = __cordl_internal_set_m_NeedsToCheckFramePress)) bool m_NeedsToCheckFramePress;

  /// @brief Field m_UpdateCountLastPressed, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateCountLastPressed, put = __cordl_internal_set_m_UpdateCountLastPressed)) uint32_t m_UpdateCountLastPressed;

  /// @brief Field m_UpdateCountLastReleased, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateCountLastReleased, put = __cordl_internal_set_m_UpdateCountLastReleased)) uint32_t m_UpdateCountLastReleased;

  __declspec(property(get = get_needsToCheckFramePress, put = set_needsToCheckFramePress)) bool needsToCheckFramePress;

  /// @brief Field pressPoint, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  /// @brief Field s_GlobalDefaultButtonPressPoint, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_GlobalDefaultButtonPressPoint, put = setStaticF_s_GlobalDefaultButtonPressPoint)) float_t s_GlobalDefaultButtonPressPoint;

  /// @brief Field s_GlobalDefaultButtonReleaseThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_GlobalDefaultButtonReleaseThreshold, put = setStaticF_s_GlobalDefaultButtonReleaseThreshold)) float_t s_GlobalDefaultButtonReleaseThreshold;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  /// @brief Method BeginTestingForFramePresses, addr 0x62dc630, size 0xfc, virtual false, abstract: false, final false
  inline void BeginTestingForFramePresses(bool currentlyPressed, bool pressedLastFrame);

  /// @brief Method IsValueConsideredPressed, addr 0x62dc500, size 0x70, virtual false, abstract: false, final false
  inline bool IsValueConsideredPressed(float_t value);

  static inline ::UnityEngine::InputSystem::Controls::ButtonControl* New_ctor();

  /// @brief Method UpdateWasPressed, addr 0x62dcab4, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateWasPressed();

  constexpr bool const& __cordl_internal_get__needsToCheckFramePress_k__BackingField() const;

  constexpr bool& __cordl_internal_get__needsToCheckFramePress_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_LastUpdateWasPress() const;

  constexpr bool& __cordl_internal_get_m_LastUpdateWasPress();

  constexpr bool const& __cordl_internal_get_m_NeedsToCheckFramePress() const;

  constexpr bool& __cordl_internal_get_m_NeedsToCheckFramePress();

  constexpr uint32_t const& __cordl_internal_get_m_UpdateCountLastPressed() const;

  constexpr uint32_t& __cordl_internal_get_m_UpdateCountLastPressed();

  constexpr uint32_t const& __cordl_internal_get_m_UpdateCountLastReleased() const;

  constexpr uint32_t& __cordl_internal_get_m_UpdateCountLastReleased();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr void __cordl_internal_set__needsToCheckFramePress_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_LastUpdateWasPress(bool value);

  constexpr void __cordl_internal_set_m_NeedsToCheckFramePress(bool value);

  constexpr void __cordl_internal_set_m_UpdateCountLastPressed(uint32_t value);

  constexpr void __cordl_internal_set_m_UpdateCountLastReleased(uint32_t value);

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  /// @brief Method .ctor, addr 0x62dbb4c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_s_GlobalDefaultButtonPressPoint();

  static inline float_t getStaticF_s_GlobalDefaultButtonReleaseThreshold();

  /// @brief Method get_isPressed, addr 0x62dc570, size 0xc0, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_needsToCheckFramePress, addr 0x62dc480, size 0x8, virtual false, abstract: false, final false
  inline bool get_needsToCheckFramePress();

  /// @brief Method get_pressPointOrDefault, addr 0x62dc490, size 0x5c, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method get_wasPressedThisFrame, addr 0x62dc72c, size 0x1c4, virtual false, abstract: false, final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame, addr 0x62dc8f0, size 0x1c4, virtual false, abstract: false, final false
  inline bool get_wasReleasedThisFrame();

  static inline void setStaticF_s_GlobalDefaultButtonPressPoint(float_t value);

  static inline void setStaticF_s_GlobalDefaultButtonReleaseThreshold(float_t value);

  /// @brief Method set_needsToCheckFramePress, addr 0x62dc488, size 0x8, virtual false, abstract: false, final false
  inline void set_needsToCheckFramePress(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonControl(ButtonControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonControl(ButtonControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9097 };

  /// @brief Field kMinButtonPressPoint offset 0xffffffff size 0x4
  static constexpr float_t kMinButtonPressPoint{ static_cast<float_t>(0.0001f) };

  /// @brief Field m_NeedsToCheckFramePress, offset: 0x12c, size: 0x1, def value: None
  bool ___m_NeedsToCheckFramePress;

  /// @brief Field m_UpdateCountLastPressed, offset: 0x130, size: 0x4, def value: None
  uint32_t ___m_UpdateCountLastPressed;

  /// @brief Field m_UpdateCountLastReleased, offset: 0x134, size: 0x4, def value: None
  uint32_t ___m_UpdateCountLastReleased;

  /// @brief Field m_LastUpdateWasPress, offset: 0x138, size: 0x1, def value: None
  bool ___m_LastUpdateWasPress;

  /// @brief Field <needsToCheckFramePress>k__BackingField, offset: 0x139, size: 0x1, def value: None
  bool ____needsToCheckFramePress_k__BackingField;

  /// @brief Field pressPoint, offset: 0x13c, size: 0x4, def value: None
  float_t ___pressPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___m_NeedsToCheckFramePress) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___m_UpdateCountLastPressed) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___m_UpdateCountLastReleased) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___m_LastUpdateWasPress) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ____needsToCheckFramePress_k__BackingField) == 0x139, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___pressPoint) == 0x13c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::ButtonControl, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::ButtonControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::ButtonControl*, "UnityEngine.InputSystem.Controls", "ButtonControl");
