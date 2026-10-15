#pragma once
// IWYU pragma private; include "GlobalNamespace/SetGarbageCollectorModeConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__SetGarbageCollectorModeConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/Scripting/zzzz__GarbageCollector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::*)()>(
    &::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x35931b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::*)()>(
    &::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x35931f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3593238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::*)()>(&::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3593408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>*& GlobalNamespace::SetGarbageCollectorModeConsoleCommand::__cordl_internal_get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* const& GlobalNamespace::SetGarbageCollectorModeConsoleCommand::__cordl_internal_get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::SetGarbageCollectorModeConsoleCommand::__cordl_internal_set__mode(::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
inline ::StringW GlobalNamespace::SetGarbageCollectorModeConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SetGarbageCollectorModeConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::SetGarbageCollectorModeConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::SetGarbageCollectorModeConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand* GlobalNamespace::SetGarbageCollectorModeConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand::SetGarbageCollectorModeConsoleCommand() {}
