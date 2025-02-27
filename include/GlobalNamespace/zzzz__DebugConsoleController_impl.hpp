#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugConsoleController.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "Zenject/zzzz__ITickable_impl.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController_ConsoleMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController_ConsoleMessage::*)(::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::DebugConsoleController_ConsoleMessage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b190ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController_ConsoleMessage.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DebugConsoleController_ConsoleMessage::*)()>(
    &::GlobalNamespace::DebugConsoleController_ConsoleMessage::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1a660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController_ConsoleMessage.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DebugConsoleController_ConsoleMessage (*)(
    ::GlobalNamespace::DebugConsoleController_ConsoleMessage, ::GlobalNamespace::DebugConsoleController_ConsoleMessage)>(&::GlobalNamespace::DebugConsoleController_ConsoleMessage::op_Addition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b1a668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugConsoleController_ConsoleMessage::_ctor(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type);
}
inline ::StringW GlobalNamespace::DebugConsoleController_ConsoleMessage::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GlobalNamespace::DebugConsoleController_ConsoleMessage::op_Addition(::GlobalNamespace::DebugConsoleController_ConsoleMessage a,
                                                                                                                                    ::GlobalNamespace::DebugConsoleController_ConsoleMessage b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DebugConsoleController_ConsoleMessage, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DebugConsoleController_ConsoleMessage::DebugConsoleController_ConsoleMessage(::StringW Message, ::UnityEngine::LogType Type) noexcept {
  this->Message = Message;
  this->Type = Type;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController_ConsoleMessage::DebugConsoleController_ConsoleMessage() {}
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::*)()>(
    &::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x3b1a688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b1a96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::DebugConsoleController__ExecuteCommands_d__10(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::GlobalNamespace::DebugConsoleController* __4__this,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController__ExecuteCommands_d__10::DebugConsoleController__ExecuteCommands_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::*)()>(
    &::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x3b1a978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3b1ad38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::DebugConsoleController__ExecuteCommandsAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DebugConsoleController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_messages_5__2 = _messages_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController__ExecuteCommandsAsync_d__11::DebugConsoleController__ExecuteCommandsAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::*)()>(
    &::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3b1ada0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3b1b16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::DebugConsoleController__TryExecuteCommand_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText, ::GlobalNamespace::DebugConsoleController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->commandText = commandText;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController__TryExecuteCommand_d__13::DebugConsoleController__TryExecuteCommand_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::Initialize)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3b193a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::Tick)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3b19dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Tick",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.ExecuteCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::ExecuteCommands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3b19e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "ExecuteCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.ExecuteCommandsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DebugConsoleController::*)()>(
    &::GlobalNamespace::DebugConsoleController::ExecuteCommandsAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b19eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "ExecuteCommandsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.QueueNewInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::QueueNewInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3b19f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "QueueNewInput",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.TryExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::DebugConsoleController::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>*)>(
    &::GlobalNamespace::DebugConsoleController::TryExecuteCommand)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3b19fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "TryExecuteCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.CommandNotFoundMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DebugConsoleController_ConsoleMessage (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::CommandNotFoundMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3b1a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CommandNotFoundMessage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.StripExtraWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::StripExtraWhitespace)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3b1a11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "StripExtraWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.FillDictOfCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*)>(&::GlobalNamespace::DebugConsoleController::FillDictOfCommands)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3b19a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "FillDictOfCommands", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.CheckCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)(::GlobalNamespace::ConsoleCommandBase*)>(
    &::GlobalNamespace::DebugConsoleController::CheckCommand)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3b1a240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CheckCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetAllConsoleCommandInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* (
    ::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::GetAllConsoleCommandInstances)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x3b19530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "GetAllConsoleCommandInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.IsCommandClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DebugConsoleController::*)(::System::Type*)>(
    &::GlobalNamespace::DebugConsoleController::IsCommandClass)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3b1a378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "IsCommandClass",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* (
    ::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::GetCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1a438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommands",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConsoleCommandBase* (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::GetCommand)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3b1a440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.DisplayMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)(::GlobalNamespace::DebugConsoleController_ConsoleMessage)>(
    &::GlobalNamespace::DebugConsoleController::DisplayMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b190f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "DisplayMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b1a4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController._Initialize_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(
    &::GlobalNamespace::DebugConsoleController::_Initialize_b__8_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3b1a57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "<Initialize>b__8_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>*& GlobalNamespace::DebugConsoleController::__cordl_internal_get_onNewMessageToOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNewMessageToOutput;
}
constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get_onNewMessageToOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNewMessageToOutput;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set_onNewMessageToOutput(::System::Action_2<::StringW, ::UnityEngine::LogType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNewMessageToOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::StringW>*& GlobalNamespace::DebugConsoleController::__cordl_internal_get__stringsFromSTDIN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringsFromSTDIN;
}
constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__stringsFromSTDIN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringsFromSTDIN;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringsFromSTDIN)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::DebugConsoleController::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commandLineParserResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commandLineParserResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineParserResult = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::DebugConsoleController::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commandsExecutionTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandsExecutionTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::DebugConsoleController::__cordl_internal_get__commandsExecutionTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandsExecutionTask;
}
constexpr void GlobalNamespace::DebugConsoleController::__cordl_internal_set__commandsExecutionTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandsExecutionTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DebugConsoleController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::ExecuteCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "ExecuteCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DebugConsoleController::ExecuteCommandsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "ExecuteCommandsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::QueueNewInput(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "QueueNewInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::DebugConsoleController::TryExecuteCommand(::StringW commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "TryExecuteCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, commandText, messages);
}
inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GlobalNamespace::DebugConsoleController::CommandNotFoundMessage(::StringW command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CommandNotFoundMessage",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DebugConsoleController_ConsoleMessage, false>(this, ___internal_method, command);
}
inline ::StringW GlobalNamespace::DebugConsoleController::StripExtraWhitespace(::StringW commandText) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "StripExtraWhitespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, commandText);
}
inline void GlobalNamespace::DebugConsoleController::FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* commandInstances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "FillDictOfCommands", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, commandInstances);
}
inline void GlobalNamespace::DebugConsoleController::CheckCommand(::GlobalNamespace::ConsoleCommandBase* command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CheckCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::DebugConsoleController::GetAllConsoleCommandInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "GetAllConsoleCommandInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DebugConsoleController::IsCommandClass(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "IsCommandClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::DebugConsoleController::GetCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommands",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleCommandBase* GlobalNamespace::DebugConsoleController::GetCommand(::StringW commandName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsoleCommandBase*, false>(this, ___internal_method, commandName);
}
inline void GlobalNamespace::DebugConsoleController::DisplayMessage(::GlobalNamespace::DebugConsoleController_ConsoleMessage message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "DisplayMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DebugConsoleController_ConsoleMessage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::DebugConsoleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::_Initialize_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "<Initialize>b__8_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugConsoleController* GlobalNamespace::DebugConsoleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DebugConsoleController*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::DebugConsoleController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::DebugConsoleController::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::DebugConsoleController::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::DebugConsoleController::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController::DebugConsoleController() {}
