#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::*)(::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x681b52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly.CPUInstanceToGPUInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceIndex (::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::*)(
    ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::CPUInstanceToGPUInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681b548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                           { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly.CPUInstanceArrayToGPUInstanceArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::CPUInstanceArrayToGPUInstanceArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x681b550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                           { "CPUInstanceArrayToGPUInstanceArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::_ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline ::UnityEngine::Rendering::GPUInstanceIndex UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                         { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceIndex>(*this, ___internal_method, instance);
}
inline void
UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(),
                                                                                         { "CPUInstanceArrayToGPUInstanceArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, gpuInstanceIndices);
}
// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::GPUInstanceDataBuffer_ReadOnly(::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum) noexcept {
  this->instancesNumPrefixSum = instancesNumPrefixSum;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly::GPUInstanceDataBuffer_ReadOnly() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::*)(int32_t)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x681b618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuInstanceIndices", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices) noexcept {
  this->instancesNumPrefixSum = instancesNumPrefixSum;
  this->instances = instances;
  this->gpuInstanceIndices = gpuInstanceIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.NextVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::NextVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x681ada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "NextVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::get_valid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x681adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.CPUInstanceToGPUInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceIndex (*)(
    ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceToGPUInstance)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x681ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
            { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.GetPropertyIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::GetPropertyIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x681b064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetPropertyIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.GetGpuAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(::StringW, bool)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::GetGpuAddress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x681b0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetGpuAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.GetGpuAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(int32_t, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::GetGpuAddress)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x681b114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetGpuAddress", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.CPUInstanceToGPUInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceIndex (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceToGPUInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x681b13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                           { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.GPUInstanceToCPUInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(::UnityEngine::Rendering::GPUInstanceIndex)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::GPUInstanceToCPUInstance)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x681b148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                           { "GPUInstanceToCPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.CPUInstanceArrayToGPUInstanceArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>,
                                                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>)>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceArrayToGPUInstanceArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x681b298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                           { "CPUInstanceArrayToGPUInstanceArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x681b360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer.AsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)()>(
    &::UnityEngine::Rendering::GPUInstanceDataBuffer::AsReadOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x681b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "AsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBuffer::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x681b544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::InstanceNumInfo& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instanceNumInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceNumInfo;
}
constexpr ::UnityEngine::Rendering::InstanceNumInfo const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instanceNumInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceNumInfo;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_instanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceNumInfo = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instancesNumPrefixSum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instancesNumPrefixSum;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instancesNumPrefixSum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instancesNumPrefixSum;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_instancesNumPrefixSum(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instancesNumPrefixSum = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instancesSpan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instancesSpan;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_instancesSpan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instancesSpan;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_instancesSpan(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instancesSpan = value;
}
constexpr int32_t& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_byteSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteSize;
}
constexpr int32_t const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_byteSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteSize;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_byteSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteSize = value;
}
constexpr int32_t& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_perInstanceComponentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perInstanceComponentCount;
}
constexpr int32_t const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_perInstanceComponentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perInstanceComponentCount;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_perInstanceComponentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___perInstanceComponentCount = value;
}
constexpr int32_t& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr int32_t& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_layoutVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutVersion;
}
constexpr int32_t const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_layoutVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutVersion;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_layoutVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layoutVersion = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_gpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_gpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuBuffer;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_gpuBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_validComponentsIndicesGpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validComponentsIndicesGpuBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_validComponentsIndicesGpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validComponentsIndicesGpuBuffer;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_validComponentsIndicesGpuBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validComponentsIndicesGpuBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentAddressesGpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentAddressesGpuBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentAddressesGpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentAddressesGpuBuffer;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_componentAddressesGpuBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___componentAddressesGpuBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentInstanceIndexRangesGpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentInstanceIndexRangesGpuBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentInstanceIndexRangesGpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentInstanceIndexRangesGpuBuffer;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_componentInstanceIndexRangesGpuBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___componentInstanceIndexRangesGpuBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentByteCountsGpuBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentByteCountsGpuBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_componentByteCountsGpuBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentByteCountsGpuBuffer;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_componentByteCountsGpuBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___componentByteCountsGpuBuffer = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_descriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptions;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_descriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptions;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_descriptions(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descriptions = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_defaultMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMetadata;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_defaultMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMetadata;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_defaultMetadata(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultMetadata = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_gpuBufferComponentAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuBufferComponentAddress;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_gpuBufferComponentAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuBufferComponentAddress;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_gpuBufferComponentAddress(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuBufferComponentAddress = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t>& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_nameToMetadataMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameToMetadataMap;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> const& UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_get_nameToMetadataMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameToMetadataMap;
}
constexpr void UnityEngine::Rendering::GPUInstanceDataBuffer::__cordl_internal_set_nameToMetadataMap(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameToMetadataMap = value;
}
inline void UnityEngine::Rendering::GPUInstanceDataBuffer::setStaticF_s_NextLayoutVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_NextLayoutVersion", ::UnityEngine::Rendering::GPUInstanceDataBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBuffer::getStaticF_s_NextLayoutVersion() {
  return ::cordl_internals::getStaticField<int32_t, "s_NextLayoutVersion", ::UnityEngine::Rendering::GPUInstanceDataBuffer*>();
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBuffer::NextVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "NextVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUInstanceDataBuffer::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUInstanceIndex UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceToGPUInstance(::by_ref<::Unity::Collections::NativeArray_1<int32_t>> instancesNumPrefixSum,
                                                                                                                          ::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                       { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceIndex>(nullptr, ___internal_method, instancesNumPrefixSum, instance);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBuffer::GetPropertyIndex(int32_t propertyID, bool assertOnFail) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetPropertyIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, propertyID, assertOnFail);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBuffer::GetGpuAddress(::StringW strName, bool assertOnFail) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetGpuAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strName, assertOnFail);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBuffer::GetGpuAddress(int32_t propertyID, bool assertOnFail) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "GetGpuAddress", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, propertyID, assertOnFail);
}
inline ::UnityEngine::Rendering::GPUInstanceIndex UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                         { "CPUInstanceToGPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceIndex>(this, ___internal_method, instance);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::GPUInstanceDataBuffer::GPUInstanceToCPUInstance(::UnityEngine::Rendering::GPUInstanceIndex gpuInstanceIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                         { "GPUInstanceToCPUInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(this, ___internal_method, gpuInstanceIndex);
}
inline void UnityEngine::Rendering::GPUInstanceDataBuffer::CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(),
                                                                                         { "CPUInstanceArrayToGPUInstanceArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, gpuInstanceIndices);
}
inline void UnityEngine::Rendering::GPUInstanceDataBuffer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly UnityEngine::Rendering::GPUInstanceDataBuffer::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUInstanceDataBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::GPUInstanceDataBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUInstanceDataBuffer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUInstanceDataBuffer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBuffer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer::GPUInstanceDataBuffer() {}
