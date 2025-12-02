#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ExceptionMarshaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Bindings/zzzz__ExceptionMarshaller_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ExceptionMarshaller.SetPendingException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::Bindings::ExceptionMarshaller::SetPendingException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68cb0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ExceptionMarshaller*>::get(), "SetPendingException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ExceptionMarshaller::setStaticF_s_pendingException(::System::Exception* value) {
  ::cordl_internals::setStaticField<::System::Exception*, "s_pendingException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ExceptionMarshaller*>::get>(
      std::forward<::System::Exception*>(value));
}
inline ::System::Exception* UnityEngine::Bindings::ExceptionMarshaller::getStaticF_s_pendingException() {
  return ::cordl_internals::getStaticField<::System::Exception*, "s_pendingException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ExceptionMarshaller*>::get>();
}
inline void UnityEngine::Bindings::ExceptionMarshaller::SetPendingException(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ExceptionMarshaller*>::get(), "SetPendingException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ExceptionMarshaller::ExceptionMarshaller() {}
