#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputState)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputState_StateChangeMonitorDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputState;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputState_StateChangeMonitorDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputState);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate);
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputState/StateChangeMonitorDelegate
class CORDL_TYPE InputState_StateChangeMonitorDelegate : public ::System::Object {
public:
  // Declarations
  /// @brief Field timerExpiredCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_timerExpiredCallback,
                      put = __cordl_internal_set_timerExpiredCallback)) ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback;

  /// @brief Field valueChangeCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_valueChangeCallback,
                      put = __cordl_internal_set_valueChangeCallback)) ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr,
                                                                                          int64_t>* valueChangeCallback;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  static inline ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate* New_ctor();

  /// @brief Method NotifyControlStateChanged, addr 0x640198c, size 0x20, virtual true, abstract: false, final true
  inline void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method NotifyTimerExpired, addr 0x64019ac, size 0x1c, virtual true, abstract: false, final true
  inline void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* const& __cordl_internal_get_timerExpiredCallback() const;

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*& __cordl_internal_get_timerExpiredCallback();

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* const&
  __cordl_internal_get_valueChangeCallback() const;

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*& __cordl_internal_get_valueChangeCallback();

  constexpr void __cordl_internal_set_timerExpiredCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* value);

  constexpr void __cordl_internal_set_valueChangeCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* value);

  /// @brief Method .ctor, addr 0x64016c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputState_StateChangeMonitorDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputState_StateChangeMonitorDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputState_StateChangeMonitorDelegate(InputState_StateChangeMonitorDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputState_StateChangeMonitorDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputState_StateChangeMonitorDelegate(InputState_StateChangeMonitorDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9036 };

  /// @brief Field valueChangeCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* ___valueChangeCallback;

  /// @brief Field timerExpiredCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* ___timerExpiredCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate, ___valueChangeCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate, ___timerExpiredCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputState
class CORDL_TYPE InputState : public ::System::Object {
public:
  // Declarations
  using StateChangeMonitorDelegate = ::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate;

  /// @brief Method AddChangeMonitor, addr 0x64015ec, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
  AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                   ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback, int32_t monitorIndex,
                   ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback);

  /// @brief Method AddChangeMonitor, addr 0x640147c, size 0x170, virtual false, abstract: false, final false
  static inline void AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex,
                                      uint32_t groupIndex);

  /// @brief Method AddChangeMonitorTimeout, addr 0x64017c4, size 0xf4, virtual false, abstract: false, final false
  static inline void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time,
                                             int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method Change, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState>
  static inline void Change(::UnityEngine::InputSystem::InputControl* control, ::ByRef<TState> state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method Change, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState>
  static inline void Change(::UnityEngine::InputSystem::InputControl* control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType,
                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method Change, addr 0x6401094, size 0x278, virtual false, abstract: false, final false
  static inline void Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                            ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method IsIntegerFormat, addr 0x640130c, size 0x170, virtual false, abstract: false, final false
  static inline bool IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method RemoveChangeMonitor, addr 0x64016cc, size 0xf8, virtual false, abstract: false, final false
  static inline void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex);

  /// @brief Method RemoveChangeMonitorTimeout, addr 0x64018b8, size 0xd4, virtual false, abstract: false, final false
  static inline void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method add_onChange, addr 0x6400fb4, size 0x70, virtual false, abstract: false, final false
  static inline void add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method get_currentTime, addr 0x6400edc, size 0xd8, virtual false, abstract: false, final false
  static inline double_t get_currentTime();

  /// @brief Method get_currentUpdateType, addr 0x6400e44, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_currentUpdateType();

  /// @brief Method get_updateCount, addr 0x6400e90, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t get_updateCount();

  /// @brief Method remove_onChange, addr 0x6401024, size 0x70, virtual false, abstract: false, final false
  static inline void remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputState(InputState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputState(InputState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState*, "UnityEngine.InputSystem.LowLevel", "InputState");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState_StateChangeMonitorDelegate*, "UnityEngine.InputSystem.LowLevel", "InputState/StateChangeMonitorDelegate");
