#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputRuntime)
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
namespace UnityEngine {
struct ScreenOrientation;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass10_0;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass7_0;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class NativeInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass10_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class __NativeInputRuntime____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6643))
// CS Name: ::NativeInputRuntime::<>c__DisplayClass7_0*
class CORDL_TYPE __NativeInputRuntime____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*> const& __get_value() const;

  constexpr void __set_value(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  static inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x29714d8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <set_onUpdate>b__0 addr 0x2971c14 size 0x1e8 virtual false final false
  inline void _set_onUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> eventBufferPtr);

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NativeInputRuntime____c__DisplayClass7_0(__NativeInputRuntime____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NativeInputRuntime____c__DisplayClass7_0(__NativeInputRuntime____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeInputRuntime____c__DisplayClass7_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0, ___value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6644))
// CS Name: ::NativeInputRuntime::<>c__DisplayClass10_0*
class CORDL_TYPE __NativeInputRuntime____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*> const& __get_value() const;

  constexpr void __set_value(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  static inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x29715f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <set_onBeforeUpdate>b__0 addr 0x2971dfc size 0x24 virtual false final false
  inline void _set_onBeforeUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NativeInputRuntime____c__DisplayClass10_0(__NativeInputRuntime____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NativeInputRuntime____c__DisplayClass10_0(__NativeInputRuntime____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeInputRuntime____c__DisplayClass10_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0, ___value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6645))
// CS Name: ::NativeInputRuntime::<>c__DisplayClass13_0*
class CORDL_TYPE __NativeInputRuntime____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value;

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*> const& __get_value() const;

  constexpr void __set_value(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  static inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor addr 0x2971718 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <set_onShouldRunUpdate>b__0 addr 0x2971e20 size 0x24 virtual false final false
  inline bool _set_onShouldRunUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NativeInputRuntime____c__DisplayClass13_0(__NativeInputRuntime____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NativeInputRuntime____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NativeInputRuntime____c__DisplayClass13_0(__NativeInputRuntime____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeInputRuntime____c__DisplayClass13_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0, ___value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::NativeInputRuntime
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6646))
// CS Name: ::UnityEngine.InputSystem.LowLevel::NativeInputRuntime*
class CORDL_TYPE NativeInputRuntime : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0;

  using __c__DisplayClass10_0 = ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0;

  using __c__DisplayClass7_0 = ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0;

  /// @brief Field m_ShutdownMethod, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ShutdownMethod, put = __set_m_ShutdownMethod))::System::Action* m_ShutdownMethod;

  /// @brief Field m_OnUpdate, offset 0x18, size 0x8
  __declspec(property(get = __get_m_OnUpdate, put = __set_m_OnUpdate))::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* m_OnUpdate;

  /// @brief Field m_OnBeforeUpdate, offset 0x20, size 0x8
  __declspec(property(get = __get_m_OnBeforeUpdate, put = __set_m_OnBeforeUpdate))::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* m_OnBeforeUpdate;

  /// @brief Field m_OnShouldRunUpdate, offset 0x28, size 0x8
  __declspec(property(get = __get_m_OnShouldRunUpdate, put = __set_m_OnShouldRunUpdate))::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* m_OnShouldRunUpdate;

  /// @brief Field m_PollingFrequency, offset 0x30, size 0x4
  __declspec(property(get = __get_m_PollingFrequency, put = __set_m_PollingFrequency)) float_t m_PollingFrequency;

  /// @brief Field m_DidCallOnShutdown, offset 0x34, size 0x1
  __declspec(property(get = __get_m_DidCallOnShutdown, put = __set_m_DidCallOnShutdown)) bool m_DidCallOnShutdown;

  /// @brief Field m_FocusChangedMethod, offset 0x38, size 0x8
  __declspec(property(get = __get_m_FocusChangedMethod, put = __set_m_FocusChangedMethod))::System::Action_1<bool>* m_FocusChangedMethod;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* instance;

  __declspec(property(get = get_onUpdate, put = set_onUpdate))::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* onUpdate;

  __declspec(property(get = get_onBeforeUpdate, put = set_onBeforeUpdate))::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* onBeforeUpdate;

  __declspec(property(get = get_onShouldRunUpdate, put = set_onShouldRunUpdate))::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* onShouldRunUpdate;

  __declspec(property(get = get_onDeviceDiscovered, put = set_onDeviceDiscovered))::System::Action_2<int32_t, ::StringW>* onDeviceDiscovered;

  __declspec(property(get = get_onShutdown, put = set_onShutdown))::System::Action* onShutdown;

  __declspec(property(get = get_onPlayerFocusChanged, put = set_onPlayerFocusChanged))::System::Action_1<bool>* onPlayerFocusChanged;

  __declspec(property(get = get_isPlayerFocused)) bool isPlayerFocused;

  __declspec(property(get = get_pollingFrequency, put = set_pollingFrequency)) float_t pollingFrequency;

  __declspec(property(get = get_currentTime)) double_t currentTime;

  __declspec(property(get = get_currentTimeForFixedUpdate)) double_t currentTimeForFixedUpdate;

  __declspec(property(get = get_currentTimeOffsetToRealtimeSinceStartup)) double_t currentTimeOffsetToRealtimeSinceStartup;

  __declspec(property(get = get_unscaledGameTime)) float_t unscaledGameTime;

  __declspec(property(get = get_runInBackground)) bool runInBackground;

  __declspec(property(get = get_screenSize))::UnityEngine::Vector2 screenSize;

  __declspec(property(get = get_screenOrientation))::UnityEngine::ScreenOrientation screenOrientation;

  __declspec(property(get = get_isInBatchMode)) bool isInBatchMode;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputRuntime*() noexcept;

  constexpr ::System::Action*& __get_m_ShutdownMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_ShutdownMethod() const;

  constexpr void __set_m_ShutdownMethod(::System::Action* value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& __get_m_OnUpdate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*> const& __get_m_OnUpdate() const;

  constexpr void __set_m_OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& __get_m_OnBeforeUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*> const& __get_m_OnBeforeUpdate() const;

  constexpr void __set_m_OnBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& __get_m_OnShouldRunUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*> const& __get_m_OnShouldRunUpdate() const;

  constexpr void __set_m_OnShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  constexpr float_t& __get_m_PollingFrequency();

  constexpr float_t const& __get_m_PollingFrequency() const;

  constexpr void __set_m_PollingFrequency(float_t value);

  constexpr bool& __get_m_DidCallOnShutdown();

  constexpr bool const& __get_m_DidCallOnShutdown() const;

  constexpr void __set_m_DidCallOnShutdown(bool value);

  constexpr ::System::Action_1<bool>*& __get_m_FocusChangedMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_m_FocusChangedMethod() const;

  constexpr void __set_m_FocusChangedMethod(::System::Action_1<bool>* value);

  static inline void setStaticF_instance(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* value);

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* getStaticF_instance();

  /// @brief Method AllocateDeviceId addr 0x29711e0 size 0x50 virtual true final true
  inline int32_t AllocateDeviceId();

  /// @brief Method Update addr 0x2971230 size 0x58 virtual true final true
  inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method QueueEvent addr 0x2971288 size 0x6c virtual true final true
  inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> ptr);

  /// @brief Method DeviceCommand addr 0x29712f4 size 0xcc virtual true final true
  inline int64_t DeviceCommand(int32_t deviceId, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  /// @brief Method get_onUpdate addr 0x29713c0 size 0x8 virtual true final true
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* get_onUpdate();

  /// @brief Method set_onUpdate addr 0x29713c8 size 0x110 virtual true final true
  inline void set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value);

  /// @brief Method get_onBeforeUpdate addr 0x29714e0 size 0x8 virtual true final true
  inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* get_onBeforeUpdate();

  /// @brief Method set_onBeforeUpdate addr 0x29714e8 size 0x110 virtual true final true
  inline void set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value);

  /// @brief Method get_onShouldRunUpdate addr 0x2971600 size 0x8 virtual true final true
  inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* get_onShouldRunUpdate();

  /// @brief Method set_onShouldRunUpdate addr 0x2971608 size 0x110 virtual true final true
  inline void set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value);

  /// @brief Method get_onDeviceDiscovered addr 0x2971720 size 0x50 virtual true final true
  inline ::System::Action_2<int32_t, ::StringW>* get_onDeviceDiscovered();

  /// @brief Method set_onDeviceDiscovered addr 0x2971770 size 0x58 virtual true final true
  inline void set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value);

  /// @brief Method get_onShutdown addr 0x29717c8 size 0x8 virtual true final true
  inline ::System::Action* get_onShutdown();

  /// @brief Method set_onShutdown addr 0x29717d0 size 0xd0 virtual true final true
  inline void set_onShutdown(::System::Action* value);

  /// @brief Method get_onPlayerFocusChanged addr 0x29718a0 size 0x8 virtual true final true
  inline ::System::Action_1<bool>* get_onPlayerFocusChanged();

  /// @brief Method set_onPlayerFocusChanged addr 0x29718a8 size 0xd0 virtual true final true
  inline void set_onPlayerFocusChanged(::System::Action_1<bool>* value);

  /// @brief Method get_isPlayerFocused addr 0x2971978 size 0x8 virtual true final true
  inline bool get_isPlayerFocused();

  /// @brief Method get_pollingFrequency addr 0x2971980 size 0x8 virtual true final true
  inline float_t get_pollingFrequency();

  /// @brief Method set_pollingFrequency addr 0x2971988 size 0x68 virtual true final true
  inline void set_pollingFrequency(float_t value);

  /// @brief Method get_currentTime addr 0x29719f0 size 0x50 virtual true final true
  inline double_t get_currentTime();

  /// @brief Method get_currentTimeForFixedUpdate addr 0x2971a40 size 0x2c virtual true final true
  inline double_t get_currentTimeForFixedUpdate();

  /// @brief Method get_currentTimeOffsetToRealtimeSinceStartup addr 0x2971a6c size 0x50 virtual true final true
  inline double_t get_currentTimeOffsetToRealtimeSinceStartup();

  /// @brief Method get_unscaledGameTime addr 0x2971abc size 0x8 virtual true final true
  inline float_t get_unscaledGameTime();

  /// @brief Method get_runInBackground addr 0x2971ac4 size 0x8 virtual true final true
  inline bool get_runInBackground();

  /// @brief Method OnShutdown addr 0x2971acc size 0x24 virtual false final false
  inline void OnShutdown();

  /// @brief Method OnWantsToShutdown addr 0x2971af0 size 0x40 virtual false final false
  inline bool OnWantsToShutdown();

  /// @brief Method OnFocusChanged addr 0x2971b30 size 0x28 virtual false final false
  inline void OnFocusChanged(bool focus);

  /// @brief Method get_screenSize addr 0x2971b58 size 0x28 virtual true final true
  inline ::UnityEngine::Vector2 get_screenSize();

  /// @brief Method get_screenOrientation addr 0x2971b80 size 0x8 virtual true final true
  inline ::UnityEngine::ScreenOrientation get_screenOrientation();

  /// @brief Method get_isInBatchMode addr 0x2971b88 size 0x8 virtual true final true
  inline bool get_isInBatchMode();

  /// @brief Method RegisterAnalyticsEvent addr 0x2971b90 size 0x4 virtual false final false
  inline void RegisterAnalyticsEvent(::StringW name, int32_t maxPerHour, int32_t maxPropertiesPerEvent);

  /// @brief Method SendAnalyticsEvent addr 0x2971b94 size 0x4 virtual false final false
  inline void SendAnalyticsEvent(::StringW name, ::System::Object* data);

  static inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* New_ctor();

  /// @brief Method .ctor addr 0x2971b98 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputRuntime(NativeInputRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputRuntime(NativeInputRuntime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputRuntime();

public:
  /// @brief Field m_ShutdownMethod, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___m_ShutdownMethod;

  /// @brief Field m_OnUpdate, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* ___m_OnUpdate;

  /// @brief Field m_OnBeforeUpdate, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* ___m_OnBeforeUpdate;

  /// @brief Field m_OnShouldRunUpdate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* ___m_OnShouldRunUpdate;

  /// @brief Field m_PollingFrequency, offset: 0x30, size: 0x4, def value: None
  float_t ___m_PollingFrequency;

  /// @brief Field m_DidCallOnShutdown, offset: 0x34, size: 0x1, def value: None
  bool ___m_DidCallOnShutdown;

  /// @brief Field m_FocusChangedMethod, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<bool>* ___m_FocusChangedMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_ShutdownMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnBeforeUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_OnShouldRunUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_PollingFrequency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_DidCallOnShutdown) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime, ___m_FocusChangedMethod) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass7_0");
