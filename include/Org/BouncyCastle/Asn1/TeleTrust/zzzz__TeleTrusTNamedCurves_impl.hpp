#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\TeleTrust\TeleTrusTNamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/TeleTrust/zzzz__TeleTrusTNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/TeleTrust/zzzz__TeleTrusTNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354da40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354da44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160r1Holder::TeleTrusTNamedCurves_BrainpoolP160r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP160t1Holder::TeleTrusTNamedCurves_BrainpoolP160t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354deb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354deb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192r1Holder::TeleTrusTNamedCurves_BrainpoolP192r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354e0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354e0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP192t1Holder::TeleTrusTNamedCurves_BrainpoolP192t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354e320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354e324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224r1Holder::TeleTrusTNamedCurves_BrainpoolP224r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354e55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP224t1Holder::TeleTrusTNamedCurves_BrainpoolP224t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354e794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256r1Holder::TeleTrusTNamedCurves_BrainpoolP256r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354e9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354e9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP256t1Holder::TeleTrusTNamedCurves_BrainpoolP256t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354ec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320r1Holder::TeleTrusTNamedCurves_BrainpoolP320r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354ee3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP320t1Holder::TeleTrusTNamedCurves_BrainpoolP320t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354f074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384r1Holder::TeleTrusTNamedCurves_BrainpoolP384r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354f2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354f2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP384t1Holder::TeleTrusTNamedCurves_BrainpoolP384t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512r1Holder::TeleTrusTNamedCurves_BrainpoolP512r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354f718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves_BrainpoolP512t1Holder::TeleTrusTNamedCurves_BrainpoolP512t1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x354c928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                             { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354ca24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                           { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x354ca28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.DefineCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x354cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                           { "DefineCurve",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x354d328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x354d510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x354d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x354d648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x354d740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(int16_t, bool)>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x354d854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::*)()>(&::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354da3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::setStaticF_objIds(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::getStaticF_objIds() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::setStaticF_curves(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::getStaticF_curves() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::setStaticF_names(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>();
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                           { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                         { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, hex);
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                  ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                         { "DefineCurve",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, oid, holder);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                         { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(),
                                                                                         { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::GetOid(int16_t curvesize, bool twisted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, curvesize, twisted);
}
inline void Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves* Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::TeleTrusTNamedCurves() {}
