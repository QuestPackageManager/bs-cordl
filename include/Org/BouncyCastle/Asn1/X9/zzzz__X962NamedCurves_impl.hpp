#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X9\X962NamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X962NamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X962NamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3679b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3679b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v1Holder::X962NamedCurves_Prime192v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x367a134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v2Holder::X962NamedCurves_Prime192v2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367a3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x367a3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime192v3Holder::X962NamedCurves_Prime192v3Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x367a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v1Holder::X962NamedCurves_Prime239v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x367a8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v2Holder::X962NamedCurves_Prime239v2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367ab70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x367ab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime239v3Holder::X962NamedCurves_Prime239v3Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367ae04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x367ae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_Prime256v1Holder::X962NamedCurves_Prime256v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367b098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x367b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v1Holder::X962NamedCurves_C2pnb163v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367b30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x367b310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v2Holder::X962NamedCurves_C2pnb163v2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367b52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x367b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb163v3Holder::X962NamedCurves_C2pnb163v3Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367b744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367b748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb176w1Holder::X962NamedCurves_C2pnb176w1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367b964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x367b968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v1Holder::X962NamedCurves_C2tnb191v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367bbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367bbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v2Holder::X962NamedCurves_C2tnb191v2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367bdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367bdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb191v3Holder::X962NamedCurves_C2tnb191v3Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367c018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x367c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb208w1Holder::X962NamedCurves_C2pnb208w1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367c220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v1Holder::X962NamedCurves_C2tnb239v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367c43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367c440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v2Holder::X962NamedCurves_C2tnb239v2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367c65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367c660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb239v3Holder::X962NamedCurves_C2tnb239v3Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367c87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367c880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb272w1Holder::X962NamedCurves_C2pnb272w1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367ca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb304w1Holder::X962NamedCurves_C2pnb304w1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367ccbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367ccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb359v1Holder::X962NamedCurves_C2tnb359v1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367cedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2pnb368w1Holder::X962NamedCurves_C2pnb368w1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367d0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x367d100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder* Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves_C2tnb431r1Holder::X962NamedCurves_C2tnb431r1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X962NamedCurves::*)()>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3678788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x367878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                             { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x367899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36789a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.DefineCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3678a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                                                           { "DefineCurve",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3679624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x367980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x36796a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3679944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X962NamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Asn1::X9::X962NamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3679a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves::setStaticF_objIds(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::X9::X962NamedCurves::getStaticF_objIds() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves::setStaticF_curves(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::X9::X962NamedCurves::getStaticF_curves() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "curves", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves::setStaticF_names(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::X9::X962NamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Asn1::X9::X962NamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                           { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::X9::X962NamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X9::X962NamedCurves::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, hex);
}
inline void Org::BouncyCastle::Asn1::X9::X962NamedCurves::DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                      ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(),
                                                                                         { "DefineCurve",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, oid, holder);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Asn1::X9::X962NamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X9::X962NamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X962NamedCurves* Org::BouncyCastle::Asn1::X9::X962NamedCurves::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X962NamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X962NamedCurves::X962NamedCurves() {}
