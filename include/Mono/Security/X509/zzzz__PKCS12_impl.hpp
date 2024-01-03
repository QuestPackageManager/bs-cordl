#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_def.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)()>(&::Mono::Security::X509::__PKCS12__DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f2c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.set_HashName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(::StringW)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::set_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f74e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_HashName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.set_IterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(int32_t)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f74e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_IterationCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.set_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::set_Password)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23f2c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_Password", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.set_Salt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::set_Salt)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23f2cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_Salt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.Adjust
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::__PKCS12__DeriveBytes::Adjust)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23f74f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "Adjust", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.Derive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::X509::__PKCS12__DeriveBytes::Derive)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x23f75cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "Derive", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.DeriveKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(int32_t)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::DeriveKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23f2d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveKey",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.DeriveIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(int32_t)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::DeriveIV)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23f2de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveIV", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__PKCS12__DeriveBytes.DeriveMAC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::__PKCS12__DeriveBytes::*)(int32_t)>(
    &::Mono::Security::X509::__PKCS12__DeriveBytes::DeriveMAC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23f463c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveMAC",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::__PKCS12__DeriveBytes::__get__hashName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashName;
}
constexpr ::StringW const& Mono::Security::X509::__PKCS12__DeriveBytes::__get__hashName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashName;
}
constexpr void Mono::Security::X509::__PKCS12__DeriveBytes::__set__hashName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::X509::__PKCS12__DeriveBytes::__get__iterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr int32_t const& Mono::Security::X509::__PKCS12__DeriveBytes::__get__iterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr void Mono::Security::X509::__PKCS12__DeriveBytes::__set__iterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iterations = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::__PKCS12__DeriveBytes::__get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::__PKCS12__DeriveBytes::__get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void Mono::Security::X509::__PKCS12__DeriveBytes::__set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::__PKCS12__DeriveBytes::__get__salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::__PKCS12__DeriveBytes::__get__salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr void Mono::Security::X509::__PKCS12__DeriveBytes::__set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____salt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::setStaticF_keyDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "keyDiversifier",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::getStaticF_keyDiversifier() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "keyDiversifier",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>();
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::setStaticF_ivDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ivDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::getStaticF_ivDiversifier() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ivDiversifier",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>();
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::setStaticF_macDiversifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "macDiversifier",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::getStaticF_macDiversifier() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "macDiversifier",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get>();
}
inline ::Mono::Security::X509::__PKCS12__DeriveBytes* Mono::Security::X509::__PKCS12__DeriveBytes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::__PKCS12__DeriveBytes*>());
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::set_HashName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_HashName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::set_IterationCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_IterationCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::set_Password(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_Password", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::set_Salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "set_Salt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::X509::__PKCS12__DeriveBytes::Adjust(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "Adjust", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, aOff, b);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::Derive(::ArrayW<uint8_t, ::Array<uint8_t>*> diversifier, int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "Derive", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, diversifier, n);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::DeriveKey(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, size);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::DeriveIV(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveIV", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, size);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__PKCS12__DeriveBytes::DeriveMAC(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__PKCS12__DeriveBytes*>::get(), "DeriveMAC", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, size);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::__PKCS12__DeriveBytes::__PKCS12__DeriveBytes() {}
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23f058c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23f0678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
    &::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23f0f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::PKCS12::Decode)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x23f0860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Finalize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23f18a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::StringW)>(&::Mono::Security::X509::PKCS12::set_Password)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23f06ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "set_Password", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_IterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f194c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_IterationCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_IterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(int32_t)>(&::Mono::Security::X509::PKCS12::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f1954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "set_IterationCount", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Keys)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x23f195c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_Keys",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Certificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::PKCS12::*)()>(
    &::Mono::Security::X509::PKCS12::get_Certificates)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x23f2210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_Certificates",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_RNG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::Mono::Security::X509::PKCS12::*)()>(
    &::Mono::Security::X509::PKCS12::get_RNG)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23f2660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_RNG",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::PKCS12::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f109c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetSymmetricAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (
    ::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::X509::PKCS12::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x23f2680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetSymmetricAlgorithm", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::PKCS12::*)(
    ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23f205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decrypt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::PKCS12::*)(::Mono::Security::__PKCS7__EncryptedData*)>(
    &::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23f1810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decrypt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__EncryptedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Encrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::PKCS12::*)(
    ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::PKCS12::Encrypt)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x23f2e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Encrypt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetExistingParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::X509::PKCS12::*)(ByRef<bool>)>(
    &::Mono::Security::X509::PKCS12::GetExistingParameters)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x23f30ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetExistingParameters", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::Cryptography::__PKCS8__PrivateKeyInfo*)>(
    &::Mono::Security::X509::PKCS12::AddPrivateKey)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x23f37c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddPrivateKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__PKCS8__PrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.ReadSafeBag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::PKCS12::ReadSafeBag)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x23f1110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "ReadSafeBag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.CertificateSafeBag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (
    ::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::CertificateSafeBag)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x23f3a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "CertificateSafeBag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.MAC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::PKCS12::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::PKCS12::MAC)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23f0f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "MAC", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::PKCS12::*)()>(
    &::Mono::Security::X509::PKCS12::GetBytes)> {
  constexpr static std::size_t size = 0x2240;
  constexpr static std::size_t addrs = 0x23f46ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetBytes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.EncryptedContentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::__PKCS7__ContentInfo* (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*, ::StringW)>(
    &::Mono::Security::X509::PKCS12::EncryptedContentInfo)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x23f68fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "EncryptedContentInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f68f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddCertificate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x23f6c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddCertificate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f68ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "RemoveCertificate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x23f6e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "RemoveCertificate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Clone)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23f7368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Clone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_MaximumPasswordLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Mono::Security::X509::PKCS12::get_MaximumPasswordLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(),
                                                                               "get_MaximumPasswordLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr Mono::Security::X509::PKCS12::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::PKCS12::__get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::PKCS12::__get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void Mono::Security::X509::PKCS12::__set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__get__keyBags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyBags;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& Mono::Security::X509::PKCS12::__get__keyBags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyBags;
}
constexpr void Mono::Security::X509::PKCS12::__set__keyBags(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyBags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__get__secretBags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secretBags;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& Mono::Security::X509::PKCS12::__get__secretBags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secretBags;
}
constexpr void Mono::Security::X509::PKCS12::__set__secretBags(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secretBags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::PKCS12::__get__certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::X509::PKCS12::__get__certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr void Mono::Security::X509::PKCS12::__set__certs(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::X509::PKCS12::__get__keyBagsChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyBagsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__get__keyBagsChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyBagsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__set__keyBagsChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyBagsChanged = value;
}
constexpr bool& Mono::Security::X509::PKCS12::__get__secretBagsChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secretBagsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__get__secretBagsChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secretBagsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__set__secretBagsChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secretBagsChanged = value;
}
constexpr bool& Mono::Security::X509::PKCS12::__get__certsChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__get__certsChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__set__certsChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certsChanged = value;
}
constexpr int32_t& Mono::Security::X509::PKCS12::__get__iterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr int32_t const& Mono::Security::X509::PKCS12::__get__iterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterations;
}
constexpr void Mono::Security::X509::PKCS12::__set__iterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iterations = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__get__safeBags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeBags;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& Mono::Security::X509::PKCS12::__get__safeBags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeBags;
}
constexpr void Mono::Security::X509::PKCS12::__set__safeBags(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____safeBags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::X509::PKCS12::__get__rng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& Mono::Security::X509::PKCS12::__get__rng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr void Mono::Security::X509::PKCS12::__set__rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::X509::PKCS12::setStaticF_password_max_length(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "password_max_length", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get>(std::forward<int32_t>(value));
}
inline int32_t Mono::Security::X509::PKCS12::getStaticF_password_max_length() {
  return ::cordl_internals::getStaticField<int32_t, "password_max_length", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get>();
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::PKCS12*>());
}
inline void Mono::Security::X509::PKCS12::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::PKCS12*>(data));
}
inline void Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::PKCS12*>(data, password));
}
inline void Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, password);
}
inline void Mono::Security::X509::PKCS12::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Mono::Security::X509::PKCS12::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::set_Password(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "set_Password", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Mono::Security::X509::PKCS12::get_IterationCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_IterationCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::set_IterationCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "set_IterationCount", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::PKCS12::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_Keys",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::PKCS12::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_Certificates",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::X509::PKCS12::get_RNG() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "get_RNG",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*, false>(this, ___internal_method);
}
inline bool Mono::Security::X509::PKCS12::Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> actual) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, expected, actual);
}
inline ::System::Security::Cryptography::SymmetricAlgorithm* Mono::Security::X509::PKCS12::GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                                 int32_t iterationCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetSymmetricAlgorithm", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SymmetricAlgorithm*, false>(this, ___internal_method, algorithmOid, salt, iterationCount);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::PKCS12::Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decrypt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, algorithmOid, salt, iterationCount, encryptedData);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::PKCS12::Decrypt(::Mono::Security::__PKCS7__EncryptedData* ed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Decrypt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__EncryptedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, ed);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::PKCS12::Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Encrypt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, algorithmOid, salt, iterationCount, data);
}
inline ::System::Security::Cryptography::DSAParameters Mono::Security::X509::PKCS12::GetExistingParameters(ByRef<bool> found) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetExistingParameters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(this, ___internal_method, found);
}
inline void Mono::Security::X509::PKCS12::AddPrivateKey(::Mono::Security::Cryptography::__PKCS8__PrivateKeyInfo* pki) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddPrivateKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__PKCS8__PrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pki);
}
inline void Mono::Security::X509::PKCS12::ReadSafeBag(::Mono::Security::ASN1* safeBag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "ReadSafeBag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, safeBag);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::PKCS12::CertificateSafeBag(::Mono::Security::X509::X509Certificate* x509, ::System::Collections::IDictionary* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "CertificateSafeBag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(this, ___internal_method, x509, attributes);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::PKCS12::MAC(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "MAC", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, password, salt, iterations, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::PKCS12::GetBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "GetBytes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Mono::Security::__PKCS7__ContentInfo* Mono::Security::X509::PKCS12::EncryptedContentInfo(::Mono::Security::ASN1* safeBags, ::StringW algorithmOid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "EncryptedContentInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::__PKCS7__ContentInfo*, false>(this, ___internal_method, safeBags, algorithmOid);
}
inline void Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddCertificate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert);
}
inline void Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "AddCertificate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert, attributes);
}
inline void Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "RemoveCertificate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert);
}
inline void Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "RemoveCertificate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert, attrs);
}
inline ::System::Object* Mono::Security::X509::PKCS12::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t Mono::Security::X509::PKCS12::get_MaximumPasswordLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12*>::get(),
                                                                             "get_MaximumPasswordLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::PKCS12::PKCS12() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
