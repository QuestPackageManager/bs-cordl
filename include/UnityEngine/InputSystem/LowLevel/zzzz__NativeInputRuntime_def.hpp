#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/NativeInputRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputRuntime)
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
namespace System {
class Object;
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
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass10_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass7_0;
}
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
namespace UnityEngine {
struct ScreenOrientation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass10_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0);
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass10_0
class CORDL_TYPE NativeInputRuntime___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value;

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0* New_ctor();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* const& __cordl_internal_get_value() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  /// @brief Method .ctor, addr 0x4610fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_onBeforeUpdate>b__0, addr 0x4611748, size 0x24, virtual false, abstract: false, final false
  inline void _set_onBeforeUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputRuntime___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputRuntime___c__DisplayClass10_0(NativeInputRuntime___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputRuntime___c__DisplayClass10_0(NativeInputRuntime___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6967 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass13_0
class CORDL_TYPE NativeInputRuntime___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value;

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0* New_ctor();

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* const& __cordl_internal_get_value() const;

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  /// @brief Method .ctor, addr 0x46110e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_onShouldRunUpdate>b__0, addr 0x461176c, size 0x24, virtual false, abstract: false, final false
  inline bool _set_onShouldRunUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputRuntime___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputRuntime___c__DisplayClass13_0(NativeInputRuntime___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputRuntime___c__DisplayClass13_0(NativeInputRuntime___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6968 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass7_0
class CORDL_TYPE NativeInputRuntime___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value;

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0* New_ctor();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* const& __cordl_internal_get_value() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  /// @brief Method .ctor, addr 0x4610ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_onUpdate>b__0, addr 0x4611790, size 0x1f8, virtual false, abstract: false, final false
  inline void _set_onUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> eventBufferPtr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputRuntime___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputRuntime___c__DisplayClass7_0(NativeInputRuntime___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputRuntime___c__DisplayClass7_0(NativeInputRuntime___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6969 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object, UnityEngine.InputSystem.LowLevel.IInputRuntime
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.NativeInputRuntime
class CORDL_TYPE NativeInputRuntime : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0;

  using __c__DisplayClass13_0 = ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0;

  using __c__DisplayClass7_0 = ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0;

  __declspec(property(get = get_currentTime)) double_t currentTime;

  __declspec(property(get = get_currentTimeForFixedUpdate)) double_t currentTimeForFixedUpdate;

  __declspec(property(get = get_currentTimeOffsetToRealtimeSinceStartup)) double_t currentTimeOffsetToRealtimeSinceStartup;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* instance;

  __declspec(property(get = get_isInBatchMode)) bool isInBatchMode;

  __declspec(property(get = get_isPlayerFocused)) bool isPlayerFocused;

  /// @brief Field m_DidCallOnShutdown, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DidCallOnShutdown, put = __cordl_internal_set_m_DidCallOnShutdown)) bool m_DidCallOnShutdown;

  /// @brief Field m_FocusChangedMethod, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusChangedMethod, put = __cordl_internal_set_m_FocusChangedMethod)) ::System::Action_1<bool>* m_FocusChangedMethod;

  /// @brief Field m_OnBeforeUpdate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnBeforeUpdate,
                      put = __cordl_internal_set_m_OnBeforeUpdate)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* m_OnBeforeUpdate;

  /// @brief Field m_OnShouldRunUpdate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnShouldRunUpdate,
                      put = __cordl_internal_set_m_OnShouldRunUpdate)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* m_OnShouldRunUpdate;

  /// @brief Field m_OnUpdate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnUpdate, put = __cordl_internal_set_m_OnUpdate)) ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* m_OnUpdate;

  /// @brief Field m_PollingFrequency, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PollingFrequency, put = __cordl_internal_set_m_PollingFrequency)) float_t m_PollingFrequency;

  /// @brief Field m_RunInBackground, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RunInBackground, put = __cordl_internal_set_m_RunInBackground)) bool m_RunInBackground;

  /// @brief Field m_ShutdownMethod, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShutdownMethod, put = __cordl_internal_set_m_ShutdownMethod)) ::System::Action* m_ShutdownMethod;

  __declspec(property(get = get_onBeforeUpdate, put = set_onBeforeUpdate)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* onBeforeUpdate;

  __declspec(property(get = get_onDeviceDiscovered, put = set_onDeviceDiscovered)) ::System::Action_2<int32_t, ::StringW>* onDeviceDiscovered;

  __declspec(property(get = get_onPlayerFocusChanged, put = set_onPlayerFocusChanged)) ::System::Action_1<bool>* onPlayerFocusChanged;

  __declspec(property(get = get_onShouldRunUpdate, put = set_onShouldRunUpdate)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* onShouldRunUpdate;

  __declspec(property(get = get_onShutdown, put = set_onShutdown)) ::System::Action* onShutdown;

  __declspec(property(get = get_onUpdate, put = set_onUpdate)) ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* onUpdate;

  __declspec(property(get = get_pollingFrequency, put = set_pollingFrequency)) float_t pollingFrequency;

  __declspec(property(get = get_runInBackground, put = set_runInBackground)) bool runInBackground;

  __declspec(property(get = get_screenOrientation)) ::UnityEngine::ScreenOrientation screenOrientation;

  __declspec(property(get = get_screenSize)) ::UnityEngine::Vector2 screenSize;

  __declspec(property(get = get_unscaledGameTime)) float_t unscaledGameTime;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputRuntime*() noexcept;

  /// @brief Method AllocateDeviceId, addr 0x4610bc0, size 0x50, virtual true, abstract: false, final true
  inline int32_t AllocateDeviceId();

  /// @brief Method DeviceCommand, addr 0x4610cd4, size 0xc0, virtual true, abstract: false, final true
  inline int64_t DeviceCommand(int32_t deviceId, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* New_ctor();

  /// @brief Method OnFocusChanged, addr 0x4611624, size 0x28, virtual false, abstract: false, final false
  inline void OnFocusChanged(bool focus);

  /// @brief Method OnShutdown, addr 0x46115c0, size 0x24, virtual false, abstract: false, final false
  inline void OnShutdown();

  /// @brief Method OnWantsToShutdown, addr 0x46115e4, size 0x40, virtual false, abstract: false, final false
  inline bool OnWantsToShutdown();

  /// @brief Method QueueEvent, addr 0x4610c68, size 0x6c, virtual true, abstract: false, final true
  inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> ptr);

  /// @brief Method RegisterAnalyticsEvent, addr 0x46116cc, size 0x4, virtual false, abstract: false, final false
  inline void RegisterAnalyticsEvent(::StringW name, int32_t maxPerHour, int32_t maxPropertiesPerEvent);

  /// @brief Method SendAnalyticsEvent, addr 0x46116d0, size 0x4, virtual false, abstract: false, final false
  inline void SendAnalyticsEvent(::StringW name, ::System::Object* data);

  /// @brief Method Update, addr 0x4610c10, size 0x58, virtual true, abstract: false, final true
  inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  constexpr bool const& __cordl_internal_get_m_DidCallOnShutdown() const;

  constexpr bool& __cordl_internal_get_m_DidCallOnShutdown();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_m_FocusChangedMethod() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_m_FocusChangedMethod();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* const& __cordl_internal_get_m_OnBeforeUpdate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& __cordl_internal_get_m_OnBeforeUpdate();

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* const& __cordl_internal_get_m_OnShouldRunUpdate() const;

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& __cordl_internal_get_m_OnShouldRunUpdate();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* const& __cordl_internal_get_m_OnUpdate() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& __cordl_internal_get_m_OnUpdate();

  constexpr float_t const& __cordl_internal_get_m_PollingFrequency() const;

  constexpr float_t& __cordl_internal_get_m_PollingFrequency();

  constexpr bool const& __cordl_internal_get_m_RunInBackground() const;

  constexpr bool& __cordl_internal_get_m_RunInBackground();

  constexpr ::System::Action* const& __cordl_internal_get_m_ShutdownMethod() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ShutdownMethod();

  constexpr void __cordl_internal_set_m_DidCallOnShutdown(bool value);

  constexpr void __cordl_internal_set_m_FocusChangedMethod(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set_m_OnBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  constexpr void __cordl_internal_set_m_OnShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  constexpr void __cordl_internal_set_m_OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  constexpr void __cordl_internal_set_m_PollingFrequency(float_t value);

  constexpr void __cordl_internal_set_m_RunInBackground(bool value);

  constexpr void __cordl_internal_set_m_ShutdownMethod(::System::Action* value);

  /// @brief Method .ctor, addr 0x46116d4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* getStaticF_instance();

  /// @brief Method get_currentTime, addr 0x4611470, size 0x50, virtual true, abstract: false, final true
  inline double_t get_currentTime();

  /// @brief Method get_currentTimeForFixedUpdate, addr 0x46114c0, size 0x2c, virtual true, abstract: false, final true
  inline double_t get_currentTimeForFixedUpdate();

  /// @brief Method get_currentTimeOffsetToRealtimeSinceStartup, addr 0x46114ec, size 0x50, virtual true, abstract: false, final true
  inline double_t get_currentTimeOffsetToRealtimeSinceStartup();

  /// @brief Method get_isInBatchMode, addr 0x461167c, size 0x50, virtual true, abstract: false, final true
  inline bool get_isInBatchMode();

  /// @brief Method get_isPlayerFocused, addr 0x46113b0, size 0x50, virtual true, abstract: false, final true
  inline bool get_isPlayerFocused();

  /// @brief Method get_onBeforeUpdate, addr 0x4610eb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* get_onBeforeUpdate();

  /// @brief Method get_onDeviceDiscovered, addr 0x46110e8, size 0x50, virtual true, abstract: false, final true
  inline ::System::Action_2<int32_t, ::StringW>* get_onDeviceDiscovered();

  /// @brief Method get_onPlayerFocusChanged, addr 0x46112a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action_1<bool>* get_onPlayerFocusChanged();

  /// @brief Method get_onShouldRunUpdate, addr 0x4610fcc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* get_onShouldRunUpdate();

  /// @brief Method get_onShutdown, addr 0x4611190, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* get_onShutdown();

  /// @brief Method get_onUpdate, addr 0x4610d94, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* get_onUpdate();

  /// @brief Method get_pollingFrequency, addr 0x4611400, size 0x8, virtual true, abstract: false, final true
  inline float_t get_pollingFrequency();

  /// @brief Method get_runInBackground, addr 0x4611544, size 0x70, virtual true, abstract: false, final true
  inline bool get_runInBackground();

  /// @brief Method get_screenOrientation, addr 0x4611674, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ScreenOrientation get_screenOrientation();

  /// @brief Method get_screenSize, addr 0x461164c, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_screenSize();

  /// @brief Method get_unscaledGameTime, addr 0x461153c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_unscaledGameTime();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* i___UnityEngine__InputSystem__LowLevel__IInputRuntime() noexcept;

  static inline void setStaticF_instance(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* value);

  /// @brief Method set_onBeforeUpdate, addr 0x4610eb8, size 0x10c, virtual true, abstract: false, final true
  inline void set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  /// @brief Method set_onDeviceDiscovered, addr 0x4611138, size 0x58, virtual true, abstract: false, final true
  inline void set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value);

  /// @brief Method set_onPlayerFocusChanged, addr 0x46112a8, size 0x108, virtual true, abstract: false, final true
  inline void set_onPlayerFocusChanged(::System::Action_1<bool>* value);

  /// @brief Method set_onShouldRunUpdate, addr 0x4610fd4, size 0x10c, virtual true, abstract: false, final true
  inline void set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  /// @brief Method set_onShutdown, addr 0x4611198, size 0x108, virtual true, abstract: false, final true
  inline void set_onShutdown(::System::Action* value);

  /// @brief Method set_onUpdate, addr 0x4610d9c, size 0x10c, virtual true, abstract: false, final true
  inline void set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  /// @brief Method set_pollingFrequency, addr 0x4611408, size 0x68, virtual true, abstract: false, final true
  inline void set_pollingFrequency(float_t value);

  /// @brief Method set_runInBackground, addr 0x46115b4, size 0xc, virtual true, abstract: false, final true
  inline void set_runInBackground(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputRuntime(NativeInputRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputRuntime(NativeInputRuntime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6970 };

  /// @brief Field m_RunInBackground, offset: 0x10, size: 0x1, def value: None
  bool ___m_RunInBackground;

  /// @brief Field m_ShutdownMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_ShutdownMethod;

  /// @brief Field m_OnUpdate, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* ___m_OnUpdate;

  /// @brief Field m_OnBeforeUpdate, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* ___m_OnBeforeUpdate;

  /// @brief Field m_OnShouldRunUpdate, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* ___m_OnShouldRunUpdate;

  /// @brief Field m_PollingFrequency, offset: 0x38, size: 0x4, def value: None
  float_t ___m_PollingFrequency;

  /// @brief Field m_DidCallOnShutdown, offset: 0x3c, size: 0x1, def value: None
  bool ___m_DidCallOnShutdown;

  /// @brief Field m_FocusChangedMethod, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<bool>* ___m_FocusChangedMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_RunInBackground) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_ShutdownMethod) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnBeforeUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnShouldRunUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_PollingFrequency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_DidCallOnShutdown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_FocusChangedMethod) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass7_0");
