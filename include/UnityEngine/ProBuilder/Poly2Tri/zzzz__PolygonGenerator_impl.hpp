#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonGenerator_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon* (*)(double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2b35cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(), "RandomCircleSweep", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator.RandomCircleSweep2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::Polygon* (*)(double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2b35fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(), "RandomCircleSweep2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3623c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::setStaticF_RNG(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get>(
      std::forward<::System::Random*>(value));
}
inline ::System::Random* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::getStaticF_RNG() {
  return ::cordl_internals::getStaticField<::System::Random*, "RNG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get>();
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::setStaticF_PI_2(double_t value) {
  ::cordl_internals::setStaticField<double_t, "PI_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get>(
      std::forward<double_t>(value));
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::getStaticF_PI_2() {
  return ::cordl_internals::getStaticField<double_t, "PI_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get>();
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep(double_t scale, int32_t vertexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(), "RandomCircleSweep", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon*, false>(nullptr, ___internal_method, scale, vertexCount);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::RandomCircleSweep2(double_t scale, int32_t vertexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(), "RandomCircleSweep2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::Polygon*, false>(nullptr, ___internal_method, scale, vertexCount);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator* UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>());
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator::PolygonGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
