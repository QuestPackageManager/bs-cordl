#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/ArgumentOption.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(
    ::StringW, ::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentType, ::ArrayW<::StringW>)>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x330f1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentType>(),
                                                                 ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.get_required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::get_required)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x330f1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "get_required", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.get_expectsValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::get_expectsValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x330f1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "get_expectsValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.ValidateArgumentValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(::StringW)>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::ValidateArgumentValue)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x330f1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "ValidateArgumentValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.ToDestinationArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult)>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::ToDestinationArguments)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x330f400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                             { "ToDestinationArguments", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>() } })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::CommandLine::ArgumentOption::_ctor(::StringW name, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type, ::ArrayW<::StringW> identifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentType>(),
                                                               ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, hint, type, identifiers);
}
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::get_required() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "get_required", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::get_expectsValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "get_expectsValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void BGLib::DotnetExtension::CommandLine::ArgumentOption::ValidateArgumentValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "ValidateArgumentValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::StringW> BGLib::DotnetExtension::CommandLine::ArgumentOption::ToDestinationArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineArguments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                           { "ToDestinationArguments", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(*this, ___internal_method, commandLineArguments);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "identifiers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hint", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::BGLib::DotnetExtension::CommandLine::ArgumentType", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentOption::ArgumentOption(::StringW name, ::ArrayW<::StringW> identifiers, ::StringW hint,
                                                                                ::BGLib::DotnetExtension::CommandLine::ArgumentType type) noexcept {
  this->name = name;
  this->identifiers = identifiers;
  this->hint = hint;
  this->type = type;
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentOption::ArgumentOption() {}
