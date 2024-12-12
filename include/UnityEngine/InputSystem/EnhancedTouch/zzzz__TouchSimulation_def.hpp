#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/TouchSimulation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchSimulation)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class Pointer;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class TouchSimulation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor, UnityEngine.MonoBehaviour
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: UnityEngine.InputSystem.EnhancedTouch.TouchSimulation
class CORDL_TYPE TouchSimulation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <simulatedTouchscreen>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simulatedTouchscreen_k__BackingField,
                      put = __cordl_internal_set__simulatedTouchscreen_k__BackingField)) ::UnityEngine::InputSystem::Touchscreen* _simulatedTouchscreen_k__BackingField;

  /// @brief Field m_CurrentDisplayIndices, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentDisplayIndices, put = __cordl_internal_set_m_CurrentDisplayIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_CurrentDisplayIndices;

  /// @brief Field m_CurrentPositions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentPositions, put = __cordl_internal_set_m_CurrentPositions)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>
      m_CurrentPositions;

  /// @brief Field m_LastTouchId, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastTouchId, put = __cordl_internal_set_m_LastTouchId)) int32_t m_LastTouchId;

  /// @brief Field m_NumPointers, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumPointers, put = __cordl_internal_set_m_NumPointers)) int32_t m_NumPointers;

  /// @brief Field m_OnDeviceChange, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDeviceChange,
                      put = __cordl_internal_set_m_OnDeviceChange)) ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* m_OnDeviceChange;

  /// @brief Field m_OnEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEvent,
                      put = __cordl_internal_set_m_OnEvent)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* m_OnEvent;

  /// @brief Field m_Pointers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pointers, put = __cordl_internal_set_m_Pointers)) ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*>
      m_Pointers;

  /// @brief Field m_PrimaryTouchIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrimaryTouchIndex, put = __cordl_internal_set_m_PrimaryTouchIndex)) int32_t m_PrimaryTouchIndex;

  /// @brief Field m_Touches, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Touches,
                      put = __cordl_internal_set_m_Touches)) ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*>
      m_Touches;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* s_Instance;

  __declspec(property(get = get_simulatedTouchscreen, put = set_simulatedTouchscreen)) ::UnityEngine::InputSystem::Touchscreen* simulatedTouchscreen;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  /// @brief Method AddPointer, addr 0x46028b0, size 0x170, virtual false, abstract: false, final false
  inline void AddPointer(::UnityEngine::InputSystem::Pointer* pointer);

  /// @brief Method Destroy, addr 0x46027e0, size 0xd0, virtual false, abstract: false, final false
  static inline void Destroy();

  /// @brief Method Disable, addr 0x4602708, size 0xd8, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method Enable, addr 0x4602574, size 0x194, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method InstallStateChangeMonitors, addr 0x460407c, size 0x4, virtual false, abstract: false, final false
  inline void InstallStateChangeMonitors(int32_t startIndex);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* New_ctor();

  /// @brief Method OnDeviceChange, addr 0x46035c4, size 0x14c, virtual false, abstract: false, final false
  inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnDisable, addr 0x4603c1c, size 0x164, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4603710, size 0x394, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEvent, addr 0x460300c, size 0x544, virtual false, abstract: false, final false
  inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnSourceControlChangedValue, addr 0x4604080, size 0x4, virtual false, abstract: false, final false
  inline void OnSourceControlChangedValue(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                          int64_t sourceDeviceAndButtonIndex);

  /// @brief Method RemovePointer, addr 0x4602a20, size 0x1f4, virtual false, abstract: false, final false
  inline void RemovePointer(::UnityEngine::InputSystem::Pointer* pointer);

  /// @brief Method UninstallStateChangeMonitors, addr 0x4604084, size 0x4, virtual false, abstract: false, final false
  inline void UninstallStateChangeMonitors(int32_t startIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0x4604074, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0x4604078, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method UpdateTouch, addr 0x4602c14, size 0x3f8, virtual false, abstract: false, final false
  inline void UpdateTouch(int32_t touchIndex, int32_t pointerIndex, ::UnityEngine::InputSystem::TouchPhase phase, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  constexpr ::UnityEngine::InputSystem::Touchscreen* const& __cordl_internal_get__simulatedTouchscreen_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Touchscreen*& __cordl_internal_get__simulatedTouchscreen_k__BackingField();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_CurrentDisplayIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_CurrentDisplayIndices();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get_m_CurrentPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get_m_CurrentPositions();

  constexpr int32_t const& __cordl_internal_get_m_LastTouchId() const;

  constexpr int32_t& __cordl_internal_get_m_LastTouchId();

  constexpr int32_t const& __cordl_internal_get_m_NumPointers() const;

  constexpr int32_t& __cordl_internal_get_m_NumPointers();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* const& __cordl_internal_get_m_OnDeviceChange() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*& __cordl_internal_get_m_OnDeviceChange();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_m_OnEvent() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_OnEvent();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> const& __cordl_internal_get_m_Pointers() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*>& __cordl_internal_get_m_Pointers();

  constexpr int32_t const& __cordl_internal_get_m_PrimaryTouchIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PrimaryTouchIndex();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> const& __cordl_internal_get_m_Touches() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*>& __cordl_internal_get_m_Touches();

  constexpr void __cordl_internal_set__simulatedTouchscreen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  constexpr void __cordl_internal_set_m_CurrentDisplayIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_CurrentPositions(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set_m_LastTouchId(int32_t value);

  constexpr void __cordl_internal_set_m_NumPointers(int32_t value);

  constexpr void __cordl_internal_set_m_OnDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  constexpr void __cordl_internal_set_m_OnEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  constexpr void __cordl_internal_set_m_Pointers(::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> value);

  constexpr void __cordl_internal_set_m_PrimaryTouchIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Touches(::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> value);

  /// @brief Method .ctor, addr 0x4604088, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x460252c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* get_instance();

  /// @brief Method get_simulatedTouchscreen, addr 0x460251c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_simulatedTouchscreen();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

  static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* value);

  /// @brief Method set_simulatedTouchscreen, addr 0x4602524, size 0x8, virtual false, abstract: false, final false
  inline void set_simulatedTouchscreen(::UnityEngine::InputSystem::Touchscreen* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchSimulation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchSimulation(TouchSimulation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchSimulation(TouchSimulation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6827 };

  /// @brief Field <simulatedTouchscreen>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Touchscreen* ____simulatedTouchscreen_k__BackingField;

  /// @brief Field m_NumPointers, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_NumPointers;

  /// @brief Field m_Pointers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Pointer*, ::Array<::UnityEngine::InputSystem::Pointer*>*> ___m_Pointers;

  /// @brief Field m_CurrentPositions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_CurrentPositions;

  /// @brief Field m_CurrentDisplayIndices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_CurrentDisplayIndices;

  /// @brief Field m_Touches, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*, ::Array<::UnityEngine::InputSystem::Controls::ButtonControl*>*> ___m_Touches;

  /// @brief Field m_LastTouchId, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_LastTouchId;

  /// @brief Field m_PrimaryTouchIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_PrimaryTouchIndex;

  /// @brief Field m_OnDeviceChange, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* ___m_OnDeviceChange;

  /// @brief Field m_OnEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___m_OnEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ____simulatedTouchscreen_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_NumPointers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_Pointers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_CurrentPositions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_CurrentDisplayIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_Touches) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_LastTouchId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_PrimaryTouchIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_OnDeviceChange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, ___m_OnEvent) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*, "UnityEngine.InputSystem.EnhancedTouch", "TouchSimulation");
