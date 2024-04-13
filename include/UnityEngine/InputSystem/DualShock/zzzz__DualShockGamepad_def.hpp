#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
CORDL_MODULE_EXPORT(DualShockGamepad)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class DualShockGamepad;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DualShock::DualShockGamepad);
// Type: UnityEngine.InputSystem.DualShock::DualShockGamepad
// SizeInfo { instance_size: 544, native_size: -1, calculated_instance_size: 544, calculated_native_size: 544, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.DualShock::DualShockGamepad*
class CORDL_TYPE DualShockGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  __declspec(property(get = get_L1, put = set_L1))::UnityEngine::InputSystem::Controls::ButtonControl* L1;

  __declspec(property(get = get_L2, put = set_L2))::UnityEngine::InputSystem::Controls::ButtonControl* L2;

  __declspec(property(get = get_L3, put = set_L3))::UnityEngine::InputSystem::Controls::ButtonControl* L3;

  __declspec(property(get = get_R1, put = set_R1))::UnityEngine::InputSystem::Controls::ButtonControl* R1;

  __declspec(property(get = get_R2, put = set_R2))::UnityEngine::InputSystem::Controls::ButtonControl* R2;

  __declspec(property(get = get_R3, put = set_R3))::UnityEngine::InputSystem::Controls::ButtonControl* R3;

  /// @brief Field <L1>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__L1_k__BackingField, put = __cordl_internal_set__L1_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _L1_k__BackingField;

  /// @brief Field <L2>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__L2_k__BackingField, put = __cordl_internal_set__L2_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _L2_k__BackingField;

  /// @brief Field <L3>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__L3_k__BackingField, put = __cordl_internal_set__L3_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _L3_k__BackingField;

  /// @brief Field <R1>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__R1_k__BackingField, put = __cordl_internal_set__R1_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _R1_k__BackingField;

  /// @brief Field <R2>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__R2_k__BackingField, put = __cordl_internal_set__R2_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _R2_k__BackingField;

  /// @brief Field <R3>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__R3_k__BackingField, put = __cordl_internal_set__R3_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _R3_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::DualShock::DualShockGamepad* _current_k__BackingField;

  /// @brief Field <optionsButton>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__optionsButton_k__BackingField,
                      put = __cordl_internal_set__optionsButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _optionsButton_k__BackingField;

  /// @brief Field <shareButton>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__shareButton_k__BackingField,
                      put = __cordl_internal_set__shareButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _shareButton_k__BackingField;

  /// @brief Field <touchpadButton>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadButton_k__BackingField,
                      put = __cordl_internal_set__touchpadButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadButton_k__BackingField;

  __declspec(property(get = get_optionsButton, put = set_optionsButton))::UnityEngine::InputSystem::Controls::ButtonControl* optionsButton;

  __declspec(property(get = get_shareButton, put = set_shareButton))::UnityEngine::InputSystem::Controls::ButtonControl* shareButton;

  __declspec(property(get = get_touchpadButton, put = set_touchpadButton))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadButton;

  /// @brief Convert operator to "::UnityEngine::InputSystem::DualShock::IDualShockHaptics"
  constexpr operator ::UnityEngine::InputSystem::DualShock::IDualShockHaptics*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method FinishSetup, addr 0x30191a8, size 0x98, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x30190d0, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* New_ctor();

  /// @brief Method OnRemoved, addr 0x3019124, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method SetLightBarColor, addr 0x3019240, size 0x4, virtual true, abstract: false, final false
  inline void SetLightBarColor(::UnityEngine::Color color);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__L1_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__L1_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__L2_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__L2_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__L3_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__L3_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__R1_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__R1_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__R2_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__R2_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__R3_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__R3_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__optionsButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__optionsButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__shareButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__shareButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__touchpadButton_k__BackingField() const;

  constexpr void __cordl_internal_set__L1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__L2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__L3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__R1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__R2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__R3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__optionsButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__shareButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x3019244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* getStaticF__current_k__BackingField();

  /// @brief Method get_L1, addr 0x3018fdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L1();

  /// @brief Method get_L2, addr 0x3018ffc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L2();

  /// @brief Method get_L3, addr 0x301901c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L3();

  /// @brief Method get_R1, addr 0x3018fec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R1();

  /// @brief Method get_R2, addr 0x301900c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R2();

  /// @brief Method get_R3, addr 0x301902c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R3();

  /// @brief Method get_current, addr 0x301903c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* get_current();

  /// @brief Method get_optionsButton, addr 0x3018fbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_optionsButton();

  /// @brief Method get_shareButton, addr 0x3018fcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_shareButton();

  /// @brief Method get_touchpadButton, addr 0x3018fac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadButton();

  /// @brief Convert to "::UnityEngine::InputSystem::DualShock::IDualShockHaptics"
  constexpr ::UnityEngine::InputSystem::DualShock::IDualShockHaptics* i___UnityEngine__InputSystem__DualShock__IDualShockHaptics() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value);

  /// @brief Method set_L1, addr 0x3018fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_L1(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_L2, addr 0x3019004, size 0x8, virtual false, abstract: false, final false
  inline void set_L2(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_L3, addr 0x3019024, size 0x8, virtual false, abstract: false, final false
  inline void set_L3(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_R1, addr 0x3018ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_R1(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_R2, addr 0x3019014, size 0x8, virtual false, abstract: false, final false
  inline void set_R2(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_R3, addr 0x3019034, size 0x8, virtual false, abstract: false, final false
  inline void set_R3(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_current, addr 0x3019084, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value);

  /// @brief Method set_optionsButton, addr 0x3018fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_shareButton, addr 0x3018fd4, size 0x8, virtual false, abstract: false, final false
  inline void set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpadButton, addr 0x3018fb4, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DualShockGamepad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DualShockGamepad(DualShockGamepad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DualShockGamepad(DualShockGamepad const&) = delete;

  /// @brief Field <touchpadButton>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadButton_k__BackingField;

  /// @brief Field <optionsButton>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____optionsButton_k__BackingField;

  /// @brief Field <shareButton>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____shareButton_k__BackingField;

  /// @brief Field <L1>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____L1_k__BackingField;

  /// @brief Field <R1>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____R1_k__BackingField;

  /// @brief Field <L2>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____L2_k__BackingField;

  /// @brief Field <R2>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____R2_k__BackingField;

  /// @brief Field <L3>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____L3_k__BackingField;

  /// @brief Field <R3>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____R3_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DualShock::DualShockGamepad, 0x220>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____touchpadButton_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____optionsButton_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____shareButton_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____L1_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____R1_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____L2_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____R2_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____L3_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DualShock::DualShockGamepad, ____R3_k__BackingField) == 0x218, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::DualShock
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockGamepad*, "UnityEngine.InputSystem.DualShock", "DualShockGamepad");
