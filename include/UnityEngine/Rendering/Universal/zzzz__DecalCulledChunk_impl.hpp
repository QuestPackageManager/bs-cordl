#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalCulledChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCulledChunk::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6860414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)(int32_t)>(&::UnityEngine::Rendering::Universal::DecalCulledChunk::SetCapacity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68604b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)()>(&::UnityEngine::Rendering::Universal::DecalCulledChunk::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x686059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)()>(&::UnityEngine::Rendering::Universal::DecalCulledChunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x685d3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cameraPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cameraPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPosition;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_cameraPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraPosition = value;
}
constexpr uint64_t& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_sceneCullingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCullingMask;
}
constexpr uint64_t const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_sceneCullingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCullingMask;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_sceneCullingMask(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneCullingMask = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cullingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullingMask;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cullingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullingMask;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_cullingMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cullingMask = value;
}
constexpr ::UnityEngine::CullingGroup*& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cullingGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullingGroups;
}
constexpr ::UnityEngine::CullingGroup* const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_cullingGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullingGroups;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_cullingGroups(::UnityEngine::CullingGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cullingGroups = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndexArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndexArray;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndexArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndexArray;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_visibleDecalIndexArray(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibleDecalIndexArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndices;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndices;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_visibleDecalIndices(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibleDecalIndices = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalCount;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_visibleDecalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibleDecalCount = value;
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::RemoveAtSwapBack(int32_t entityIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityIndex);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::SetCapacity(int32_t newCapacity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalCulledChunk* UnityEngine::Rendering::Universal::DecalCulledChunk::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalCulledChunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCulledChunk::DecalCulledChunk() {}
