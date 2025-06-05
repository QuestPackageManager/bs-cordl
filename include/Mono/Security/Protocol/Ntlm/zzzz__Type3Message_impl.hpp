#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type3Message.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type3Message_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::Mono::Security::Protocol::Ntlm::Type2Message*)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3c45314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)()>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::Finalize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3c45500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::set_Domain)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c455e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Domain",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c45664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Password",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Username
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::set_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c4566c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Username",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::Decode)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3c45674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.DecodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Security::Protocol::Ntlm::Type3Message::DecodeString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c45894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "DecodeString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.EncodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::EncodeString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c458ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "EncodeString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Protocol::Ntlm::Type3Message::*)()>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::GetBytes)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x3c4597c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__level(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____level = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__challenge(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____challenge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__username() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____username;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__username() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____username;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__username(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____username)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__password(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Protocol::Ntlm::Type2Message*& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__type2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type2;
}
constexpr ::Mono::Security::Protocol::Ntlm::Type2Message* const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__type2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type2;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__type2(::Mono::Security::Protocol::Ntlm::Type2Message* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__lm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lm;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__lm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lm;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__lm(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__nt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__nt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__nt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type2);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Domain(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Domain",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Password(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Password",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Username(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "set_Username",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::StringW Mono::Security::Protocol::Ntlm::Type3Message::DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "DecodeString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, buffer, offset, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::Type3Message::EncodeString(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), "EncodeString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, text);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::Type3Message::GetBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type3Message*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::Type3Message* Mono::Security::Protocol::Ntlm::Type3Message::New_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Protocol::Ntlm::Type3Message*>(type2));
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type3Message::Type3Message() {}
