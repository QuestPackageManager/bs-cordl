#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/RSAManaged.hpp"
#include "System/Security/Cryptography/zzzz__RSA_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3c67ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::*)(
    ::System::Object*, ::System::EventArgs*)>(&::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c67bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::Invoke(::System::Object* sender, ::System::EventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::RSAManaged_KeyGeneratedEventHandler() {}
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::RSAManaged::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3c65848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)()>(&::Mono::Security::Cryptography::RSAManaged::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c65914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)()>(
    &::Mono::Security::Cryptography::RSAManaged::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3c659b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                               "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.get_KeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::RSAManaged::*)()>(
    &::Mono::Security::Cryptography::RSAManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c661fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.get_PublicOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::RSAManaged::*)()>(
    &::Mono::Security::Cryptography::RSAManaged::get_PublicOnly)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c66298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                               "get_PublicOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.EncryptValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::RSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::RSAManaged::EncryptValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3c663e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ExportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(
    &::Mono::Security::Cryptography::RSAManaged::ExportParameters)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3c66878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ImportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(::System::Security::Cryptography::RSAParameters)>(
    &::Mono::Security::Cryptography::RSAManaged::ImportParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3c66cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(&::Mono::Security::Cryptography::RSAManaged::Dispose)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3c67110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.add_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(
    ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::RSAManaged::add_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c67314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "add_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.remove_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(
    ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::RSAManaged::remove_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c673b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "remove_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ToXmlString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(
    &::Mono::Security::Cryptography::RSAManaged::ToXmlString)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x3c6744c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.GetPaddedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::RSAManaged::*)(
    ::Mono::Math::BigInteger*, int32_t)>(&::Mono::Security::Cryptography::RSAManaged::GetPaddedValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c66778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "GetPaddedValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_isCRTpossible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCRTpossible;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_isCRTpossible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCRTpossible;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_isCRTpossible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCRTpossible = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keyBlinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBlinding;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keyBlinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBlinding;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_keyBlinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyBlinding = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keypairGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keypairGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_keypairGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypairGenerated = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_d(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_p(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_q(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dp;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dp;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_dp(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dq;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dq;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_dq(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_qInv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_qInv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_qInv(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___qInv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_n(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___n)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_e(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_KeyGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_KeyGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyGenerated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Cryptography::RSAManaged::_ctor(int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keySize);
}
inline void Mono::Security::Cryptography::RSAManaged::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::RSAManaged::GenerateKeyPair() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                             "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::RSAManaged::get_KeySize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::RSAManaged::get_PublicOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(),
                                                                             "get_PublicOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::RSAManaged::EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::RSAParameters Mono::Security::Cryptography::RSAManaged::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(this, ___internal_method, includePrivateParameters);
}
inline void Mono::Security::Cryptography::RSAManaged::ImportParameters(::System::Security::Cryptography::RSAParameters parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Mono::Security::Cryptography::RSAManaged::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Security::Cryptography::RSAManaged::add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "add_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::RSAManaged::remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "remove_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::Cryptography::RSAManaged::ToXmlString(bool includePrivateParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, includePrivateParameters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::RSAManaged::GetPaddedValue(::Mono::Math::BigInteger* value, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RSAManaged*>::get(), "GetPaddedValue", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, value, length);
}
inline ::Mono::Security::Cryptography::RSAManaged* Mono::Security::Cryptography::RSAManaged::New_ctor(int32_t keySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::RSAManaged*>(keySize));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RSAManaged::RSAManaged() {}
