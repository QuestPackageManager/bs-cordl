#pragma once
// IWYU pragma private; include "System/IO/StreamHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__StreamHelpers_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::StreamHelpers.ValidateCopyToArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, int32_t)>(&::System::IO::StreamHelpers::ValidateCopyToArgs)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5bf67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamHelpers*>(),
                                                { "ValidateCopyToArgs", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::IO::StreamHelpers::ValidateCopyToArgs(::System::IO::Stream* source, ::System::IO::Stream* destination, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StreamHelpers*>(),
                                              { "ValidateCopyToArgs", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, bufferSize);
}
// Ctor Parameters []
constexpr ::System::IO::StreamHelpers::StreamHelpers() {}
