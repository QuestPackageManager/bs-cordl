#pragma once
// IWYU pragma private; include "Mono\X509Pal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__X509Pal_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
//  Writing Method size for method: ::Mono::X509Pal.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::X509PalImpl* (*)()>(&::Mono::X509Pal::get_Instance)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fd03ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509Pal*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::X509PalImpl* Mono::X509Pal::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509Pal*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::X509Pal::X509Pal() {}
