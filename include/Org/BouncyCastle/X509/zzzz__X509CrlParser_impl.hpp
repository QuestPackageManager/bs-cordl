#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CrlParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CrlParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509CrlParser::*)()>(&::Org::BouncyCastle::X509::X509CrlParser::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25b7e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509CrlParser::*)(bool)>(&::Org::BouncyCastle::X509::X509CrlParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25b7e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadPemCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25b7e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadPemCrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadDerCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (
    ::Org::BouncyCastle::X509::X509CrlParser::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x25b7f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadDerCrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.GetCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)()>(
    &::Org::BouncyCastle::X509::X509CrlParser::GetCrl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25b815c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "GetCrl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.CreateX509Crl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (
    ::Org::BouncyCastle::X509::X509CrlParser::*)(::Org::BouncyCastle::Asn1::X509::CertificateList*)>(&::Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25b81e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25b8238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CrlParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrls)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25b85e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrls", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x25b82a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CrlParser::ReadCrls)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x25b8650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrls", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_lazyAsn1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyAsn1;
}
constexpr bool const& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_lazyAsn1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyAsn1;
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_set_lazyAsn1(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lazyAsn1 = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_sCrlData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sCrlData;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_sCrlData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sCrlData;
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_set_sCrlData(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sCrlData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_sCrlDataObjectCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sCrlDataObjectCount;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_sCrlDataObjectCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sCrlDataObjectCount;
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_set_sCrlDataObjectCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sCrlDataObjectCount = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_currentCrlStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentCrlStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_get_currentCrlStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentCrlStream;
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__cordl_internal_set_currentCrlStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentCrlStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::X509::X509CrlParser::setStaticF_PemCrlParser(::Org::BouncyCastle::X509::PemParser* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCrlParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get>(
      std::forward<::Org::BouncyCastle::X509::PemParser*>(value));
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509CrlParser::getStaticF_PemCrlParser() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCrlParser",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get>();
}
inline ::Org::BouncyCastle::X509::X509CrlParser* Org::BouncyCastle::X509::X509CrlParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509CrlParser*>());
}
inline void Org::BouncyCastle::X509::X509CrlParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CrlParser* Org::BouncyCastle::X509::X509CrlParser::New_ctor(bool lazyAsn1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509CrlParser*>(lazyAsn1));
}
inline void Org::BouncyCastle::X509::X509CrlParser::_ctor(bool lazyAsn1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lazyAsn1);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadPemCrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadDerCrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::GetCrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "GetCrl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl(::Org::BouncyCastle::Asn1::X509::CertificateList* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, c);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadCrl(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, input);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CrlParser::ReadCrls(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrls", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadCrl(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, inStream);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CrlParser::ReadCrls(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(), "ReadCrls", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, inStream);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509CrlParser::X509CrlParser() {}
