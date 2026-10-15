#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/EC/CustomNamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363a4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363a4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CustomNamedCurves_Curve25519Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363a628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CustomNamedCurves_SecP128R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x363a808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CustomNamedCurves_SecP160K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363ac98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363ac9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CustomNamedCurves_SecP160R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363ae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363ae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CustomNamedCurves_SecP160R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363b058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x363b05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CustomNamedCurves_SecP192K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363b4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363b4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CustomNamedCurves_SecP192R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x363b6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CustomNamedCurves_SecP224K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363bb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363bb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CustomNamedCurves_SecP224R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363bd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x363bd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CustomNamedCurves_SecP256K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363c1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CustomNamedCurves_SecP256R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363c3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CustomNamedCurves_SecP384R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363c594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363c598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CustomNamedCurves_SecP521R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363c774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363c778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CustomNamedCurves_SecT113R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363c954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CustomNamedCurves_SecT113R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363cb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CustomNamedCurves_SecT131R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363cd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CustomNamedCurves_SecT131R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363cef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363cef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CustomNamedCurves_SecT163K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363d07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CustomNamedCurves_SecT163R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363d25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CustomNamedCurves_SecT163R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363d43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CustomNamedCurves_SecT193R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363d61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CustomNamedCurves_SecT193R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363d7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CustomNamedCurves_SecT233K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363d97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363d980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CustomNamedCurves_SecT233R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CustomNamedCurves_SecT239K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363dce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363dce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CustomNamedCurves_SecT283K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363de64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363de68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CustomNamedCurves_SecT283R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CustomNamedCurves_SecT409K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363e1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CustomNamedCurves_SecT409R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363e3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CustomNamedCurves_SecT571K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x363e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CustomNamedCurves_SecT571R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x363e710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CustomNamedCurves_SM2P256V1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3638624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3638628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                             { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3638724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                           { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurveGlv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3638728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                            { "ConfigureCurveGlv", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x36387c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                             { "DefineCurve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveWithOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3638970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                           { "DefineCurveWithOid",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveAlias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3638c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                             { "DefineCurveAlias", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3639f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x363a07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x363a1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x363a318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x363a410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToCurve(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToCurve", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToCurve() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToCurve", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToOid(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToOid", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToOid() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToOid", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToCurve(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToCurve", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToCurve() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToCurve", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToName(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToName", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToName() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToName", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_names(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "names", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "names", ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                           { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                         { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv(::Org::BouncyCastle::Math::EC::ECCurve* c,
                                                                                                                   ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                          { "ConfigureCurveGlv", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, c, p);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                           { "DefineCurve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                 ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                         { "DefineCurveWithOid",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, oid, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                           { "DefineCurveAlias", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, oid);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                         { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(),
                                                                                         { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::CustomNamedCurves() {}
