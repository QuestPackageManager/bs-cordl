#pragma once
// IWYU pragma private; include "GlobalNamespace/RunSongConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RunSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__RunSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__Barrier_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand___c::*)()>(&::GlobalNamespace::RunSongConsoleCommand___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e2eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand___c._ExecuteAsync_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongConsoleCommand___c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::RunSongConsoleCommand___c::_ExecuteAsync_b__26_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32e2ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand___c*>(),
                                                                                           { "<ExecuteAsync>b__26_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunSongConsoleCommand___c::setStaticF___9(::GlobalNamespace::RunSongConsoleCommand___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RunSongConsoleCommand___c*, "<>9", ::GlobalNamespace::RunSongConsoleCommand___c*>(
      std::forward<::GlobalNamespace::RunSongConsoleCommand___c*>(value));
}
inline ::GlobalNamespace::RunSongConsoleCommand___c* GlobalNamespace::RunSongConsoleCommand___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RunSongConsoleCommand___c*, "<>9", ::GlobalNamespace::RunSongConsoleCommand___c*>();
}
inline void GlobalNamespace::RunSongConsoleCommand___c::setStaticF___9__26_0(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__26_0", ::GlobalNamespace::RunSongConsoleCommand___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* GlobalNamespace::RunSongConsoleCommand___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__26_0", ::GlobalNamespace::RunSongConsoleCommand___c*>();
}
inline void GlobalNamespace::RunSongConsoleCommand___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongConsoleCommand___c::_ExecuteAsync_b__26_0(::GlobalNamespace::BeatmapDifficulty x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand___c*>(), { "<ExecuteAsync>b__26_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::RunSongConsoleCommand___c* GlobalNamespace::RunSongConsoleCommand___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongConsoleCommand___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongConsoleCommand___c::RunSongConsoleCommand___c() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x1340;
  constexpr static std::size_t addrs = 0x32e2f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32e4298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongConsoleCommand*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_recordingRelativePath_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playmodeOptions_5__3", ty: "::GlobalNamespace::PlaymodeOptions",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_difficulty_5__4", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_characteristic_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_songSpeedEnum_5__6", ty: "::GlobalNamespace::GameplayModifiers_SongSpeed", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_beatmapLevel_5__7", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::RunSongConsoleCommand__ExecuteAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::RunSongConsoleCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::StringW _recordingRelativePath_5__2, ::GlobalNamespace::PlaymodeOptions _playmodeOptions_5__3,
    ::GlobalNamespace::BeatmapDifficulty _difficulty_5__4, ::StringW _characteristic_5__5, ::GlobalNamespace::GameplayModifiers_SongSpeed _songSpeedEnum_5__6,
    ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->_recordingRelativePath_5__2 = _recordingRelativePath_5__2;
  this->_playmodeOptions_5__3 = _playmodeOptions_5__3;
  this->_difficulty_5__4 = _difficulty_5__4;
  this->_characteristic_5__5 = _characteristic_5__5;
  this->_songSpeedEnum_5__6 = _songSpeedEnum_5__6;
  this->_beatmapLevel_5__7 = _beatmapLevel_5__7;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26::RunSongConsoleCommand__ExecuteAsync_d__26() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)(int32_t)>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e2560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e4318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x32e431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e4464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32e446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e44a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::RunSongConsoleCommand*& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::RunSongConsoleCommand* const& GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::__cordl_internal_set___4__this(::GlobalNamespace::RunSongConsoleCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29* GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e1bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e1c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::Initialize)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x32e1c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::RunSongConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::RunSongConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32e21b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.TryGetLevelCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongConsoleCommand::*)(
    ::GlobalNamespace::BeatmapLevel*, ::StringW, ::by_ref<::GlobalNamespace::BeatmapCharacteristic>)>(&::GlobalNamespace::RunSongConsoleCommand::TryGetLevelCharacteristic)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32e22a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "TryGetLevelCharacteristic",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(),
                                                                                                                  ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.WaitUntilSongQueueEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::WaitUntilSongQueueEmpty)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x32e23c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "WaitUntilSongQueueEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.WaitUntilSongQueueEmptyCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::WaitUntilSongQueueEmptyCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32e250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "WaitUntilSongQueueEmptyCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x32e2568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand._WaitUntilSongQueueEmpty_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::_WaitUntilSongQueueEmpty_b__28_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32e2e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "<WaitUntilSongQueueEmpty>b__28_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand._WaitUntilSongQueueEmptyCoroutine_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::_WaitUntilSongQueueEmptyCoroutine_b__29_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32e2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "<WaitUntilSongQueueEmptyCoroutine>b__29_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__songRunningHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr ::GlobalNamespace::SongRunningHelper* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__songRunningHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songRunningHelper = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__runAutoplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runAutoplay;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__runAutoplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runAutoplay;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__runAutoplay(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runAutoplay = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__runUnityProfiler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runUnityProfiler;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__runUnityProfiler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runUnityProfiler;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runUnityProfiler = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristic = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__advancedHud() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHud;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__advancedHud() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHud;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__advancedHud(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____advancedHud = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__zenMode(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zenMode = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__songSpeed(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeed = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__blockPause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockPause;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__blockPause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockPause;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__blockPause(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockPause = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__wait() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wait;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__wait() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wait;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__wait(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wait = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__recordingRelativePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingRelativePath;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__recordingRelativePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingRelativePath;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__recordingRelativePath(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingRelativePath = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__reportKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reportKey;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__reportKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reportKey;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__reportKey(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reportKey = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__startTimeSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTimeSec;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__startTimeSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTimeSec;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__startTimeSec(::GlobalNamespace::OptionalArgument_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTimeSec = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__clearNotesOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearNotesOnStart;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__clearNotesOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearNotesOnStart;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__clearNotesOnStart(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearNotesOnStart = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__playDurationSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playDurationSec;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__playDurationSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playDurationSec;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__playDurationSec(::GlobalNamespace::OptionalArgument_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playDurationSec = value;
}
constexpr ::System::Threading::Barrier*& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__barrier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr ::System::Threading::Barrier* const& GlobalNamespace::RunSongConsoleCommand::__cordl_internal_get__barrier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__cordl_internal_set__barrier(::System::Threading::Barrier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____barrier = value;
}
inline ::StringW GlobalNamespace::RunSongConsoleCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongConsoleCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongConsoleCommand::Initialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::RunSongConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::RunSongConsoleCommand::TryGetLevelCharacteristic(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic,
                                                                              ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristicEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(),
                                       { "TryGetLevelCharacteristic",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevel, characteristic, characteristicEnum);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::RunSongConsoleCommand::WaitUntilSongQueueEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "WaitUntilSongQueueEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RunSongConsoleCommand::WaitUntilSongQueueEmptyCoroutine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "WaitUntilSongQueueEmptyCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongConsoleCommand::_WaitUntilSongQueueEmpty_b__28_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "<WaitUntilSongQueueEmpty>b__28_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongConsoleCommand::_WaitUntilSongQueueEmptyCoroutine_b__29_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongConsoleCommand*>(), { "<WaitUntilSongQueueEmptyCoroutine>b__29_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RunSongConsoleCommand* GlobalNamespace::RunSongConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongConsoleCommand::RunSongConsoleCommand() {}
