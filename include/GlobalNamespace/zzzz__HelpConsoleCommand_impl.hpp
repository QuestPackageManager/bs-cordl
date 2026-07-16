#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__HelpConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32db8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32db914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::HelpConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::HelpConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x32db958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetCommandUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HelpConsoleCommand::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::HelpConsoleCommand::GetCommandUsage)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x32dbb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                         { "GetCommandUsage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetListOfCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::HelpConsoleCommand::GetListOfCommands)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32dba44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                                             { "GetListOfCommands", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.ListCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*)>(
    &::GlobalNamespace::HelpConsoleCommand::ListCommands)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x32dbc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                         { "ListCommands", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x32dc0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::HelpConsoleCommand::__cordl_internal_get__commandName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandName;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::HelpConsoleCommand::__cordl_internal_get__commandName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandName;
}
constexpr void GlobalNamespace::HelpConsoleCommand::__cordl_internal_set__commandName(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandName = value;
}
inline ::StringW GlobalNamespace::HelpConsoleCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::HelpConsoleCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::HelpConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::HelpConsoleCommand::GetCommandUsage(::StringW commandName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                       { "GetCommandUsage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, commandName, messages);
}
inline void GlobalNamespace::HelpConsoleCommand::GetListOfCommands(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                                           { "GetListOfCommands", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messages);
}
inline ::StringW GlobalNamespace::HelpConsoleCommand::ListCommands(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* commands) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(),
                                       { "ListCommands", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, commands);
}
inline void GlobalNamespace::HelpConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HelpConsoleCommand* GlobalNamespace::HelpConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HelpConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpConsoleCommand::HelpConsoleCommand() {}
