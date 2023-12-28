#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pointer)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pointer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Pointer);
// Type: UnityEngine.InputSystem::Pointer
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 384, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6247))
// CS Name: ::UnityEngine.InputSystem::Pointer*
class CORDL_TYPE Pointer : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <position>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__delta_k__BackingField, put = __set__delta_k__BackingField))::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __get__radius_k__BackingField, put = __set__radius_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __get__pressure_k__BackingField, put = __set__pressure_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField;

  /// @brief Field <press>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__press_k__BackingField, put = __set__press_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Pointer* _current_k__BackingField;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector2Control* position;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::InputSystem::Controls::DeltaControl* delta;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::InputSystem::Controls::Vector2Control* radius;

  __declspec(property(get = get_pressure, put = set_pressure))::UnityEngine::InputSystem::Controls::AxisControl* pressure;

  __declspec(property(get = get_press, put = set_press))::UnityEngine::InputSystem::Controls::ButtonControl* press;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& __get__delta_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DeltaControl*> const& __get__delta_k__BackingField() const;

  constexpr void __set__delta_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__radius_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__radius_k__BackingField() const;

  constexpr void __set__radius_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__pressure_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__pressure_k__BackingField() const;

  constexpr void __set__pressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__press_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__press_k__BackingField() const;

  constexpr void __set__press_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Pointer* value);

  static inline ::UnityEngine::InputSystem::Pointer* getStaticF__current_k__BackingField();

  /// @brief Method get_position addr 0x2a6f9f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_position();

  /// @brief Method set_position addr 0x2a6f9fc size 0x8 virtual false final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_delta addr 0x2a6fa04 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* get_delta();

  /// @brief Method set_delta addr 0x2a6fa0c size 0x8 virtual false final false
  inline void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  /// @brief Method get_radius addr 0x2a6fa14 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_radius();

  /// @brief Method set_radius addr 0x2a6fa1c size 0x8 virtual false final false
  inline void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_pressure addr 0x2a6fa24 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_pressure();

  /// @brief Method set_pressure addr 0x2a6fa2c size 0x8 virtual false final false
  inline void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_press addr 0x2a6fa34 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_press();

  /// @brief Method set_press addr 0x2a6fa3c size 0x8 virtual false final false
  inline void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_current addr 0x2a6fa44 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::Pointer* get_current();

  /// @brief Method set_current addr 0x2a6fa8c size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::Pointer* value);

  /// @brief Method MakeCurrent addr 0x2a6ed60 size 0x4c virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2a6ee88 size 0x7c virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x2a6f14c size 0x164 virtual true final false
  inline void FinishSetup();

  /// @brief Method OnNextUpdate addr 0x2a6f340 size 0x88 virtual false final false
  inline void OnNextUpdate();

  /// @brief Method OnStateEvent addr 0x2a6f40c size 0x4c virtual false final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x2a6fad8 size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x2a6fadc size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent addr 0x2a6fae0 size 0x8 virtual true final true
  inline bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset);

  static inline ::UnityEngine::InputSystem::Pointer* New_ctor();

  /// @brief Method .ctor addr 0x2a6f48c size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pointer(Pointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pointer(Pointer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pointer();

public:
  /// @brief Field <position>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DeltaControl* ____delta_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____radius_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____pressure_k__BackingField;

  /// @brief Field <press>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____press_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Pointer, 0x180>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pointer*, "UnityEngine.InputSystem", "Pointer");
