#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferUploader)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct GPUInstanceComponentDesc;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader_GPUResources;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferUploader_UploadKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferUploader_UploadKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader_GPUResources;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/UploadKernelIDs
class CORDL_TYPE GPUInstanceDataBufferUploader_UploadKernelIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _InputComponentAddresses, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentAddresses, put = setStaticF__InputComponentAddresses)) int32_t _InputComponentAddresses;

  /// @brief Field _InputComponentByteCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentByteCounts, put = setStaticF__InputComponentByteCounts)) int32_t _InputComponentByteCounts;

  /// @brief Field _InputComponentInstanceIndexRanges, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentInstanceIndexRanges, put = setStaticF__InputComponentInstanceIndexRanges)) int32_t _InputComponentInstanceIndexRanges;

  /// @brief Field _InputComponentOffsets, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentOffsets, put = setStaticF__InputComponentOffsets)) int32_t _InputComponentOffsets;

  /// @brief Field _InputInstanceByteSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputInstanceByteSize, put = setStaticF__InputInstanceByteSize)) int32_t _InputInstanceByteSize;

  /// @brief Field _InputInstanceCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputInstanceCounts, put = setStaticF__InputInstanceCounts)) int32_t _InputInstanceCounts;

  /// @brief Field _InputInstanceData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputInstanceData, put = setStaticF__InputInstanceData)) int32_t _InputInstanceData;

  /// @brief Field _InputInstanceIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputInstanceIndices, put = setStaticF__InputInstanceIndices)) int32_t _InputInstanceIndices;

  /// @brief Field _InputValidComponentCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputValidComponentCounts, put = setStaticF__InputValidComponentCounts)) int32_t _InputValidComponentCounts;

  /// @brief Field _InputValidComponentIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputValidComponentIndices, put = setStaticF__InputValidComponentIndices)) int32_t _InputValidComponentIndices;

  /// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputBuffer, put = setStaticF__OutputBuffer)) int32_t _OutputBuffer;

  static inline int32_t getStaticF__InputComponentAddresses();

  static inline int32_t getStaticF__InputComponentByteCounts();

  static inline int32_t getStaticF__InputComponentInstanceIndexRanges();

  static inline int32_t getStaticF__InputComponentOffsets();

  static inline int32_t getStaticF__InputInstanceByteSize();

  static inline int32_t getStaticF__InputInstanceCounts();

  static inline int32_t getStaticF__InputInstanceData();

  static inline int32_t getStaticF__InputInstanceIndices();

  static inline int32_t getStaticF__InputValidComponentCounts();

  static inline int32_t getStaticF__InputValidComponentIndices();

  static inline int32_t getStaticF__OutputBuffer();

  static inline void setStaticF__InputComponentAddresses(int32_t value);

  static inline void setStaticF__InputComponentByteCounts(int32_t value);

  static inline void setStaticF__InputComponentInstanceIndexRanges(int32_t value);

  static inline void setStaticF__InputComponentOffsets(int32_t value);

  static inline void setStaticF__InputInstanceByteSize(int32_t value);

  static inline void setStaticF__InputInstanceCounts(int32_t value);

  static inline void setStaticF__InputInstanceData(int32_t value);

  static inline void setStaticF__InputInstanceIndices(int32_t value);

  static inline void setStaticF__InputValidComponentCounts(int32_t value);

  static inline void setStaticF__InputValidComponentIndices(int32_t value);

  static inline void setStaticF__OutputBuffer(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferUploader_UploadKernelIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferUploader_UploadKernelIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUInstanceDataBufferUploader_UploadKernelIDs(GPUInstanceDataBufferUploader_UploadKernelIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferUploader_UploadKernelIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUInstanceDataBufferUploader_UploadKernelIDs(GPUInstanceDataBufferUploader_UploadKernelIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/GPUResources
struct CORDL_TYPE GPUInstanceDataBufferUploader_GPUResources {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CreateResources, addr 0x666aec0, size 0x198, virtual false, abstract: false, final false
  inline void CreateResources(int32_t newInstanceCount, int32_t sizePerInstance, int32_t newComponentCounts, int32_t validComponentIndicesCount);

  /// @brief Method Dispose, addr 0x666b5e0, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LoadShaders, addr 0x666b52c, size 0xb4, virtual false, abstract: false, final false
  inline void LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferUploader_GPUResources();

  // Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "instanceIndices", ty: "::UnityEngine::ComputeBuffer*",
  // modifiers: "", def_value: None }, CppParam { name: "inputComponentOffsets", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "validComponentIndices", ty:
  // "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name:
  // "kernelId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceDataByteSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ComponentCounts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ValidComponentIndicesCount", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBufferUploader_GPUResources(::UnityEngine::ComputeBuffer* instanceData, ::UnityEngine::ComputeBuffer* instanceIndices, ::UnityEngine::ComputeBuffer* inputComponentOffsets,
                                                       ::UnityEngine::ComputeBuffer* validComponentIndices, ::UnityW<::UnityEngine::ComputeShader> cs, int32_t kernelId, int32_t m_InstanceDataByteSize,
                                                       int32_t m_InstanceCount, int32_t m_ComponentCounts, int32_t m_ValidComponentIndicesCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17651 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field instanceData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* instanceData;

  /// @brief Field instanceIndices, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* instanceIndices;

  /// @brief Field inputComponentOffsets, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* inputComponentOffsets;

  /// @brief Field validComponentIndices, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* validComponentIndices;

  /// @brief Field cs, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field kernelId, offset: 0x28, size: 0x4, def value: None
  int32_t kernelId;

  /// @brief Field m_InstanceDataByteSize, offset: 0x2c, size: 0x4, def value: None
  int32_t m_InstanceDataByteSize;

  /// @brief Field m_InstanceCount, offset: 0x30, size: 0x4, def value: None
  int32_t m_InstanceCount;

  /// @brief Field m_ComponentCounts, offset: 0x34, size: 0x4, def value: None
  int32_t m_ComponentCounts;

  /// @brief Field m_ValidComponentIndicesCount, offset: 0x38, size: 0x4, def value: None
  int32_t m_ValidComponentIndicesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, instanceIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, inputComponentOffsets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, validComponentIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, cs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, kernelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, m_InstanceDataByteSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, m_InstanceCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, m_ComponentCounts) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, m_ValidComponentIndicesCount) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/WriteInstanceDataParameterJob
struct CORDL_TYPE GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x666b628, size 0xdc, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob();

  // Ctor Parameters [CppParam { name: "gatherData", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parameterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "uintPerParameter", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uintPerInstance", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "componentDataIndex",
  // ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "gatherIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "instanceData", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "tmpDataBuffer", ty:
  // "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob(bool gatherData, int32_t parameterIndex, int32_t uintPerParameter, int32_t uintPerInstance,
                                                                        ::Unity::Collections::NativeArray_1<int32_t> componentDataIndex, ::Unity::Collections::NativeArray_1<int32_t> gatherIndices,
                                                                        ::Unity::Collections::NativeArray_1<uint32_t> instanceData,
                                                                        ::Unity::Collections::NativeArray_1<uint32_t> tmpDataBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17652 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x200) };

  /// @brief Field gatherData, offset: 0x0, size: 0x1, def value: None
  bool gatherData;

  /// @brief Field parameterIndex, offset: 0x4, size: 0x4, def value: None
  int32_t parameterIndex;

  /// @brief Field uintPerParameter, offset: 0x8, size: 0x4, def value: None
  int32_t uintPerParameter;

  /// @brief Field uintPerInstance, offset: 0xc, size: 0x4, def value: None
  int32_t uintPerInstance;

  /// @brief Field componentDataIndex, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> componentDataIndex;

  /// @brief Field gatherIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> gatherIndices;

  /// @brief Field instanceData, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> instanceData;

  /// @brief Field tmpDataBuffer, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> tmpDataBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, gatherData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, parameterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, uintPerParameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, uintPerInstance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, componentDataIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, gatherIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, instanceData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, tmpDataBuffer) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader
struct CORDL_TYPE GPUInstanceDataBufferUploader {
public:
  // Declarations
  using GPUResources = ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources;

  using UploadKernelIDs = ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs;

  using WriteInstanceDataParameterJob = ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllocateUploadHandles, addr 0x666a9f8, size 0x8, virtual false, abstract: false, final false
  inline void AllocateUploadHandles(int32_t handlesLength);

  /// @brief Method Dispose, addr 0x666b158, size 0x15c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetParamUIntOffset, addr 0x666a9ec, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetParamUIntOffset(int32_t parameterIndex);

  /// @brief Method GetUIntPerInstance, addr 0x666a9e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetUIntPerInstance();

  /// @brief Method GetUploadBufferPtr, addr 0x666a9a0, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetUploadBufferPtr();

  /// @brief Method PrepareParamWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t PrepareParamWrite(int32_t parameterIndex);

  /// @brief Method SubmitToGpu, addr 0x666aa00, size 0x4c0, virtual false, abstract: false, final false
  inline void SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer* instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                          ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources> gpuResources, bool submitOnlyWrittenParams);

  /// @brief Method SubmitToGpu, addr 0x666b058, size 0x100, virtual false, abstract: false, final false
  inline void SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer* instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                          ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources> gpuResources, bool submitOnlyWrittenParams);

  /// @brief Method WriteInstanceDataJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Jobs::JobHandle WriteInstanceDataJob(int32_t parameterIndex, ::Unity::Collections::NativeArray_1<T> instanceData);

  /// @brief Method WriteInstanceDataJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Unity::Jobs::JobHandle WriteInstanceDataJob(int32_t parameterIndex, ::Unity::Collections::NativeArray_1<T> instanceData, ::Unity::Collections::NativeArray_1<int32_t> gatherIndices);

  /// @brief Method .ctor, addr 0x666a740, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>> descriptions, int32_t capacity,
                    ::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferUploader();

  // Ctor Parameters [CppParam { name: "m_UintPerInstance", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ComponentIsInstanced", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value:
  // None }, CppParam { name: "m_ComponentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DescriptionsUintSize", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "m_WritenComponentIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DummyArray", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBufferUploader(int32_t m_UintPerInstance, int32_t m_Capacity, int32_t m_InstanceCount, ::Unity::Collections::NativeArray_1<bool> m_ComponentIsInstanced,
                                          ::Unity::Collections::NativeArray_1<int32_t> m_ComponentDataIndex, ::Unity::Collections::NativeArray_1<int32_t> m_DescriptionsUintSize,
                                          ::Unity::Collections::NativeArray_1<uint32_t> m_TmpDataBuffer, ::Unity::Collections::NativeList_1<int32_t> m_WritenComponentIndices,
                                          ::Unity::Collections::NativeArray_1<int32_t> m_DummyArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field m_UintPerInstance, offset: 0x0, size: 0x4, def value: None
  int32_t m_UintPerInstance;

  /// @brief Field m_Capacity, offset: 0x4, size: 0x4, def value: None
  int32_t m_Capacity;

  /// @brief Field m_InstanceCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_InstanceCount;

  /// @brief Field m_ComponentIsInstanced, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<bool> m_ComponentIsInstanced;

  /// @brief Field m_ComponentDataIndex, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_ComponentDataIndex;

  /// @brief Field m_DescriptionsUintSize, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_DescriptionsUintSize;

  /// @brief Field m_TmpDataBuffer, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> m_TmpDataBuffer;

  /// @brief Field m_WritenComponentIndices, offset: 0x50, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_WritenComponentIndices;

  /// @brief Field m_DummyArray, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_DummyArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_UintPerInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_Capacity) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_InstanceCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_ComponentIsInstanced) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_ComponentDataIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_DescriptionsUintSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_TmpDataBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_WritenComponentIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_DummyArray) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferUploader, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/UploadKernelIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/GPUResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/WriteInstanceDataParameterJob");
