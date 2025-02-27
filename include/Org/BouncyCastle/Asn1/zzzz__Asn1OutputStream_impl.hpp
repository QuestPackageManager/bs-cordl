#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1OutputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1OutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1OutputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2633734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1OutputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1OutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1OutputStream::*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2633738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1OutputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1OutputStream*>::get(), 42));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor(::System::IO::Stream* os) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1OutputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, os);
}
inline void Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1OutputStream*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1OutputStream* Org::BouncyCastle::Asn1::Asn1OutputStream::New_ctor(::System::IO::Stream* os) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(os));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1OutputStream::Asn1OutputStream() {}
