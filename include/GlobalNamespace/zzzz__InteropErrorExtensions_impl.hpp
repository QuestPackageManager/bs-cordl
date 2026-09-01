#pragma once
// IWYU pragma private; include "GlobalNamespace\InteropErrorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InteropErrorExtensions_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InteropErrorExtensions.Info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Interop_ErrorInfo (*)(::GlobalNamespace::Interop_Error)>(&::GlobalNamespace::InteropErrorExtensions::Info)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aad1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InteropErrorExtensions*>(), { "Info", {}, { ::i2c::type_of<::GlobalNamespace::Interop_Error>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Interop_ErrorInfo GlobalNamespace::InteropErrorExtensions::Info(::GlobalNamespace::Interop_Error error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InteropErrorExtensions*>(), { "Info", {}, { ::i2c::type_of<::GlobalNamespace::Interop_Error>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_ErrorInfo>(nullptr, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteropErrorExtensions::InteropErrorExtensions() {}
