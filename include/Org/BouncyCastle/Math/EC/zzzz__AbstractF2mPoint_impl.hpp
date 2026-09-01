#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\AbstractF2mPoint.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointBase_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34dc1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>,
    bool)>(&::Org::BouncyCastle::Math::EC::AbstractF2mPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34dc200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.SatisfiesCurveEquation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mPoint::SatisfiesCurveEquation)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x34dc208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.SatisfiesOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mPoint::SatisfiesOrder)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x34dc65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.ScaleX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleX)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x34dc924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.ScaleXNegateY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleXNegateY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34dcbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.ScaleY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleY)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x34dcbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.ScaleYNegateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleYNegateX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34dccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::Subtract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x34dccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.Tau
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)()>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::Tau)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x34dcd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mPoint.TauPow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mPoint::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mPoint::TauPow)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x34dcfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 37 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::AbstractF2mPoint::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, x, y, withCompression);
}
inline void Org::BouncyCastle::Math::EC::AbstractF2mPoint::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, x, y, zs, withCompression);
}
inline bool Org::BouncyCastle::Math::EC::AbstractF2mPoint::SatisfiesCurveEquation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::AbstractF2mPoint::SatisfiesOrder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleXNegateY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::ScaleYNegateX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::Tau() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::TauPow(int32_t pow) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(this, ___internal_method, pow);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(curve, x, y, withCompression));
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::AbstractF2mPoint::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(curve, x, y, zs, withCompression));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint::AbstractF2mPoint() {}
