#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Joystick.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Joystick)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
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
// Forward declare root types
namespace UnityEngine::InputSystem {
class Joystick;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Joystick);
// Dependencies UnityEngine.InputSystem.InputDevice
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Joystick
class CORDL_TYPE Joystick : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::Joystick* _current_k__BackingField;

  /// @brief Field <hatswitch>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__hatswitch_k__BackingField,
                      put = __cordl_internal_set__hatswitch_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _hatswitch_k__BackingField;

  /// @brief Field <stick>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__stick_k__BackingField, put = __cordl_internal_set__stick_k__BackingField)) ::UnityEngine::InputSystem::Controls::StickControl* _stick_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trigger_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__twist_k__BackingField, put = __cordl_internal_set__twist_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField;

  __declspec(property(get = get_hatswitch, put = set_hatswitch)) ::UnityEngine::InputSystem::Controls::Vector2Control* hatswitch;

  /// @brief Field s_JoystickCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_JoystickCount, put = setStaticF_s_JoystickCount)) int32_t s_JoystickCount;

  /// @brief Field s_Joysticks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Joysticks, put = setStaticF_s_Joysticks)) ::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> s_Joysticks;

  __declspec(property(get = get_stick, put = set_stick)) ::UnityEngine::InputSystem::Controls::StickControl* stick;

  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::ButtonControl* trigger;

  __declspec(property(get = get_twist, put = set_twist)) ::UnityEngine::InputSystem::Controls::AxisControl* twist;

  /// @brief Method FinishSetup, addr 0x4585430, size 0x13c, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x458556c, size 0x4c, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Joystick* New_ctor();

  /// @brief Method OnAdded, addr 0x45855b8, size 0x78, virtual true, abstract: false, final false
  inline void OnAdded();

  /// @brief Method OnRemoved, addr 0x4585630, size 0x118, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__hatswitch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__hatswitch_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::StickControl* const& __cordl_internal_get__stick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::StickControl*& __cordl_internal_get__stick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__twist_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__twist_k__BackingField();

  constexpr void __cordl_internal_set__hatswitch_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__stick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x4585748, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Joystick* getStaticF__current_k__BackingField();

  static inline int32_t getStaticF_s_JoystickCount();

  static inline ::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> getStaticF_s_Joysticks();

  /// @brief Method get_all, addr 0x45853b0, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> get_all();

  /// @brief Method get_current, addr 0x458531c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Joystick* get_current();

  /// @brief Method get_hatswitch, addr 0x458530c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch();

  /// @brief Method get_stick, addr 0x45852ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::StickControl* get_stick();

  /// @brief Method get_trigger, addr 0x45852dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger();

  /// @brief Method get_twist, addr 0x45852fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_twist();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Joystick* value);

  static inline void setStaticF_s_JoystickCount(int32_t value);

  static inline void setStaticF_s_Joysticks(::ArrayW<::UnityEngine::InputSystem::Joystick*, ::Array<::UnityEngine::InputSystem::Joystick*>*> value);

  /// @brief Method set_current, addr 0x4585364, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Joystick* value);

  /// @brief Method set_hatswitch, addr 0x4585314, size 0x8, virtual false, abstract: false, final false
  inline void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_stick, addr 0x45852f4, size 0x8, virtual false, abstract: false, final false
  inline void set_stick(::UnityEngine::InputSystem::Controls::StickControl* value);

  /// @brief Method set_trigger, addr 0x45852e4, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_twist, addr 0x4585304, size 0x8, virtual false, abstract: false, final false
  inline void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Joystick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Joystick(Joystick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Joystick(Joystick const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6649 };

  /// @brief Field <trigger>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trigger_k__BackingField;

  /// @brief Field <stick>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::StickControl* ____stick_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____twist_k__BackingField;

  /// @brief Field <hatswitch>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____hatswitch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Joystick, ____trigger_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Joystick, ____stick_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Joystick, ____twist_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Joystick, ____hatswitch_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Joystick, 0x190>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Joystick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Joystick*, "UnityEngine.InputSystem", "Joystick");
