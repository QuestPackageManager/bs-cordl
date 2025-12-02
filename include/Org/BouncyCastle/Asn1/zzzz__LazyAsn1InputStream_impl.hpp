#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/LazyAsn1InputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LazyAsn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x356d190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x356d194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerSequence* (
    ::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&::Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x356d1c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerSet* (
    ::Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&::Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x356d2a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), 44));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputStream);
}
inline ::Org::BouncyCastle::Asn1::DerSequence* Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSequence*, false>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSet*, false>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* Org::BouncyCastle::Asn1::LazyAsn1InputStream::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(input));
}
inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* Org::BouncyCastle::Asn1::LazyAsn1InputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::LazyAsn1InputStream*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::LazyAsn1InputStream::LazyAsn1InputStream() {}
