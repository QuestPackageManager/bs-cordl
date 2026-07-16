#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/OutStringMarshaller.hpp"
#include "UnityEngine/Bindings/zzzz__OutStringMarshaller_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::OutStringMarshaller.GetStringAndDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Bindings::ManagedSpanWrapper)>(&::UnityEngine::Bindings::OutStringMarshaller::GetStringAndDispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6afbb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::OutStringMarshaller>(),
                                                                                           { "GetStringAndDispose", {}, { ::i2c::type_of<::UnityEngine::Bindings::ManagedSpanWrapper>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Bindings::OutStringMarshaller::GetStringAndDispose(::UnityEngine::Bindings::ManagedSpanWrapper managedSpan) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::OutStringMarshaller>(),
                                                                                         { "GetStringAndDispose", {}, { ::i2c::type_of<::UnityEngine::Bindings::ManagedSpanWrapper>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, managedSpan);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::OutStringMarshaller::OutStringMarshaller() {}
