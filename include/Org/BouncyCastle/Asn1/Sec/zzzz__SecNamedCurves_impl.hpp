#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Sec/SecNamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Sec/zzzz__SecNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/Sec/zzzz__SecNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3542524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3542528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r1Holder::SecNamedCurves_Secp112r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35427b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x35427b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp112r2Holder::SecNamedCurves_Secp112r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3542a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3542a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r1Holder::SecNamedCurves_Secp128r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3542cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3542ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp128r2Holder::SecNamedCurves_Secp128r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3542f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x3542f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160k1Holder::SecNamedCurves_Secp160k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3543488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x354348c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r1Holder::SecNamedCurves_Secp160r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3543718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x354371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp160r2Holder::SecNamedCurves_Secp160r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35439a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x35439ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192k1Holder::SecNamedCurves_Secp192k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3543ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3543ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp192r1Holder::SecNamedCurves_Secp192r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x3544150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224k1Holder::SecNamedCurves_Secp224k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3544660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3544664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp224r1Holder::SecNamedCurves_Secp224r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35448f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x35448f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256k1Holder::SecNamedCurves_Secp256k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3544e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3544e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp256r1Holder::SecNamedCurves_Secp256r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3545098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp384r1Holder::SecNamedCurves_Secp384r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3545328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Secp521r1Holder::SecNamedCurves_Secp521r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35455b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x35455b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r1Holder::SecNamedCurves_Sect113r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3545838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect113r2Holder::SecNamedCurves_Sect113r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3545ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r1Holder::SecNamedCurves_Sect131r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3545d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect131r2Holder::SecNamedCurves_Sect131r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3545fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3545fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163k1Holder::SecNamedCurves_Sect163k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3546198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r1Holder::SecNamedCurves_Sect163r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3546418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect163r2Holder::SecNamedCurves_Sect163r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x354667c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r1Holder::SecNamedCurves_Sect193r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35468f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x35468fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect193r2Holder::SecNamedCurves_Sect193r2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3546b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233k1Holder::SecNamedCurves_Sect233k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3546d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect233r1Holder::SecNamedCurves_Sect233r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3546fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3546fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect239k1Holder::SecNamedCurves_Sect239k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x35471a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283k1Holder::SecNamedCurves_Sect283k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x354737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3547380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect283r1Holder::SecNamedCurves_Sect283r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35475e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x35475e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409k1Holder::SecNamedCurves_Sect409k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35477c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x35477c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect409r1Holder::SecNamedCurves_Sect409r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3547a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3547a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571k1Holder::SecNamedCurves_Sect571k1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3547c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3547c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves_Sect571r1Holder::SecNamedCurves_Sect571r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::*)()>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3540dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3540df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                             { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3540eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.ConfigureCurveGlv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureCurveGlv)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3540ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                            { "ConfigureCurveGlv", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3540f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.DefineCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x354102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                                                           { "DefineCurve",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3541ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35421e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x354207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3542318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3542410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::setStaticF_objIds(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::getStaticF_objIds() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::setStaticF_curves(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::getStaticF_curves() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::setStaticF_names(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                           { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::ConfigureCurveGlv(::Org::BouncyCastle::Math::EC::ECCurve* c,
                                                                                                               ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                          { "ConfigureCurveGlv", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, c, p);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, hex);
}
inline void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                      ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(),
                                                                                         { "DefineCurve",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, oid, holder);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Asn1::Sec::SecNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Sec::SecNamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Sec::SecNamedCurves::SecNamedCurves() {}
