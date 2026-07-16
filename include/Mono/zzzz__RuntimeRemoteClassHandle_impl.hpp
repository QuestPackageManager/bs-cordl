#pragma once
// IWYU pragma private; include "Mono/RuntimeRemoteClassHandle.hpp"
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeRemoteClassHandle.get_ProxyClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::RuntimeClassHandle (::Mono::RuntimeRemoteClassHandle::*)()>(&::Mono::RuntimeRemoteClassHandle::get_ProxyClass)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aab7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeRemoteClassHandle>(), { "get_ProxyClass", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::RuntimeClassHandle Mono::RuntimeRemoteClassHandle::get_ProxyClass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeRemoteClassHandle>(), { "get_ProxyClass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::RuntimeClassHandle>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "::Mono::RuntimeStructs_RemoteClass*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle(::Mono::RuntimeStructs_RemoteClass* value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle() {}
