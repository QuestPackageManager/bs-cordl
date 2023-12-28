#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Joystick)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Joystick;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Joystick);
// Type: UnityEngine.InputSystem::Joystick
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6241))
// CS Name: ::UnityEngine.InputSystem::Joystick*
class CORDL_TYPE Joystick : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <trigger>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _trigger_k__BackingField;

  /// @brief Field <stick>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__stick_k__BackingField, put = __set__stick_k__BackingField))::UnityEngine::InputSystem::Controls::StickControl* _stick_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __get__twist_k__BackingField, put = __set__twist_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField;

  /// @brief Field <hatswitch>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __get__hatswitch_k__BackingField, put = __set__hatswitch_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _hatswitch_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Joystick* _current_k__BackingField;

  /// @brief Field s_JoystickCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_JoystickCount, put = setStaticF_s_JoystickCount)) int32_t s_JoystickCount;

  /// @brief Field s_Joysticks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Joysticks, put = setStaticF_s_Joysticks))::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> s_Joysticks;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::ButtonControl* trigger;

  __declspec(property(get = get_stick, put = set_stick))::UnityEngine::InputSystem::Controls::StickControl* stick;

  __declspec(property(get = get_twist, put = set_twist))::UnityEngine::InputSystem::Controls::AxisControl* twist;

  __declspec(property(get = get_hatswitch, put = set_hatswitch))::UnityEngine::InputSystem::Controls::Vector2Control* hatswitch;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __get__stick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::StickControl*> const& __get__stick_k__BackingField() const;

  constexpr void __set__stick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__twist_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__twist_k__BackingField() const;

  constexpr void __set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__hatswitch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__hatswitch_k__BackingField() const;

  constexpr void __set__hatswitch_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Joystick* value);

  static inline ::UnityEngine::InputSystem::Joystick* getStaticF__current_k__BackingField();

  static inline void setStaticF_s_JoystickCount(int32_t value);

  static inline int32_t getStaticF_s_JoystickCount();

  static inline void setStaticF_s_Joysticks(::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> value);

  static inline ::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> getStaticF_s_Joysticks();

  /// @brief Method get_trigger addr 0x2a6bc10 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger();

  /// @brief Method set_trigger addr 0x2a6bc18 size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_stick addr 0x2a6bc20 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_stick();

  /// @brief Method set_stick addr 0x2a6bc28 size 0x8 virtual false final false
  inline void set_stick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method get_twist addr 0x2a6bc30 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_twist();

  /// @brief Method set_twist addr 0x2a6bc38 size 0x8 virtual false final false
  inline void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_hatswitch addr 0x2a6bc40 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch();

  /// @brief Method set_hatswitch addr 0x2a6bc48 size 0x8 virtual false final false
  inline void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_current addr 0x2a6bc50 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::Joystick* get_current();

  /// @brief Method set_current addr 0x2a6bc98 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::Joystick* value);

  /// @brief Method get_all addr 0x2a6bce4 size 0x80 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> get_all();

  /// @brief Method FinishSetup addr 0x2a6bd64 size 0x13c virtual true final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent addr 0x2a6bea0 size 0x4c virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnAdded addr 0x2a6beec size 0x78 virtual true final false
  inline void OnAdded();

  /// @brief Method OnRemoved addr 0x2a6bf64 size 0x118 virtual true final false
  inline void OnRemoved();

  static inline ::UnityEngine::InputSystem::Joystick* New_ctor();

  /// @brief Method .ctor addr 0x2a6c07c size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Joystick(Joystick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Joystick(Joystick const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Joystick();

public:
  /// @brief Field <trigger>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trigger_k__BackingField;

  /// @brief Field <stick>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____stick_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____twist_k__BackingField;

  /// @brief Field <hatswitch>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____hatswitch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Joystick, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Joystick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Joystick*, "UnityEngine.InputSystem", "Joystick");
