#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/Features.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Features_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features.FeatureToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::Sig::Features::FeatureToByteArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3692274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "FeatureToByteArray", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Features::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Sig::Features::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36922dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Features::*)(bool, uint8_t)>(&::Org::BouncyCastle::Bcpg::Sig::Features::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36922f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features.get_SupportsModificationDetection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::Sig::Features::*)()>(&::Org::BouncyCastle::Bcpg::Sig::Features::get_SupportsModificationDetection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3692378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "get_SupportsModificationDetection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features.SupportsFeature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::Sig::Features::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::Sig::Features::SupportsFeature)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3692410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "SupportsFeature", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Features.SetSupportsFeature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Features::*)(uint8_t, bool)>(&::Org::BouncyCastle::Bcpg::Sig::Features::SetSupportsFeature)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3692454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "SetSupportsFeature", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::Sig::Features::setStaticF_FEATURE_MODIFICATION_DETECTION(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "FEATURE_MODIFICATION_DETECTION", ::Org::BouncyCastle::Bcpg::Sig::Features*>(std::forward<uint8_t>(value));
}
inline uint8_t Org::BouncyCastle::Bcpg::Sig::Features::getStaticF_FEATURE_MODIFICATION_DETECTION() {
  return ::cordl_internals::getStaticField<uint8_t, "FEATURE_MODIFICATION_DETECTION", ::Org::BouncyCastle::Bcpg::Sig::Features*>();
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::Features::FeatureToByteArray(uint8_t feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "FeatureToByteArray", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, feature);
}
inline void Org::BouncyCastle::Bcpg::Sig::Features::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::Features::_ctor(bool critical, uint8_t feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, feature);
}
inline bool Org::BouncyCastle::Bcpg::Sig::Features::get_SupportsModificationDetection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "get_SupportsModificationDetection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::Sig::Features::SupportsFeature(uint8_t feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "SupportsFeature", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, feature);
}
inline void Org::BouncyCastle::Bcpg::Sig::Features::SetSupportsFeature(uint8_t feature, bool support) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Features*>(), { "SetSupportsFeature", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, support);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Features* Org::BouncyCastle::Bcpg::Sig::Features::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::Features*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::Features* Org::BouncyCastle::Bcpg::Sig::Features::New_ctor(bool critical, uint8_t feature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::Features*>(critical, feature));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::Features::Features() {}
