#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferGrower.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferGrower)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferGrower_GPUResources;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferGrower;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferGrower_GPUResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferGrower);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower/CopyInstancesKernelIDs
class CORDL_TYPE GPUInstanceDataBufferGrower_CopyInstancesKernelIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ComponentByteCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ComponentByteCounts, put = setStaticF__ComponentByteCounts)) int32_t _ComponentByteCounts;

  /// @brief Field _InputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputBuffer, put = setStaticF__InputBuffer)) int32_t _InputBuffer;

  /// @brief Field _InputComponentAddresses, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentAddresses, put = setStaticF__InputComponentAddresses)) int32_t _InputComponentAddresses;

  /// @brief Field _InputComponentInstanceIndexRanges, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputComponentInstanceIndexRanges, put = setStaticF__InputComponentInstanceIndexRanges)) int32_t _InputComponentInstanceIndexRanges;

  /// @brief Field _InputValidComponentCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputValidComponentCounts, put = setStaticF__InputValidComponentCounts)) int32_t _InputValidComponentCounts;

  /// @brief Field _InstanceCounts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InstanceCounts, put = setStaticF__InstanceCounts)) int32_t _InstanceCounts;

  /// @brief Field _InstanceOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InstanceOffset, put = setStaticF__InstanceOffset)) int32_t _InstanceOffset;

  /// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputBuffer, put = setStaticF__OutputBuffer)) int32_t _OutputBuffer;

  /// @brief Field _OutputComponentAddresses, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputComponentAddresses, put = setStaticF__OutputComponentAddresses)) int32_t _OutputComponentAddresses;

  /// @brief Field _OutputInstanceOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputInstanceOffset, put = setStaticF__OutputInstanceOffset)) int32_t _OutputInstanceOffset;

  /// @brief Field _ValidComponentIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ValidComponentIndices, put = setStaticF__ValidComponentIndices)) int32_t _ValidComponentIndices;

  static inline int32_t getStaticF__ComponentByteCounts();

  static inline int32_t getStaticF__InputBuffer();

  static inline int32_t getStaticF__InputComponentAddresses();

  static inline int32_t getStaticF__InputComponentInstanceIndexRanges();

  static inline int32_t getStaticF__InputValidComponentCounts();

  static inline int32_t getStaticF__InstanceCounts();

  static inline int32_t getStaticF__InstanceOffset();

  static inline int32_t getStaticF__OutputBuffer();

  static inline int32_t getStaticF__OutputComponentAddresses();

  static inline int32_t getStaticF__OutputInstanceOffset();

  static inline int32_t getStaticF__ValidComponentIndices();

  static inline void setStaticF__ComponentByteCounts(int32_t value);

  static inline void setStaticF__InputBuffer(int32_t value);

  static inline void setStaticF__InputComponentAddresses(int32_t value);

  static inline void setStaticF__InputComponentInstanceIndexRanges(int32_t value);

  static inline void setStaticF__InputValidComponentCounts(int32_t value);

  static inline void setStaticF__InstanceCounts(int32_t value);

  static inline void setStaticF__InstanceOffset(int32_t value);

  static inline void setStaticF__OutputBuffer(int32_t value);

  static inline void setStaticF__OutputComponentAddresses(int32_t value);

  static inline void setStaticF__OutputInstanceOffset(int32_t value);

  static inline void setStaticF__ValidComponentIndices(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferGrower_CopyInstancesKernelIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferGrower_CopyInstancesKernelIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUInstanceDataBufferGrower_CopyInstancesKernelIDs(GPUInstanceDataBufferGrower_CopyInstancesKernelIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferGrower_CopyInstancesKernelIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUInstanceDataBufferGrower_CopyInstancesKernelIDs(GPUInstanceDataBufferGrower_CopyInstancesKernelIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17654 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower/GPUResources
struct CORDL_TYPE GPUInstanceDataBufferGrower_GPUResources {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CreateResources, addr 0x666bb5c, size 0x4, virtual false, abstract: false, final false
  inline void CreateResources();

  /// @brief Method Dispose, addr 0x666be90, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LoadShaders, addr 0x666bddc, size 0xb4, virtual false, abstract: false, final false
  inline void LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferGrower_GPUResources();

  // Ctor Parameters [CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr GPUInstanceDataBufferGrower_GPUResources(::UnityW<::UnityEngine::ComputeShader> cs, int32_t kernelId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field cs, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field kernelId, offset: 0x8, size: 0x4, def value: None
  int32_t kernelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources, cs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources, kernelId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower
struct CORDL_TYPE GPUInstanceDataBufferGrower {
public:
  // Declarations
  using CopyInstancesKernelIDs = ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;

  using GPUResources = ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x666bb60, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method SubmitToGpu, addr 0x666b890, size 0x2cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* SubmitToGpu(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources> gpuResources);

  /// @brief Method .ctor, addr 0x666b704, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer* sourceBuffer, ::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferGrower();

  // Ctor Parameters [CppParam { name: "m_SrcBuffer", ty: "::UnityEngine::Rendering::GPUInstanceDataBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_DstBuffer", ty:
  // "::UnityEngine::Rendering::GPUInstanceDataBuffer*", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBufferGrower(::UnityEngine::Rendering::GPUInstanceDataBuffer* m_SrcBuffer, ::UnityEngine::Rendering::GPUInstanceDataBuffer* m_DstBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_SrcBuffer, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBuffer* m_SrcBuffer;

  /// @brief Field m_DstBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBuffer* m_DstBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, m_SrcBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, m_DstBuffer) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferGrower, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs*, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower/CopyInstancesKernelIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower/GPUResources");
