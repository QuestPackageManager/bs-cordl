#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerOctetStringParser.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2631704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.GetOctetStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263a8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                               "GetOctetStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x263a8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                               "ToAsn1Object", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* const& Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                             "GetOctetStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                             "ToAsn1Object", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerOctetStringParser* Org::BouncyCastle::Asn1::DerOctetStringParser::New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(stream));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Org::BouncyCastle::Asn1::DerOctetStringParser::i___Org__BouncyCastle__Asn1__Asn1OctetStringParser() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::DerOctetStringParser::i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerOctetStringParser::DerOctetStringParser() {}
