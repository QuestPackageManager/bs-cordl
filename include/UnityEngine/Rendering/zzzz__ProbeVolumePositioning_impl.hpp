#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeVolumePositioning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumePositioning_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePositioning.OBBIntersect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>, ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>)>(
    &::UnityEngine::Rendering::ProbeVolumePositioning::OBBIntersect)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x6796f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                                                           { "OBBIntersect",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePositioning.OBBContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeVolumePositioning::OBBContains)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x679770c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                         { "OBBContains", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePositioning.OBBAABBIntersect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bounds>)>(
    &::UnityEngine::Rendering::ProbeVolumePositioning::OBBAABBIntersect)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x67977e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                             { "OBBAABBIntersect",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePositioning.ProjectOBB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeVolumePositioning::ProjectOBB)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6797624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                         { "ProjectOBB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumePositioning.ProjectAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeVolumePositioning::ProjectAABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6797d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                             { "ProjectAABB", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumePositioning::setStaticF_m_Axes(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "m_Axes", ::UnityEngine::Rendering::ProbeVolumePositioning*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeVolumePositioning::getStaticF_m_Axes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "m_Axes", ::UnityEngine::Rendering::ProbeVolumePositioning*>();
}
inline void UnityEngine::Rendering::ProbeVolumePositioning::setStaticF_m_AABBCorners(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "m_AABBCorners", ::UnityEngine::Rendering::ProbeVolumePositioning*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeVolumePositioning::getStaticF_m_AABBCorners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "m_AABBCorners", ::UnityEngine::Rendering::ProbeVolumePositioning*>();
}
inline bool UnityEngine::Rendering::ProbeVolumePositioning::OBBIntersect(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a,
                                                                         ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                                                         { "OBBIntersect",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::ProbeVolumePositioning::OBBContains(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> obb, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                              { "OBBContains", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obb, point);
}
inline bool UnityEngine::Rendering::ProbeVolumePositioning::OBBAABBIntersect(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a, ::by_ref<::UnityEngine::Bounds> b,
                                                                             ::by_ref<::UnityEngine::Bounds> aAABB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                           { "OBBAABBIntersect",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, aAABB);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::ProbeVolumePositioning::ProjectOBB(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a, ::UnityEngine::Vector3 axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                              { "ProjectOBB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, axis);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::ProbeVolumePositioning::ProjectAABB(::by_ref<::ArrayW<::UnityEngine::Vector3>> corners, ::UnityEngine::Vector3 axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumePositioning*>(),
                                                           { "ProjectAABB", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, corners, axis);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumePositioning::ProbeVolumePositioning() {}
