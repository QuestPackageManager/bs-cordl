#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\TrustSignature.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__TrustSignature_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::TrustSignature.IntToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::Sig::TrustSignature::IntToByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3695ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "IntToByteArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::TrustSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::TrustSignature::*)(bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::TrustSignature::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3695f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::TrustSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::TrustSignature::*)(bool, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::Sig::TrustSignature::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3695f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::TrustSignature.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Sig::TrustSignature::*)()>(&::Org::BouncyCastle::Bcpg::Sig::TrustSignature::get_Depth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3695f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::TrustSignature.get_TrustAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Sig::TrustSignature::*)()>(&::Org::BouncyCastle::Bcpg::Sig::TrustSignature::get_TrustAmount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3695fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "get_TrustAmount", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::TrustSignature::IntToByteArray(int32_t v1, int32_t v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "IntToByteArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, v1, v2);
}
inline void Org::BouncyCastle::Bcpg::Sig::TrustSignature::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::TrustSignature::_ctor(bool critical, int32_t depth, int32_t trustAmount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, depth, trustAmount);
}
inline int32_t Org::BouncyCastle::Bcpg::Sig::TrustSignature::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::Sig::TrustSignature::get_TrustAmount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(), { "get_TrustAmount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::TrustSignature* Org::BouncyCastle::Bcpg::Sig::TrustSignature::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::TrustSignature* Org::BouncyCastle::Bcpg::Sig::TrustSignature::New_ctor(bool critical, int32_t depth, int32_t trustAmount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::TrustSignature*>(critical, depth, trustAmount));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::TrustSignature::TrustSignature() {}
