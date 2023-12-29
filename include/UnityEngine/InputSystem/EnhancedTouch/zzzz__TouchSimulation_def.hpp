#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchSimulation)
namespace UnityEngine::InputSystem {
class Pointer;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class TouchSimulation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation);
// Type: UnityEngine.InputSystem.EnhancedTouch::TouchSimulation
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6508))
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::TouchSimulation*
class CORDL_TYPE TouchSimulation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <simulatedTouchscreen>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__simulatedTouchscreen_k__BackingField,
                      put = __set__simulatedTouchscreen_k__BackingField))::UnityEngine::InputSystem::Touchscreen* _simulatedTouchscreen_k__BackingField;

  /// @brief Field m_NumPointers, offset 0x20, size 0x4
  __declspec(property(get = __get_m_NumPointers, put = __set_m_NumPointers)) int32_t m_NumPointers;

  /// @brief Field m_Pointers, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Pointers, put = __set_m_Pointers))::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> m_Pointers;

  /// @brief Field m_CurrentPositions, offset 0x30, size 0x8
  __declspec(property(get = __get_m_CurrentPositions, put = __set_m_CurrentPositions))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_CurrentPositions;

  /// @brief Field m_Touches, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Touches,
                      put = __set_m_Touches))::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> m_Touches;

  /// @brief Field m_LastTouchId, offset 0x40, size 0x4
  __declspec(property(get = __get_m_LastTouchId, put = __set_m_LastTouchId)) int32_t m_LastTouchId;

  /// @brief Field m_PrimaryTouchIndex, offset 0x44, size 0x4
  __declspec(property(get = __get_m_PrimaryTouchIndex, put = __set_m_PrimaryTouchIndex)) int32_t m_PrimaryTouchIndex;

  /// @brief Field m_OnDeviceChange, offset 0x48, size 0x8
  __declspec(property(get = __get_m_OnDeviceChange,
                      put = __set_m_OnDeviceChange))::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* m_OnDeviceChange;

  /// @brief Field m_OnEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_m_OnEvent, put = __set_m_OnEvent))::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* m_OnEvent;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* s_Instance;

  __declspec(property(get = get_simulatedTouchscreen, put = set_simulatedTouchscreen))::UnityEngine::InputSystem::Touchscreen* simulatedTouchscreen;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  constexpr ::UnityEngine::InputSystem::Touchscreen*& __get__simulatedTouchscreen_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Touchscreen*> const& __get__simulatedTouchscreen_k__BackingField() const;

  constexpr void __set__simulatedTouchscreen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  constexpr int32_t& __get_m_NumPointers();

  constexpr int32_t const& __get_m_NumPointers() const;

  constexpr void __set_m_NumPointers(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*>& __get_m_Pointers();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> const& __get_m_Pointers() const;

  constexpr void __set_m_Pointers(::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get_m_CurrentPositions();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get_m_CurrentPositions() const;

  constexpr void __set_m_CurrentPositions(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*>& __get_m_Touches();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> const& __get_m_Touches() const;

  constexpr void __set_m_Touches(::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> value);

  constexpr int32_t& __get_m_LastTouchId();

  constexpr int32_t const& __get_m_LastTouchId() const;

  constexpr void __set_m_LastTouchId(int32_t value);

  constexpr int32_t& __get_m_PrimaryTouchIndex();

  constexpr int32_t const& __get_m_PrimaryTouchIndex() const;

  constexpr void __set_m_PrimaryTouchIndex(int32_t value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*& __get_m_OnDeviceChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> const& __get_m_OnDeviceChange() const;

  constexpr void __set_m_OnDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __get_m_OnEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_OnEvent() const;

  constexpr void __set_m_OnEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* value);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* getStaticF_s_Instance();

  /// @brief Method get_simulatedTouchscreen addr 0x2963e64 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_simulatedTouchscreen();

  /// @brief Method set_simulatedTouchscreen addr 0x2963e6c size 0x8 virtual false final false
  inline void set_simulatedTouchscreen(::UnityEngine::InputSystem::Touchscreen* value);

  /// @brief Method get_instance addr 0x2963e74 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* get_instance();

  /// @brief Method Enable addr 0x2963ebc size 0x19c virtual false final false
  static inline void Enable();

  /// @brief Method Disable addr 0x2964058 size 0xd8 virtual false final false
  static inline void Disable();

  /// @brief Method Destroy addr 0x2964130 size 0xd0 virtual false final false
  static inline void Destroy();

  /// @brief Method AddPointer addr 0x2964200 size 0x160 virtual false final false
  inline void AddPointer(::UnityEngine::InputSystem::Pointer* pointer);

  /// @brief Method RemovePointer addr 0x2964360 size 0x1d0 virtual false final false
  inline void RemovePointer(::UnityEngine::InputSystem::Pointer* pointer);

  /// @brief Method OnEvent addr 0x29648b8 size 0x514 virtual false final false
  inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnDeviceChange addr 0x2964e44 size 0x144 virtual false final false
  inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnEnable addr 0x2964f88 size 0x3bc virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x29654c4 size 0x164 virtual false final false
  inline void OnDisable();

  /// @brief Method UpdateTouch addr 0x2964530 size 0x388 virtual false final false
  inline void UpdateTouch(int32_t touchIndex, int32_t pointerIndex, ::UnityEngine::InputSystem::TouchPhase phase, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged addr 0x296591c size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired addr 0x2965920 size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method InstallStateChangeMonitors addr 0x2965924 size 0x4 virtual false final false
  inline void InstallStateChangeMonitors(int32_t startIndex);

  /// @brief Method OnSourceControlChangedValue addr 0x2965928 size 0x4 virtual false final false
  inline void OnSourceControlChangedValue(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                          int64_t sourceDeviceAndButtonIndex);

  /// @brief Method UninstallStateChangeMonitors addr 0x296592c size 0x4 virtual false final false
  inline void UninstallStateChangeMonitors(int32_t startIndex);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* New_ctor();

  /// @brief Method .ctor addr 0x2965930 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchSimulation(TouchSimulation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchSimulation(TouchSimulation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchSimulation();

public:
  /// @brief Field <simulatedTouchscreen>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Touchscreen* ____simulatedTouchscreen_k__BackingField;

  /// @brief Field m_NumPointers, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_NumPointers;

  /// @brief Field m_Pointers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> ___m_Pointers;

  /// @brief Field m_CurrentPositions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_CurrentPositions;

  /// @brief Field m_Touches, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> ___m_Touches;

  /// @brief Field m_LastTouchId, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_LastTouchId;

  /// @brief Field m_PrimaryTouchIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_PrimaryTouchIndex;

  /// @brief Field m_OnDeviceChange, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* ___m_OnDeviceChange;

  /// @brief Field m_OnEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___m_OnEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ____simulatedTouchscreen_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_NumPointers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_Pointers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_CurrentPositions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_Touches) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_LastTouchId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_PrimaryTouchIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_OnDeviceChange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_OnEvent) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*, "UnityEngine.InputSystem.EnhancedTouch", "TouchSimulation");
