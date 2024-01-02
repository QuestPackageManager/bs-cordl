#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventTrace)
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventTrace__ReplayController;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventTrace__DeviceInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventTrace__FileFlags;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System::IO {
class Stream;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventTrace__Enumerator;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class __InputEventTrace__ReplayController____c__DisplayClass43_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __InputEventTrace__ReplayController____c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventTrace__FileFlags;
}
namespace GlobalNamespace {
class __InputEventTrace__ReplayController____c;
}
namespace GlobalNamespace {
class __InputEventTrace__ReplayController____c__DisplayClass43_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventTrace__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventTrace__ReplayController;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventTrace__DeviceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags);
MARK_REF_PTR_T(::GlobalNamespace::__InputEventTrace__ReplayController____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventTrace);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo);
// Type: ::Enumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6536)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6538))
// CS Name: ::InputEventTrace::Enumerator*
class CORDL_TYPE __InputEventTrace__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Trace, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Trace, put = __set_m_Trace))::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_Trace;

  /// @brief Field m_ChangeCounter, offset 0x18, size 0x4
  __declspec(property(get = __get_m_ChangeCounter, put = __set_m_ChangeCounter)) int32_t m_ChangeCounter;

  /// @brief Field m_Current, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Current, put = __set_m_Current))::UnityEngine::InputSystem::LowLevel::InputEventPtr m_Current;

  __declspec(property(get = get_Current))::UnityEngine::InputSystem::LowLevel::InputEventPtr Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace*& __get_m_Trace();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputEventTrace*> const& __get_m_Trace() const;

  constexpr void __set_m_Trace(::UnityEngine::InputSystem::LowLevel::InputEventTrace* value);

  constexpr int32_t& __get_m_ChangeCounter();

  constexpr int32_t const& __get_m_ChangeCounter() const;

  constexpr void __set_m_ChangeCounter(int32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __get_m_Current();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __get_m_Current() const;

  constexpr void __set_m_Current(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator* New_ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method .ctor, addr 0x2aee32c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method Dispose, addr 0x2aeeaa4, size 0xc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x2aeeab0, size 0xd0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2aeeb80, size 0x24, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x2aeeba4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aeebac, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventTrace__Enumerator(__InputEventTrace__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventTrace__Enumerator(__InputEventTrace__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__Enumerator();

public:
  /// @brief Field m_Trace, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventTrace* ___m_Trace;

  /// @brief Field m_ChangeCounter, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_ChangeCounter;

  /// @brief Field m_Current, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr ___m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator, ___m_Trace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator, ___m_ChangeCounter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator, ___m_Current) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::FileFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6539))
// CS Name: ::InputEventTrace::FileFlags
struct CORDL_TYPE __InputEventTrace__FileFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputEventTrace__FileFlags_Unwrapped
  enum struct ____InputEventTrace__FileFlags_Unwrapped : int32_t {
    __E_FixedUpdate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputEventTrace__FileFlags_Unwrapped() const noexcept {
    return static_cast<____InputEventTrace__FileFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputEventTrace__FileFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__FileFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FixedUpdate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags const FixedUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6540))
// CS Name: ::InputEventTrace::ReplayController::<>c*
class CORDL_TYPE __InputEventTrace__ReplayController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__InputEventTrace__ReplayController____c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* __9__38_0;

  static inline void setStaticF___9(::GlobalNamespace::__InputEventTrace__ReplayController____c* value);

  static inline ::GlobalNamespace::__InputEventTrace__ReplayController____c* getStaticF___9();

  static inline void setStaticF___9__38_0(::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline ::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* getStaticF___9__38_0();

  static inline ::GlobalNamespace::__InputEventTrace__ReplayController____c* New_ctor();

  /// @brief Method .ctor, addr 0x2af0308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PlayAllEventsAccordingToTimestamps>b__38_0, addr 0x2af0310, size 0xc8, virtual false, abstract: false, final false
  inline int32_t _PlayAllEventsAccordingToTimestamps_b__38_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr a, ::UnityEngine::InputSystem::LowLevel::InputEventPtr b);

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventTrace__ReplayController____c(__InputEventTrace__ReplayController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventTrace__ReplayController____c(__InputEventTrace__ReplayController____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__ReplayController____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputEventTrace__ReplayController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass43_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6541))
// CS Name: ::InputEventTrace::ReplayController::<>c__DisplayClass43_0*
class CORDL_TYPE __InputEventTrace__ReplayController____c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field originalDeviceId, offset 0x10, size 0x4
  __declspec(property(get = __get_originalDeviceId, put = __set_originalDeviceId)) int32_t originalDeviceId;

  constexpr int32_t& __get_originalDeviceId();

  constexpr int32_t const& __get_originalDeviceId() const;

  constexpr void __set_originalDeviceId(int32_t value);

  static inline ::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0* New_ctor();

  /// @brief Method .ctor, addr 0x2af029c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ApplyDeviceMapping>b__0, addr 0x2af03d8, size 0x14, virtual false, abstract: false, final false
  inline bool _ApplyDeviceMapping_b__0(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo x);

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventTrace__ReplayController____c__DisplayClass43_0(__InputEventTrace__ReplayController____c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventTrace__ReplayController____c__DisplayClass43_0(__InputEventTrace__ReplayController____c__DisplayClass43_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__ReplayController____c__DisplayClass43_0();

public:
  /// @brief Field originalDeviceId, offset: 0x10, size: 0x4, def value: None
  int32_t ___originalDeviceId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0, ___originalDeviceId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ReplayController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 533 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3057 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3841)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 2036 }), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(6239)), TypeDefinitionIndex(TypeDefinitionIndex(6669))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6542)) CS Name: ::InputEventTrace::ReplayController*
class CORDL_TYPE __InputEventTrace__ReplayController : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass43_0 = ::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0;

  using __c = ::GlobalNamespace::__InputEventTrace__ReplayController____c;

  /// @brief Field <finished>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__finished_k__BackingField, put = __set__finished_k__BackingField)) bool _finished_k__BackingField;

  /// @brief Field <paused>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __get__paused_k__BackingField, put = __set__paused_k__BackingField)) bool _paused_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField)) int32_t _position_k__BackingField;

  /// @brief Field m_EventTrace, offset 0x18, size 0x8
  __declspec(property(get = __get_m_EventTrace, put = __set_m_EventTrace))::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace;

  /// @brief Field m_Enumerator, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Enumerator, put = __set_m_Enumerator))::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator* m_Enumerator;

  /// @brief Field m_DeviceIDMappings, offset 0x28, size 0x18
  __declspec(property(get = __get_m_DeviceIDMappings,
                      put = __set_m_DeviceIDMappings))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> m_DeviceIDMappings;

  /// @brief Field m_CreateNewDevices, offset 0x40, size 0x1
  __declspec(property(get = __get_m_CreateNewDevices, put = __set_m_CreateNewDevices)) bool m_CreateNewDevices;

  /// @brief Field m_CreatedDevices, offset 0x48, size 0x18
  __declspec(property(get = __get_m_CreatedDevices, put = __set_m_CreatedDevices))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> m_CreatedDevices;

  /// @brief Field m_OnFinished, offset 0x60, size 0x8
  __declspec(property(get = __get_m_OnFinished, put = __set_m_OnFinished))::System::Action* m_OnFinished;

  /// @brief Field m_OnEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_m_OnEvent, put = __set_m_OnEvent))::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_OnEvent;

  /// @brief Field m_StartTimeAsPerFirstEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_m_StartTimeAsPerFirstEvent, put = __set_m_StartTimeAsPerFirstEvent)) double_t m_StartTimeAsPerFirstEvent;

  /// @brief Field m_StartTimeAsPerRuntime, offset 0x78, size 0x8
  __declspec(property(get = __get_m_StartTimeAsPerRuntime, put = __set_m_StartTimeAsPerRuntime)) double_t m_StartTimeAsPerRuntime;

  /// @brief Field m_AllEventsByTimeIndex, offset 0x80, size 0x4
  __declspec(property(get = __get_m_AllEventsByTimeIndex, put = __set_m_AllEventsByTimeIndex)) int32_t m_AllEventsByTimeIndex;

  /// @brief Field m_AllEventsByTime, offset 0x88, size 0x8
  __declspec(property(get = __get_m_AllEventsByTime, put = __set_m_AllEventsByTime))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_AllEventsByTime;

  __declspec(property(get = get_trace))::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace;

  __declspec(property(get = get_finished, put = set_finished)) bool finished;

  __declspec(property(get = get_paused, put = set_paused)) bool paused;

  __declspec(property(get = get_position, put = set_position)) int32_t position;

  __declspec(property(get = get_createdDevices))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* createdDevices;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get__finished_k__BackingField();

  constexpr bool const& __get__finished_k__BackingField() const;

  constexpr void __set__finished_k__BackingField(bool value);

  constexpr bool& __get__paused_k__BackingField();

  constexpr bool const& __get__paused_k__BackingField() const;

  constexpr void __set__paused_k__BackingField(bool value);

  constexpr int32_t& __get__position_k__BackingField();

  constexpr int32_t const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(int32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventTrace*& __get_m_EventTrace();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputEventTrace*> const& __get_m_EventTrace() const;

  constexpr void __set_m_EventTrace(::UnityEngine::InputSystem::LowLevel::InputEventTrace* value);

  constexpr ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator*& __get_m_Enumerator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator*> const& __get_m_Enumerator() const;

  constexpr void __set_m_Enumerator(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator* value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>& __get_m_DeviceIDMappings();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> const& __get_m_DeviceIDMappings() const;

  constexpr void __set_m_DeviceIDMappings(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>> value);

  constexpr bool& __get_m_CreateNewDevices();

  constexpr bool const& __get_m_CreateNewDevices() const;

  constexpr void __set_m_CreateNewDevices(bool value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*>& __get_m_CreatedDevices();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> const& __get_m_CreatedDevices() const;

  constexpr void __set_m_CreatedDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> value);

  constexpr ::System::Action*& __get_m_OnFinished();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_OnFinished() const;

  constexpr void __set_m_OnFinished(::System::Action* value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __get_m_OnEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __get_m_OnEvent() const;

  constexpr void __set_m_OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr double_t& __get_m_StartTimeAsPerFirstEvent();

  constexpr double_t const& __get_m_StartTimeAsPerFirstEvent() const;

  constexpr void __set_m_StartTimeAsPerFirstEvent(double_t value);

  constexpr double_t& __get_m_StartTimeAsPerRuntime();

  constexpr double_t const& __get_m_StartTimeAsPerRuntime() const;

  constexpr void __set_m_StartTimeAsPerRuntime(double_t value);

  constexpr int32_t& __get_m_AllEventsByTimeIndex();

  constexpr int32_t const& __get_m_AllEventsByTimeIndex() const;

  constexpr void __set_m_AllEventsByTimeIndex(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __get_m_AllEventsByTime();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __get_m_AllEventsByTime() const;

  constexpr void __set_m_AllEventsByTime(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method get_trace, addr 0x2aeec08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace();

  /// @brief Method get_finished, addr 0x2aeec10, size 0x8, virtual false, abstract: false, final false
  inline bool get_finished();

  /// @brief Method set_finished, addr 0x2aeec18, size 0xc, virtual false, abstract: false, final false
  inline void set_finished(bool value);

  /// @brief Method get_paused, addr 0x2aeec24, size 0x8, virtual false, abstract: false, final false
  inline bool get_paused();

  /// @brief Method set_paused, addr 0x2aeec2c, size 0xc, virtual false, abstract: false, final false
  inline void set_paused(bool value);

  /// @brief Method get_position, addr 0x2aeec38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_position();

  /// @brief Method set_position, addr 0x2aeec40, size 0x8, virtual false, abstract: false, final false
  inline void set_position(int32_t value);

  /// @brief Method get_createdDevices, addr 0x2aeec48, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* get_createdDevices();

  static inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* New_ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method .ctor, addr 0x2aede90, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace);

  /// @brief Method Dispose, addr 0x2aeecac, size 0x320, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method WithDeviceMappedFromTo, addr 0x2aeefcc, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* recordedDevice,
                                                                                                           ::UnityEngine::InputSystem::InputDevice* playbackDevice);

  /// @brief Method WithDeviceMappedFromTo, addr 0x2aef058, size 0x184, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* WithDeviceMappedFromTo(int32_t recordedDeviceId, int32_t playbackDeviceId);

  /// @brief Method WithAllDevicesMappedToNewInstances, addr 0x2aef1dc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* WithAllDevicesMappedToNewInstances();

  /// @brief Method OnFinished, addr 0x2aef1e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* OnFinished(::System::Action* action);

  /// @brief Method OnEvent, addr 0x2aef1f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* action);

  /// @brief Method PlayOneEvent, addr 0x2aef1f8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* PlayOneEvent();

  /// @brief Method Rewind, addr 0x2aef7dc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* Rewind();

  /// @brief Method PlayAllFramesOneByOne, addr 0x2aef7f4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* PlayAllFramesOneByOne();

  /// @brief Method PlayAllEvents, addr 0x2aef8a4, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* PlayAllEvents();

  /// @brief Method PlayAllEventsAccordingToTimestamps, addr 0x2aef95c, size 0x288, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* PlayAllEventsAccordingToTimestamps();

  /// @brief Method OnBeginFrame, addr 0x2aefbe4, size 0x24c, virtual false, abstract: false, final false
  inline void OnBeginFrame();

  /// @brief Method Finished, addr 0x2aefe30, size 0xd0, virtual false, abstract: false, final false
  inline void Finished();

  /// @brief Method QueueEvent, addr 0x2aef5a0, size 0x23c, virtual false, abstract: false, final false
  inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method MoveNext, addr 0x2aef280, size 0x320, virtual false, abstract: false, final false
  inline bool MoveNext(bool skipFrameEvents, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr);

  /// @brief Method ApplyDeviceMapping, addr 0x2aeff00, size 0x39c, virtual false, abstract: false, final false
  inline int32_t ApplyDeviceMapping(int32_t originalDeviceId);

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventTrace__ReplayController(__InputEventTrace__ReplayController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventTrace__ReplayController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventTrace__ReplayController(__InputEventTrace__ReplayController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__ReplayController();

public:
  /// @brief Field <finished>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____finished_k__BackingField;

  /// @brief Field <paused>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____paused_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____position_k__BackingField;

  /// @brief Field m_EventTrace, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventTrace* ___m_EventTrace;

  /// @brief Field m_Enumerator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator* ___m_Enumerator;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ____finished_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ____paused_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ____position_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_EventTrace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_Enumerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_DeviceIDMappings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_CreateNewDevices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_CreatedDevices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_OnFinished) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_OnEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_StartTimeAsPerFirstEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_StartTimeAsPerRuntime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_AllEventsByTimeIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController, ___m_AllEventsByTime) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::DeviceInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6667))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6543))
// CS Name: ::InputEventTrace::DeviceInfo
struct CORDL_TYPE __InputEventTrace__DeviceInfo {
public:
  // Declarations
  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_layout, put = set_layout))::StringW layout;

  __declspec(property(get = get_stateFormat, put = set_stateFormat))::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes, put = set_stateSizeInBytes)) int32_t stateSizeInBytes;

  /// @brief Method get_deviceId, addr 0x2af03ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method set_deviceId, addr 0x2af03f4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method get_layout, addr 0x2af03fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_layout();

  /// @brief Method set_layout, addr 0x2af0404, size 0x8, virtual false, abstract: false, final false
  inline void set_layout(::StringW value);

  /// @brief Method get_stateFormat, addr 0x2af040c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method set_stateFormat, addr 0x2af0414, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method get_stateSizeInBytes, addr 0x2af041c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method set_stateSizeInBytes, addr 0x2af0424, size 0x8, virtual false, abstract: false, final false
  inline void set_stateSizeInBytes(int32_t value);

  // Ctor Parameters [CppParam { name: "m_DeviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_StateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "m_StateSizeInBytes", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_FullLayoutJson", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __InputEventTrace__DeviceInfo(int32_t m_DeviceId, ::StringW m_Layout, ::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat, int32_t m_StateSizeInBytes,
                                          ::StringW m_FullLayoutJson) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventTrace__DeviceInfo();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, m_Layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, m_StateFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, m_StateSizeInBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, m_FullLayoutJson) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventTrace
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2323)), TypeDefinitionIndex(TypeDefinitionIndex(6660)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6660), inst: 986 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 330 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6536))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6544)) CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventTrace*
class CORDL_TYPE InputEventTrace : public ::System::Object {
public:
  // Declarations
  using DeviceInfo = ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo;

  using ReplayController = ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController;

  using FileFlags = ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags;

  using Enumerator = ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator;

  /// @brief Field m_ChangeCounter, offset 0x10, size 0x4
  __declspec(property(get = __get_m_ChangeCounter, put = __set_m_ChangeCounter)) int32_t m_ChangeCounter;

  /// @brief Field m_Enabled, offset 0x14, size 0x1
  __declspec(property(get = __get_m_Enabled, put = __set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_OnFilterEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_m_OnFilterEvent,
                      put = __set_m_OnFilterEvent))::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* m_OnFilterEvent;

  /// @brief Field m_DeviceId, offset 0x20, size 0x4
  __declspec(property(get = __get_m_DeviceId, put = __set_m_DeviceId)) int32_t m_DeviceId;

  /// @brief Field m_EventListeners, offset 0x28, size 0x50
  __declspec(property(get = __get_m_EventListeners,
                      put = __set_m_EventListeners))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> m_EventListeners;

  /// @brief Field m_EventBufferSize, offset 0x78, size 0x8
  __declspec(property(get = __get_m_EventBufferSize, put = __set_m_EventBufferSize)) int64_t m_EventBufferSize;

  /// @brief Field m_MaxEventBufferSize, offset 0x80, size 0x8
  __declspec(property(get = __get_m_MaxEventBufferSize, put = __set_m_MaxEventBufferSize)) int64_t m_MaxEventBufferSize;

  /// @brief Field m_GrowIncrementSize, offset 0x88, size 0x8
  __declspec(property(get = __get_m_GrowIncrementSize, put = __set_m_GrowIncrementSize)) int64_t m_GrowIncrementSize;

  /// @brief Field m_EventCount, offset 0x90, size 0x8
  __declspec(property(get = __get_m_EventCount, put = __set_m_EventCount)) int64_t m_EventCount;

  /// @brief Field m_EventSizeInBytes, offset 0x98, size 0x8
  __declspec(property(get = __get_m_EventSizeInBytes, put = __set_m_EventSizeInBytes)) int64_t m_EventSizeInBytes;

  /// @brief Field m_EventBufferStorage, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_EventBufferStorage, put = __set_m_EventBufferStorage)) uint64_t m_EventBufferStorage;

  /// @brief Field m_EventBufferHeadStorage, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_EventBufferHeadStorage, put = __set_m_EventBufferHeadStorage)) uint64_t m_EventBufferHeadStorage;

  /// @brief Field m_EventBufferTailStorage, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_EventBufferTailStorage, put = __set_m_EventBufferTailStorage)) uint64_t m_EventBufferTailStorage;

  /// @brief Field m_HasWrapped, offset 0xb8, size 0x1
  __declspec(property(get = __get_m_HasWrapped, put = __set_m_HasWrapped)) bool m_HasWrapped;

  /// @brief Field m_RecordFrameMarkers, offset 0xb9, size 0x1
  __declspec(property(get = __get_m_RecordFrameMarkers, put = __set_m_RecordFrameMarkers)) bool m_RecordFrameMarkers;

  /// @brief Field m_DeviceInfos, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_DeviceInfos, put = __set_m_DeviceInfos))::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,
                                                                                     ::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> m_DeviceInfos;

  /// @brief Field kFileVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kFileVersion, put = setStaticF_kFileVersion)) int32_t kFileVersion;

  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_recordFrameMarkers, put = set_recordFrameMarkers)) bool recordFrameMarkers;

  __declspec(property(get = get_eventCount)) int64_t eventCount;

  __declspec(property(get = get_totalEventSizeInBytes)) int64_t totalEventSizeInBytes;

  __declspec(property(get = get_allocatedSizeInBytes)) int64_t allocatedSizeInBytes;

  __declspec(property(get = get_maxSizeInBytes)) int64_t maxSizeInBytes;

  __declspec(property(get = get_deviceInfos))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> deviceInfos;

  __declspec(property(get = get_onFilterEvent,
                      put = set_onFilterEvent))::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* onFilterEvent;

  __declspec(property(get = get_m_EventBuffer, put = set_m_EventBuffer))::cordl_internals::Ptr<uint8_t> m_EventBuffer;

  __declspec(property(get = get_m_EventBufferHead, put = set_m_EventBufferHead))::cordl_internals::Ptr<uint8_t> m_EventBufferHead;

  __declspec(property(get = get_m_EventBufferTail, put = set_m_EventBufferTail))::cordl_internals::Ptr<uint8_t> m_EventBufferTail;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr int32_t& __get_m_ChangeCounter();

  constexpr int32_t const& __get_m_ChangeCounter() const;

  constexpr void __set_m_ChangeCounter(int32_t value);

  constexpr bool& __get_m_Enabled();

  constexpr bool const& __get_m_Enabled() const;

  constexpr void __set_m_Enabled(bool value);

  constexpr ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>*& __get_m_OnFilterEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>*> const&
  __get_m_OnFilterEvent() const;

  constexpr void __set_m_OnFilterEvent(::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* value);

  constexpr int32_t& __get_m_DeviceId();

  constexpr int32_t const& __get_m_DeviceId() const;

  constexpr void __set_m_DeviceId(int32_t value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __get_m_EventListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __get_m_EventListeners() const;

  constexpr void __set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value);

  constexpr int64_t& __get_m_EventBufferSize();

  constexpr int64_t const& __get_m_EventBufferSize() const;

  constexpr void __set_m_EventBufferSize(int64_t value);

  constexpr int64_t& __get_m_MaxEventBufferSize();

  constexpr int64_t const& __get_m_MaxEventBufferSize() const;

  constexpr void __set_m_MaxEventBufferSize(int64_t value);

  constexpr int64_t& __get_m_GrowIncrementSize();

  constexpr int64_t const& __get_m_GrowIncrementSize() const;

  constexpr void __set_m_GrowIncrementSize(int64_t value);

  constexpr int64_t& __get_m_EventCount();

  constexpr int64_t const& __get_m_EventCount() const;

  constexpr void __set_m_EventCount(int64_t value);

  constexpr int64_t& __get_m_EventSizeInBytes();

  constexpr int64_t const& __get_m_EventSizeInBytes() const;

  constexpr void __set_m_EventSizeInBytes(int64_t value);

  constexpr uint64_t& __get_m_EventBufferStorage();

  constexpr uint64_t const& __get_m_EventBufferStorage() const;

  constexpr void __set_m_EventBufferStorage(uint64_t value);

  constexpr uint64_t& __get_m_EventBufferHeadStorage();

  constexpr uint64_t const& __get_m_EventBufferHeadStorage() const;

  constexpr void __set_m_EventBufferHeadStorage(uint64_t value);

  constexpr uint64_t& __get_m_EventBufferTailStorage();

  constexpr uint64_t const& __get_m_EventBufferTailStorage() const;

  constexpr void __set_m_EventBufferTailStorage(uint64_t value);

  constexpr bool& __get_m_HasWrapped();

  constexpr bool const& __get_m_HasWrapped() const;

  constexpr void __set_m_HasWrapped(bool value);

  constexpr bool& __get_m_RecordFrameMarkers();

  constexpr bool const& __get_m_RecordFrameMarkers() const;

  constexpr void __set_m_RecordFrameMarkers(bool value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>& __get_m_DeviceInfos();

  constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> const&
  __get_m_DeviceInfos() const;

  constexpr void
  __set_m_DeviceInfos(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> value);

  static inline void setStaticF_kFileVersion(int32_t value);

  static inline int32_t getStaticF_kFileVersion();

  /// @brief Method get_FrameMarkerEvent, addr 0x2aec41c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_FrameMarkerEvent();

  /// @brief Method get_deviceId, addr 0x2aec44c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method set_deviceId, addr 0x2aec454, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method get_enabled, addr 0x2aec45c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_recordFrameMarkers, addr 0x2aec464, size 0x8, virtual false, abstract: false, final false
  inline bool get_recordFrameMarkers();

  /// @brief Method set_recordFrameMarkers, addr 0x2aec46c, size 0xf0, virtual false, abstract: false, final false
  inline void set_recordFrameMarkers(bool value);

  /// @brief Method get_eventCount, addr 0x2aec55c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_eventCount();

  /// @brief Method get_totalEventSizeInBytes, addr 0x2aec564, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_totalEventSizeInBytes();

  /// @brief Method get_allocatedSizeInBytes, addr 0x2aec56c, size 0x18, virtual false, abstract: false, final false
  inline int64_t get_allocatedSizeInBytes();

  /// @brief Method get_maxSizeInBytes, addr 0x2aec58c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maxSizeInBytes();

  /// @brief Method get_deviceInfos, addr 0x2aec594, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> get_deviceInfos();

  /// @brief Method get_onFilterEvent, addr 0x2aec5dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* get_onFilterEvent();

  /// @brief Method set_onFilterEvent, addr 0x2aec5e4, size 0x8, virtual false, abstract: false, final false
  inline void set_onFilterEvent(::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, bool>* value);

  /// @brief Method add_onEvent, addr 0x2aec5ec, size 0x58, virtual false, abstract: false, final false
  inline void add_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method remove_onEvent, addr 0x2aec644, size 0x58, virtual false, abstract: false, final false
  inline void remove_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* New_ctor(::UnityEngine::InputSystem::InputDevice* device, int64_t bufferSizeInBytes, bool growBuffer,
                                                                                int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  /// @brief Method .ctor, addr 0x2aec69c, size 0xd8, virtual false, abstract: false, final false
  /// @param bufferSizeInBytes: int64_t (default: static_cast<int64_t>(0x100000))
  /// @param growBuffer: bool (default: false)
  /// @param maxBufferSizeInBytes: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  /// @param growIncrementSizeInBytes: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  inline void _ctor(::UnityEngine::InputSystem::InputDevice* device, int64_t bufferSizeInBytes = static_cast<int64_t>(0x100000), bool growBuffer = false,
                    int64_t maxBufferSizeInBytes = static_cast<int64_t>(0xffffffffffffffff), int64_t growIncrementSizeInBytes = static_cast<int64_t>(0xffffffffffffffff));

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* New_ctor(int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes);

  /// @brief Method .ctor, addr 0x2aec774, size 0x70, virtual false, abstract: false, final false
  /// @param bufferSizeInBytes: int64_t (default: static_cast<int64_t>(0x100000))
  /// @param growBuffer: bool (default: false)
  /// @param maxBufferSizeInBytes: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  /// @param growIncrementSizeInBytes: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  inline void _ctor(int64_t bufferSizeInBytes = static_cast<int64_t>(0x100000), bool growBuffer = false, int64_t maxBufferSizeInBytes = static_cast<int64_t>(0xffffffffffffffff),
                    int64_t growIncrementSizeInBytes = static_cast<int64_t>(0xffffffffffffffff));

  /// @brief Method WriteTo, addr 0x2aec7e4, size 0x1d4, virtual false, abstract: false, final false
  inline void WriteTo(::StringW filePath);

  /// @brief Method WriteTo, addr 0x2aec9b8, size 0x6c8, virtual false, abstract: false, final false
  inline void WriteTo(::System::IO::Stream* stream);

  /// @brief Method ReadFrom, addr 0x2aed110, size 0x1d4, virtual false, abstract: false, final false
  inline void ReadFrom(::StringW filePath);

  /// @brief Method ReadFrom, addr 0x2aed2e4, size 0x6e4, virtual false, abstract: false, final false
  inline void ReadFrom(::System::IO::Stream* stream);

  /// @brief Method LoadFrom, addr 0x2aed9e0, size 0x208, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::StringW filePath);

  /// @brief Method LoadFrom, addr 0x2aedbe8, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::System::IO::Stream* stream);

  /// @brief Method Replay, addr 0x2aedd10, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController* Replay();

  /// @brief Method Resize, addr 0x2aedf08, size 0x200, virtual false, abstract: false, final false
  /// @param newMaxBufferSize: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
  inline bool Resize(int64_t newBufferSize, int64_t newMaxBufferSize = static_cast<int64_t>(0xffffffffffffffff));

  /// @brief Method Clear, addr 0x2aee18c, size 0x1c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Enable, addr 0x2aee1a8, size 0x154, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Disable, addr 0x2aedd78, size 0x118, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method GetNextEvent, addr 0x2aee110, size 0x7c, virtual false, abstract: false, final false
  inline bool GetNextEvent(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> current);

  /// @brief Method GetEnumerator, addr 0x2aed0b0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2aee364, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Dispose, addr 0x2aee368, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_m_EventBuffer, addr 0x2aec584, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_m_EventBuffer();

  /// @brief Method set_m_EventBuffer, addr 0x2aed9c8, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBuffer(::cordl_internals::Ptr<uint8_t> value);

  /// @brief Method get_m_EventBufferHead, addr 0x2aee108, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_m_EventBufferHead();

  /// @brief Method set_m_EventBufferHead, addr 0x2aed9d0, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBufferHead(::cordl_internals::Ptr<uint8_t> value);

  /// @brief Method get_m_EventBufferTail, addr 0x2aee324, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_m_EventBufferTail();

  /// @brief Method set_m_EventBufferTail, addr 0x2aed9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_m_EventBufferTail(::cordl_internals::Ptr<uint8_t> value);

  /// @brief Method Allocate, addr 0x2aee2fc, size 0x28, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method Release, addr 0x2aee380, size 0x40, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method OnBeforeUpdate, addr 0x2aee3c0, size 0x1ac, virtual false, abstract: false, final false
  inline void OnBeforeUpdate();

  /// @brief Method OnInputEvent, addr 0x2aee56c, size 0x4ec, virtual false, abstract: false, final false
  inline void OnInputEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method get_kFileFormat, addr 0x2aed080, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFileFormat();

  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventTrace(InputEventTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventTrace(InputEventTrace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventTrace();

public:
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
  ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, ::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> ___m_DeviceInfos;

  /// @brief Field kDefaultBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultBufferSize{ static_cast<int32_t>(0x100000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventTrace, 0xc8>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__FileFlags, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/FileFlags");
NEED_NO_BOX(::GlobalNamespace::__InputEventTrace__ReplayController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputEventTrace__ReplayController____c*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputEventTrace__ReplayController____c__DisplayClass43_0*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c__DisplayClass43_0");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__Enumerator*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/Enumerator");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__ReplayController*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/DeviceInfo");
