#pragma once
// IWYU pragma private; include "GlobalNamespace\ExceptionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ExceptionExtensions_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExceptionExtensions.GenerateFullStackMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*)>(&::GlobalNamespace::ExceptionExtensions::GenerateFullStackMessage)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x330bd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExceptionExtensions*>(), { "GenerateFullStackMessage", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ExceptionExtensions::GenerateFullStackMessage(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExceptionExtensions*>(), { "GenerateFullStackMessage", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExceptionExtensions::ExceptionExtensions() {}
