#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\ExceptionMarshaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Bindings/zzzz__ExceptionMarshaller_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ExceptionMarshaller.SetPendingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::Bindings::ExceptionMarshaller::SetPendingException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6afeecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ExceptionMarshaller*>(), { "SetPendingException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ExceptionMarshaller::setStaticF_s_pendingException(::System::Exception* value) {
  ::cordl_internals::setStaticField<::System::Exception*, "s_pendingException", ::UnityEngine::Bindings::ExceptionMarshaller*>(std::forward<::System::Exception*>(value));
}
inline ::System::Exception* UnityEngine::Bindings::ExceptionMarshaller::getStaticF_s_pendingException() {
  return ::cordl_internals::getStaticField<::System::Exception*, "s_pendingException", ::UnityEngine::Bindings::ExceptionMarshaller*>();
}
inline void UnityEngine::Bindings::ExceptionMarshaller::SetPendingException(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::ExceptionMarshaller*>(), { "SetPendingException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ExceptionMarshaller::ExceptionMarshaller() {}
