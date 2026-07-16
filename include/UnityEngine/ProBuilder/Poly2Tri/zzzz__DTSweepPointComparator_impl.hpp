#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweepPointComparator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepPointComparator_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::Compare)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66abe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*>(),
            { "Compare", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ab628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::Compare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1,
                                                                                  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*>(),
                       { "Compare", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>"
constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*
UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::i___System__Collections__Generic__IComparer_1___UnityEngine__ProBuilder__Poly2Tri__TriangulationPoint__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::DTSweepPointComparator() {}
