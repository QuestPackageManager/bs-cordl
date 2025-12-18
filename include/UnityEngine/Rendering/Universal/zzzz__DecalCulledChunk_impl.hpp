#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCulledChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCulledChunk::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66a81f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCulledChunk::SetCapacity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x66a828c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCulledChunk::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66a8378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCulledChunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCulledChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCulledChunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66a4e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cullingGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndexArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndexArray;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_get_visibleDecalIndexArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleDecalIndexArray;
}
constexpr void UnityEngine::Rendering::Universal::DecalCulledChunk::__cordl_internal_set_visibleDecalIndexArray(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___visibleDecalIndexArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityIndex);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::SetCapacity(int32_t newCapacity) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCulledChunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalCulledChunk* UnityEngine::Rendering::Universal::DecalCulledChunk::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalCulledChunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCulledChunk::DecalCulledChunk() {}
