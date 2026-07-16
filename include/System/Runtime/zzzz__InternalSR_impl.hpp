#pragma once
// IWYU pragma private; include "System/Runtime/InternalSR.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__InternalSR_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InternalSR.EtwRegistrationFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::InternalSR::EtwRegistrationFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6184e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InternalSR*>(), { "EtwRegistrationFailed", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::InternalSR::EtwRegistrationFailed(::System::Object* arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InternalSR*>(), { "EtwRegistrationFailed", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, arg);
}
// Ctor Parameters []
constexpr ::System::Runtime::InternalSR::InternalSR() {}
