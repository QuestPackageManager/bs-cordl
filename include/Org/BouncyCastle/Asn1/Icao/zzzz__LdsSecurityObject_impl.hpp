#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Icao\LdsSecurityObject.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__DataGroupHash_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__LdsSecurityObject_def.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__DataGroupHash_def.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__LdsVersionInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x344f5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x344f658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>)>(&::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x344fda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(),
                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>, ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x344fe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.CheckDatagroupHashSeqSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::CheckDatagroupHashSeqSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x344fd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "CheckDatagroupHashSeqSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x344fee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_DigestAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_DigestAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344ff00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_DigestAlgorithmIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.GetDatagroupHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetDatagroupHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344ff08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "GetDatagroupHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.get_VersionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_VersionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344ff10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_VersionInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x344ff18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_digestAlgorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithmIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_digestAlgorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithmIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_digestAlgorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgorithmIdentifier = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_datagroupHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagroupHash;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_datagroupHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datagroupHash;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_datagroupHash(::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___datagroupHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_versionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* const& Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_get_versionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionInfo;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::__cordl_internal_set_versionInfo(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versionInfo = value;
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                    ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> datagroupHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgorithmIdentifier, datagroupHash);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                    ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> datagroupHash,
                                                                    ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* versionInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgorithmIdentifier, datagroupHash, versionInfo);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::CheckDatagroupHashSeqSize(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "CheckDatagroupHashSeqSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_DigestAlgorithmIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_DigestAlgorithmIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::GetDatagroupHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "GetDatagroupHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::get_VersionInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), { "get_VersionInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                                                                      ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> datagroupHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(digestAlgorithmIdentifier, datagroupHash));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                                                                      ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*> datagroupHash,
                                                                                                                      ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* versionInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*>(digestAlgorithmIdentifier, datagroupHash, versionInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject::LdsSecurityObject() {}
