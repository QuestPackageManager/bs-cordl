#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/ResponderID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponderID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponderID* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetInstance)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x24081d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::ResponderID::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24083b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::ResponderID::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x240842c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponderID* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetInstance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24084a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID.GetKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Asn1::Ocsp::ResponderID::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetKeyHash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24084bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::Ocsp::ResponderID::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::get_Name)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2408544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponderID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::ResponderID::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponderID::ToAsn1Object)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24085f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Ocsp::ResponderID::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Ocsp::ResponderID::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponderID::__cordl_internal_set_id(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponderID::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponderID::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, false>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Asn1::Ocsp::ResponderID::GetKeyHash() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::Ocsp::ResponderID::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::ResponderID::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Ocsp::ResponderID::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(id));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Ocsp::ResponderID::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(id));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Ocsp::ResponderID::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Ocsp::ResponderID::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID::ResponderID() {}
