#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Normals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Normals_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.ClearIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::ProBuilder::Normals::ClearIntArray)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x66d0460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "ClearIntArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Normals::CalculateTangents)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x66d0564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateTangents", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateHardNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Normals::CalculateHardNormals)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x66d0a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateHardNormals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Normals::CalculateNormals)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x66d0f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateNormals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Normals::setStaticF_s_SmoothAvg(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_SmoothAvg", ::UnityEngine::ProBuilder::Normals*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::Normals::getStaticF_s_SmoothAvg() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_SmoothAvg", ::UnityEngine::ProBuilder::Normals*>();
}
inline void UnityEngine::ProBuilder::Normals::setStaticF_s_SmoothAvgCount(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "s_SmoothAvgCount", ::UnityEngine::ProBuilder::Normals*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::ProBuilder::Normals::getStaticF_s_SmoothAvgCount() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_SmoothAvgCount", ::UnityEngine::ProBuilder::Normals*>();
}
inline void UnityEngine::ProBuilder::Normals::setStaticF_s_CachedIntArray(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_CachedIntArray", ::UnityEngine::ProBuilder::Normals*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Normals::getStaticF_s_CachedIntArray() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_CachedIntArray", ::UnityEngine::ProBuilder::Normals*>();
}
inline void UnityEngine::ProBuilder::Normals::ClearIntArray(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "ClearIntArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count);
}
inline void UnityEngine::ProBuilder::Normals::CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateTangents", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::Normals::CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateHardNormals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::Normals::CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normals*>(), { "CalculateNormals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Normals::Normals() {}
