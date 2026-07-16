#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPool_def.hpp"
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__SupportDitheringCrossFade(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SupportDitheringCrossFade", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__SupportDitheringCrossFade() {
  return ::cordl_internals::getStaticField<int32_t, "_SupportDitheringCrossFade", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__LodGroupCullingDataGPUByteSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LodGroupCullingDataGPUByteSize", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__LodGroupCullingDataGPUByteSize() {
  return ::cordl_internals::getStaticField<int32_t, "_LodGroupCullingDataGPUByteSize", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__LodGroupCullingDataStartOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LodGroupCullingDataStartOffset", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__LodGroupCullingDataStartOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_LodGroupCullingDataStartOffset", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__LodCullingDataQueueCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LodCullingDataQueueCount", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__LodCullingDataQueueCount() {
  return ::cordl_internals::getStaticField<int32_t, "_LodCullingDataQueueCount", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__InputLodCullingDataIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputLodCullingDataIndices", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__InputLodCullingDataIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_InputLodCullingDataIndices", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__InputLodCullingDataBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputLodCullingDataBuffer", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__InputLodCullingDataBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_InputLodCullingDataBuffer", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
inline void UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::setStaticF__LodGroupCullingData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LodGroupCullingData", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::getStaticF__LodGroupCullingData() {
  return ::cordl_internals::getStaticField<int32_t, "_LodGroupCullingData", ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs::LODGroupDataPool_LodGroupShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_lodGroupDataHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> (
    ::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::get_lodGroupDataHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x682c098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_lodGroupDataHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_lodGroupCullingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> (::UnityEngine::Rendering::LODGroupDataPool::*)()>(
    &::UnityEngine::Rendering::LODGroupDataPool::get_lodGroupCullingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682c0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_lodGroupCullingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_crossfadedRendererCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::get_crossfadedRendererCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682c0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_crossfadedRendererCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_activeLodGroupCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::get_activeLodGroupCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x682c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_activeLodGroupCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*, int32_t, bool)>(
    &::UnityEngine::Rendering::LODGroupDataPool::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x682c118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x682c234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.UpdateLODGroupTransformData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(
    &::UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupTransformData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x682c2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                             { "UpdateLODGroupTransformData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.UpdateLODGroupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(
    &::UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupData)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x682c468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                             { "UpdateLODGroupData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.FreeLODGroupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::LODGroupDataPool::FreeLODGroupData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x682c710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                                                           { "FreeLODGroupData", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupData;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupData;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LODGroupData = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupDataHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupDataHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> const&
UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupDataHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupDataHash;
}
constexpr void
UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupDataHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LODGroupDataHash = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupCullingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupCullingData;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupCullingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupCullingData;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupCullingData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LODGroupCullingData = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_FreeLODGroupDataHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeLODGroupDataHandles;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_FreeLODGroupDataHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeLODGroupDataHandles;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_FreeLODGroupDataHandles(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeLODGroupDataHandles = value;
}
constexpr int32_t& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_CrossfadedRendererCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CrossfadedRendererCount;
}
constexpr int32_t const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_CrossfadedRendererCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CrossfadedRendererCount;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_CrossfadedRendererCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CrossfadedRendererCount = value;
}
constexpr bool& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_SupportDitheringCrossFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDitheringCrossFade;
}
constexpr bool const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_SupportDitheringCrossFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDitheringCrossFade;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_SupportDitheringCrossFade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportDitheringCrossFade = value;
}
inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> UnityEngine::Rendering::LODGroupDataPool::get_lodGroupDataHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_lodGroupDataHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>(this, ___internal_method);
}
inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> UnityEngine::Rendering::LODGroupDataPool::get_lodGroupCullingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_lodGroupCullingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool::get_crossfadedRendererCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_crossfadedRendererCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::LODGroupDataPool::get_activeLodGroupCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "get_activeLodGroupCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LODGroupDataPool::_ctor(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, int32_t initialInstanceCount, bool supportDitheringCrossFade) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources, initialInstanceCount, supportDitheringCrossFade);
}
inline void UnityEngine::Rendering::LODGroupDataPool::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupTransformData(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData> inputData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                           { "UpdateLODGroupTransformData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputData);
}
inline void UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupData(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData> inputData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                           { "UpdateLODGroupData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputData);
}
inline void UnityEngine::Rendering::LODGroupDataPool::FreeLODGroupData(::Unity::Collections::NativeArray_1<int32_t> destroyedLODGroupsID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                                                                                         { "FreeLODGroupData", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyedLODGroupsID);
}
inline ::UnityEngine::Rendering::LODGroupDataPool* UnityEngine::Rendering::LODGroupDataPool::New_ctor(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, int32_t initialInstanceCount,
                                                                                                      bool supportDitheringCrossFade) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LODGroupDataPool*>(resources, initialInstanceCount, supportDitheringCrossFade));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::LODGroupDataPool::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::LODGroupDataPool::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPool::LODGroupDataPool() {}
