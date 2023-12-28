#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Mono/Security/Interface/zzzz__TlsException_def.hpp"
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::TlsException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::TlsException::*)(::Mono::Security::Interface::Alert*, ::StringW)>(
    &::Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24031c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::TlsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::Alert*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::TlsException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::TlsException::*)(::Mono::Security::Interface::AlertDescription, ::StringW)>(
    &::Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2403234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::TlsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::Alert*& Mono::Security::Interface::TlsException::__get_alert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alert;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::Alert*> const& Mono::Security::Interface::TlsException::__get_alert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alert;
}
constexpr void Mono::Security::Interface::TlsException::__set_alert(::Mono::Security::Interface::Alert* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::Interface::TlsException* Mono::Security::Interface::TlsException::New_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Interface::TlsException*>(alert, message));
}
inline void Mono::Security::Interface::TlsException::_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::TlsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::Alert*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alert, message);
}
inline ::Mono::Security::Interface::TlsException* Mono::Security::Interface::TlsException::New_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Interface::TlsException*>(description, message));
}
inline void Mono::Security::Interface::TlsException::_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::TlsException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description, message);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::TlsException::TlsException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
