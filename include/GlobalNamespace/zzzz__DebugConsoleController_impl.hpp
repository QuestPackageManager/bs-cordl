#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController__ConsoleMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController__ConsoleMessage::*)(::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::__DebugConsoleController__ConsoleMessage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x230f0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController__ConsoleMessage.op_Implicit___GlobalNamespace____DebugConsoleController__ConsoleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (*)(::StringW)>(
    &::GlobalNamespace::__DebugConsoleController__ConsoleMessage::op_Implicit___GlobalNamespace____DebugConsoleController__ConsoleMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230df7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get(), "op_Implicit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param type: ::UnityEngine::LogType (default: static_cast<int32_t>(0x3))
inline void GlobalNamespace::__DebugConsoleController__ConsoleMessage::_ctor(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage
GlobalNamespace::__DebugConsoleController__ConsoleMessage::op_Implicit___GlobalNamespace____DebugConsoleController__ConsoleMessage(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get(), "op_Implicit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController__ConsoleMessage::__DebugConsoleController__ConsoleMessage(::StringW Message, ::UnityEngine::LogType Type) noexcept {
  this->Message = Message;
  this->Type = Type;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController__ConsoleMessage::__DebugConsoleController__ConsoleMessage() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::*)()>(
    &::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2313264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2313560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::__DebugConsoleController___ExecuteCommands_d__6(int32_t __1__state,
                                                                                                                              ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                              ::GlobalNamespace::DebugConsoleController* __4__this,
                                                                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6::__DebugConsoleController___ExecuteCommands_d__6() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::*)()>(
    &::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x231356c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x231394c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::__DebugConsoleController___ExecuteCommandsAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DebugConsoleController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_messages_5__2 = _messages_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7::__DebugConsoleController___ExecuteCommandsAsync_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::*)()>(
    &::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2313958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2313d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::__DebugConsoleController___TryExecuteCommand_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText, ::GlobalNamespace::DebugConsoleController* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->commandText = commandText;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8::__DebugConsoleController___TryExecuteCommand_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::*)()>(
    &::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2313d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2313fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::__DebugConsoleController___StartConsoleReadTask_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20::__DebugConsoleController___StartConsoleReadTask_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::*)()>(
    &::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x2313fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x231481c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "_inputStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_reader_5__3", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap3", ty: "::System::Object*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::__DebugConsoleController___ReadInputLoopAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::Stream* _inputStream_5__2, ::System::IO::StreamReader* _reader_5__3,
    ::System::Object* __7__wrap3, int32_t __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->_inputStream_5__2 = _inputStream_5__2;
  this->_reader_5__3 = _reader_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21::__DebugConsoleController___ReadInputLoopAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.ExecuteCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::ExecuteCommands)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2311f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "ExecuteCommands", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.ExecuteCommandsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DebugConsoleController::*)()>(
    &::GlobalNamespace::DebugConsoleController::ExecuteCommandsAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2311fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "ExecuteCommandsAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.TryExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::DebugConsoleController::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::DebugConsoleController::TryExecuteCommand)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2312074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "TryExecuteCommand", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.CommandNotFoundMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::DebugConsoleController::*)(
    ::StringW)>(&::GlobalNamespace::DebugConsoleController::CommandNotFoundMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2312150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CommandNotFoundMessage",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.StripExtraWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::StripExtraWhitespace)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23121c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "StripExtraWhitespace",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.FillDictOfCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*)>(&::GlobalNamespace::DebugConsoleController::FillDictOfCommands)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x23122e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "FillDictOfCommands", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.CheckCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ConsoleCommandBase*)>(&::GlobalNamespace::DebugConsoleController::CheckCommand)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x231268c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CheckCommand", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetAllConsoleCommandInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* (
    ::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::GetAllConsoleCommandInstances)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x23127c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "GetAllConsoleCommandInstances", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.IsCommandClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DebugConsoleController::*)(::System::Type*)>(
    &::GlobalNamespace::DebugConsoleController::IsCommandClass)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2312cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "IsCommandClass",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* (
    ::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::GetCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2312dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommands",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.GetCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConsoleCommandBase* (::GlobalNamespace::DebugConsoleController::*)(::StringW)>(
    &::GlobalNamespace::DebugConsoleController::GetCommand)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x230fa38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommand", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::Initialize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2312db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Initialize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::Tick)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2312f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.DisplayMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__DebugConsoleController__ConsoleMessage)>(
    &::GlobalNamespace::DebugConsoleController::DisplayMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2312fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "DisplayMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.StartConsoleReadTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::DebugConsoleController::StartConsoleReadTask)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2312ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "StartConsoleReadTask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController.ReadInputLoopAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::DebugConsoleController::ReadInputLoopAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2313084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                               "ReadInputLoopAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugConsoleController::*)()>(&::GlobalNamespace::DebugConsoleController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2313150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::DebugConsoleController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::DebugConsoleController::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::DebugConsoleController::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::DebugConsoleController::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::DebugConsoleController::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& GlobalNamespace::DebugConsoleController::__get__commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*> const&
GlobalNamespace::DebugConsoleController::__get__commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commands;
}
constexpr void GlobalNamespace::DebugConsoleController::__set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DebugConsoleController::__get__commandsExecutionTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandsExecutionTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& GlobalNamespace::DebugConsoleController::__get__commandsExecutionTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandsExecutionTask;
}
constexpr void GlobalNamespace::DebugConsoleController::__set__commandsExecutionTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandsExecutionTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DebugConsoleController::setStaticF__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::StringW>*, "_stringsFromSTDIN",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get>(
      std::forward<::System::Collections::Generic::Queue_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::StringW>* GlobalNamespace::DebugConsoleController::getStaticF__stringsFromSTDIN() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::StringW>*, "_stringsFromSTDIN",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get>();
}
inline void GlobalNamespace::DebugConsoleController::setStaticF__readInputTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "_readInputTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get>(
      std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DebugConsoleController::getStaticF__readInputTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "_readInputTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get>();
}
inline void GlobalNamespace::DebugConsoleController::ExecuteCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "ExecuteCommands", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DebugConsoleController::ExecuteCommandsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "ExecuteCommandsAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::DebugConsoleController::TryExecuteCommand(::StringW commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "TryExecuteCommand", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, commandText, messages);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::DebugConsoleController::CommandNotFoundMessage(::StringW command) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CommandNotFoundMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method, command);
}
inline ::StringW GlobalNamespace::DebugConsoleController::StripExtraWhitespace(::StringW commandText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "StripExtraWhitespace",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, commandText);
}
inline void GlobalNamespace::DebugConsoleController::FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* commandInstances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "FillDictOfCommands", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, commandInstances);
}
inline void GlobalNamespace::DebugConsoleController::CheckCommand(::GlobalNamespace::ConsoleCommandBase* command) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "CheckCommand", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, command);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::DebugConsoleController::GetAllConsoleCommandInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "GetAllConsoleCommandInstances", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DebugConsoleController::IsCommandClass(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "IsCommandClass", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::DebugConsoleController::GetCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommands",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleCommandBase* GlobalNamespace::DebugConsoleController::GetCommand(::StringW commandName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "GetCommand", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsoleCommandBase*, false>(this, ___internal_method, commandName);
}
inline void GlobalNamespace::DebugConsoleController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugConsoleController::DisplayMessage(::GlobalNamespace::__DebugConsoleController__ConsoleMessage message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), "DisplayMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::DebugConsoleController::StartConsoleReadTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "StartConsoleReadTask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DebugConsoleController::ReadInputLoopAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(),
                                                                             "ReadInputLoopAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::DebugConsoleController* GlobalNamespace::DebugConsoleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DebugConsoleController*>());
}
inline void GlobalNamespace::DebugConsoleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleController::DebugConsoleController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
