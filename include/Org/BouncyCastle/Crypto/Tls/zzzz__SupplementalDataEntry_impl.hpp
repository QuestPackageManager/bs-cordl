#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SupplementalDataEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SupplementalDataEntry_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34701dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_DataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34701e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34701f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataType;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_set_mDataType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDataType = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_set_mData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mData = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::_ctor(int32_t dataType, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataType, data);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_DataType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_Data() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry* Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::New_ctor(int32_t dataType, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(dataType, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::SupplementalDataEntry() {}
