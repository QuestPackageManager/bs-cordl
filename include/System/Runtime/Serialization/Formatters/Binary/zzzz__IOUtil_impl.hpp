#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\IOUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__IOUtil_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.FlagTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum)>(
    &::System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b577c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                                                                                           { "FlagTest",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.WriteStringWithCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(
    &::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b577d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                                         { "WriteStringWithCode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.WriteWithCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(
    &::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b5784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                            { "WriteWithCode",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
inline bool System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                                                                                         { "FlagTest",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flag, target);
}
inline void System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                                       { "WriteStringWithCode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode(::System::Type* type, ::System::Object* value,
                                                                                      ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::IOUtil*>(),
                          { "WriteWithCode",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, value, sout);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::IOUtil::IOUtil() {}
