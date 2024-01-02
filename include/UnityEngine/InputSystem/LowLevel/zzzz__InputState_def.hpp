#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputState)
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputState__StateChangeMonitorDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputState;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputState__StateChangeMonitorDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputState);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate);
// Type: ::StateChangeMonitorDelegate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6564))
// CS Name: ::InputState::StateChangeMonitorDelegate*
class CORDL_TYPE __InputState__StateChangeMonitorDelegate : public ::System::Object {
public:
  // Declarations
  /// @brief Field valueChangeCallback, offset 0x10, size 0x8
  __declspec(property(
      get = __get_valueChangeCallback,
      put = __set_valueChangeCallback))::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback;

  /// @brief Field timerExpiredCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_timerExpiredCallback,
                      put = __set_timerExpiredCallback))::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*& __get_valueChangeCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*> const&
  __get_valueChangeCallback() const;

  constexpr void __set_valueChangeCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* value);

  constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*& __get_timerExpiredCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>*> const& __get_timerExpiredCallback() const;

  constexpr void __set_timerExpiredCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* value);

  /// @brief Method NotifyControlStateChanged, addr 0x2af2658, size 0x24, virtual true, abstract: false, final true
  inline void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method NotifyTimerExpired, addr 0x2af267c, size 0x1c, virtual true, abstract: false, final true
  inline void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate* New_ctor();

  /// @brief Method .ctor, addr 0x2af2394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InputState__StateChangeMonitorDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputState__StateChangeMonitorDelegate(__InputState__StateChangeMonitorDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputState__StateChangeMonitorDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputState__StateChangeMonitorDelegate(__InputState__StateChangeMonitorDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputState__StateChangeMonitorDelegate();

public:
  /// @brief Field valueChangeCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* ___valueChangeCallback;

  /// @brief Field timerExpiredCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* ___timerExpiredCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate, ___valueChangeCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate, ___timerExpiredCallback) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6565))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputState*
class CORDL_TYPE InputState : public ::System::Object {
public:
  // Declarations
  using StateChangeMonitorDelegate = ::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate;

  /// @brief Method get_currentUpdateType, addr 0x2af1b98, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_currentUpdateType();

  /// @brief Method get_updateCount, addr 0x2af1be0, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t get_updateCount();

  /// @brief Method get_currentTime, addr 0x2ae54f0, size 0xd0, virtual false, abstract: false, final false
  static inline double_t get_currentTime();

  /// @brief Method add_onChange, addr 0x2af1c28, size 0x6c, virtual false, abstract: false, final false
  static inline void add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method remove_onChange, addr 0x2af1c94, size 0x6c, virtual false, abstract: false, final false
  static inline void remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method Change, addr 0x2af1d00, size 0x26c, virtual false, abstract: false, final false
  /// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
  static inline void Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                            ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType = static_cast<int32_t>(0x0));

  /// @brief Method Change, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
  /// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
  template <typename TState>
  static inline void Change(::UnityEngine::InputSystem::InputControl* control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType = static_cast<int32_t>(0x0),
                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr = {});

  /// @brief Method Change, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param updateType: ::UnityEngine::InputSystem::LowLevel::InputUpdateType (default: static_cast<int32_t>(0x0))
  /// @param eventPtr: ::UnityEngine::InputSystem::LowLevel::InputEventPtr (default: {})
  template <typename TState>
  static inline void Change(::UnityEngine::InputSystem::InputControl* control, ByRef<TState> state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType = static_cast<int32_t>(0x0),
                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr = {});

  /// @brief Method IsIntegerFormat, addr 0x2af1f6c, size 0x1d8, virtual false, abstract: false, final false
  static inline bool IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method AddChangeMonitor, addr 0x2af2144, size 0x174, virtual false, abstract: false, final false
  /// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  /// @param groupIndex: uint32_t (default: static_cast<uint32_t>(0xffff0100u))
  static inline void AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                      int64_t monitorIndex = static_cast<int64_t>(0xffffffffffffffff), uint32_t groupIndex = static_cast<uint32_t>(0xffff0100u));

  /// @brief Method AddChangeMonitor, addr 0x2af22b8, size 0xdc, virtual false, abstract: false, final false
  /// @param monitorIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
  /// @param timerExpiredCallback: ::System::Action_4<::UnityEngine::InputSystem::InputControl*,double_t,int64_t,int32_t>* (default: nullptr)
  static inline ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
  AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control,
                   ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback,
                   int32_t monitorIndex = static_cast<int32_t>(0xffffffff), ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t>* timerExpiredCallback = nullptr);

  /// @brief Method RemoveChangeMonitor, addr 0x2af239c, size 0xfc, virtual false, abstract: false, final false
  /// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  static inline void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor,
                                         int64_t monitorIndex = static_cast<int64_t>(0xffffffffffffffff));

  /// @brief Method AddChangeMonitorTimeout, addr 0x2af2498, size 0xec, virtual false, abstract: false, final false
  /// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  /// @param timerIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
  static inline void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double_t time,
                                             int64_t monitorIndex = static_cast<int64_t>(0xffffffffffffffff), int32_t timerIndex = static_cast<int32_t>(0xffffffff));

  /// @brief Method RemoveChangeMonitorTimeout, addr 0x2af2584, size 0xd4, virtual false, abstract: false, final false
  /// @param monitorIndex: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  /// @param timerIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
  static inline void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex = static_cast<int64_t>(0xffffffffffffffff),
                                                int32_t timerIndex = static_cast<int32_t>(0xffffffff));

  // Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputState(InputState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputState(InputState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState*, "UnityEngine.InputSystem.LowLevel", "InputState");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputState__StateChangeMonitorDelegate*, "UnityEngine.InputSystem.LowLevel", "InputState/StateChangeMonitorDelegate");
