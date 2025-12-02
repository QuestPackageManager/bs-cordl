#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventTrace)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventTrace_DeviceInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventTrace_FileFlags;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace_ReplayController;
}
namespace UnityEngine::InputSystem::LowLevel {
class ReplayController_InputEventTrace___c;
}
namespace UnityEngine::InputSystem::LowLevel {
class ReplayController_InputEventTrace___c__DisplayClass43_0;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventTrace_FileFlags;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace_ReplayController;
}
namespace UnityEngine::InputSystem::LowLevel {
class ReplayController_InputEventTrace___c;
}
namespace UnityEngine::InputSystem::LowLevel {
class ReplayController_InputEventTrace___c__DisplayClass43_0;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventTrace_DeviceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo);
// Dependencies System.Object, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
class CORDL_TYPE InputEventTrace_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_ChangeCounter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChangeCounter, put = __cordl_internal_set_m_ChangeCounter)) int32_t m_ChangeCounter;

  /// @brief Field m_Current, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Current, put = __cordl_internal_set_m_Current)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_Current;

  /// @brief Field m_Trace, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Trace, put = __cordl_internal_set_m_Trace)) ::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_Trace;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6395d38, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x6395d44, size 0xc4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* New_ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method Reset, addr 0x6395e08, size 0x20, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6395e30, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get_m_ChangeCounter() const;

  constexpr int32_t& __cordl_internal_get_m_ChangeCounter();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_Current() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_Current();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace* const& __cordl_internal_get_m_Trace() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace*& __cordl_internal_get_m_Trace();

  constexpr void __cordl_internal_set_m_ChangeCounter(int32_t value);

  constexpr void __cordl_internal_set_m_Current(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  constexpr void __cordl_internal_set_m_Trace(::UnityEngine::InputSystem::LowLevel::InputEventTrace* value);

  /// @brief Method .ctor, addr 0x6395570, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method get_Current, addr 0x6395e28, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventTrace_Enumerator(InputEventTrace_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventTrace_Enumerator(InputEventTrace_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9006 };

  /// @brief Field m_Trace, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventTrace* ___m_Trace;

  /// @brief Field m_ChangeCounter, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ChangeCounter;

  /// @brief Field m_Current, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr ___m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator, ___m_Trace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator, ___m_ChangeCounter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator, ___m_Current) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/FileFlags
struct CORDL_TYPE InputEventTrace_FileFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputEventTrace_FileFlags_Unwrapped
  enum struct __InputEventTrace_FileFlags_Unwrapped : int32_t {
    __E_FixedUpdate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputEventTrace_FileFlags_Unwrapped() const noexcept {
    return static_cast<__InputEventTrace_FileFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace_FileFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputEventTrace_FileFlags(int32_t value__) noexcept;

  /// @brief Field FixedUpdate value: I32(1)
  static ::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags const FixedUpdate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9007 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController/<>c
class CORDL_TYPE ReplayController_InputEventTrace___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0)) ::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* __9__38_0;

  static inline ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c* New_ctor();

  /// @brief Method <PlayAllEventsAccordingToTimestamps>b__38_0, addr 0x6397550, size 0x108, virtual false, abstract: false, final false
  inline int32_t _PlayAllEventsAccordingToTimestamps_b__38_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr a, ::UnityEngine::InputSystem::LowLevel::InputEventPtr b);

  /// @brief Method .ctor, addr 0x639754c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* getStaticF___9__38_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c* value);

  static inline void setStaticF___9__38_0(::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplayController_InputEventTrace___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplayController_InputEventTrace___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplayController_InputEventTrace___c(ReplayController_InputEventTrace___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplayController_InputEventTrace___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplayController_InputEventTrace___c(ReplayController_InputEventTrace___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController/<>c__DisplayClass43_0
class CORDL_TYPE ReplayController_InputEventTrace___c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field originalDeviceId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_originalDeviceId, put = __cordl_internal_set_originalDeviceId)) int32_t originalDeviceId;

  static inline ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0* New_ctor();

  /// @brief Method <ApplyDeviceMapping>b__0, addr 0x6397658, size 0x14, virtual false, abstract: false, final false
  inline bool _ApplyDeviceMapping_b__0(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo x);

  constexpr int32_t const& __cordl_internal_get_originalDeviceId() const;

  constexpr int32_t& __cordl_internal_get_originalDeviceId();

  constexpr void __cordl_internal_set_originalDeviceId(int32_t value);

  /// @brief Method .ctor, addr 0x63974f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplayController_InputEventTrace___c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplayController_InputEventTrace___c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplayController_InputEventTrace___c__DisplayClass43_0(ReplayController_InputEventTrace___c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplayController_InputEventTrace___c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplayController_InputEventTrace___c__DisplayClass43_0(ReplayController_InputEventTrace___c__DisplayClass43_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9009 };

  /// @brief Field originalDeviceId, offset: 0x10, size: 0x4, def value: None
  int32_t ___originalDeviceId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0, ___originalDeviceId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
class CORDL_TYPE InputEventTrace_ReplayController : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c;

  using __c__DisplayClass43_0 = ::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0;

  /// @brief Field <finished>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__finished_k__BackingField, put = __cordl_internal_set__finished_k__BackingField)) bool _finished_k__BackingField;

  /// @brief Field <paused>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__paused_k__BackingField, put = __cordl_internal_set__paused_k__BackingField)) bool _paused_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField)) int32_t _position_k__BackingField;

  __declspec(property(get = get_createdDevices)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* createdDevices;

  __declspec(property(get = get_finished, put = set_finished)) bool finished;

  /// @brief Field m_AllEventsByTime, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllEventsByTime,
                      put = __cordl_internal_set_m_AllEventsByTime)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_AllEventsByTime;

  /// @brief Field m_AllEventsByTimeIndex, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AllEventsByTimeIndex, put = __cordl_internal_set_m_AllEventsByTimeIndex)) int32_t m_AllEventsByTimeIndex;

  /// @brief Field m_CreateNewDevices, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateNewDevices, put = __cordl_internal_set_m_CreateNewDevices)) bool m_CreateNewDevices;

  /// @brief Field m_CreatedDevices, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_m_CreatedDevices,
                      put = __cordl_internal_set_m_CreatedDevices)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*>
      m_CreatedDevices;

  /// @brief Field m_DeviceIDMappings, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_DeviceIDMappings,
                      put = __cordl_internal_set_m_DeviceIDMappings)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>
      m_DeviceIDMappings;

  /// @brief Field m_Enumerator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Enumerator, put = __cordl_internal_set_m_Enumerator)) ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* m_Enumerator;

  /// @brief Field m_EventTrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventTrace, put = __cordl_internal_set_m_EventTrace)) ::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace;

  /// @brief Field m_OnEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEvent, put = __cordl_internal_set_m_OnEvent)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_OnEvent;

  /// @brief Field m_OnFinished, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnFinished, put = __cordl_internal_set_m_OnFinished)) ::System::Action* m_OnFinished;

  /// @brief Field m_StartTimeAsPerFirstEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartTimeAsPerFirstEvent, put = __cordl_internal_set_m_StartTimeAsPerFirstEvent)) double_t m_StartTimeAsPerFirstEvent;

  /// @brief Field m_StartTimeAsPerRuntime, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartTimeAsPerRuntime, put = __cordl_internal_set_m_StartTimeAsPerRuntime)) double_t m_StartTimeAsPerRuntime;

  __declspec(property(get = get_paused, put = set_paused)) bool paused;

  __declspec(property(get = get_position, put = set_position)) int32_t position;

  __declspec(property(get = get_trace)) ::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyDeviceMapping, addr 0x6397108, size 0x3ec, virtual false, abstract: false, final false
  inline int32_t ApplyDeviceMapping(int32_t originalDeviceId);

  /// @brief Method Dispose, addr 0x6395f30, size 0x2f4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finished, addr 0x6397034, size 0xd4, virtual false, abstract: false, final false
  inline void Finished();

  /// @brief Method MoveNext, addr 0x63964ac, size 0x31c, virtual false, abstract: false, final false
  inline bool MoveNext(bool skipFrameEvents, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr);

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* New_ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method OnBeginFrame, addr 0x6396e5c, size 0x1d8, virtual false, abstract: false, final false
  inline void OnBeginFrame();

  /// @brief Method OnEvent, addr 0x6396420, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* action);

  /// @brief Method OnFinished, addr 0x6396418, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnFinished(::System::Action* action);

  /// @brief Method PlayAllEvents, addr 0x6396ad8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEvents();

  /// @brief Method PlayAllEventsAccordingToTimestamps, addr 0x6396b7c, size 0x2e0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEventsAccordingToTimestamps();

  /// @brief Method PlayAllFramesOneByOne, addr 0x6396a24, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllFramesOneByOne();

  /// @brief Method PlayOneEvent, addr 0x6396428, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayOneEvent();

  /// @brief Method QueueEvent, addr 0x63967c8, size 0x244, virtual false, abstract: false, final false
  inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method Rewind, addr 0x6396a0c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* Rewind();

  /// @brief Method WithAllDevicesMappedToNewInstances, addr 0x639640c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithAllDevicesMappedToNewInstances();

  /// @brief Method WithDeviceMappedFromTo, addr 0x6396224, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* recordedDevice,
                                                                                                        ::UnityEngine::InputSystem::InputDevice* playbackDevice);

  /// @brief Method WithDeviceMappedFromTo, addr 0x63962a8, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo(int32_t recordedDeviceId, int32_t playbackDeviceId);

  constexpr bool const& __cordl_internal_get__finished_k__BackingField() const;

  constexpr bool& __cordl_internal_get__finished_k__BackingField();

  constexpr bool const& __cordl_internal_get__paused_k__BackingField() const;

  constexpr bool& __cordl_internal_get__paused_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__position_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__position_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const& __cordl_internal_get_m_AllEventsByTime() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_AllEventsByTime();

  constexpr int32_t const& __cordl_internal_get_m_AllEventsByTimeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_AllEventsByTimeIndex();

  constexpr bool const& __cordl_internal_get_m_CreateNewDevices() const;

  constexpr bool& __cordl_internal_get_m_CreateNewDevices();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_CreatedDevices() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*>& __cordl_internal_get_m_CreatedDevices();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> const& __cordl_internal_get_m_DeviceIDMappings() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>& __cordl_internal_get_m_DeviceIDMappings();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* const& __cordl_internal_get_m_Enumerator() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator*& __cordl_internal_get_m_Enumerator();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace* const& __cordl_internal_get_m_EventTrace() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace*& __cordl_internal_get_m_EventTrace();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const& __cordl_internal_get_m_OnEvent() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_OnEvent();

  constexpr ::System::Action* const& __cordl_internal_get_m_OnFinished() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnFinished();

  constexpr double_t const& __cordl_internal_get_m_StartTimeAsPerFirstEvent() const;

  constexpr double_t& __cordl_internal_get_m_StartTimeAsPerFirstEvent();

  constexpr double_t const& __cordl_internal_get_m_StartTimeAsPerRuntime() const;

  constexpr double_t& __cordl_internal_get_m_StartTimeAsPerRuntime();

  constexpr void __cordl_internal_set__finished_k__BackingField(bool value);

  constexpr void __cordl_internal_set__paused_k__BackingField(bool value);

  constexpr void __cordl_internal_set__position_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_AllEventsByTime(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr void __cordl_internal_set_m_AllEventsByTimeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CreateNewDevices(bool value);

  constexpr void __cordl_internal_set_m_CreatedDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> value);

  constexpr void __cordl_internal_set_m_DeviceIDMappings(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> value);

  constexpr void __cordl_internal_set_m_Enumerator(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* value);

  constexpr void __cordl_internal_set_m_EventTrace(::UnityEngine::InputSystem::LowLevel::InputEventTrace* value);

  constexpr void __cordl_internal_set_m_OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr void __cordl_internal_set_m_OnFinished(::System::Action* value);

  constexpr void __cordl_internal_set_m_StartTimeAsPerFirstEvent(double_t value);

  constexpr void __cordl_internal_set_m_StartTimeAsPerRuntime(double_t value);

  /// @brief Method .ctor, addr 0x6394fbc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method get_createdDevices, addr 0x6395ec8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* get_createdDevices();

  /// @brief Method get_finished, addr 0x6395e98, size 0x8, virtual false, abstract: false, final false
  inline bool get_finished();

  /// @brief Method get_paused, addr 0x6395ea8, size 0x8, virtual false, abstract: false, final false
  inline bool get_paused();

  /// @brief Method get_position, addr 0x6395eb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_position();

  /// @brief Method get_trace, addr 0x6395e90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_finished, addr 0x6395ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_finished(bool value);

  /// @brief Method set_paused, addr 0x6395eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_paused(bool value);

  /// @brief Method set_position, addr 0x6395ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_position(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace_ReplayController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace_ReplayController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventTrace_ReplayController(InputEventTrace_ReplayController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace_ReplayController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventTrace_ReplayController(InputEventTrace_ReplayController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9010 };

  /// @brief Field <finished>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____finished_k__BackingField;

  /// @brief Field <paused>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____paused_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____position_k__BackingField;

  /// @brief Field m_EventTrace, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventTrace* ___m_EventTrace;

  /// @brief Field m_Enumerator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* ___m_Enumerator;

  /// @brief Field m_DeviceIDMappings, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> ___m_DeviceIDMappings;

  /// @brief Field m_CreateNewDevices, offset: 0x40, size: 0x1, def value: None
  bool ___m_CreateNewDevices;

  /// @brief Field m_CreatedDevices, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> ___m_CreatedDevices;

  /// @brief Field m_OnFinished, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___m_OnFinished;

  /// @brief Field m_OnEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___m_OnEvent;

  /// @brief Field m_StartTimeAsPerFirstEvent, offset: 0x70, size: 0x8, def value: None
  double_t ___m_StartTimeAsPerFirstEvent;

  /// @brief Field m_StartTimeAsPerRuntime, offset: 0x78, size: 0x8, def value: None
  double_t ___m_StartTimeAsPerRuntime;

  /// @brief Field m_AllEventsByTimeIndex, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_AllEventsByTimeIndex;

  /// @brief Field m_AllEventsByTime, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___m_AllEventsByTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ____finished_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ____paused_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ____position_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_EventTrace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_Enumerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_DeviceIDMappings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_CreateNewDevices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_CreatedDevices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_OnFinished) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_OnEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_StartTimeAsPerFirstEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_StartTimeAsPerRuntime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_AllEventsByTimeIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, ___m_AllEventsByTime) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController, 0x90>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo
struct CORDL_TYPE InputEventTrace_DeviceInfo {
public:
  // Declarations
  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_layout, put = set_layout)) ::StringW layout;

  __declspec(property(get = get_stateFormat, put = set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes, put = set_stateSizeInBytes)) int32_t stateSizeInBytes;

  /// @brief Method get_deviceId, addr 0x639766c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_layout, addr 0x639767c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_layout();

  /// @brief Method get_stateFormat, addr 0x639768c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateSizeInBytes, addr 0x639769c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method set_deviceId, addr 0x6397674, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method set_layout, addr 0x6397684, size 0x8, virtual false, abstract: false, final false
  inline void set_layout(::StringW value);

  /// @brief Method set_stateFormat, addr 0x6397694, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_stateSizeInBytes, addr 0x63976a4, size 0x8, virtual false, abstract: false, final false
  inline void set_stateSizeInBytes(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace_DeviceInfo();

  // Ctor Parameters [CppParam { name: "m_DeviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_StateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "m_StateSizeInBytes", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_FullLayoutJson", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr InputEventTrace_DeviceInfo(int32_t m_DeviceId, ::StringW m_Layout, ::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat, int32_t m_StateSizeInBytes,
                                       ::StringW m_FullLayoutJson) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_DeviceId, offset: 0x0, size: 0x4, def value: None
  int32_t m_DeviceId;

  /// @brief Field m_Layout, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Layout;

  /// @brief Field m_StateFormat, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat;

  /// @brief Field m_StateSizeInBytes, offset: 0x14, size: 0x4, def value: None
  int32_t m_StateSizeInBytes;

  /// @brief Field m_FullLayoutJson, offset: 0x18, size: 0x8, def value: None
  ::StringW m_FullLayoutJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, m_Layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, m_StateFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, m_StateSizeInBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, m_FullLayoutJson) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace
class CORDL_TYPE InputEventTrace : public ::System::Object {
public:
  // Declarations
  using DeviceInfo = ::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo;

  using Enumerator = ::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator;

  using FileFlags = ::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags;

  using ReplayController = ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController;

  __declspec(property(get = get_allocatedSizeInBytes)) int64_t allocatedSizeInBytes;

  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_deviceInfos)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo> deviceInfos;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_eventCount)) int64_t eventCount;

  /// @brief Field kFileVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kFileVersion, put = setStaticF_kFileVersion)) int32_t kFileVersion;

  /// @brief Field k_InputEvenTraceMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_InputEvenTraceMarker, put = setStaticF_k_InputEvenTraceMarker)) ::Unity::Profiling::ProfilerMarker k_InputEvenTraceMarker;

  /// @brief Field m_ChangeCounter, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChangeCounter, put = __cordl_internal_set_m_ChangeCounter)) int32_t m_ChangeCounter;

  /// @brief Field m_DeviceId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeviceId, put = __cordl_internal_set_m_DeviceId)) int32_t m_DeviceId;

  /// @brief Field m_DeviceInfos, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DeviceInfos,
      put = __cordl_internal_set_m_DeviceInfos)) ::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>*>
      m_DeviceInfos;

  /// @brief Field m_Enabled, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  __declspec(property(get = get_m_EventBuffer, put = set_m_EventBuffer)) uint8_t* m_EventBuffer;

  __declspec(property(get = get_m_EventBufferHead, put = set_m_EventBufferHead)) uint8_t* m_EventBufferHead;

  /// @brief Field m_EventBufferHeadStorage, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventBufferHeadStorage, put = __cordl_internal_set_m_EventBufferHeadStorage)) uint64_t m_EventBufferHeadStorage;

  /// @brief Field m_EventBufferSize, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventBufferSize, put = __cordl_internal_set_m_EventBufferSize)) int64_t m_EventBufferSize;

  /// @brief Field m_EventBufferStorage, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventBufferStorage, put = __cordl_internal_set_m_EventBufferStorage)) uint64_t m_EventBufferStorage;

  __declspec(property(get = get_m_EventBufferTail, put = set_m_EventBufferTail)) uint8_t* m_EventBufferTail;

  /// @brief Field m_EventBufferTailStorage, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventBufferTailStorage, put = __cordl_internal_set_m_EventBufferTailStorage)) uint64_t m_EventBufferTailStorage;

  /// @brief Field m_EventCount, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventCount, put = __cordl_internal_set_m_EventCount)) int64_t m_EventCount;

  /// @brief Field m_EventListeners, offset 0x28, size 0x50
  __declspec(property(get = __cordl_internal_get_m_EventListeners,
                      put = __cordl_internal_set_m_EventListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>
      m_EventListeners;

  /// @brief Field m_EventSizeInBytes, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSizeInBytes, put = __cordl_internal_set_m_EventSizeInBytes)) int64_t m_EventSizeInBytes;

  /// @brief Field m_GrowIncrementSize, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GrowIncrementSize, put = __cordl_internal_set_m_GrowIncrementSize)) int64_t m_GrowIncrementSize;

  /// @brief Field m_HasWrapped, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasWrapped, put = __cordl_internal_set_m_HasWrapped)) bool m_HasWrapped;

  /// @brief Field m_MaxEventBufferSize, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxEventBufferSize, put = __cordl_internal_set_m_MaxEventBufferSize)) int64_t m_MaxEventBufferSize;

  /// @brief Field m_OnFilterEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnFilterEvent,
                      put =
                          __cordl_internal_set_m_OnFilterEvent)) ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* m_OnFilterEvent;

  /// @brief Field m_RecordFrameMarkers, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RecordFrameMarkers, put = __cordl_internal_set_m_RecordFrameMarkers)) bool m_RecordFrameMarkers;

  __declspec(property(get = get_maxSizeInBytes)) int64_t maxSizeInBytes;

  __declspec(property(get = get_onFilterEvent,
                      put = set_onFilterEvent)) ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* onFilterEvent;

  __declspec(property(get = get_recordFrameMarkers, put = set_recordFrameMarkers)) bool recordFrameMarkers;

  __declspec(property(get = get_totalEventSizeInBytes)) int64_t totalEventSizeInBytes;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Allocate, addr 0x6395518, size 0x50, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method Clear, addr 0x6395324, size 0x1c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Disable, addr 0x6394e48, size 0x174, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Dispose, addr 0x6395590, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x6395340, size 0x1d8, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method GetEnumerator, addr 0x639421c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator();

  /// @brief Method GetNextEvent, addr 0x63952ac, size 0x78, virtual false, abstract: false, final false
  inline bool GetNextEvent(::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> current);

  /// @brief Method LoadFrom, addr 0x6394b24, size 0x1b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::StringW filePath);

  /// @brief Method LoadFrom, addr 0x6394cd4, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::System::IO::Stream* stream);

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* New_ctor(int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* New_ctor(::UnityEngine::InputSystem::InputDevice* device, int64_t bufferSizeInBytes, bool growBuffer,
                                                                                int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  /// @brief Method OnBeforeUpdate, addr 0x6395610, size 0x178, virtual false, abstract: false, final false
  inline void OnBeforeUpdate();

  /// @brief Method OnInputEvent, addr 0x6395788, size 0x52c, virtual false, abstract: false, final false
  inline void OnInputEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ReadFrom, addr 0x639427c, size 0x180, virtual false, abstract: false, final false
  inline void ReadFrom(::StringW filePath);

  /// @brief Method ReadFrom, addr 0x63943fc, size 0x710, virtual false, abstract: false, final false
  inline void ReadFrom(::System::IO::Stream* stream);

  /// @brief Method Release, addr 0x63955a8, size 0x68, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Replay, addr 0x6394de4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* Replay();

  /// @brief Method Resize, addr 0x6395014, size 0x290, virtual false, abstract: false, final false
  inline bool Resize(int64_t newBufferSize, int64_t newMaxBufferSize);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x639558c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method WriteTo, addr 0x63939b4, size 0x180, virtual false, abstract: false, final false
  inline void WriteTo(::StringW filePath);

  /// @brief Method WriteTo, addr 0x6393b34, size 0x6dc, virtual false, abstract: false, final false
  inline void WriteTo(::System::IO::Stream* stream);

  constexpr int32_t const& __cordl_internal_get_m_ChangeCounter() const;

  constexpr int32_t& __cordl_internal_get_m_ChangeCounter();

  constexpr int32_t const& __cordl_internal_get_m_DeviceId() const;

  constexpr int32_t& __cordl_internal_get_m_DeviceId();

  constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>*> const&
  __cordl_internal_get_m_DeviceInfos() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>*>&
  __cordl_internal_get_m_DeviceInfos();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr uint64_t const& __cordl_internal_get_m_EventBufferHeadStorage() const;

  constexpr uint64_t& __cordl_internal_get_m_EventBufferHeadStorage();

  constexpr int64_t const& __cordl_internal_get_m_EventBufferSize() const;

  constexpr int64_t& __cordl_internal_get_m_EventBufferSize();

  constexpr uint64_t const& __cordl_internal_get_m_EventBufferStorage() const;

  constexpr uint64_t& __cordl_internal_get_m_EventBufferStorage();

  constexpr uint64_t const& __cordl_internal_get_m_EventBufferTailStorage() const;

  constexpr uint64_t& __cordl_internal_get_m_EventBufferTailStorage();

  constexpr int64_t const& __cordl_internal_get_m_EventCount() const;

  constexpr int64_t& __cordl_internal_get_m_EventCount();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_m_EventListeners() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __cordl_internal_get_m_EventListeners();

  constexpr int64_t const& __cordl_internal_get_m_EventSizeInBytes() const;

  constexpr int64_t& __cordl_internal_get_m_EventSizeInBytes();

  constexpr int64_t const& __cordl_internal_get_m_GrowIncrementSize() const;

  constexpr int64_t& __cordl_internal_get_m_GrowIncrementSize();

  constexpr bool const& __cordl_internal_get_m_HasWrapped() const;

  constexpr bool& __cordl_internal_get_m_HasWrapped();

  constexpr int64_t const& __cordl_internal_get_m_MaxEventBufferSize() const;

  constexpr int64_t& __cordl_internal_get_m_MaxEventBufferSize();

  constexpr ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* const& __cordl_internal_get_m_OnFilterEvent() const;

  constexpr ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>*& __cordl_internal_get_m_OnFilterEvent();

  constexpr bool const& __cordl_internal_get_m_RecordFrameMarkers() const;

  constexpr bool& __cordl_internal_get_m_RecordFrameMarkers();

  constexpr void __cordl_internal_set_m_ChangeCounter(int32_t value);

  constexpr void __cordl_internal_set_m_DeviceId(int32_t value);

  constexpr void
  __cordl_internal_set_m_DeviceInfos(::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>*> value);

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr void __cordl_internal_set_m_EventBufferHeadStorage(uint64_t value);

  constexpr void __cordl_internal_set_m_EventBufferSize(int64_t value);

  constexpr void __cordl_internal_set_m_EventBufferStorage(uint64_t value);

  constexpr void __cordl_internal_set_m_EventBufferTailStorage(uint64_t value);

  constexpr void __cordl_internal_set_m_EventCount(int64_t value);

  constexpr void __cordl_internal_set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value);

  constexpr void __cordl_internal_set_m_EventSizeInBytes(int64_t value);

  constexpr void __cordl_internal_set_m_GrowIncrementSize(int64_t value);

  constexpr void __cordl_internal_set_m_HasWrapped(bool value);

  constexpr void __cordl_internal_set_m_MaxEventBufferSize(int64_t value);

  constexpr void __cordl_internal_set_m_OnFilterEvent(::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* value);

  constexpr void __cordl_internal_set_m_RecordFrameMarkers(bool value);

  /// @brief Method .ctor, addr 0x6393978, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  /// @brief Method .ctor, addr 0x63938e0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputDevice* device, int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  /// @brief Method add_onEvent, addr 0x6393828, size 0x5c, virtual false, abstract: false, final false
  inline void add_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline int32_t getStaticF_kFileVersion();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputEvenTraceMarker();

  /// @brief Method get_FrameMarkerEvent, addr 0x639362c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_FrameMarkerEvent();

  /// @brief Method get_allocatedSizeInBytes, addr 0x63937a4, size 0x18, virtual false, abstract: false, final false
  inline int64_t get_allocatedSizeInBytes();

  /// @brief Method get_deviceId, addr 0x6393638, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_deviceInfos, addr 0x63937cc, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo> get_deviceInfos();

  /// @brief Method get_enabled, addr 0x6393648, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_eventCount, addr 0x6393794, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_eventCount();

  /// @brief Method get_kFileFormat, addr 0x6394210, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFileFormat();

  /// @brief Method get_m_EventBuffer, addr 0x63937bc, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_m_EventBuffer();

  /// @brief Method get_m_EventBufferHead, addr 0x63952a4, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_m_EventBufferHead();

  /// @brief Method get_m_EventBufferTail, addr 0x6395568, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_m_EventBufferTail();

  /// @brief Method get_maxSizeInBytes, addr 0x63937c4, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maxSizeInBytes();

  /// @brief Method get_onFilterEvent, addr 0x6393818, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* get_onFilterEvent();

  /// @brief Method get_recordFrameMarkers, addr 0x6393650, size 0x8, virtual false, abstract: false, final false
  inline bool get_recordFrameMarkers();

  /// @brief Method get_totalEventSizeInBytes, addr 0x639379c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_totalEventSizeInBytes();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onEvent, addr 0x6393884, size 0x5c, virtual false, abstract: false, final false
  inline void remove_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline void setStaticF_kFileVersion(int32_t value);

  static inline void setStaticF_k_InputEvenTraceMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_deviceId, addr 0x6393640, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method set_m_EventBuffer, addr 0x6394b0c, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBuffer(uint8_t* value);

  /// @brief Method set_m_EventBufferHead, addr 0x6394b14, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBufferHead(uint8_t* value);

  /// @brief Method set_m_EventBufferTail, addr 0x6394b1c, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBufferTail(uint8_t* value);

  /// @brief Method set_onFilterEvent, addr 0x6393820, size 0x8, virtual false, abstract: false, final false
  inline void set_onFilterEvent(::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* value);

  /// @brief Method set_recordFrameMarkers, addr 0x6393658, size 0x13c, virtual false, abstract: false, final false
  inline void set_recordFrameMarkers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventTrace(InputEventTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventTrace(InputEventTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9012 };

  /// @brief Field kDefaultBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultBufferSize{ static_cast<int32_t>(0x100000) };

  /// @brief Field m_ChangeCounter, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ChangeCounter;

  /// @brief Field m_Enabled, offset: 0x14, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_OnFilterEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* ___m_OnFilterEvent;

  /// @brief Field m_DeviceId, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_DeviceId;

  /// @brief Field m_EventListeners, offset: 0x28, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> ___m_EventListeners;

  /// @brief Field m_EventBufferSize, offset: 0x78, size: 0x8, def value: None
  int64_t ___m_EventBufferSize;

  /// @brief Field m_MaxEventBufferSize, offset: 0x80, size: 0x8, def value: None
  int64_t ___m_MaxEventBufferSize;

  /// @brief Field m_GrowIncrementSize, offset: 0x88, size: 0x8, def value: None
  int64_t ___m_GrowIncrementSize;

  /// @brief Field m_EventCount, offset: 0x90, size: 0x8, def value: None
  int64_t ___m_EventCount;

  /// @brief Field m_EventSizeInBytes, offset: 0x98, size: 0x8, def value: None
  int64_t ___m_EventSizeInBytes;

  /// @brief Field m_EventBufferStorage, offset: 0xa0, size: 0x8, def value: None
  uint64_t ___m_EventBufferStorage;

  /// @brief Field m_EventBufferHeadStorage, offset: 0xa8, size: 0x8, def value: None
  uint64_t ___m_EventBufferHeadStorage;

  /// @brief Field m_EventBufferTailStorage, offset: 0xb0, size: 0x8, def value: None
  uint64_t ___m_EventBufferTailStorage;

  /// @brief Field m_HasWrapped, offset: 0xb8, size: 0x1, def value: None
  bool ___m_HasWrapped;

  /// @brief Field m_RecordFrameMarkers, offset: 0xb9, size: 0x1, def value: None
  bool ___m_RecordFrameMarkers;

  /// @brief Field m_DeviceInfos, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>*> ___m_DeviceInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_ChangeCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_Enabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_OnFilterEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_DeviceId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventListeners) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventBufferSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_MaxEventBufferSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_GrowIncrementSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventSizeInBytes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventBufferStorage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventBufferHeadStorage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_EventBufferTailStorage) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_HasWrapped) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_RecordFrameMarkers) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventTrace, ___m_DeviceInfos) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace_FileFlags, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/FileFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/Enumerator");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ReplayController_InputEventTrace___c__DisplayClass43_0*, "UnityEngine.InputSystem.LowLevel",
                       "InputEventTrace/ReplayController/<>c__DisplayClass43_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/DeviceInfo");
