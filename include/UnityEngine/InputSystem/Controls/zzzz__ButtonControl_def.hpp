#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ButtonControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::ButtonControl);
// Type: UnityEngine.InputSystem.Controls::ButtonControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::ButtonControl*
class CORDL_TYPE ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
  // Declarations
  __declspec(property(get = get_isPressed)) bool isPressed;

  /// @brief Field pressPoint, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  /// @brief Field s_GlobalDefaultButtonPressPoint, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GlobalDefaultButtonPressPoint, put = setStaticF_s_GlobalDefaultButtonPressPoint)) float_t s_GlobalDefaultButtonPressPoint;

  /// @brief Field s_GlobalDefaultButtonReleaseThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GlobalDefaultButtonReleaseThreshold, put = setStaticF_s_GlobalDefaultButtonReleaseThreshold)) float_t s_GlobalDefaultButtonReleaseThreshold;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  /// @brief Method IsValueConsideredPressed, addr 0x303c8fc, size 0x6c, virtual false, abstract: false, final false
  inline bool IsValueConsideredPressed(float_t value);

  static inline ::UnityEngine::InputSystem::Controls::ButtonControl* New_ctor();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  /// @brief Method .ctor, addr 0x303c328, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_s_GlobalDefaultButtonPressPoint();

  static inline float_t getStaticF_s_GlobalDefaultButtonReleaseThreshold();

  /// @brief Method get_isPressed, addr 0x303c968, size 0xa0, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method get_pressPointOrDefault, addr 0x303c890, size 0x58, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method get_wasPressedThisFrame, addr 0x303ca08, size 0x120, virtual false, abstract: false, final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame, addr 0x303cb28, size 0x120, virtual false, abstract: false, final false
  inline bool get_wasReleasedThisFrame();

  static inline void setStaticF_s_GlobalDefaultButtonPressPoint(float_t value);

  static inline void setStaticF_s_GlobalDefaultButtonReleaseThreshold(float_t value);

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

  /// @brief Field pressPoint, offset: 0x118, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field kMinButtonPressPoint offset 0xffffffff size 0x4
  static constexpr float_t kMinButtonPressPoint{ 0.0001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::ButtonControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::ButtonControl, ___pressPoint) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::ButtonControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::ButtonControl*, "UnityEngine.InputSystem.Controls", "ButtonControl");
