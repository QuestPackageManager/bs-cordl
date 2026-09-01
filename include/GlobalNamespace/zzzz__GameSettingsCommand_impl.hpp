#pragma once
// IWYU pragma private; include "GlobalNamespace\GameSettingsCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__GameSettingsCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__GameSettingsCommand_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::*)()>(&::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x32da2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32dac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameSettingsCommand*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_success_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::GameSettingsCommand__ExecuteAsync_d__13(int32_t __1__state,
                                                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                              ::GlobalNamespace::GameSettingsCommand* __4__this,
                                                                                                              ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                                                                              bool _success_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->_success_5__2 = _success_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13::GameSettingsCommand__ExecuteAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::*)()>(
    &::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x32dace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32daff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameSettingsCommand*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::GameSettingsCommand__SaveSettingsAsync_d__14(int32_t __1__state,
                                                                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                        ::GlobalNamespace::GameSettingsCommand* __4__this,
                                                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14::GameSettingsCommand__SaveSettingsAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d3a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d3a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::Initialize)> {
  constexpr static std::size_t size = 0x33b8;
  constexpr static std::size_t addrs = 0x32d3aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::GameSettingsCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::GameSettingsCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x32d6e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.SaveSettingsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::SaveSettingsAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32d6f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "SaveSettingsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.GetPropertyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::GameSettingsCommand::GetPropertyString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32d6ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(),
                                                                                           { "GetPropertyString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand.SetPropertyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW, ::StringW, ::by_ref<::StringW>)>(
    &::GlobalNamespace::GameSettingsCommand::SetPropertyValue)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x32d70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(),
                                                             { "SetPropertyValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x32d7254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d74c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_5)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d75cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_6)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_7)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d767c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_8)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d76d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_9)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_10)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_10", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_11)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d77dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_12)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_12", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_13)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_13", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_14)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d78e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_14", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_15)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d793c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_15", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_17)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d79ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_17", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_18
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_18)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_18", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_19
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_19)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_19", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_20
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_20)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_20", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_21
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_21)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_21", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_22
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_22)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_22", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_23
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_23)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_23", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_24)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_24", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_25
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_25)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_25", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_26
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_26)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_26", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_27
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_27)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_27", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_28
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_28)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_28", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_29
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_29)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_29", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_30
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_30)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_30", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_31)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_33
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_33)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_33", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_34
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_34)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d7fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_34", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_35
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_35)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_35", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_36
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_36)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_36", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_37
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_37)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d80cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_37", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_38
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_38)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_38", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_39
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_39)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_39", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_40
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_40)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d81d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_40", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_41
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_41)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d822c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_41", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_42
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_42)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_42", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_43
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_43)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_43", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_44
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_44)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_44", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_45
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_45)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_45", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_46
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_46)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d83e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_46", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_47
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_47)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d843c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_47", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_48)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_48", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_49
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_49)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d84ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_49", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_50
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_50)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_50", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_51
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_51)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_51", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_52
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_52)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d85f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_52", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_53
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_53)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_53", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_54
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_54)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d86a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_54", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_55
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_55)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d86fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_55", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_56
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_56)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_56", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_57
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_57)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d87ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_57", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_58
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_58)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d8804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_58", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_59
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_59)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d885c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_59", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_60
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_60)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d88b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_60", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_61
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSettingsCommand::*)()>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_61)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32d890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_61", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_62
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_62)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_62", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_63
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_63)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d89cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_63", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_65
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_65)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_65", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_66
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_66)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_66", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_67
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_67)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_67", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_68
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_68)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_68", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_69
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_69)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_69", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_70
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_70)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_70", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_71
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_71)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_71", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_72
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_72)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_72", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_73
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_73)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_73", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_74
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_74)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_74", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_75
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_75)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_75", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_76
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_76)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_76", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_77
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_77)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_77", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_78
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_78)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d8fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_78", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_79
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_79)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d904c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_79", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_80
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_80)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d90b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_80", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_81
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_81)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d911c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_81", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_82
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_82)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_82", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_83
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_83)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_83", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_84
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_84)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_84", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_85
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_85)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d92bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_85", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_86
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_86)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_86", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_87
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_87)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d938c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_87", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_88
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_88)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d93f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_88", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_89
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_89)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_89", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_90
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_90)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d94c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_90", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_91
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_91)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_91", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_92
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_92)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_92", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_93
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_93)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d95fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_93", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_94
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_94)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_94", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_95
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_95)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d96cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_95", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_96
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_96)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_96", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_97
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_97)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_97", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_98
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_98)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_98", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_99
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_99)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d986c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_99", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_100
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_100)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d98d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_100", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_101
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_101)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_101", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_102
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_102)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d99a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_102", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_103
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_103)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_103", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_104
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_104)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_104", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_105
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_105)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_105", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_106
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_106)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_106", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_107
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_107)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_107", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_108
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_108)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_108", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_109
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_109)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_109", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_110
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_110)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_110", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_111
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_111)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_111", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_112
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_112)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_112", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_113
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_113)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_113", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_114
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_114)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_114", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_115
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_115)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_115", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_116
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_116)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_116", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_117
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_117)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32d9fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_117", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_118
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_118)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_118", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_119
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_119)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_119", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_120
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_120)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_120", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_121
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_121)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_121", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_122
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_122)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_122", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_123
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_123)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_123", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSettingsCommand._Initialize_b__12_124
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSettingsCommand::*)(::StringW)>(&::GlobalNamespace::GameSettingsCommand::_Initialize_b__12_124)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32da294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_124", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__setting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__setting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setting = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__apply() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get__apply() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apply = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_PropertyGetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyGetters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_PropertyGetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyGetters;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set_PropertyGetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyGetters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>*& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_PropertySetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertySetters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* const& GlobalNamespace::GameSettingsCommand::__cordl_internal_get_PropertySetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertySetters;
}
constexpr void GlobalNamespace::GameSettingsCommand::__cordl_internal_set_PropertySetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertySetters = value;
}
inline ::StringW GlobalNamespace::GameSettingsCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSettingsCommand::Initialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::GameSettingsCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameSettingsCommand::SaveSettingsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "SaveSettingsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSettingsCommand::GetPropertyString(::StringW propertyName, ::by_ref<::StringW> propertyValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(),
                                                                                         { "GetPropertyString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyName, propertyValue);
}
inline bool GlobalNamespace::GameSettingsCommand::SetPropertyValue(::StringW propertyName, ::StringW propertyValue, ::by_ref<::StringW> log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(),
                                                           { "SetPropertyValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyName, propertyValue, log);
}
template <typename T> inline ::StringW GlobalNamespace::GameSettingsCommand::ToString(::by_ref<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "ToString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
template <typename T> inline bool GlobalNamespace::GameSettingsCommand::SetValue(::StringW text, ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "SetValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, value);
}
inline void GlobalNamespace::GameSettingsCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_9() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_10() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_10", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_11() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_12() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_12", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_13() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_13", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_14() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_14", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_15() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_15", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_17() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_17", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_18() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_18", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_19() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_19", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_20() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_20", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_21() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_21", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_22() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_22", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_23() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_23", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_24() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_24", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_25() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_25", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_26() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_26", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_27() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_27", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_28() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_28", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_29() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_29", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_30() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_30", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_33() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_33", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_34() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_34", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_35() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_35", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_36() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_36", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_37() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_37", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_38() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_38", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_39() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_39", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_40() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_40", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_41() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_41", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_42() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_42", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_43() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_43", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_44() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_44", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_45() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_45", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_46() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_46", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_47() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_47", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_48() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_48", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_49() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_49", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_50() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_50", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_51() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_51", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_52() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_52", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_53() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_53", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_54() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_54", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_55() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_55", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_56() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_56", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_57() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_57", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_58() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_58", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_59() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_59", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_60() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_60", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameSettingsCommand::_Initialize_b__12_61() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_61", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_62(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_62", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_63(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_63", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_64(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_65(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_65", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_66(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_66", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_67(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_67", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_68(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_68", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_69(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_69", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_70(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_70", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_71(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_71", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_72(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_72", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_73(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_73", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_74(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_74", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_75(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_75", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_76(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_76", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_77(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_77", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_78(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_78", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_79(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_79", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_80(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_80", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_81(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_81", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_82(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_82", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_83(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_83", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_84(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_84", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_85(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_85", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_86(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_86", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_87(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_87", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_88(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_88", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_89(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_89", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_90(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_90", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_91(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_91", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_92(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_92", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_93(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_93", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_94(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_94", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_95(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_95", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_96(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_96", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_97(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_97", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_98(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_98", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_99(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_99", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_100(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_100", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_101(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_101", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_102(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_102", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_103(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_103", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_104(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_104", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_105(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_105", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_106(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_106", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_107(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_107", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_108(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_108", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_109(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_109", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_110(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_110", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_111(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_111", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_112(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_112", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_113(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_113", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_114(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_114", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_115(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_115", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_116(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_116", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_117(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_117", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_118(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_118", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_119(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_119", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_120(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_120", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_121(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_121", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_122(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_122", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_123(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_123", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameSettingsCommand::_Initialize_b__12_124(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSettingsCommand*>(), { "<Initialize>b__12_124", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameSettingsCommand* GlobalNamespace::GameSettingsCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSettingsCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSettingsCommand::GameSettingsCommand() {}
