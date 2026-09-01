#pragma once
// IWYU pragma private; include "System\ConsoleDriver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::ConsoleDriver.CreateNullConsoleDriver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IConsoleDriver* (*)()>(&::System::ConsoleDriver::CreateNullConsoleDriver)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c90288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateNullConsoleDriver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.CreateWindowsConsoleDriver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IConsoleDriver* (*)()>(&::System::ConsoleDriver::CreateWindowsConsoleDriver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c902cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateWindowsConsoleDriver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.CreateTermInfoDriver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IConsoleDriver* (*)(::StringW)>(&::System::ConsoleDriver::CreateTermInfoDriver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c90324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateTermInfoDriver", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&::System::ConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c8fca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.get_IsConsole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::ConsoleDriver::get_IsConsole)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c8f2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "get_IsConsole", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.Isatty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::ConsoleDriver::Isatty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c906ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "Isatty", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.InternalKeyAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::ConsoleDriver::InternalKeyAvailable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c90708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "InternalKeyAvailable", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.TtySetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t*>)>(&::System::ConsoleDriver::TtySetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9070c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(),
                            { "TtySetup", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.SetEcho
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::System::ConsoleDriver::SetEcho)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c90710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "SetEcho", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::ConsoleDriver::setStaticF_driver(::System::IConsoleDriver* value) {
  ::cordl_internals::setStaticField<::System::IConsoleDriver*, "driver", ::System::ConsoleDriver*>(std::forward<::System::IConsoleDriver*>(value));
}
inline ::System::IConsoleDriver* System::ConsoleDriver::getStaticF_driver() {
  return ::cordl_internals::getStaticField<::System::IConsoleDriver*, "driver", ::System::ConsoleDriver*>();
}
inline void System::ConsoleDriver::setStaticF_is_console(bool value) {
  ::cordl_internals::setStaticField<bool, "is_console", ::System::ConsoleDriver*>(std::forward<bool>(value));
}
inline bool System::ConsoleDriver::getStaticF_is_console() {
  return ::cordl_internals::getStaticField<bool, "is_console", ::System::ConsoleDriver*>();
}
inline void System::ConsoleDriver::setStaticF_called_isatty(bool value) {
  ::cordl_internals::setStaticField<bool, "called_isatty", ::System::ConsoleDriver*>(std::forward<bool>(value));
}
inline bool System::ConsoleDriver::getStaticF_called_isatty() {
  return ::cordl_internals::getStaticField<bool, "called_isatty", ::System::ConsoleDriver*>();
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateNullConsoleDriver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateNullConsoleDriver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*>(nullptr, ___internal_method);
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateWindowsConsoleDriver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateWindowsConsoleDriver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*>(nullptr, ___internal_method);
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateTermInfoDriver(::StringW term) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "CreateTermInfoDriver", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*>(nullptr, ___internal_method, term);
}
inline ::System::ConsoleKeyInfo System::ConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(nullptr, ___internal_method, intercept);
}
inline bool System::ConsoleDriver::get_IsConsole() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "get_IsConsole", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::ConsoleDriver::Isatty(::System::IntPtr handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "Isatty", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline int32_t System::ConsoleDriver::InternalKeyAvailable(int32_t ms_timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "InternalKeyAvailable", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ms_timeout);
}
inline bool System::ConsoleDriver::TtySetup(::StringW keypadXmit, ::StringW teardown, ::by_ref<::ArrayW<uint8_t>> control_characters, ::by_ref<int32_t*> address) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(),
                          { "TtySetup", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keypadXmit, teardown, control_characters, address);
}
inline bool System::ConsoleDriver::SetEcho(bool wantEcho) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleDriver*>(), { "SetEcho", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, wantEcho);
}
// Ctor Parameters []
constexpr ::System::ConsoleDriver::ConsoleDriver() {}
