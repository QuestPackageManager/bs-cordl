#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketsParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d4ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* (::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)()>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x11d5014;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser* Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(input));
}
inline void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>::get(),
                                                                             "ReadPacket", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::UserAttributeSubpacketsParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
