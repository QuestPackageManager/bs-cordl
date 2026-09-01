#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\Store\X509CollectionStoreParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStoreParameters_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509StoreParameters_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3641ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.GetCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3641da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(), { "GetCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3641dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_set_collection(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collection = value;
}
inline void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor(::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(), { "GetCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::New_ctor(::System::Collections::ICollection* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(collection));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
constexpr Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::operator ::Org::BouncyCastle::X509::Store::IX509StoreParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
constexpr ::Org::BouncyCastle::X509::Store::IX509StoreParameters* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::i___Org__BouncyCastle__X509__Store__IX509StoreParameters() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::X509CollectionStoreParameters() {}
