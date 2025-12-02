#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBuffer)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ReadOnly;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ReadOnly;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUInstanceDataBuffer);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer/ReadOnly
struct CORDL_TYPE GPUInstanceDataBuffer_ReadOnly {
public:
  // Declarations
  /// @brief Method CPUInstanceArrayToGPUInstanceArray, addr 0x6602074, size 0xc8, virtual false, abstract: false, final false
  inline void CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices);

  /// @brief Method CPUInstanceToGPUInstance, addr 0x660206c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceIndex CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method .ctor, addr 0x6602050, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer* buffer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBuffer_ReadOnly();

  // Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBuffer_ReadOnly(::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17632 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field instancesNumPrefixSum, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly, instancesNumPrefixSum) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.GPUInstanceIndex, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer/ConvertCPUInstancesToGPUInstancesJob
struct CORDL_TYPE GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x660213c, size 0x30, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob();

  // Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "gpuInstanceIndices", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob(::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum,
                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17633 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x200) };

  /// @brief Field instancesNumPrefixSum, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum;

  /// @brief Field instances, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field gpuInstanceIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, instancesNumPrefixSum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, gpuInstanceIndices) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUInstanceComponentDesc,
// UnityEngine.Rendering.InstanceNumInfo, UnityEngine.Rendering.MetadataValue
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer
class CORDL_TYPE GPUInstanceDataBuffer : public ::System::Object {
public:
  // Declarations
  using ConvertCPUInstancesToGPUInstancesJob = ::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;

  using ReadOnly = ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly;

  /// @brief Field byteSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_byteSize, put = __cordl_internal_set_byteSize)) int32_t byteSize;

  /// @brief Field componentAddressesGpuBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_componentAddressesGpuBuffer, put = __cordl_internal_set_componentAddressesGpuBuffer)) ::UnityEngine::GraphicsBuffer* componentAddressesGpuBuffer;

  /// @brief Field componentByteCountsGpuBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_componentByteCountsGpuBuffer, put = __cordl_internal_set_componentByteCountsGpuBuffer)) ::UnityEngine::GraphicsBuffer* componentByteCountsGpuBuffer;

  /// @brief Field componentInstanceIndexRangesGpuBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_componentInstanceIndexRangesGpuBuffer,
                      put = __cordl_internal_set_componentInstanceIndexRangesGpuBuffer)) ::UnityEngine::GraphicsBuffer* componentInstanceIndexRangesGpuBuffer;

  /// @brief Field defaultMetadata, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultMetadata, put = __cordl_internal_set_defaultMetadata)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>
      defaultMetadata;

  /// @brief Field descriptions, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_descriptions, put = __cordl_internal_set_descriptions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>
      descriptions;

  /// @brief Field gpuBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuBuffer, put = __cordl_internal_set_gpuBuffer)) ::UnityEngine::GraphicsBuffer* gpuBuffer;

  /// @brief Field gpuBufferComponentAddress, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_gpuBufferComponentAddress, put = __cordl_internal_set_gpuBufferComponentAddress)) ::Unity::Collections::NativeArray_1<int32_t>
      gpuBufferComponentAddress;

  /// @brief Field instanceNumInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_instanceNumInfo, put = __cordl_internal_set_instanceNumInfo)) ::UnityEngine::Rendering::InstanceNumInfo instanceNumInfo;

  /// @brief Field instancesNumPrefixSum, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_instancesNumPrefixSum, put = __cordl_internal_set_instancesNumPrefixSum)) ::Unity::Collections::NativeArray_1<int32_t> instancesNumPrefixSum;

  /// @brief Field instancesSpan, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_instancesSpan, put = __cordl_internal_set_instancesSpan)) ::Unity::Collections::NativeArray_1<int32_t> instancesSpan;

  /// @brief Field layoutVersion, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_layoutVersion, put = __cordl_internal_set_layoutVersion)) int32_t layoutVersion;

  /// @brief Field nameToMetadataMap, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_nameToMetadataMap, put = __cordl_internal_set_nameToMetadataMap)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> nameToMetadataMap;

  /// @brief Field perInstanceComponentCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_perInstanceComponentCount, put = __cordl_internal_set_perInstanceComponentCount)) int32_t perInstanceComponentCount;

  /// @brief Field s_NextLayoutVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NextLayoutVersion, put = setStaticF_s_NextLayoutVersion)) int32_t s_NextLayoutVersion;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Field validComponentsIndicesGpuBuffer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_validComponentsIndicesGpuBuffer,
                      put = __cordl_internal_set_validComponentsIndicesGpuBuffer)) ::UnityEngine::GraphicsBuffer* validComponentsIndicesGpuBuffer;

  /// @brief Field version, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AsReadOnly, addr 0x6602038, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly AsReadOnly();

  /// @brief Method CPUInstanceArrayToGPUInstanceArray, addr 0x6601dbc, size 0xc8, virtual false, abstract: false, final false
  inline void CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices);

  /// @brief Method CPUInstanceToGPUInstance, addr 0x6601c60, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceIndex CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method CPUInstanceToGPUInstance, addr 0x6601968, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUInstanceIndex CPUInstanceToGPUInstance(::ByRef<::Unity::Collections::NativeArray_1<int32_t>> instancesNumPrefixSum,
                                                                                    ::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Dispose, addr 0x6601e84, size 0x1b4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GPUInstanceToCPUInstance, addr 0x6601c6c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle GPUInstanceToCPUInstance(::UnityEngine::Rendering::GPUInstanceIndex gpuInstanceIndex);

  /// @brief Method GetGpuAddress, addr 0x6601c38, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetGpuAddress(int32_t propertyID, bool assertOnFail);

  /// @brief Method GetGpuAddress, addr 0x6601bfc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetGpuAddress(::StringW strName, bool assertOnFail);

  /// @brief Method GetPropertyIndex, addr 0x6601b88, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetPropertyIndex(int32_t propertyID, bool assertOnFail);

  static inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* New_ctor();

  /// @brief Method NextVersion, addr 0x66018c8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t NextVersion();

  constexpr int32_t const& __cordl_internal_get_byteSize() const;

  constexpr int32_t& __cordl_internal_get_byteSize();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentAddressesGpuBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentAddressesGpuBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentByteCountsGpuBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentByteCountsGpuBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentInstanceIndexRangesGpuBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentInstanceIndexRangesGpuBuffer();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> const& __cordl_internal_get_defaultMetadata() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>& __cordl_internal_get_defaultMetadata();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> const& __cordl_internal_get_descriptions() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>& __cordl_internal_get_descriptions();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_gpuBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_gpuBuffer();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_gpuBufferComponentAddress() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_gpuBufferComponentAddress();

  constexpr ::UnityEngine::Rendering::InstanceNumInfo const& __cordl_internal_get_instanceNumInfo() const;

  constexpr ::UnityEngine::Rendering::InstanceNumInfo& __cordl_internal_get_instanceNumInfo();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instancesNumPrefixSum() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instancesNumPrefixSum();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instancesSpan() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instancesSpan();

  constexpr int32_t const& __cordl_internal_get_layoutVersion() const;

  constexpr int32_t& __cordl_internal_get_layoutVersion();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> const& __cordl_internal_get_nameToMetadataMap() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t>& __cordl_internal_get_nameToMetadataMap();

  constexpr int32_t const& __cordl_internal_get_perInstanceComponentCount() const;

  constexpr int32_t& __cordl_internal_get_perInstanceComponentCount();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_validComponentsIndicesGpuBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_validComponentsIndicesGpuBuffer();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_byteSize(int32_t value);

  constexpr void __cordl_internal_set_componentAddressesGpuBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_componentByteCountsGpuBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_componentInstanceIndexRangesGpuBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_defaultMetadata(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> value);

  constexpr void __cordl_internal_set_descriptions(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> value);

  constexpr void __cordl_internal_set_gpuBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_gpuBufferComponentAddress(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_instanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo value);

  constexpr void __cordl_internal_set_instancesNumPrefixSum(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_instancesSpan(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_layoutVersion(int32_t value);

  constexpr void __cordl_internal_set_nameToMetadataMap(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> value);

  constexpr void __cordl_internal_set_perInstanceComponentCount(int32_t value);

  constexpr void __cordl_internal_set_validComponentsIndicesGpuBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x6602068, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_NextLayoutVersion();

  /// @brief Method get_valid, addr 0x660191c, size 0x4c, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_NextLayoutVersion(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUInstanceDataBuffer(GPUInstanceDataBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUInstanceDataBuffer(GPUInstanceDataBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17634 };

  /// @brief Field instanceNumInfo, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::InstanceNumInfo ___instanceNumInfo;

  /// @brief Field instancesNumPrefixSum, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___instancesNumPrefixSum;

  /// @brief Field instancesSpan, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___instancesSpan;

  /// @brief Field byteSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___byteSize;

  /// @brief Field perInstanceComponentCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___perInstanceComponentCount;

  /// @brief Field version, offset: 0x40, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field layoutVersion, offset: 0x44, size: 0x4, def value: None
  int32_t ___layoutVersion;

  /// @brief Field gpuBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___gpuBuffer;

  /// @brief Field validComponentsIndicesGpuBuffer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___validComponentsIndicesGpuBuffer;

  /// @brief Field componentAddressesGpuBuffer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___componentAddressesGpuBuffer;

  /// @brief Field componentInstanceIndexRangesGpuBuffer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___componentInstanceIndexRangesGpuBuffer;

  /// @brief Field componentByteCountsGpuBuffer, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___componentByteCountsGpuBuffer;

  /// @brief Field descriptions, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> ___descriptions;

  /// @brief Field defaultMetadata, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> ___defaultMetadata;

  /// @brief Field gpuBufferComponentAddress, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___gpuBufferComponentAddress;

  /// @brief Field nameToMetadataMap, offset: 0xa0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> ___nameToMetadataMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instanceNumInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instancesNumPrefixSum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instancesSpan) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___byteSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___perInstanceComponentCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___layoutVersion) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___gpuBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___validComponentsIndicesGpuBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentAddressesGpuBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentInstanceIndexRangesGpuBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentByteCountsGpuBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___descriptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___defaultMetadata) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___gpuBufferComponentAddress) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___nameToMetadataMap) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBuffer, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUInstanceDataBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBuffer*, "UnityEngine.Rendering", "GPUInstanceDataBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob, "UnityEngine.Rendering", "GPUInstanceDataBuffer/ConvertCPUInstancesToGPUInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly, "UnityEngine.Rendering", "GPUInstanceDataBuffer/ReadOnly");
