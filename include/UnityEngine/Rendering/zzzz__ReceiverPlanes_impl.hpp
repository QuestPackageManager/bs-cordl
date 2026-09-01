#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ReceiverPlanes.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverPlanes_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.IsSignBitSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::UnityEngine::Rendering::ReceiverPlanes::IsSignBitSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x680f754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "IsSignBitSet", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.LightFacingFrustumPlaneSubArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::ReceiverPlanes::*)()>(
    &::UnityEngine::Rendering::ReceiverPlanes::LightFacingFrustumPlaneSubArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x680f760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "LightFacingFrustumPlaneSubArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.SilhouettePlaneSubArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::ReceiverPlanes::*)()>(
    &::UnityEngine::Rendering::ReceiverPlanes::SilhouettePlaneSubArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x680f7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "SilhouettePlaneSubArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.CreateEmptyForTesting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReceiverPlanes (*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::ReceiverPlanes::CreateEmptyForTesting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x680f8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "CreateEmptyForTesting", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ReceiverPlanes::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::ReceiverPlanes::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x680f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReceiverPlanes (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::ReceiverPlanes::Create)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x680f980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(),
                                                { "Create", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ReceiverPlanes::IsSignBitSet(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "IsSignBitSet", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::ReceiverPlanes::LightFacingFrustumPlaneSubArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "LightFacingFrustumPlaneSubArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::ReceiverPlanes::SilhouettePlaneSubArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "SilhouettePlaneSubArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReceiverPlanes UnityEngine::Rendering::ReceiverPlanes::CreateEmptyForTesting(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "CreateEmptyForTesting", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverPlanes>(nullptr, ___internal_method, allocator);
}
inline void UnityEngine::Rendering::ReceiverPlanes::Dispose(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, job);
}
inline ::UnityEngine::Rendering::ReceiverPlanes UnityEngine::Rendering::ReceiverPlanes::Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext> cc, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ReceiverPlanes>(),
                                              { "Create", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverPlanes>(nullptr, ___internal_method, cc, allocator);
}
// Ctor Parameters [CppParam { name: "planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightFacingPlaneCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReceiverPlanes::ReceiverPlanes(::Unity::Collections::NativeList_1<::UnityEngine::Plane> planes, int32_t lightFacingPlaneCount) noexcept {
  this->planes = planes;
  this->lightFacingPlaneCount = lightFacingPlaneCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReceiverPlanes::ReceiverPlanes() {}
