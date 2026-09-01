#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\IsisMtt\X509\AdditionalInformationSyntax.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__AdditionalInformationSyntax_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::GetInstance)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3450ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::*)(::Org::BouncyCastle::Asn1::X500::DirectoryString*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3451018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax.get_Information
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::get_Information)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x345108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::__cordl_internal_get_information() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___information;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::__cordl_internal_get_information() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___information;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::__cordl_internal_set_information(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___information = value;
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* information) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, information);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::_ctor(::StringW information) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, information);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::get_Information() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*
Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* information) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(information));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::New_ctor(::StringW information) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*>(information));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax::AdditionalInformationSyntax() {}
