#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::X509::X509ExtensionBase::*)()>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetX509Extensions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::X509ExtensionBase::*)(bool)>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionOids)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x356f62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetNonCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::X509ExtensionBase::*)()>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetNonCriticalExtensionOids)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x356fa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::X509ExtensionBase::*)()>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetCriticalExtensionOids)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x356fa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetExtensionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::X509::X509ExtensionBase::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x356fa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { "GetExtensionValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase.GetExtensionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::X509::X509ExtensionBase::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x356fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509ExtensionBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509ExtensionBase::*)()>(&::Org::BouncyCastle::X509::X509ExtensionBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x356fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::X509::X509ExtensionBase::GetX509Extensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionOids(bool critical) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, critical);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509ExtensionBase::GetNonCriticalExtensionOids() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509ExtensionBase::GetCriticalExtensionOids() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { "GetExtensionValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method, oid);
}
inline void Org::BouncyCastle::X509::X509ExtensionBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509ExtensionBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509ExtensionBase* Org::BouncyCastle::X509::X509ExtensionBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509ExtensionBase*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
constexpr Org::BouncyCastle::X509::X509ExtensionBase::operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509Extension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::IX509Extension"
constexpr ::Org::BouncyCastle::X509::IX509Extension* Org::BouncyCastle::X509::X509ExtensionBase::i___Org__BouncyCastle__X509__IX509Extension() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509Extension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509ExtensionBase::X509ExtensionBase() {}
