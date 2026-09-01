#pragma once
// IWYU pragma private; include "GlobalNamespace\ExecuteCommandsFromFileConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__ExecuteCommandsFromFileConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::*)()>(
    &::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d11f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::*)()>(
    &::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d1238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x32d127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::*)()>(&::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32d15a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::__cordl_internal_set__filePath(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filePath = value;
}
inline ::StringW GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand* GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExecuteCommandsFromFileConsoleCommand::ExecuteCommandsFromFileConsoleCommand() {}
