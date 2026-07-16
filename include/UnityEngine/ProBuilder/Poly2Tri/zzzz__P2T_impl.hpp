#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/P2T.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationAlgorithm_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__P2T_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__ConstrainedPointSet_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonSet_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet*)>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x66a4bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon*)>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66a4fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*)>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66a503c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
                                                                                           { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::PointSet*)>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66a5080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.CreateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm)>(
    &::UnityEngine::ProBuilder::Poly2Tri::P2T::CreateContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66a4ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "CreateContext", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66a5000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
            { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66a4f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
                                                                                           { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::P2T.Warmup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ProBuilder::Poly2Tri::P2T::Warmup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66a51d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Warmup", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::setStaticF__defaultAlgorithm(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, "_defaultAlgorithm", ::UnityEngine::ProBuilder::Poly2Tri::P2T*>(
      std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm>(value));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm UnityEngine::ProBuilder::Poly2Tri::P2T::getStaticF__defaultAlgorithm() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, "_defaultAlgorithm", ::UnityEngine::ProBuilder::Poly2Tri::P2T*>();
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* ps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ps);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::Polygon* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet* cps) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
                                                                                         { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cps);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PointSet* ps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ps);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::Poly2Tri::P2T::CreateContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
                                                                                         { "CreateContext", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>(nullptr, ___internal_method, algorithm);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
          { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, algorithm, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(),
                                                                                         { "Triangulate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::P2T::Warmup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::P2T*>(), { "Warmup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::P2T::P2T() {}
