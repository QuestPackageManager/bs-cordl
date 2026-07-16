#pragma once
// IWYU pragma private; include "GlobalNamespace/RunSongScreenshotsConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RunSongScreenshotsConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ITerminalView_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__RunSongScreenshotsConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__ScreenshotLevelStarter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__Barrier_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::*)()>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e55e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c._EnqueueScreenshotLevelManually_b__18_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_EnqueueScreenshotLevelManually_b__18_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32e55e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(),
                                                             { "<EnqueueScreenshotLevelManually>b__18_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c._EnqueueScreenshotLevelManually_b__18_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_EnqueueScreenshotLevelManually_b__18_3)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32e5644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(),
                                                             { "<EnqueueScreenshotLevelManually>b__18_3", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand___c::setStaticF___9(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*, "<>9", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(
      std::forward<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(value));
}
inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* GlobalNamespace::RunSongScreenshotsConsoleCommand___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*, "<>9", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>();
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand___c::setStaticF___9__18_2(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*, "<>9__18_2", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* GlobalNamespace::RunSongScreenshotsConsoleCommand___c::getStaticF___9__18_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*, "<>9__18_2", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>();
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand___c::setStaticF___9__18_3(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__18_3", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* GlobalNamespace::RunSongScreenshotsConsoleCommand___c::getStaticF___9__18_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__18_3", ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>();
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_EnqueueScreenshotLevelManually_b__18_2(::GlobalNamespace::BeatmapCharacteristic x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(),
                                                           { "<EnqueueScreenshotLevelManually>b__18_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::RunSongScreenshotsConsoleCommand___c::_EnqueueScreenshotLevelManually_b__18_3(::GlobalNamespace::BeatmapDifficulty x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>(),
                                                           { "<EnqueueScreenshotLevelManually>b__18_3", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* GlobalNamespace::RunSongScreenshotsConsoleCommand___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c::RunSongScreenshotsConsoleCommand___c() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e56ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0._EnqueueScreenshotLevelManually_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::_EnqueueScreenshotLevelManually_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32e56b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*>(),
                                                             { "<EnqueueScreenshotLevelManually>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::__cordl_internal_get_characteristicStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicStr;
}
constexpr ::StringW const& GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::__cordl_internal_get_characteristicStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicStr;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::__cordl_internal_set_characteristicStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristicStr = value;
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::_EnqueueScreenshotLevelManually_b__0(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*>(),
                                                           { "<EnqueueScreenshotLevelManually>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characteristic);
}
inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0* GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x1720;
  constexpr static std::size_t addrs = 0x32e5720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32e6e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::RunSongScreenshotsConsoleCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_songId_5__2", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_beatmapLevel_5__3", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0* __8__1, ::StringW _songId_5__2,
    ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__8__1 = __8__1;
  this->_songId_5__2 = _songId_5__2;
  this->_beatmapLevel_5__3 = _beatmapLevel_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x32e6ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32e7188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::RunSongScreenshotsConsoleCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)(int32_t)>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e4e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e7208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32e720c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e7310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32e7318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(),
                                                             { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e7350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(),
                                                             { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand*& GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand* const&
GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::__cordl_internal_set___4__this(::GlobalNamespace::RunSongScreenshotsConsoleCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(),
                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*
GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e44ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e44f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand::Initialize)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x32e4534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::RunSongScreenshotsConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32e4a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.EnqueueScreenshotLevelManually
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::RunSongScreenshotsConsoleCommand::EnqueueScreenshotLevelManually)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32e4b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                { "EnqueueScreenshotLevelManually", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.WaitUntilScreenshotQueueEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand::WaitUntilScreenshotQueueEmpty)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x32e4c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "WaitUntilScreenshotQueueEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand.WaitUntilScreenshotQueueEmptyCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand::WaitUntilScreenshotQueueEmptyCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32e4dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "WaitUntilScreenshotQueueEmptyCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x32e4e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand._EnqueueScreenshotLevelManually_g__ParseNumber_18_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::GlobalNamespace::RunSongScreenshotsConsoleCommand::_EnqueueScreenshotLevelManually_g__ParseNumber_18_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32e54b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                           { "<EnqueueScreenshotLevelManually>g__ParseNumber|18_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand._WaitUntilScreenshotQueueEmpty_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand::_WaitUntilScreenshotQueueEmpty_b__19_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32e5548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "<WaitUntilScreenshotQueueEmpty>b__19_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongScreenshotsConsoleCommand._WaitUntilScreenshotQueueEmptyCoroutine_b__20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RunSongScreenshotsConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongScreenshotsConsoleCommand::_WaitUntilScreenshotQueueEmptyCoroutine_b__20_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32e5570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "<WaitUntilScreenshotQueueEmptyCoroutine>b__20_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevels = value;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotLevelStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotLevelStarter;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotLevelStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotLevelStarter;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__screenshotLevelStarter(::GlobalNamespace::ScreenshotLevelStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshotLevelStarter = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr ::GlobalNamespace::ITerminalView*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__terminalView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalView;
}
constexpr ::GlobalNamespace::ITerminalView* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__terminalView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalView;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__terminalView(::GlobalNamespace::ITerminalView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terminalView = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__songId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songId;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__songId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songId;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__songId(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songId = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristic = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotPeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotPeriod;
}
constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotPeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotPeriod;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__screenshotPeriod(::GlobalNamespace::OptionalArgument_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshotPeriod = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotTimes;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__screenshotTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotTimes;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__screenshotTimes(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshotTimes = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__framerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framerate;
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__framerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framerate;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__framerate(::GlobalNamespace::OptionalArgument_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____framerate = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__wait() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wait;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__wait() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wait;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__wait(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wait = value;
}
constexpr ::System::Threading::Barrier*& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__barrier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr ::System::Threading::Barrier* const& GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_get__barrier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr void GlobalNamespace::RunSongScreenshotsConsoleCommand::__cordl_internal_set__barrier(::System::Threading::Barrier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____barrier = value;
}
inline ::StringW GlobalNamespace::RunSongScreenshotsConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongScreenshotsConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::RunSongScreenshotsConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::RunSongScreenshotsConsoleCommand::EnqueueScreenshotLevelManually(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                              { "EnqueueScreenshotLevelManually", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::RunSongScreenshotsConsoleCommand::WaitUntilScreenshotQueueEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "WaitUntilScreenshotQueueEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RunSongScreenshotsConsoleCommand::WaitUntilScreenshotQueueEmptyCoroutine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "WaitUntilScreenshotQueueEmptyCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongScreenshotsConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RunSongScreenshotsConsoleCommand::_EnqueueScreenshotLevelManually_g__ParseNumber_18_1(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(),
                                                                                         { "<EnqueueScreenshotLevelManually>g__ParseNumber|18_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline bool GlobalNamespace::RunSongScreenshotsConsoleCommand::_WaitUntilScreenshotQueueEmpty_b__19_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "<WaitUntilScreenshotQueueEmpty>b__19_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RunSongScreenshotsConsoleCommand::_WaitUntilScreenshotQueueEmptyCoroutine_b__20_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>(), { "<WaitUntilScreenshotQueueEmptyCoroutine>b__20_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand* GlobalNamespace::RunSongScreenshotsConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RunSongScreenshotsConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand::RunSongScreenshotsConsoleCommand() {}
