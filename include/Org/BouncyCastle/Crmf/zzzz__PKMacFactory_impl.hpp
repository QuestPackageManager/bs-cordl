#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\PKMacFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PbmParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacFactory::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*)>(
    &::Org::BouncyCastle::Crmf::PKMacFactory::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36dbc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(&::Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36dbca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), { ::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.CreateCalculator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(
    &::Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x36dbd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), { ::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*& Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* const& Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__cordl_internal_set_key(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void Org::BouncyCastle::Crmf::PKMacFactory::_ctor(::ArrayW<uint8_t> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, parameters);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacFactory*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::PKMacFactory* Org::BouncyCastle::Crmf::PKMacFactory::New_ctor(::ArrayW<uint8_t> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacFactory*>(key, parameters));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacFactory"
constexpr Org::BouncyCastle::Crmf::PKMacFactory::operator ::Org::BouncyCastle::Crypto::IMacFactory*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMacFactory"
constexpr ::Org::BouncyCastle::Crypto::IMacFactory* Org::BouncyCastle::Crmf::PKMacFactory::i___Org__BouncyCastle__Crypto__IMacFactory() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PKMacFactory::PKMacFactory() {}
