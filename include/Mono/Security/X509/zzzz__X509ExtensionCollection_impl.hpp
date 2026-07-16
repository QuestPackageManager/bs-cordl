#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ExtensionCollection.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)()>(&::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a96750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a92510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&::Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a96758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mono::Security::X509::X509ExtensionCollection::*)()>(
    &::Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a96890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Extension* (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(
    &::Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a95df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::X509::X509ExtensionCollection::__cordl_internal_get_readOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readOnly;
}
constexpr bool const& Mono::Security::X509::X509ExtensionCollection::__cordl_internal_get_readOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readOnly;
}
constexpr void Mono::Security::X509::X509ExtensionCollection::__cordl_internal_set_readOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readOnly = value;
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor(::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asn1);
}
inline int32_t Mono::Security::X509::X509ExtensionCollection::IndexOf(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oid);
}
inline ::System::Collections::IEnumerator* Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509ExtensionCollection::get_Item(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Extension*>(this, ___internal_method, oid);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509ExtensionCollection*>());
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor(::Mono::Security::ASN1* asn1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509ExtensionCollection*>(asn1));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Mono::Security::X509::X509ExtensionCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Mono::Security::X509::X509ExtensionCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509ExtensionCollection::X509ExtensionCollection() {}
