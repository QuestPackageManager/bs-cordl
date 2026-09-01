#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\CommandLine\ArgumentOption.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(
    ::StringW, ::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentType, ::ArrayW<::StringW>)>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3310e08;

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
  constexpr static std::size_t addrs = 0x3310e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), { "get_required", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.get_expectsValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::get_expectsValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3310e2c;

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
  constexpr static std::size_t addrs = 0x3310e40;

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
  constexpr static std::size_t addrs = 0x3311054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                             { "ToDestinationArguments", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(::BGLib::DotnetExtension::CommandLine::ArgumentOption)>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::Equals)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3311160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)(::System::Object*)>(
    &::BGLib::DotnetExtension::CommandLine::ArgumentOption::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x33112d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                                                          { ::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::ArgumentOption.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::DotnetExtension::CommandLine::ArgumentOption::*)()>(&::BGLib::DotnetExtension::CommandLine::ArgumentOption::GetHashCode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3311360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                                                          { ::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), 2 }));
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
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::Equals(::BGLib::DotnetExtension::CommandLine::ArgumentOption other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool BGLib::DotnetExtension::CommandLine::ArgumentOption::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t BGLib::DotnetExtension::CommandLine::ArgumentOption::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>"
constexpr BGLib::DotnetExtension::CommandLine::ArgumentOption::operator ::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*() {
  return static_cast<::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>"
constexpr ::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
BGLib::DotnetExtension::CommandLine::ArgumentOption::i___System__IEquatable_1___BGLib__DotnetExtension__CommandLine__ArgumentOption_() {
  return static_cast<::System::IEquatable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
