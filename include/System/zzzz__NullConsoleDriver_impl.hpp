#pragma once
// IWYU pragma private; include "System/NullConsoleDriver.hpp"
#include "System/zzzz__ConsoleKeyInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NullConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
//  Writing Method size for method: ::System::NullConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::NullConsoleDriver::*)(bool)>(&::System::NullConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c95504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NullConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::NullConsoleDriver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::NullConsoleDriver::*)()>(&::System::NullConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NullConsoleDriver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::NullConsoleDriver::setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo value) {
  ::cordl_internals::setStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::System::NullConsoleDriver*>(std::forward<::System::ConsoleKeyInfo>(value));
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::getStaticF_EmptyConsoleKeyInfo() {
  return ::cordl_internals::getStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::System::NullConsoleDriver*>();
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NullConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, intercept);
}
inline void System::NullConsoleDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NullConsoleDriver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::NullConsoleDriver* System::NullConsoleDriver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::NullConsoleDriver*>());
}
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::NullConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::NullConsoleDriver::i___System__IConsoleDriver() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::NullConsoleDriver::NullConsoleDriver() {}
