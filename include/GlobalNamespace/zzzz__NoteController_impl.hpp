#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteController.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasCutEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasMissedEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)(int32_t)>(
    &::GlobalNamespace::NoteController__DissolveCoroutine_d__69::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d42a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)()>(
    &::GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)()>(&::GlobalNamespace::NoteController__DissolveCoroutine_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x58d4310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)()>(
    &::GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)()>(
    &::GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58d4684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController__DissolveCoroutine_d__69.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NoteController__DissolveCoroutine_d__69::*)()>(
    &::GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d46bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::NoteController__DissolveCoroutine_d__69::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline void GlobalNamespace::NoteController__DissolveCoroutine_d__69::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NoteController__DissolveCoroutine_d__69::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NoteController__DissolveCoroutine_d__69::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteController__DissolveCoroutine_d__69* GlobalNamespace::NoteController__DissolveCoroutine_d__69::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteController__DissolveCoroutine_d__69*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::NoteController__DissolveCoroutine_d__69::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::NoteController__DissolveCoroutine_d__69::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::NoteController__DissolveCoroutine_d__69::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NoteController__DissolveCoroutine_d__69::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::NoteController__DissolveCoroutine_d__69::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NoteController__DissolveCoroutine_d__69::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteController__DissolveCoroutine_d__69::NoteController__DissolveCoroutine_d__69() {}
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_didInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_didInitEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteDidStartJumpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteDidStartJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidStartJumpEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteDidFinishJumpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteDidFinishJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidFinishJumpEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteDidPassJumpThreeQuartersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* (
    ::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_noteDidPassJumpThreeQuartersEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteWasCutEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteWasCutEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteWasMissedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteDidDissolveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* (::GlobalNamespace::NoteController::*)()>(
    &::GlobalNamespace::NoteController::get_noteDidDissolveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d32fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidDissolveEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_noteTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d3304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_worldRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_worldRotation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58cf76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_worldRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_inverseWorldRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_inverseWorldRotation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58cf794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_inverseWorldRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_noteTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58d3344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_beatPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_beatPos)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58d3380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_beatPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_jumpStartPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_jumpStartPos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d33d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_jumpStartPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_noteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_noteData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d3408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_moveVec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_moveVec)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58d3410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_moveVec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_uniformScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_uniformScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d34b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_uniformScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_hidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_hidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d34bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_hidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.set_hidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(bool)>(&::GlobalNamespace::NoteController::set_hidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d34c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "set_hidden", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.get_dissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::get_dissolving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d34cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_dissolving", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::Awake)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58ced50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x58cf0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58d3a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::ManualUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58d0818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.HandleNoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58d3b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidStartJump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.HandleNoteDidFinishJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::HandleNoteDidFinishJump)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x58d3d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidFinishJump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.HandleNoteDidPassJumpThreeQuarters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(::GlobalNamespace::NoteMovement*)>(
    &::GlobalNamespace::NoteController::HandleNoteDidPassJumpThreeQuarters)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58d3ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidPassJumpThreeQuarters", {}, { ::i2c::type_of<::GlobalNamespace::NoteMovement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.HandleNoteDidPassMissedMarkerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::HandleNoteDidPassMissedMarkerEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58d408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidPassMissedMarkerEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.NoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::NoteDidStartJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d40a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.NoteDidFinishJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::NoteDidFinishJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d40ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.NoteDidPassJumpThreeQuarters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(::GlobalNamespace::NoteMovement*)>(
    &::GlobalNamespace::NoteController::NoteDidPassJumpThreeQuarters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d40b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d40b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d40b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.SendNoteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::SendNoteWasMissedEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58cf354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "SendNoteWasMissedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.SendNoteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::NoteController::SendNoteWasCutEvent)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58cf7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "SendNoteWasCutEvent", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, float_t, float_t, bool,
                                                                                                   bool)>(&::GlobalNamespace::NoteController::Init)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x58ce9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Init",
                                                                                     {},
                                                                                     { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.DissolveCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::NoteController::*)(float_t)>(&::GlobalNamespace::NoteController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58d4244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "DissolveCoroutine", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Dissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(float_t)>(&::GlobalNamespace::NoteController::Dissolve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58d42b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(bool)>(&::GlobalNamespace::NoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(bool)>(&::GlobalNamespace::NoteController::Hide)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58c80f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)(bool)>(&::GlobalNamespace::NoteController::Pause)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteController::*)()>(&::GlobalNamespace::NoteController::_ctor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x58cf9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoteMovement>& GlobalNamespace::NoteController::__cordl_internal_get__noteMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& GlobalNamespace::NoteController::__cordl_internal_get__noteMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteMovement = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NoteController::__cordl_internal_get__noteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NoteController::__cordl_internal_get__noteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteTransform = value;
}
constexpr bool& GlobalNamespace::NoteController::__cordl_internal_get__hidden_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidden_k__BackingField;
}
constexpr bool const& GlobalNamespace::NoteController::__cordl_internal_get__hidden_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidden_k__BackingField;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__hidden_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hidden_k__BackingField = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* const& GlobalNamespace::NoteController::__cordl_internal_get__didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didInitEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteDidStartJumpEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartJumpEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* const& GlobalNamespace::NoteController::__cordl_internal_get__noteDidStartJumpEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartJumpEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteDidStartJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidStartJumpEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteDidFinishJumpEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidFinishJumpEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* const&
GlobalNamespace::NoteController::__cordl_internal_get__noteDidFinishJumpEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidFinishJumpEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteDidFinishJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidFinishJumpEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*&
GlobalNamespace::NoteController::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* const&
GlobalNamespace::NoteController::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteDidPassJumpThreeQuartersEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidPassJumpThreeQuartersEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteWasCutEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* const& GlobalNamespace::NoteController::__cordl_internal_get__noteWasCutEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteWasCutEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteWasMissedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasMissedEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* const& GlobalNamespace::NoteController::__cordl_internal_get__noteWasMissedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasMissedEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteWasMissedEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasMissedEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteDidStartDissolvingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* const&
GlobalNamespace::NoteController::__cordl_internal_get__noteDidStartDissolvingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
constexpr void
GlobalNamespace::NoteController::__cordl_internal_set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidStartDissolvingEvent = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>*& GlobalNamespace::NoteController::__cordl_internal_get__noteDidDissolveEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidDissolveEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* const& GlobalNamespace::NoteController::__cordl_internal_get__noteDidDissolveEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidDissolveEvent;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteDidDissolveEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidDissolveEvent = value;
}
constexpr ::GlobalNamespace::NoteData*& GlobalNamespace::NoteController::__cordl_internal_get__noteData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteData;
}
constexpr ::GlobalNamespace::NoteData* const& GlobalNamespace::NoteController::__cordl_internal_get__noteData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteData;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__noteData(::GlobalNamespace::NoteData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteData = value;
}
constexpr bool& GlobalNamespace::NoteController::__cordl_internal_get__dissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr bool const& GlobalNamespace::NoteController::__cordl_internal_get__dissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__dissolving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dissolving = value;
}
constexpr float_t& GlobalNamespace::NoteController::__cordl_internal_get__uniformScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniformScale;
}
constexpr float_t const& GlobalNamespace::NoteController::__cordl_internal_get__uniformScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniformScale;
}
constexpr void GlobalNamespace::NoteController::__cordl_internal_set__uniformScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uniformScale = value;
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* GlobalNamespace::NoteController::get_didInitEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* GlobalNamespace::NoteController::get_noteDidStartJumpEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidStartJumpEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* GlobalNamespace::NoteController::get_noteDidFinishJumpEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidFinishJumpEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* GlobalNamespace::NoteController::get_noteDidPassJumpThreeQuartersEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* GlobalNamespace::NoteController::get_noteWasCutEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteWasCutEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* GlobalNamespace::NoteController::get_noteWasMissedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteWasMissedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* GlobalNamespace::NoteController::get_noteDidStartDissolvingEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* GlobalNamespace::NoteController::get_noteDidDissolveEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteDidDissolveEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::NoteController::get_noteTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::NoteController::get_worldRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_worldRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::NoteController::get_inverseWorldRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_inverseWorldRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline float_t GlobalNamespace::NoteController::get_noteTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_noteTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteController::get_beatPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_beatPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteController::get_jumpStartPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_jumpStartPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteController::get_noteData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteController::get_moveVec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_moveVec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::NoteController::get_uniformScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_uniformScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::NoteController::get_hidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_hidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::set_hidden(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "set_hidden", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NoteController::get_dissolving() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "get_dissolving", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::ManualUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::HandleNoteDidStartJump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidStartJump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::HandleNoteDidFinishJump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidFinishJump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::HandleNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidPassJumpThreeQuarters", {}, { ::i2c::type_of<::GlobalNamespace::NoteMovement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteMovement);
}
inline void GlobalNamespace::NoteController::HandleNoteDidPassMissedMarkerEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "HandleNoteDidPassMissedMarkerEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::NoteDidStartJump() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::NoteDidFinishJump() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::NoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteMovement);
}
inline void GlobalNamespace::NoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::NoteDidStartDissolving() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::SendNoteWasMissedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "SendNoteWasMissedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteController::SendNoteWasCutEvent(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "SendNoteWasCutEvent", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::NoteController::Init(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData, float_t endRotation, float_t uniformScale,
                                                  bool rotateTowardsPlayer, bool useRandomRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Init",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, endRotation, uniformScale, rotateTowardsPlayer, useRandomRotation);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::NoteController::DissolveCoroutine(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "DissolveCoroutine", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline void GlobalNamespace::NoteController::Dissolve(float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::NoteController::HiddenStateDidChange(bool hidden) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hidden);
}
inline void GlobalNamespace::NoteController::Hide(bool hide) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::NoteController::Pause(bool pause) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::NoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteController* GlobalNamespace::NoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr GlobalNamespace::NoteController::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMirrorable"
constexpr ::GlobalNamespace::INoteMirrorable* GlobalNamespace::NoteController::i___GlobalNamespace__INoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr GlobalNamespace::NoteController::operator ::GlobalNamespace::IBeatmapObjectController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
constexpr ::GlobalNamespace::IBeatmapObjectController* GlobalNamespace::NoteController::i___GlobalNamespace__IBeatmapObjectController() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteController::NoteController() {}
