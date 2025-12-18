#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionState)
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
struct DebugActionState_DebugActionKeyType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugActionState_DebugActionKeyType;
}
namespace UnityEngine::Rendering {
class DebugActionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugActionState);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugActionState/DebugActionKeyType
struct CORDL_TYPE DebugActionState_DebugActionKeyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugActionState_DebugActionKeyType_Unwrapped
  enum struct __DebugActionState_DebugActionKeyType_Unwrapped : int32_t {
    __E_Button = static_cast<int32_t>(0x0),
    __E_Axis = static_cast<int32_t>(0x1),
    __E_Key = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugActionState_DebugActionKeyType_Unwrapped() const noexcept {
    return static_cast<__DebugActionState_DebugActionKeyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugActionState_DebugActionKeyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugActionState_DebugActionKeyType(int32_t value__) noexcept;

  /// @brief Field Axis value: I32(1)
  static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Axis;

  /// @brief Field Button value: I32(0)
  static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Button;

  /// @brief Field Key value: I32(2)
  static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Key;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11960 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugActionState_DebugActionKeyType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugActionState::DebugActionKeyType
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugActionState
class CORDL_TYPE DebugActionState : public ::System::Object {
public:
  // Declarations
  using DebugActionKeyType = ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType;

  /// @brief Field <actionState>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__actionState_k__BackingField, put = __cordl_internal_set__actionState_k__BackingField)) float_t _actionState_k__BackingField;

  /// @brief Field <runningAction>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__runningAction_k__BackingField, put = __cordl_internal_set__runningAction_k__BackingField)) bool _runningAction_k__BackingField;

  __declspec(property(get = get_actionState, put = set_actionState)) float_t actionState;

  /// @brief Field inputAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputAction, put = __cordl_internal_set_inputAction)) ::UnityEngine::InputSystem::InputAction* inputAction;

  /// @brief Field m_Timer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Field m_TriggerPressedUp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TriggerPressedUp, put = __cordl_internal_set_m_TriggerPressedUp)) ::ArrayW<bool, ::Array<bool>*> m_TriggerPressedUp;

  /// @brief Field m_Type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType m_Type;

  __declspec(property(get = get_runningAction, put = set_runningAction)) bool runningAction;

  static inline ::UnityEngine::Rendering::DebugActionState* New_ctor();

  /// @brief Method Reset, addr 0x65b08c4, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Trigger, addr 0x65b0810, size 0xb4, virtual false, abstract: false, final false
  inline void Trigger(int32_t triggerCount, float_t state);

  /// @brief Method TriggerWithButton, addr 0x65ac678, size 0x7c, virtual false, abstract: false, final false
  inline void TriggerWithButton(::UnityEngine::InputSystem::InputAction* action, float_t state);

  /// @brief Method Update, addr 0x65ac758, size 0x1d4, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::DebugActionDesc* desc);

  constexpr float_t const& __cordl_internal_get__actionState_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__actionState_k__BackingField();

  constexpr bool const& __cordl_internal_get__runningAction_k__BackingField() const;

  constexpr bool& __cordl_internal_get__runningAction_k__BackingField();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_inputAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_inputAction();

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_TriggerPressedUp() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_TriggerPressedUp();

  constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set__actionState_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__runningAction_k__BackingField(bool value);

  constexpr void __cordl_internal_set_inputAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  constexpr void __cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType value);

  /// @brief Method .ctor, addr 0x65ac528, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_actionState, addr 0x65b0800, size 0x8, virtual false, abstract: false, final false
  inline float_t get_actionState();

  /// @brief Method get_runningAction, addr 0x65b07f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_runningAction();

  /// @brief Method set_actionState, addr 0x65b0808, size 0x8, virtual false, abstract: false, final false
  inline void set_actionState(float_t value);

  /// @brief Method set_runningAction, addr 0x65b07f8, size 0x8, virtual false, abstract: false, final false
  inline void set_runningAction(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugActionState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugActionState(DebugActionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugActionState(DebugActionState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11961 };

  /// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType ___m_Type;

  /// @brief Field inputAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___inputAction;

  /// @brief Field m_TriggerPressedUp, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_TriggerPressedUp;

  /// @brief Field m_Timer, offset: 0x28, size: 0x4, def value: None
  float_t ___m_Timer;

  /// @brief Field <runningAction>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____runningAction_k__BackingField;

  /// @brief Field <actionState>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____actionState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___inputAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_TriggerPressedUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Timer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____runningAction_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____actionState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugActionState, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType, "UnityEngine.Rendering", "DebugActionState/DebugActionKeyType");
NEED_NO_BOX(::UnityEngine::Rendering::DebugActionState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugActionState*, "UnityEngine.Rendering", "DebugActionState");
