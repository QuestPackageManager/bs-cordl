#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::Request* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf820cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::Request* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf820e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::Request::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::CertID*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Ocsp::Request::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xf82390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::Request::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf8226c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request.get_ReqCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertID* (::Org::BouncyCastle::Asn1::Ocsp::Request::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::get_ReqCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8240c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "get_ReqCert",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request.get_SingleRequestExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Ocsp::Request::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::get_SingleRequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf82414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(),
                                                                               "get_SingleRequestExtensions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::Request.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::Request::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::Request::ToAsn1Object)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf8241c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& Org::BouncyCastle::Asn1::Ocsp::Request::__get_reqCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reqCert;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertID*> const& Org::BouncyCastle::Asn1::Ocsp::Request::__get_reqCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reqCert;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::Request::__set_reqCert(::Org::BouncyCastle::Asn1::Ocsp::CertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reqCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Ocsp::Request::__get_singleRequestExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleRequestExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Asn1::Ocsp::Request::__get_singleRequestExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleRequestExtensions;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::Request::__set_singleRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleRequestExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Asn1::Ocsp::Request::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::Request*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Asn1::Ocsp::Request::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::Request*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Asn1::Ocsp::Request::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert,
                                                                                                  ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Ocsp::Request*>(reqCert, singleRequestExtensions));
}
inline void Org::BouncyCastle::Asn1::Ocsp::Request::_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reqCert, singleRequestExtensions);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Asn1::Ocsp::Request::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Ocsp::Request*>(seq));
}
inline void Org::BouncyCastle::Asn1::Ocsp::Request::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* Org::BouncyCastle::Asn1::Ocsp::Request::get_ReqCert() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "get_ReqCert",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertID*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Ocsp::Request::get_SingleRequestExtensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(),
                                                                             "get_SingleRequestExtensions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::Request::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::Request*>::get(), "ToAsn1Object",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request::Request() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
