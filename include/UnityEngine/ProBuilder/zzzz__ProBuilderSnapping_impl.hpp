#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderSnapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderSnapping_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vector3Mask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.IsCardinalDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::ProBuilderSnapping::IsCardinalDirection)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x66d6580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(), { "IsCardinalDirection", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.Snap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::ProBuilder::ProBuilderSnapping::Snap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66d6778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(), { "Snap", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.Snap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::ProBuilderSnapping::Snap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66d6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
                                                                                           { "Snap", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.SnapVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::ProBuilderSnapping::SnapVertices)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x66d68b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
                                                             { "SnapVertices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.GetSnappingMaskBasedOnNormalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::ProBuilderSnapping::GetSnappingMaskBasedOnNormalVector)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x66d6c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
                                                                                           { "GetSnappingMaskBasedOnNormalVector", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderSnapping.SnapValueOnRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Ray, float_t, float_t, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::ProBuilderSnapping::SnapValueOnRay)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x66d6d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
            { "SnapValueOnRay", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ProBuilder::ProBuilderSnapping::IsCardinalDirection(::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(), { "IsCardinalDirection", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, direction);
}
inline float_t UnityEngine::ProBuilder::ProBuilderSnapping::Snap(float_t val, float_t snap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(), { "Snap", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, val, snap);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::Snap(::UnityEngine::Vector3 val, ::UnityEngine::Vector3 snap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
                                                                                         { "Snap", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, val, snap);
}
inline void UnityEngine::ProBuilder::ProBuilderSnapping::SnapVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes,
                                                                      ::UnityEngine::Vector3 snap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
                                                           { "SnapVertices",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes, snap);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::GetSnappingMaskBasedOnNormalVector(::UnityEngine::Vector3 normal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(), { "GetSnappingMaskBasedOnNormalVector", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, normal);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::SnapValueOnRay(::UnityEngine::Ray ray, float_t distance, float_t snap, ::UnityEngine::ProBuilder::Vector3Mask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderSnapping*>(),
          { "SnapValueOnRay", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ray, distance, snap, mask);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderSnapping::ProBuilderSnapping() {}
