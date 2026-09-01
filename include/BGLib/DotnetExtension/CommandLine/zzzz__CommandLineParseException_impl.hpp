#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\CommandLine\CommandLineParseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParseException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::CommandLineParseException::*)(::StringW, ::System::Exception*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParseException::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x33114b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::CommandLine::CommandLineParseException::_ctor(::StringW hint, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint, innerException);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParseException* BGLib::DotnetExtension::CommandLine::CommandLineParseException::New_ctor(::StringW hint, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>(hint, innerException));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParseException::CommandLineParseException() {}
