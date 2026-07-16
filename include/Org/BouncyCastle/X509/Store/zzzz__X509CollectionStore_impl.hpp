#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CollectionStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStore_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CollectionStore::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x363f4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStore.GetMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (
    ::Org::BouncyCastle::X509::Store::X509CollectionStore::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(&::Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x363f534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(),
                                                                                           { "GetMatches", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Selector*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ICollection*& Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_get__local() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____local;
}
constexpr ::System::Collections::ICollection* const& Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_get__local() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____local;
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_set__local(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____local = value;
}
inline void Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor(::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(),
                                                                                         { "GetMatches", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Selector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::X509::Store::X509CollectionStore* Org::BouncyCastle::X509::Store::X509CollectionStore::New_ctor(::System::Collections::ICollection* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(collection));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Store"
constexpr Org::BouncyCastle::X509::Store::X509CollectionStore::operator ::Org::BouncyCastle::X509::Store::IX509Store*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Store*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Store"
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::X509::Store::X509CollectionStore::i___Org__BouncyCastle__X509__Store__IX509Store() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Store*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CollectionStore::X509CollectionStore() {}
