#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\DefaultPKMacResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36dbc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)()>(&::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x36dbe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { "Collect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36dbfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { "Collect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crmf::DefaultPKMacResult::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crmf::DefaultPKMacResult::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crmf::DefaultPKMacResult::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
inline void Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { "Collect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect(::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(), { "Collect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sig, sigOff);
}
inline ::Org::BouncyCastle::Crmf::DefaultPKMacResult* Org::BouncyCastle::Crmf::DefaultPKMacResult::New_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(mac));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr Org::BouncyCastle::Crmf::DefaultPKMacResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crmf::DefaultPKMacResult::i___Org__BouncyCastle__Crypto__IBlockResult() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::DefaultPKMacResult::DefaultPKMacResult() {}
