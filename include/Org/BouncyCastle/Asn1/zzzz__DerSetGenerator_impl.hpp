#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSetGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSetGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSetGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::DerSetGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11c3f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSetGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSetGenerator::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::DerSetGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x11c4010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSetGenerator.AddObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSetGenerator::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::DerSetGenerator::AddObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11c40b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSetGenerator.GetRawOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::DerSetGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::DerSetGenerator::GetRawOutputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c4134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSetGenerator.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSetGenerator::*)()>(&::Org::BouncyCastle::Asn1::DerSetGenerator::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11c413c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::IO::MemoryStream*& Org::BouncyCastle::Asn1::DerSetGenerator::__get__bOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bOut;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& Org::BouncyCastle::Asn1::DerSetGenerator::__get__bOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bOut;
}
constexpr void Org::BouncyCastle::Asn1::DerSetGenerator::__set__bOut(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::DerSetGenerator* Org::BouncyCastle::Asn1::DerSetGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::DerSetGenerator*>(outStream));
}
inline void Org::BouncyCastle::Asn1::DerSetGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream);
}
inline ::Org::BouncyCastle::Asn1::DerSetGenerator* Org::BouncyCastle::Asn1::DerSetGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::DerSetGenerator*>(outStream, tagNo, isExplicit));
}
inline void Org::BouncyCastle::Asn1::DerSetGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline void Org::BouncyCastle::Asn1::DerSetGenerator::AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::DerSetGenerator::GetRawOutputStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerSetGenerator::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSetGenerator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerSetGenerator::DerSetGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
