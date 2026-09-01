#pragma once
// IWYU pragma private; include "GlobalNamespace\EnableFPSRecorderConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__EnableFPSRecorderConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableFPSRecorderConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnableFPSRecorderConsoleCommand::*)()>(&::GlobalNamespace::EnableFPSRecorderConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d0c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableFPSRecorderConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnableFPSRecorderConsoleCommand::*)()>(&::GlobalNamespace::EnableFPSRecorderConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d0c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableFPSRecorderConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::EnableFPSRecorderConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::EnableFPSRecorderConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x32d0cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableFPSRecorderConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableFPSRecorderConsoleCommand::*)()>(&::GlobalNamespace::EnableFPSRecorderConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x32d0e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::RequiredArgument_1<bool>*& GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_get__enable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enable;
}
constexpr ::GlobalNamespace::RequiredArgument_1<bool>* const& GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_get__enable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enable;
}
constexpr void GlobalNamespace::EnableFPSRecorderConsoleCommand::__cordl_internal_set__enable(::GlobalNamespace::RequiredArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enable = value;
}
inline ::StringW GlobalNamespace::EnableFPSRecorderConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnableFPSRecorderConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::EnableFPSRecorderConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::EnableFPSRecorderConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableFPSRecorderConsoleCommand* GlobalNamespace::EnableFPSRecorderConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableFPSRecorderConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableFPSRecorderConsoleCommand::EnableFPSRecorderConsoleCommand() {}
