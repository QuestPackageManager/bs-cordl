#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Gamepad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Haptics/zzzz__DualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gamepad)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Gamepad;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Gamepad);
// Dependencies UnityEngine.InputSystem.Haptics.DualMotorRumble, UnityEngine.InputSystem.Haptics.IDualMotorRumble, UnityEngine.InputSystem.Haptics.IHaptics, UnityEngine.InputSystem.InputDevice
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Gamepad
class CORDL_TYPE Gamepad : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::Controls::ButtonControl* Item[];

  /// @brief Field <buttonEast>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonEast_k__BackingField,
                      put = __cordl_internal_set__buttonEast_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _buttonEast_k__BackingField;

  /// @brief Field <buttonNorth>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonNorth_k__BackingField,
                      put = __cordl_internal_set__buttonNorth_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _buttonNorth_k__BackingField;

  /// @brief Field <buttonSouth>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonSouth_k__BackingField,
                      put = __cordl_internal_set__buttonSouth_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _buttonSouth_k__BackingField;

  /// @brief Field <buttonWest>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonWest_k__BackingField,
                      put = __cordl_internal_set__buttonWest_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _buttonWest_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::Gamepad* _current_k__BackingField;

  /// @brief Field <dpad>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__dpad_k__BackingField, put = __cordl_internal_set__dpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::DpadControl* _dpad_k__BackingField;

  /// @brief Field <leftShoulder>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftShoulder_k__BackingField,
                      put = __cordl_internal_set__leftShoulder_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _leftShoulder_k__BackingField;

  /// @brief Field <leftStickButton>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__leftStickButton_k__BackingField,
                      put = __cordl_internal_set__leftStickButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _leftStickButton_k__BackingField;

  /// @brief Field <leftStick>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftStick_k__BackingField,
                      put = __cordl_internal_set__leftStick_k__BackingField)) ::UnityEngine::InputSystem::Controls::StickControl* _leftStick_k__BackingField;

  /// @brief Field <leftTrigger>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftTrigger_k__BackingField,
                      put = __cordl_internal_set__leftTrigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _leftTrigger_k__BackingField;

  /// @brief Field <rightShoulder>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightShoulder_k__BackingField,
                      put = __cordl_internal_set__rightShoulder_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _rightShoulder_k__BackingField;

  /// @brief Field <rightStickButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__rightStickButton_k__BackingField,
                      put = __cordl_internal_set__rightStickButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _rightStickButton_k__BackingField;

  /// @brief Field <rightStick>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightStick_k__BackingField,
                      put = __cordl_internal_set__rightStick_k__BackingField)) ::UnityEngine::InputSystem::Controls::StickControl* _rightStick_k__BackingField;

  /// @brief Field <rightTrigger>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightTrigger_k__BackingField,
                      put = __cordl_internal_set__rightTrigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _rightTrigger_k__BackingField;

  /// @brief Field <selectButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectButton_k__BackingField,
                      put = __cordl_internal_set__selectButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _selectButton_k__BackingField;

  /// @brief Field <startButton>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__startButton_k__BackingField,
                      put = __cordl_internal_set__startButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _startButton_k__BackingField;

  __declspec(property(get = get_aButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* aButton;

  __declspec(property(get = get_bButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* bButton;

  __declspec(property(get = get_buttonEast, put = set_buttonEast)) ::UnityEngine::InputSystem::Controls::ButtonControl* buttonEast;

  __declspec(property(get = get_buttonNorth, put = set_buttonNorth)) ::UnityEngine::InputSystem::Controls::ButtonControl* buttonNorth;

  __declspec(property(get = get_buttonSouth, put = set_buttonSouth)) ::UnityEngine::InputSystem::Controls::ButtonControl* buttonSouth;

  __declspec(property(get = get_buttonWest, put = set_buttonWest)) ::UnityEngine::InputSystem::Controls::ButtonControl* buttonWest;

  __declspec(property(get = get_circleButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* circleButton;

  __declspec(property(get = get_crossButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* crossButton;

  __declspec(property(get = get_dpad, put = set_dpad)) ::UnityEngine::InputSystem::Controls::DpadControl* dpad;

  __declspec(property(get = get_leftShoulder, put = set_leftShoulder)) ::UnityEngine::InputSystem::Controls::ButtonControl* leftShoulder;

  __declspec(property(get = get_leftStick, put = set_leftStick)) ::UnityEngine::InputSystem::Controls::StickControl* leftStick;

  __declspec(property(get = get_leftStickButton, put = set_leftStickButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* leftStickButton;

  __declspec(property(get = get_leftTrigger, put = set_leftTrigger)) ::UnityEngine::InputSystem::Controls::ButtonControl* leftTrigger;

  /// @brief Field m_Rumble, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rumble, put = __cordl_internal_set_m_Rumble)) ::UnityEngine::InputSystem::Haptics::DualMotorRumble m_Rumble;

  __declspec(property(get = get_rightShoulder, put = set_rightShoulder)) ::UnityEngine::InputSystem::Controls::ButtonControl* rightShoulder;

  __declspec(property(get = get_rightStick, put = set_rightStick)) ::UnityEngine::InputSystem::Controls::StickControl* rightStick;

  __declspec(property(get = get_rightStickButton, put = set_rightStickButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* rightStickButton;

  __declspec(property(get = get_rightTrigger, put = set_rightTrigger)) ::UnityEngine::InputSystem::Controls::ButtonControl* rightTrigger;

  /// @brief Field s_GamepadCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_GamepadCount, put = setStaticF_s_GamepadCount)) int32_t s_GamepadCount;

  /// @brief Field s_Gamepads, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Gamepads, put = setStaticF_s_Gamepads)) ::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> s_Gamepads;

  __declspec(property(get = get_selectButton, put = set_selectButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* selectButton;

  __declspec(property(get = get_squareButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* squareButton;

  __declspec(property(get = get_startButton, put = set_startButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* startButton;

  __declspec(property(get = get_triangleButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* triangleButton;

  __declspec(property(get = get_xButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* xButton;

  __declspec(property(get = get_yButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* yButton;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method FinishSetup, addr 0x457e7fc, size 0x2e0, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x457eadc, size 0x4c, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Gamepad* New_ctor();

  /// @brief Method OnAdded, addr 0x457eb2c, size 0x78, virtual true, abstract: false, final false
  inline void OnAdded();

  /// @brief Method OnRemoved, addr 0x457eba4, size 0x118, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method PauseHaptics, addr 0x457ecbc, size 0x10, virtual true, abstract: false, final false
  inline void PauseHaptics();

  /// @brief Method ResetHaptics, addr 0x457ecdc, size 0x10, virtual true, abstract: false, final false
  inline void ResetHaptics();

  /// @brief Method ResumeHaptics, addr 0x457eccc, size 0x10, virtual true, abstract: false, final false
  inline void ResumeHaptics();

  /// @brief Method SetMotorSpeeds, addr 0x457ecec, size 0x10, virtual true, abstract: false, final false
  inline void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__buttonEast_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__buttonEast_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__buttonNorth_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__buttonNorth_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__buttonSouth_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__buttonSouth_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__buttonWest_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__buttonWest_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::DpadControl* const& __cordl_internal_get__dpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::DpadControl*& __cordl_internal_get__dpad_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__leftShoulder_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__leftShoulder_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__leftStickButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__leftStickButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::StickControl* const& __cordl_internal_get__leftStick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __cordl_internal_get__leftStick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__leftTrigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__leftTrigger_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__rightShoulder_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__rightShoulder_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__rightStickButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__rightStickButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::StickControl* const& __cordl_internal_get__rightStick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __cordl_internal_get__rightStick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__rightTrigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__rightTrigger_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__selectButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__selectButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__startButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__startButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble const& __cordl_internal_get_m_Rumble() const;

  constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble& __cordl_internal_get_m_Rumble();

  constexpr void __cordl_internal_set__buttonEast_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__buttonNorth_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__buttonSouth_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__buttonWest_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__dpad_k__BackingField(::UnityEngine::InputSystem::Controls::DpadControl* value);

  constexpr void __cordl_internal_set__leftShoulder_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__leftStickButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__leftStick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr void __cordl_internal_set__leftTrigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__rightShoulder_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__rightStickButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__rightStick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr void __cordl_internal_set__rightTrigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__selectButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__startButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set_m_Rumble(::UnityEngine::InputSystem::Haptics::DualMotorRumble value);

  /// @brief Method .ctor, addr 0x457ecfc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Gamepad* getStaticF__current_k__BackingField();

  static inline int32_t getStaticF_s_GamepadCount();

  static inline ::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> getStaticF_s_Gamepads();

  /// @brief Method get_Item, addr 0x457e588, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::LowLevel::GamepadButton button);

  /// @brief Method get_aButton, addr 0x457e548, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_aButton();

  /// @brief Method get_all, addr 0x457e77c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Gamepad*> get_all();

  /// @brief Method get_bButton, addr 0x457e550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_bButton();

  /// @brief Method get_buttonEast, addr 0x457e488, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonEast();

  /// @brief Method get_buttonNorth, addr 0x457e468, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonNorth();

  /// @brief Method get_buttonSouth, addr 0x457e478, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonSouth();

  /// @brief Method get_buttonWest, addr 0x457e458, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonWest();

  /// @brief Method get_circleButton, addr 0x457e578, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_circleButton();

  /// @brief Method get_crossButton, addr 0x457e580, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_crossButton();

  /// @brief Method get_current, addr 0x457e6e8, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Gamepad* get_current();

  /// @brief Method get_dpad, addr 0x457e4d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DpadControl* get_dpad();

  /// @brief Method get_leftShoulder, addr 0x457e4e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftShoulder();

  /// @brief Method get_leftStick, addr 0x457e508, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_leftStick();

  /// @brief Method get_leftStickButton, addr 0x457e498, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftStickButton();

  /// @brief Method get_leftTrigger, addr 0x457e528, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTrigger();

  /// @brief Method get_rightShoulder, addr 0x457e4f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightShoulder();

  /// @brief Method get_rightStick, addr 0x457e518, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_rightStick();

  /// @brief Method get_rightStickButton, addr 0x457e4a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightStickButton();

  /// @brief Method get_rightTrigger, addr 0x457e538, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTrigger();

  /// @brief Method get_selectButton, addr 0x457e4c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_selectButton();

  /// @brief Method get_squareButton, addr 0x457e570, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_squareButton();

  /// @brief Method get_startButton, addr 0x457e4b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_startButton();

  /// @brief Method get_triangleButton, addr 0x457e568, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triangleButton();

  /// @brief Method get_xButton, addr 0x457e558, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_xButton();

  /// @brief Method get_yButton, addr 0x457e560, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_yButton();

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Gamepad* value);

  static inline void setStaticF_s_GamepadCount(int32_t value);

  static inline void setStaticF_s_Gamepads(::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> value);

  /// @brief Method set_buttonEast, addr 0x457e490, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonEast(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_buttonNorth, addr 0x457e470, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonNorth(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_buttonSouth, addr 0x457e480, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonSouth(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_buttonWest, addr 0x457e460, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonWest(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_current, addr 0x457e730, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Gamepad* value);

  /// @brief Method set_dpad, addr 0x457e4e0, size 0x8, virtual false, abstract: false, final false
  inline void set_dpad(::UnityEngine::InputSystem::Controls::DpadControl* value);

  /// @brief Method set_leftShoulder, addr 0x457e4f0, size 0x8, virtual false, abstract: false, final false
  inline void set_leftShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_leftStick, addr 0x457e510, size 0x8, virtual false, abstract: false, final false
  inline void set_leftStick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method set_leftStickButton, addr 0x457e4a0, size 0x8, virtual false, abstract: false, final false
  inline void set_leftStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_leftTrigger, addr 0x457e530, size 0x8, virtual false, abstract: false, final false
  inline void set_leftTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_rightShoulder, addr 0x457e500, size 0x8, virtual false, abstract: false, final false
  inline void set_rightShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_rightStick, addr 0x457e520, size 0x8, virtual false, abstract: false, final false
  inline void set_rightStick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method set_rightStickButton, addr 0x457e4b0, size 0x8, virtual false, abstract: false, final false
  inline void set_rightStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_rightTrigger, addr 0x457e540, size 0x8, virtual false, abstract: false, final false
  inline void set_rightTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_selectButton, addr 0x457e4d0, size 0x8, virtual false, abstract: false, final false
  inline void set_selectButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_startButton, addr 0x457e4c0, size 0x8, virtual false, abstract: false, final false
  inline void set_startButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gamepad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gamepad(Gamepad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gamepad(Gamepad const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6644 };

  /// @brief Field <buttonWest>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonWest_k__BackingField;

  /// @brief Field <buttonNorth>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonNorth_k__BackingField;

  /// @brief Field <buttonSouth>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonSouth_k__BackingField;

  /// @brief Field <buttonEast>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonEast_k__BackingField;

  /// @brief Field <leftStickButton>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftStickButton_k__BackingField;

  /// @brief Field <rightStickButton>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightStickButton_k__BackingField;

  /// @brief Field <startButton>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____startButton_k__BackingField;

  /// @brief Field <selectButton>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____selectButton_k__BackingField;

  /// @brief Field <dpad>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DpadControl* ____dpad_k__BackingField;

  /// @brief Field <leftShoulder>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftShoulder_k__BackingField;

  /// @brief Field <rightShoulder>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightShoulder_k__BackingField;

  /// @brief Field <leftStick>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____leftStick_k__BackingField;

  /// @brief Field <rightStick>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____rightStick_k__BackingField;

  /// @brief Field <leftTrigger>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftTrigger_k__BackingField;

  /// @brief Field <rightTrigger>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightTrigger_k__BackingField;

  /// @brief Field m_Rumble, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Haptics::DualMotorRumble ___m_Rumble;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____buttonWest_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____buttonNorth_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____buttonSouth_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____buttonEast_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____leftStickButton_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____rightStickButton_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____startButton_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____selectButton_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____dpad_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____leftShoulder_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____rightShoulder_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____leftStick_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____rightStick_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____leftTrigger_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ____rightTrigger_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gamepad, ___m_Rumble) == 0x1e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Gamepad, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Gamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Gamepad*, "UnityEngine.InputSystem", "Gamepad");
