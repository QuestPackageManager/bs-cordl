#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSettingsCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsCommand_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::*)()>(
    &::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x32e0d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32e117c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlayerSettingsCommand*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::PlayerSettingsCommand__ExecuteAsync_d__8(int32_t __1__state,
                                                                                                                ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                                ::GlobalNamespace::PlayerSettingsCommand* __4__this,
                                                                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSettingsCommand__ExecuteAsync_d__8::PlayerSettingsCommand__ExecuteAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerSettingsCommand::*)()>(&::GlobalNamespace::PlayerSettingsCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32de8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerSettingsCommand::*)()>(&::GlobalNamespace::PlayerSettingsCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32de938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::PlayerSettingsCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::PlayerSettingsCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32de97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand.SetPlayerSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerSettingsCommand::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::PlayerSettingsCommand::SetPlayerSetting)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0x32dea6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(),
                                         { "SetPlayerSetting", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand.PrintCurrentPlayerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsCommand::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::PlayerSettingsCommand::PrintCurrentPlayerSettings)> {
  constexpr static std::size_t size = 0xca0;
  constexpr static std::size_t addrs = 0x32dfb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(),
                            { "PrintCurrentPlayerSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsCommand::*)()>(&::GlobalNamespace::PlayerSettingsCommand::_ctor)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x32e07ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::PlayerSettingsCommand::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__setting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__setting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr void GlobalNamespace::PlayerSettingsCommand::__cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setting = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::PlayerSettingsCommand::__cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__apply() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::PlayerSettingsCommand::__cordl_internal_get__apply() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr void GlobalNamespace::PlayerSettingsCommand::__cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apply = value;
}
inline ::StringW GlobalNamespace::PlayerSettingsCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerSettingsCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::PlayerSettingsCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::PlayerSettingsCommand::SetPlayerSetting(::StringW value, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(),
                                       { "SetPlayerSetting", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, messages);
}
inline void GlobalNamespace::PlayerSettingsCommand::PrintCurrentPlayerSettings(::StringW setting, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(),
                          { "PrintCurrentPlayerSettings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setting, messages);
}
inline void GlobalNamespace::PlayerSettingsCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSettingsCommand* GlobalNamespace::PlayerSettingsCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSettingsCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSettingsCommand::PlayerSettingsCommand() {}
