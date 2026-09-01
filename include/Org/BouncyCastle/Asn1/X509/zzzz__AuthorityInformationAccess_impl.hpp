#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\AuthorityInformationAccess.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AccessDescription_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AuthorityInformationAccess_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AccessDescription_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::Copy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x355c944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355c9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x355cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x355ca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)(::Org::BouncyCastle::Asn1::X509::AccessDescription*)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AccessDescription*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>)>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x355cd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x355cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.GetAccessDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::GetAccessDescriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355cdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), { "GetAccessDescriptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::ToAsn1Object)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x355cdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::ToString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x355ce20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>& Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::__cordl_internal_get_descriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptions;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> const& Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::__cordl_internal_get_descriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptions;
}
constexpr void Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::__cordl_internal_set_descriptions(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descriptions = value;
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>
Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> descriptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>(nullptr, ___internal_method, descriptions);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*
Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor(::Org::BouncyCastle::Asn1::X509::AccessDescription* description) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AccessDescription*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> descriptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptions);
}
inline void Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X509::GeneralName* location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, location);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::GetAccessDescriptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), { "GetAccessDescriptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*
Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::New_ctor(::Org::BouncyCastle::Asn1::X509::AccessDescription* description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(description));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*
Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*> descriptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(descriptions));
}
inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                                                                        ::Org::BouncyCastle::Asn1::X509::GeneralName* location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*>(oid, location));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess::AuthorityInformationAccess() {}
