#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\DateTimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__DateTimeExtensions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::DateTimeExtensions.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::DateTime>)>(&::BGLib::DotnetExtension::DateTimeExtensions::TryParse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x330f0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::DateTimeExtensions.IsAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::BGLib::DotnetExtension::DateTimeExtensions::IsAfter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x330f1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                                                           { "IsAfter", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::DateTimeExtensions.IsAfterOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::StringW, bool)>(&::BGLib::DotnetExtension::DateTimeExtensions::IsAfterOrDefault)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x330f230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                             { "IsAfterOrDefault", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool BGLib::DotnetExtension::DateTimeExtensions::TryParse(::StringW value, ::by_ref<::System::DateTime> date) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                                                         { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, date);
}
inline bool BGLib::DotnetExtension::DateTimeExtensions::IsAfter(::System::DateTime dateTime, ::System::DateTime other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                                                         { "IsAfter", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, other);
}
inline bool BGLib::DotnetExtension::DateTimeExtensions::IsAfterOrDefault(::System::DateTime dateTime, ::StringW other, bool defaultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::DateTimeExtensions*>(),
                                                           { "IsAfterOrDefault", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, other, defaultValue);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::DateTimeExtensions::DateTimeExtensions() {}
