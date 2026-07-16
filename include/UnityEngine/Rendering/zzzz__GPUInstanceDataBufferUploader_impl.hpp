#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputValidComponentCounts(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputValidComponentCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputValidComponentCounts() {
  return ::cordl_internals::getStaticField<int32_t, "_InputValidComponentCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceCounts(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputInstanceCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceCounts() {
  return ::cordl_internals::getStaticField<int32_t, "_InputInstanceCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceByteSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputInstanceByteSize", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceByteSize() {
  return ::cordl_internals::getStaticField<int32_t, "_InputInstanceByteSize", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentOffsets(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputComponentOffsets", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentOffsets() {
  return ::cordl_internals::getStaticField<int32_t, "_InputComponentOffsets", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputInstanceData", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceData() {
  return ::cordl_internals::getStaticField<int32_t, "_InputInstanceData", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputInstanceIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_InputInstanceIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputValidComponentIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputValidComponentIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputValidComponentIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_InputValidComponentIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentAddresses(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputComponentAddresses", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentAddresses() {
  return ::cordl_internals::getStaticField<int32_t, "_InputComponentAddresses", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentByteCounts(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputComponentByteCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentByteCounts() {
  return ::cordl_internals::getStaticField<int32_t, "_InputComponentByteCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentInstanceIndexRanges(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputComponentInstanceIndexRanges", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentInstanceIndexRanges() {
  return ::cordl_internals::getStaticField<int32_t, "_InputComponentInstanceIndexRanges", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__OutputBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__OutputBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::GPUInstanceDataBufferUploader_UploadKernelIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources.LoadShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::LoadShaders)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x681ce7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(),
                                                                                           { "LoadShaders", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources.CreateResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::CreateResources)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x681c810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(),
                                                { "CreateResources", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::*)()>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x681cf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(),
                                                                                         { "LoadShaders", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::CreateResources(int32_t newInstanceCount, int32_t sizePerInstance, int32_t newComponentCounts,
                                                                                                int32_t validComponentIndicesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(),
                                                           { "CreateResources", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newInstanceCount, sizePerInstance, newComponentCounts, validComponentIndicesCount);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceIndices", ty:
// "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputComponentOffsets", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "validComponentIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceDataByteSize", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ComponentCounts", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_ValidComponentIndicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::GPUInstanceDataBufferUploader_GPUResources(
    ::UnityEngine::ComputeBuffer* instanceData, ::UnityEngine::ComputeBuffer* instanceIndices, ::UnityEngine::ComputeBuffer* inputComponentOffsets, ::UnityEngine::ComputeBuffer* validComponentIndices,
    ::UnityW<::UnityEngine::ComputeShader> cs, int32_t kernelId, int32_t m_InstanceDataByteSize, int32_t m_InstanceCount, int32_t m_ComponentCounts, int32_t m_ValidComponentIndicesCount) noexcept {
  this->instanceData = instanceData;
  this->instanceIndices = instanceIndices;
  this->inputComponentOffsets = inputComponentOffsets;
  this->validComponentIndices = validComponentIndices;
  this->cs = cs;
  this->kernelId = kernelId;
  this->m_InstanceDataByteSize = m_InstanceDataByteSize;
  this->m_InstanceCount = m_InstanceCount;
  this->m_ComponentCounts = m_ComponentCounts;
  this->m_ValidComponentIndicesCount = m_ValidComponentIndicesCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources::GPUInstanceDataBufferUploader_GPUResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::*)(int32_t)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::Execute)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x681cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "gatherData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "parameterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "uintPerParameter", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uintPerInstance", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "componentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gatherIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "tmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob(
    bool gatherData, int32_t parameterIndex, int32_t uintPerParameter, int32_t uintPerInstance, ::Unity::Collections::NativeArray_1<int32_t> componentDataIndex,
    ::Unity::Collections::NativeArray_1<int32_t> gatherIndices, ::Unity::Collections::NativeArray_1<uint32_t> instanceData, ::Unity::Collections::NativeArray_1<uint32_t> tmpDataBuffer) noexcept {
  this->gatherData = gatherData;
  this->parameterIndex = parameterIndex;
  this->uintPerParameter = uintPerParameter;
  this->uintPerInstance = uintPerInstance;
  this->componentDataIndex = componentDataIndex;
  this->gatherIndices = gatherIndices;
  this->instanceData = instanceData;
  this->tmpDataBuffer = tmpDataBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>, int32_t, ::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x681c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetUploadBufferPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUploadBufferPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x681c2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetUploadBufferPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetUIntPerInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUIntPerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetUIntPerInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetParamUIntOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(int32_t)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetParamUIntOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x681c33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetParamUIntOffset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.AllocateUploadHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(int32_t)>(
    &::UnityEngine::Rendering::GPUInstanceDataBufferUploader::AllocateUploadHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "AllocateUploadHandles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.SubmitToGpu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(
    ::UnityEngine::Rendering::GPUInstanceDataBuffer*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>,
    ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x681c350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                            { "SubmitToGpu",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.SubmitToGpu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(
    ::UnityEngine::Rendering::GPUInstanceDataBuffer*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>,
    ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x681c9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                            { "SubmitToGpu",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x681caa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::_ctor(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>> descriptions,
                                                                         int32_t capacity, ::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, descriptions, capacity, instanceType);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUploadBufferPtr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetUploadBufferPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUIntPerInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetUIntPerInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetParamUIntOffset(int32_t parameterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "GetParamUIntOffset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parameterIndex);
}
template <typename T> inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::PrepareParamWrite(int32_t parameterIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "PrepareParamWrite", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parameterIndex);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::AllocateUploadHandles(int32_t handlesLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "AllocateUploadHandles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handlesLength);
}
template <typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::GPUInstanceDataBufferUploader::WriteInstanceDataJob(int32_t parameterIndex, ::Unity::Collections::NativeArray_1<T> instanceData) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                                              { "WriteInstanceDataJob", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, parameterIndex, instanceData);
}
template <typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::GPUInstanceDataBufferUploader::WriteInstanceDataJob(int32_t parameterIndex, ::Unity::Collections::NativeArray_1<T> instanceData,
                                                                                                            ::Unity::Collections::NativeArray_1<int32_t> gatherIndices) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                                       { "WriteInstanceDataJob",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, parameterIndex, instanceData, gatherIndices);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer* instanceDataBuffer,
                                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                                                               ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources> gpuResources,
                                                                               bool submitOnlyWrittenParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                          { "SubmitToGpu",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceDataBuffer, gpuInstanceIndices, gpuResources, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer* instanceDataBuffer,
                                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                               ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources> gpuResources,
                                                                               bool submitOnlyWrittenParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                          { "SubmitToGpu",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceDataBuffer, instances, gpuResources, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUInstanceDataBufferUploader::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBufferUploader::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_UintPerInstance", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ComponentIsInstanced", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ComponentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_DescriptionsUintSize", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TmpDataBuffer", ty:
// "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WritenComponentIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_DummyArray", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GPUInstanceDataBufferUploader(int32_t m_UintPerInstance, int32_t m_Capacity, int32_t m_InstanceCount,
                                                                                                 ::Unity::Collections::NativeArray_1<bool> m_ComponentIsInstanced,
                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> m_ComponentDataIndex,
                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> m_DescriptionsUintSize,
                                                                                                 ::Unity::Collections::NativeArray_1<uint32_t> m_TmpDataBuffer,
                                                                                                 ::Unity::Collections::NativeList_1<int32_t> m_WritenComponentIndices,
                                                                                                 ::Unity::Collections::NativeArray_1<int32_t> m_DummyArray) noexcept {
  this->m_UintPerInstance = m_UintPerInstance;
  this->m_Capacity = m_Capacity;
  this->m_InstanceCount = m_InstanceCount;
  this->m_ComponentIsInstanced = m_ComponentIsInstanced;
  this->m_ComponentDataIndex = m_ComponentDataIndex;
  this->m_DescriptionsUintSize = m_DescriptionsUintSize;
  this->m_TmpDataBuffer = m_TmpDataBuffer;
  this->m_WritenComponentIndices = m_WritenComponentIndices;
  this->m_DummyArray = m_DummyArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GPUInstanceDataBufferUploader() {}
