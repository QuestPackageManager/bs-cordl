#pragma once
// IWYU pragma private; include "System/IO/DriveInfoInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__DriveInfoInternal_def.hpp"
//  Writing Method size for method: ::System::IO::DriveInfoInternal.GetLogicalDrives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::IO::DriveInfoInternal::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c20a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::DriveInfoInternal*>(), { "GetLogicalDrives", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> System::IO::DriveInfoInternal::GetLogicalDrives() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::DriveInfoInternal*>(), { "GetLogicalDrives", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::DriveInfoInternal::DriveInfoInternal() {}
