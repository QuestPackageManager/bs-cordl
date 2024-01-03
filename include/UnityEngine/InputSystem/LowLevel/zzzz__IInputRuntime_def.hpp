#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IInputRuntime)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine {
struct ScreenOrientation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputRuntime);
// Type: UnityEngine.InputSystem.LowLevel::IInputRuntime
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6549))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IInputRuntime*
class CORDL_TYPE IInputRuntime {
public:
  // Declarations
  __declspec(property(get = get_onUpdate, put = set_onUpdate))::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* onUpdate;

  __declspec(property(get = get_onBeforeUpdate, put = set_onBeforeUpdate))::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* onBeforeUpdate;

  __declspec(property(get = get_onShouldRunUpdate, put = set_onShouldRunUpdate))::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* onShouldRunUpdate;

  __declspec(property(get = get_onDeviceDiscovered, put = set_onDeviceDiscovered))::System::Action_2<int32_t, ::StringW>* onDeviceDiscovered;

  __declspec(property(get = get_onPlayerFocusChanged, put = set_onPlayerFocusChanged))::System::Action_1<bool>* onPlayerFocusChanged;

  __declspec(property(get = get_isPlayerFocused)) bool isPlayerFocused;

  __declspec(property(get = get_onShutdown, put = set_onShutdown))::System::Action* onShutdown;

  __declspec(property(get = get_pollingFrequency, put = set_pollingFrequency)) float_t pollingFrequency;

  __declspec(property(get = get_currentTime)) double_t currentTime;

  __declspec(property(get = get_currentTimeForFixedUpdate)) double_t currentTimeForFixedUpdate;

  __declspec(property(get = get_unscaledGameTime)) float_t unscaledGameTime;

  __declspec(property(get = get_currentTimeOffsetToRealtimeSinceStartup)) double_t currentTimeOffsetToRealtimeSinceStartup;

  __declspec(property(get = get_runInBackground)) bool runInBackground;

  __declspec(property(get = get_screenSize))::UnityEngine::Vector2 screenSize;

  __declspec(property(get = get_screenOrientation))::UnityEngine::ScreenOrientation screenOrientation;

  __declspec(property(get = get_isInBatchMode)) bool isInBatchMode;

  /// @brief Method AllocateDeviceId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AllocateDeviceId();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);

  /// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> ptr);

  /// @brief Method DeviceCommand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t DeviceCommand(int32_t deviceId, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  /// @brief Method get_onUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* get_onUpdate();

  /// @brief Method set_onUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  /// @brief Method get_onBeforeUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* get_onBeforeUpdate();

  /// @brief Method set_onBeforeUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  /// @brief Method get_onShouldRunUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* get_onShouldRunUpdate();

  /// @brief Method set_onShouldRunUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  /// @brief Method get_onDeviceDiscovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action_2<int32_t, ::StringW>* get_onDeviceDiscovered();

  /// @brief Method set_onDeviceDiscovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value);

  /// @brief Method get_onPlayerFocusChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action_1<bool>* get_onPlayerFocusChanged();

  /// @brief Method set_onPlayerFocusChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onPlayerFocusChanged(::System::Action_1<bool>* value);

  /// @brief Method get_isPlayerFocused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isPlayerFocused();

  /// @brief Method get_onShutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_onShutdown();

  /// @brief Method set_onShutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_onShutdown(::System::Action* value);

  /// @brief Method get_pollingFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_pollingFrequency();

  /// @brief Method set_pollingFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_pollingFrequency(float_t value);

  /// @brief Method get_currentTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_currentTime();

  /// @brief Method get_currentTimeForFixedUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_currentTimeForFixedUpdate();

  /// @brief Method get_unscaledGameTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_unscaledGameTime();

  /// @brief Method get_currentTimeOffsetToRealtimeSinceStartup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_currentTimeOffsetToRealtimeSinceStartup();

  /// @brief Method get_runInBackground, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_runInBackground();

  /// @brief Method get_screenSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 get_screenSize();

  /// @brief Method get_screenOrientation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ScreenOrientation get_screenOrientation();

  /// @brief Method get_isInBatchMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isInBatchMode();

  // Ctor Parameters [CppParam { name: "", ty: "IInputRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputRuntime(IInputRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputRuntime(IInputRuntime const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, "UnityEngine.InputSystem.LowLevel", "IInputRuntime");
