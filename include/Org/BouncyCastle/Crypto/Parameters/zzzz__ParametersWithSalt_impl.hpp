#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ParametersWithSalt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithSalt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::*)(::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3415310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::*)(
    ::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3415328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt.GetSalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::GetSalt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34153b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(), { "GetSalt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34153bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_get_salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_get_salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_set_salt(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___salt = value;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* const& Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t> salt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters, salt);
}
inline void Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t> salt, int32_t saltOff, int32_t saltLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters, salt, saltOff, saltLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::GetSalt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(), { "GetSalt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt* Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                                                                        ::ArrayW<uint8_t> salt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(parameters, salt));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt* Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                                                                        ::ArrayW<uint8_t> salt, int32_t saltOff, int32_t saltLen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt*>(parameters, salt, saltOff, saltLen));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt::ParametersWithSalt() {}
