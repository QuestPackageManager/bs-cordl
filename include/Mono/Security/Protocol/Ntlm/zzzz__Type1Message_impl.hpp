#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type1Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2401418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x240149c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Domain",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Host
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x240151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Host",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x240159c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::GetBytes)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x240168c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__get__domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__get__domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__set__domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::Protocol::Ntlm::Type1Message* Mono::Security::Protocol::Ntlm::Type1Message::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Protocol::Ntlm::Type1Message*>());
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Domain(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Domain",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Host(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Host", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::Type1Message::GetBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "GetBytes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type1Message::Type1Message() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
