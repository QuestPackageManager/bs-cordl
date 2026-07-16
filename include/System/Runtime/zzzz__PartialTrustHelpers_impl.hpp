#pragma once
// IWYU pragma private; include "System/Runtime/PartialTrustHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__PartialTrustHelpers_def.hpp"
//  Writing Method size for method: ::System::Runtime::PartialTrustHelpers.HasEtwPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::PartialTrustHelpers::HasEtwPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61821b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::PartialTrustHelpers*>(), { "HasEtwPermissions", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Runtime::PartialTrustHelpers::HasEtwPermissions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::PartialTrustHelpers*>(), { "HasEtwPermissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::PartialTrustHelpers::PartialTrustHelpers() {}
