#pragma once
// IWYU pragma private; include "GlobalNamespace/RestartGameCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RestartGameCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__RestartGameCommand_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__Barrier_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::*)()>(&::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32e166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0._ExecuteAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::_ExecuteAsync_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32e190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*>(), { "<ExecuteAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RestartGameCommand*& GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::RestartGameCommand* const& GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_set___4__this(::GlobalNamespace::RestartGameCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*& GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_get_messages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messages;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* const& GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_get_messages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messages;
}
constexpr void GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::__cordl_internal_set_messages(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messages = value;
}
inline void GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::_ExecuteAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*>(), { "<ExecuteAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0* GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0::RestartGameCommand___c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand__GameRestarted_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::*)()>(&::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x32e19fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand__GameRestarted_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand__GameRestarted_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32e1bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand__GameRestarted_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RestartGameCommand__GameRestarted_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand__GameRestarted_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RestartGameCommand__GameRestarted_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand__GameRestarted_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RestartGameCommand__GameRestarted_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RestartGameCommand__GameRestarted_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RestartGameCommand*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::RestartGameCommand__GameRestarted_d__8(int32_t __1__state,
                                                                                                            ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                            ::GlobalNamespace::RestartGameCommand* __4__this,
                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RestartGameCommand__GameRestarted_d__8::RestartGameCommand__GameRestarted_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RestartGameCommand::*)()>(&::GlobalNamespace::RestartGameCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e1408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RestartGameCommand::*)()>(&::GlobalNamespace::RestartGameCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32e144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::RestartGameCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::RestartGameCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x32e1490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand.GameRestarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RestartGameCommand::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::RestartGameCommand::GameRestarted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32e1808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { "GameRestarted", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RestartGameCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RestartGameCommand::*)()>(&::GlobalNamespace::RestartGameCommand::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32e18ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::RestartGameCommand::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::RestartGameCommand::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::RestartGameCommand::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::GlobalNamespace::TerminalController*& GlobalNamespace::RestartGameCommand::__cordl_internal_get__terminalController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalController;
}
constexpr ::GlobalNamespace::TerminalController* const& GlobalNamespace::RestartGameCommand::__cordl_internal_get__terminalController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalController;
}
constexpr void GlobalNamespace::RestartGameCommand::__cordl_internal_set__terminalController(::GlobalNamespace::TerminalController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terminalController = value;
}
constexpr ::System::Threading::Barrier*& GlobalNamespace::RestartGameCommand::__cordl_internal_get__barrier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr ::System::Threading::Barrier* const& GlobalNamespace::RestartGameCommand::__cordl_internal_get__barrier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____barrier;
}
constexpr void GlobalNamespace::RestartGameCommand::__cordl_internal_set__barrier(::System::Threading::Barrier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____barrier = value;
}
inline ::StringW GlobalNamespace::RestartGameCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RestartGameCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::RestartGameCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::RestartGameCommand::GameRestarted(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { "GameRestarted", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::RestartGameCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RestartGameCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RestartGameCommand* GlobalNamespace::RestartGameCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RestartGameCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RestartGameCommand::RestartGameCommand() {}
