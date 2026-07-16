#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonGenerator_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon* (*)(double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x66acd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(),
                                                                                           { "RandomCircleSweep", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon* (*)(double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x66ad060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(),
                                                                                           { "RandomCircleSweep2", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ad2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::setStaticF_RNG(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "RNG", ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::getStaticF_RNG() {
  return ::cordl_internals::getStaticField<::System::Random*, "RNG", ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>();
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::setStaticF_PI_2(double_t value) {
  ::cordl_internals::setStaticField<double_t, "PI_2", ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::getStaticF_PI_2() {
  return ::cordl_internals::getStaticField<double_t, "PI_2", ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>();
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep(double_t scale, int32_t vertexCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(),
                                                                                         { "RandomCircleSweep", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(nullptr, ___internal_method, scale, vertexCount);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2(double_t scale, int32_t vertexCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(),
                                                                                         { "RandomCircleSweep2", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(nullptr, ___internal_method, scale, vertexCount);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::PolygonGenerator() {}
