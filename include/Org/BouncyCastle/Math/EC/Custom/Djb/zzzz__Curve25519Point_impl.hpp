#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Custom\Djb\Curve25519Point.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Djb/zzzz__Curve25519Point_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Djb/zzzz__Curve25519FieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34a59c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x34a5cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>,
    bool)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34a5e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.Detach
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Detach)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x34aa6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.GetZCoord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetZCoord)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x34aa784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Add)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x34aa7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.Twice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Twice)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x34aaea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.TwicePlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwicePlus)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x34aaf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.ThreeTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::ThreeTimes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x34ab01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Negate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x34ab090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.CalculateJacobianModifiedW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::CalculateJacobianModifiedW)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x34ab160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.GetJacobianModifiedW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetJacobianModifiedW)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x34ab2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point.TwiceJacobianModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::*)(bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwiceJacobianModified)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x34ab40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 38 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, x, y);
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, x, y, withCompression);
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs,
                                                                             bool withCompression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Detach() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetZCoord(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Add(::Org::BouncyCastle::Math::EC::ECPoint* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Twice() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::ThreeTimes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Negate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*
Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* Z, ::ArrayW<uint32_t> ZSquared) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*>(this, ___internal_method, Z, ZSquared);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::GetJacobianModifiedW() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::TwiceJacobianModified(bool calculateW) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(this, ___internal_method, calculateW);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(curve, x, y));
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                                                        bool withCompression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(curve, x, y, withCompression));
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                                                        ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs,
                                                                                                                                        bool withCompression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*>(curve, x, y, zs, withCompression));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point::Curve25519Point() {}
