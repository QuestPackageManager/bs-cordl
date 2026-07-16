#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PointGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointGenerator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator.UniformDistribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* (*)(int32_t, double_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformDistribution)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x66ac9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(),
                                                                                           { "UniformDistribution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator.UniformGrid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* (*)(int32_t, double_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformGrid)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x66acb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(), { "UniformGrid", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointGenerator::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PointGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66accf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::PointGenerator::setStaticF_RNG(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "RNG", ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* UnityEngine::ProBuilder::Poly2Tri::PointGenerator::getStaticF_RNG() {
  return ::cordl_internals::getStaticField<::System::Random*, "RNG", ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>();
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformDistribution(int32_t n,
                                                                                                                                                                                double_t scale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(),
                                                                                         { "UniformDistribution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(nullptr, ___internal_method, n, scale);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UnityEngine::ProBuilder::Poly2Tri::PointGenerator::UniformGrid(int32_t n, double_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(), { "UniformGrid", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(nullptr, ___internal_method, n, scale);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator* UnityEngine::ProBuilder::Poly2Tri::PointGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator::PointGenerator() {}
