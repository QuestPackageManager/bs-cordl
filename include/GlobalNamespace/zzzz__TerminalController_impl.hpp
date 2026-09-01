#pragma once
// IWYU pragma private; include "GlobalNamespace\TerminalController.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "GlobalNamespace/zzzz__AutocompleteResult_def.hpp"
#include "GlobalNamespace/zzzz__CommandNode_def.hpp"
#include "GlobalNamespace/zzzz__CommandRootNode_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TerminalController__TryExecuteCommand_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::*)()>(
    &::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x32ea734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommand_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController__TryExecuteCommand_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32eadac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommand_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TerminalController__TryExecuteCommand_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommand_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TerminalController__TryExecuteCommand_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommand_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::TerminalController__TryExecuteCommand_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TerminalController__TryExecuteCommand_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::GlobalNamespace::TerminalController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_command_5__2", ty: "::GlobalNamespace::ConsoleCommandBase*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_commandTask_5__3", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::TerminalController__TryExecuteCommand_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText, ::GlobalNamespace::TerminalController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::GlobalNamespace::ConsoleCommandBase* _command_5__2,
    ::System::Threading::Tasks::Task_1<bool>* _commandTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->commandText = commandText;
  this->__4__this = __4__this;
  this->messages = messages;
  this->_command_5__2 = _command_5__2;
  this->_commandTask_5__3 = _commandTask_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerminalController__TryExecuteCommand_d__23::TerminalController__TryExecuteCommand_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::TerminalController__TryExecuteCommands_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::*)()>(
    &::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x32eae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommands_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController__TryExecuteCommands_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32eb42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommands_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TerminalController__TryExecuteCommands_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommands_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TerminalController__TryExecuteCommands_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController__TryExecuteCommands_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::TerminalController__TryExecuteCommands_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TerminalController__TryExecuteCommands_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TerminalController*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::TerminalController__TryExecuteCommands_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::TerminalController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_messages_5__2 = _messages_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerminalController__TryExecuteCommands_d__15::TerminalController__TryExecuteCommands_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::TerminalController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::TerminalController::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32e8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x32e8b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.HandleLaunchParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::HandleLaunchParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32e9650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "HandleLaunchParameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32e974c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::Tick)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32e97fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.TryExecuteCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::TryExecuteCommands)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32e98bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "TryExecuteCommands", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.QueueNewInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::QueueNewInput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32e96c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "QueueNewInput", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.QueueNewInputFirst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::QueueNewInputFirst)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32e9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "QueueNewInputFirst", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.ClearCommandQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::ClearCommandQueue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32e2b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "ClearCommandQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.FindAutocompleteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::CommandNode*> (::GlobalNamespace::TerminalController::*)(::StringW, bool)>(
    &::GlobalNamespace::TerminalController::FindAutocompleteNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32e99f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "FindAutocompleteNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.TryFindAutocompleteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AutocompleteResult (::GlobalNamespace::TerminalController::*)(::StringW)>(
    &::GlobalNamespace::TerminalController::TryFindAutocompleteText)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x32e9a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "TryFindAutocompleteText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.IsArgumentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::IsArgumentName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32e9e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsArgumentName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.IsArgumentValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::IsArgumentValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x32e9ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsArgumentValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.TryExecuteCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::TerminalController::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::TerminalController::TryExecuteCommand)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32e9f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                         { "TryExecuteCommand", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.CommandNotFoundMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConsoleMessage (::GlobalNamespace::TerminalController::*)(::StringW)>(
    &::GlobalNamespace::TerminalController::CommandNotFoundMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32e9fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "CommandNotFoundMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.StripExtraWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TerminalController::*)(::StringW)>(&::GlobalNamespace::TerminalController::StripExtraWhitespace)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x32ea03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "StripExtraWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.FillDictOfCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::ArrayW<::GlobalNamespace::ConsoleCommandBase*>)>(
    &::GlobalNamespace::TerminalController::FillDictOfCommands)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32e94d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                                                                           { "FillDictOfCommands", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ConsoleCommandBase*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.GenerateCommandTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::ArrayW<::GlobalNamespace::ConsoleCommandBase*>)>(
    &::GlobalNamespace::TerminalController::GenerateCommandTree)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32e95dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                                                                           { "GenerateCommandTree", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ConsoleCommandBase*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.CheckCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::GlobalNamespace::ConsoleCommandBase*)>(&::GlobalNamespace::TerminalController::CheckCommand)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x32ea138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "CheckCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.GetAllConsoleCommandInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* (::GlobalNamespace::TerminalController::*)()>(
    &::GlobalNamespace::TerminalController::GetAllConsoleCommandInstances)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0x32e8cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetAllConsoleCommandInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.IsCommandClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TerminalController::*)(::System::Type*)>(&::GlobalNamespace::TerminalController::IsCommandClass)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x32ea278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsCommandClass", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.GetCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* (
    ::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::GetCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ea3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetCommands", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.GetCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConsoleCommandBase* (::GlobalNamespace::TerminalController::*)(::StringW)>(
    &::GlobalNamespace::TerminalController::GetCommand)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32ea3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetCommand", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.DisplayMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::GlobalNamespace::ConsoleMessage)>(&::GlobalNamespace::TerminalController::DisplayMessage)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x32e2df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "DisplayMessage", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleMessage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController.OnUnityLogMessageReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::TerminalController::OnUnityLogMessageReceived)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x32ea42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                                { "OnUnityLogMessageReceived", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerminalController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerminalController::*)()>(&::GlobalNamespace::TerminalController::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32ea5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>*& GlobalNamespace::TerminalController::__cordl_internal_get_onNewMessageToOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNewMessageToOutput;
}
constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>* const& GlobalNamespace::TerminalController::__cordl_internal_get_onNewMessageToOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNewMessageToOutput;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set_onNewMessageToOutput(::System::Action_2<::StringW, ::UnityEngine::LogType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNewMessageToOutput = value;
}
constexpr bool& GlobalNamespace::TerminalController::__cordl_internal_get_unityLogToConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unityLogToConsole;
}
constexpr bool const& GlobalNamespace::TerminalController::__cordl_internal_get_unityLogToConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unityLogToConsole;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set_unityLogToConsole(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unityLogToConsole = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::TerminalController::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::TerminalController::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::TerminalController::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::TerminalController::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& GlobalNamespace::TerminalController::__cordl_internal_get__commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* const& GlobalNamespace::TerminalController::__cordl_internal_get__commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commands = value;
}
constexpr ::GlobalNamespace::CommandRootNode*& GlobalNamespace::TerminalController::__cordl_internal_get__rootNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootNode;
}
constexpr ::GlobalNamespace::CommandRootNode* const& GlobalNamespace::TerminalController::__cordl_internal_get__rootNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootNode;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set__rootNode(::GlobalNamespace::CommandRootNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootNode = value;
}
constexpr bool& GlobalNamespace::TerminalController::__cordl_internal_get__isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
constexpr bool const& GlobalNamespace::TerminalController::__cordl_internal_get__isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
constexpr void GlobalNamespace::TerminalController::__cordl_internal_set__isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDisposed = value;
}
inline void GlobalNamespace::TerminalController::setStaticF__stringsFromSTDIN(::System::Collections::Generic::LinkedList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::StringW>*, "_stringsFromSTDIN", ::GlobalNamespace::TerminalController*>(
      std::forward<::System::Collections::Generic::LinkedList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::StringW>* GlobalNamespace::TerminalController::getStaticF__stringsFromSTDIN() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::StringW>*, "_stringsFromSTDIN", ::GlobalNamespace::TerminalController*>();
}
inline void GlobalNamespace::TerminalController::setStaticF__commandsExecutionTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "_commandsExecutionTask", ::GlobalNamespace::TerminalController*>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TerminalController::getStaticF__commandsExecutionTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "_commandsExecutionTask", ::GlobalNamespace::TerminalController*>();
}
inline void GlobalNamespace::TerminalController::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TerminalController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerminalController::HandleLaunchParameters(::StringW commandsInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "HandleLaunchParameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandsInput);
}
inline void GlobalNamespace::TerminalController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerminalController::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TerminalController::TryExecuteCommands() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "TryExecuteCommands", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::TerminalController::QueueNewInput(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "QueueNewInput", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void GlobalNamespace::TerminalController::QueueNewInputFirst(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "QueueNewInputFirst", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void GlobalNamespace::TerminalController::ClearCommandQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "ClearCommandQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::CommandNode*> GlobalNamespace::TerminalController::FindAutocompleteNode(::StringW input, bool exact) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "FindAutocompleteNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CommandNode*>>(this, ___internal_method, input, exact);
}
inline ::GlobalNamespace::AutocompleteResult GlobalNamespace::TerminalController::TryFindAutocompleteText(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "TryFindAutocompleteText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AutocompleteResult>(this, ___internal_method, input);
}
inline bool GlobalNamespace::TerminalController::IsArgumentName(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsArgumentName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input);
}
inline bool GlobalNamespace::TerminalController::IsArgumentValue(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsArgumentValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TerminalController::TryExecuteCommand(::StringW commandText,
                                                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                       { "TryExecuteCommand", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, commandText, messages);
}
inline ::GlobalNamespace::ConsoleMessage GlobalNamespace::TerminalController::CommandNotFoundMessage(::StringW command) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "CommandNotFoundMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsoleMessage>(this, ___internal_method, command);
}
inline ::StringW GlobalNamespace::TerminalController::StripExtraWhitespace(::StringW commandText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "StripExtraWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, commandText);
}
inline void GlobalNamespace::TerminalController::FillDictOfCommands(::ArrayW<::GlobalNamespace::ConsoleCommandBase*> commandInstances) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                                                                         { "FillDictOfCommands", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ConsoleCommandBase*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandInstances);
}
inline void GlobalNamespace::TerminalController::GenerateCommandTree(::ArrayW<::GlobalNamespace::ConsoleCommandBase*> commandInstances) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                                                                         { "GenerateCommandTree", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ConsoleCommandBase*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandInstances);
}
inline void GlobalNamespace::TerminalController::CheckCommand(::GlobalNamespace::ConsoleCommandBase* command) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "CheckCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::TerminalController::GetAllConsoleCommandInstances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetAllConsoleCommandInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::TerminalController::IsCommandClass(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "IsCommandClass", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::TerminalController::GetCommands() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetCommands", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleCommandBase* GlobalNamespace::TerminalController::GetCommand(::StringW commandName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "GetCommand", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsoleCommandBase*>(this, ___internal_method, commandName);
}
inline void GlobalNamespace::TerminalController::DisplayMessage(::GlobalNamespace::ConsoleMessage message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { "DisplayMessage", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleMessage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::TerminalController::OnUnityLogMessageReceived(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(),
                                              { "OnUnityLogMessageReceived", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, stackTrace, type);
}
inline void GlobalNamespace::TerminalController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TerminalController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TerminalController* GlobalNamespace::TerminalController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TerminalController*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::TerminalController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::TerminalController::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::TerminalController::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::TerminalController::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::TerminalController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TerminalController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerminalController::TerminalController() {}
