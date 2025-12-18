#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type1Message.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type1Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58edcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58edd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Domain",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Host
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58eddf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Host",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58ede74;

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
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x58edf64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_set__domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Domain(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Domain",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Host(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), "set_Host", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::Type1Message::GetBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::Type1Message* Mono::Security::Protocol::Ntlm::Type1Message::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Protocol::Ntlm::Type1Message*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type1Message::Type1Message() {}
