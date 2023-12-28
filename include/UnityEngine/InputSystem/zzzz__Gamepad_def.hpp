#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Haptics/zzzz__DualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gamepad)
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Controls {
class StickControl;
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
// Type: UnityEngine.InputSystem::Gamepad
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6239)), TypeDefinitionIndex(TypeDefinitionIndex(6460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6237))
// CS Name: ::UnityEngine.InputSystem::Gamepad*
class CORDL_TYPE Gamepad : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <buttonWest>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__buttonWest_k__BackingField, put = __set__buttonWest_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _buttonWest_k__BackingField;

  /// @brief Field <buttonNorth>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__buttonNorth_k__BackingField, put = __set__buttonNorth_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _buttonNorth_k__BackingField;

  /// @brief Field <buttonSouth>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __get__buttonSouth_k__BackingField, put = __set__buttonSouth_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _buttonSouth_k__BackingField;

  /// @brief Field <buttonEast>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __get__buttonEast_k__BackingField, put = __set__buttonEast_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _buttonEast_k__BackingField;

  /// @brief Field <leftStickButton>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__leftStickButton_k__BackingField, put = __set__leftStickButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _leftStickButton_k__BackingField;

  /// @brief Field <rightStickButton>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__rightStickButton_k__BackingField,
                      put = __set__rightStickButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _rightStickButton_k__BackingField;

  /// @brief Field <startButton>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__startButton_k__BackingField, put = __set__startButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _startButton_k__BackingField;

  /// @brief Field <selectButton>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__selectButton_k__BackingField, put = __set__selectButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _selectButton_k__BackingField;

  /// @brief Field <dpad>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__dpad_k__BackingField, put = __set__dpad_k__BackingField))::UnityEngine::InputSystem::Controls::DpadControl* _dpad_k__BackingField;

  /// @brief Field <leftShoulder>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__leftShoulder_k__BackingField, put = __set__leftShoulder_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _leftShoulder_k__BackingField;

  /// @brief Field <rightShoulder>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__rightShoulder_k__BackingField, put = __set__rightShoulder_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _rightShoulder_k__BackingField;

  /// @brief Field <leftStick>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__leftStick_k__BackingField, put = __set__leftStick_k__BackingField))::UnityEngine::InputSystem::Controls::StickControl* _leftStick_k__BackingField;

  /// @brief Field <rightStick>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__rightStick_k__BackingField, put = __set__rightStick_k__BackingField))::UnityEngine::InputSystem::Controls::StickControl* _rightStick_k__BackingField;

  /// @brief Field <leftTrigger>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__leftTrigger_k__BackingField, put = __set__leftTrigger_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _leftTrigger_k__BackingField;

  /// @brief Field <rightTrigger>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__rightTrigger_k__BackingField, put = __set__rightTrigger_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _rightTrigger_k__BackingField;

  /// @brief Field m_Rumble, offset 0x1d0, size 0x8
  __declspec(property(get = __get_m_Rumble, put = __set_m_Rumble))::UnityEngine::InputSystem::Haptics::DualMotorRumble m_Rumble;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Gamepad* _current_k__BackingField;

  /// @brief Field s_GamepadCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GamepadCount, put = setStaticF_s_GamepadCount)) int32_t s_GamepadCount;

  /// @brief Field s_Gamepads, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Gamepads, put = setStaticF_s_Gamepads))::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> s_Gamepads;

  __declspec(property(get = get_buttonWest, put = set_buttonWest))::UnityEngine::InputSystem::Controls::ButtonControl* buttonWest;

  __declspec(property(get = get_buttonNorth, put = set_buttonNorth))::UnityEngine::InputSystem::Controls::ButtonControl* buttonNorth;

  __declspec(property(get = get_buttonSouth, put = set_buttonSouth))::UnityEngine::InputSystem::Controls::ButtonControl* buttonSouth;

  __declspec(property(get = get_buttonEast, put = set_buttonEast))::UnityEngine::InputSystem::Controls::ButtonControl* buttonEast;

  __declspec(property(get = get_leftStickButton, put = set_leftStickButton))::UnityEngine::InputSystem::Controls::ButtonControl* leftStickButton;

  __declspec(property(get = get_rightStickButton, put = set_rightStickButton))::UnityEngine::InputSystem::Controls::ButtonControl* rightStickButton;

  __declspec(property(get = get_startButton, put = set_startButton))::UnityEngine::InputSystem::Controls::ButtonControl* startButton;

  __declspec(property(get = get_selectButton, put = set_selectButton))::UnityEngine::InputSystem::Controls::ButtonControl* selectButton;

  __declspec(property(get = get_dpad, put = set_dpad))::UnityEngine::InputSystem::Controls::DpadControl* dpad;

  __declspec(property(get = get_leftShoulder, put = set_leftShoulder))::UnityEngine::InputSystem::Controls::ButtonControl* leftShoulder;

  __declspec(property(get = get_rightShoulder, put = set_rightShoulder))::UnityEngine::InputSystem::Controls::ButtonControl* rightShoulder;

  __declspec(property(get = get_leftStick, put = set_leftStick))::UnityEngine::InputSystem::Controls::StickControl* leftStick;

  __declspec(property(get = get_rightStick, put = set_rightStick))::UnityEngine::InputSystem::Controls::StickControl* rightStick;

  __declspec(property(get = get_leftTrigger, put = set_leftTrigger))::UnityEngine::InputSystem::Controls::ButtonControl* leftTrigger;

  __declspec(property(get = get_rightTrigger, put = set_rightTrigger))::UnityEngine::InputSystem::Controls::ButtonControl* rightTrigger;

  __declspec(property(get = get_aButton))::UnityEngine::InputSystem::Controls::ButtonControl* aButton;

  __declspec(property(get = get_bButton))::UnityEngine::InputSystem::Controls::ButtonControl* bButton;

  __declspec(property(get = get_xButton))::UnityEngine::InputSystem::Controls::ButtonControl* xButton;

  __declspec(property(get = get_yButton))::UnityEngine::InputSystem::Controls::ButtonControl* yButton;

  __declspec(property(get = get_triangleButton))::UnityEngine::InputSystem::Controls::ButtonControl* triangleButton;

  __declspec(property(get = get_squareButton))::UnityEngine::InputSystem::Controls::ButtonControl* squareButton;

  __declspec(property(get = get_circleButton))::UnityEngine::InputSystem::Controls::ButtonControl* circleButton;

  __declspec(property(get = get_crossButton))::UnityEngine::InputSystem::Controls::ButtonControl* crossButton;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::Controls::ButtonControl* Item[];

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__buttonWest_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__buttonWest_k__BackingField() const;

  constexpr void __set__buttonWest_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__buttonNorth_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__buttonNorth_k__BackingField() const;

  constexpr void __set__buttonNorth_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__buttonSouth_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__buttonSouth_k__BackingField() const;

  constexpr void __set__buttonSouth_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__buttonEast_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__buttonEast_k__BackingField() const;

  constexpr void __set__buttonEast_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__leftStickButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__leftStickButton_k__BackingField() const;

  constexpr void __set__leftStickButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__rightStickButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__rightStickButton_k__BackingField() const;

  constexpr void __set__rightStickButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__startButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__startButton_k__BackingField() const;

  constexpr void __set__startButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__selectButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__selectButton_k__BackingField() const;

  constexpr void __set__selectButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::DpadControl*& __get__dpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DpadControl*> const& __get__dpad_k__BackingField() const;

  constexpr void __set__dpad_k__BackingField(::UnityEngine::InputSystem::Controls::DpadControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__leftShoulder_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__leftShoulder_k__BackingField() const;

  constexpr void __set__leftShoulder_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__rightShoulder_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__rightShoulder_k__BackingField() const;

  constexpr void __set__rightShoulder_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __get__leftStick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::StickControl*> const& __get__leftStick_k__BackingField() const;

  constexpr void __set__leftStick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __get__rightStick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::StickControl*> const& __get__rightStick_k__BackingField() const;

  constexpr void __set__rightStick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__leftTrigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__leftTrigger_k__BackingField() const;

  constexpr void __set__leftTrigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__rightTrigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__rightTrigger_k__BackingField() const;

  constexpr void __set__rightTrigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble& __get_m_Rumble();

  constexpr ::UnityEngine::InputSystem::Haptics::DualMotorRumble const& __get_m_Rumble() const;

  constexpr void __set_m_Rumble(::UnityEngine::InputSystem::Haptics::DualMotorRumble value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Gamepad* value);

  static inline ::UnityEngine::InputSystem::Gamepad* getStaticF__current_k__BackingField();

  static inline void setStaticF_s_GamepadCount(int32_t value);

  static inline int32_t getStaticF_s_GamepadCount();

  static inline void setStaticF_s_Gamepads(::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> value);

  static inline ::ArrayW<::UnityEngine::InputSystem::Gamepad*, ::Array<::UnityEngine::InputSystem::Gamepad*>*> getStaticF_s_Gamepads();

  /// @brief Method get_buttonWest addr 0x2a6a6e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonWest();

  /// @brief Method set_buttonWest addr 0x2a6a6ec size 0x8 virtual false final false
  inline void set_buttonWest(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_buttonNorth addr 0x2a6a6f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonNorth();

  /// @brief Method set_buttonNorth addr 0x2a6a6fc size 0x8 virtual false final false
  inline void set_buttonNorth(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_buttonSouth addr 0x2a6a704 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonSouth();

  /// @brief Method set_buttonSouth addr 0x2a6a70c size 0x8 virtual false final false
  inline void set_buttonSouth(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_buttonEast addr 0x2a6a714 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonEast();

  /// @brief Method set_buttonEast addr 0x2a6a71c size 0x8 virtual false final false
  inline void set_buttonEast(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_leftStickButton addr 0x2a6a724 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftStickButton();

  /// @brief Method set_leftStickButton addr 0x2a6a72c size 0x8 virtual false final false
  inline void set_leftStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_rightStickButton addr 0x2a6a734 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightStickButton();

  /// @brief Method set_rightStickButton addr 0x2a6a73c size 0x8 virtual false final false
  inline void set_rightStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_startButton addr 0x2a6a744 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_startButton();

  /// @brief Method set_startButton addr 0x2a6a74c size 0x8 virtual false final false
  inline void set_startButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_selectButton addr 0x2a6a754 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_selectButton();

  /// @brief Method set_selectButton addr 0x2a6a75c size 0x8 virtual false final false
  inline void set_selectButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_dpad addr 0x2a6a764 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DpadControl* get_dpad();

  /// @brief Method set_dpad addr 0x2a6a76c size 0x8 virtual false final false
  inline void set_dpad(::UnityEngine::InputSystem::Controls::DpadControl* value);

  /// @brief Method get_leftShoulder addr 0x2a6a774 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftShoulder();

  /// @brief Method set_leftShoulder addr 0x2a6a77c size 0x8 virtual false final false
  inline void set_leftShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_rightShoulder addr 0x2a6a784 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightShoulder();

  /// @brief Method set_rightShoulder addr 0x2a6a78c size 0x8 virtual false final false
  inline void set_rightShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_leftStick addr 0x2a6a794 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_leftStick();

  /// @brief Method set_leftStick addr 0x2a6a79c size 0x8 virtual false final false
  inline void set_leftStick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method get_rightStick addr 0x2a6a7a4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_rightStick();

  /// @brief Method set_rightStick addr 0x2a6a7ac size 0x8 virtual false final false
  inline void set_rightStick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method get_leftTrigger addr 0x2a6a7b4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTrigger();

  /// @brief Method set_leftTrigger addr 0x2a6a7bc size 0x8 virtual false final false
  inline void set_leftTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_rightTrigger addr 0x2a6a7c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTrigger();

  /// @brief Method set_rightTrigger addr 0x2a6a7cc size 0x8 virtual false final false
  inline void set_rightTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_aButton addr 0x2a6a7d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_aButton();

  /// @brief Method get_bButton addr 0x2a6a7dc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_bButton();

  /// @brief Method get_xButton addr 0x2a6a7e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_xButton();

  /// @brief Method get_yButton addr 0x2a6a7ec size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_yButton();

  /// @brief Method get_triangleButton addr 0x2a6a7f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triangleButton();

  /// @brief Method get_squareButton addr 0x2a6a7fc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_squareButton();

  /// @brief Method get_circleButton addr 0x2a6a804 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_circleButton();

  /// @brief Method get_crossButton addr 0x2a6a80c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_crossButton();

  /// @brief Method get_Item addr 0x2a6a814 size 0x164 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::LowLevel::GamepadButton button);

  /// @brief Method get_current addr 0x2a6a978 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::Gamepad* get_current();

  /// @brief Method set_current addr 0x2a6a9c0 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::Gamepad* value);

  /// @brief Method get_all addr 0x2a6aa0c size 0x80 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Gamepad*> get_all();

  /// @brief Method FinishSetup addr 0x2a6aa8c size 0x2e0 virtual true final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent addr 0x2a6ad6c size 0x4c virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnAdded addr 0x2a6adbc size 0x78 virtual true final false
  inline void OnAdded();

  /// @brief Method OnRemoved addr 0x2a6ae34 size 0x118 virtual true final false
  inline void OnRemoved();

  /// @brief Method PauseHaptics addr 0x2a6af4c size 0x10 virtual true final false
  inline void PauseHaptics();

  /// @brief Method ResumeHaptics addr 0x2a6af5c size 0x10 virtual true final false
  inline void ResumeHaptics();

  /// @brief Method ResetHaptics addr 0x2a6af6c size 0x10 virtual true final false
  inline void ResetHaptics();

  /// @brief Method SetMotorSpeeds addr 0x2a6af7c size 0x10 virtual true final false
  inline void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency);

  static inline ::UnityEngine::InputSystem::Gamepad* New_ctor();

  /// @brief Method .ctor addr 0x2a6af8c size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gamepad(Gamepad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gamepad(Gamepad const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gamepad();

public:
  /// @brief Field <buttonWest>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonWest_k__BackingField;

  /// @brief Field <buttonNorth>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonNorth_k__BackingField;

  /// @brief Field <buttonSouth>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonSouth_k__BackingField;

  /// @brief Field <buttonEast>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____buttonEast_k__BackingField;

  /// @brief Field <leftStickButton>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftStickButton_k__BackingField;

  /// @brief Field <rightStickButton>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightStickButton_k__BackingField;

  /// @brief Field <startButton>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____startButton_k__BackingField;

  /// @brief Field <selectButton>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____selectButton_k__BackingField;

  /// @brief Field <dpad>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DpadControl* ____dpad_k__BackingField;

  /// @brief Field <leftShoulder>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftShoulder_k__BackingField;

  /// @brief Field <rightShoulder>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightShoulder_k__BackingField;

  /// @brief Field <leftStick>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____leftStick_k__BackingField;

  /// @brief Field <rightStick>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____rightStick_k__BackingField;

  /// @brief Field <leftTrigger>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftTrigger_k__BackingField;

  /// @brief Field <rightTrigger>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightTrigger_k__BackingField;

  /// @brief Field m_Rumble, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Haptics::DualMotorRumble ___m_Rumble;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Gamepad, 0x1d8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Gamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Gamepad*, "UnityEngine.InputSystem", "Gamepad");
