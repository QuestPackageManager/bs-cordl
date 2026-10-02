#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/PersistentGpuArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentGpuArray_1)
namespace System::Collections {
class BitArray;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
template <typename Tstruct> class PersistentGpuArray_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1, "UnityEngine.Rendering.UnifiedRayTracing", "PersistentGpuArray`1");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator
namespace UnityEngine::Rendering::UnifiedRayTracing {
// cpp template
template <typename Tstruct>
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.PersistentGpuArray`1<Tstruct>
class CORDL_TYPE PersistentGpuArray_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_elementCount)) int32_t elementCount;

  /// @brief Field m_CpuList, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CpuList, put = __cordl_internal_set_m_CpuList)) ::Unity::Collections::NativeArray_1<Tstruct> m_CpuList;

  /// @brief Field m_ElementCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ElementCount, put = __cordl_internal_set_m_ElementCount)) int32_t m_ElementCount;

  /// @brief Field m_GpuBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GpuBuffer, put = __cordl_internal_set_m_GpuBuffer)) ::UnityEngine::ComputeBuffer* m_GpuBuffer;

  /// @brief Field m_SlotAllocator, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_m_SlotAllocator, put = __cordl_internal_set_m_SlotAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_SlotAllocator;

  /// @brief Field m_Updates, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Updates, put = __cordl_internal_set_m_Updates)) ::System::Collections::BitArray* m_Updates;

  /// @brief Field m_gpuBufferDirty, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_gpuBufferDirty, put = __cordl_internal_set_m_gpuBufferDirty)) bool m_gpuBufferDirty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> Add(int32_t elementCount);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation Add(Tstruct element);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline Tstruct Get(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation);

  /// @brief Method GetGpuBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetGpuBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Grow();

  /// @brief Method ModifyForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ModifyForEach(::System::Func_2<Tstruct, Tstruct>* lambda);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<Tstruct>* New_ctor(int32_t initialSize);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation allocation, Tstruct element);

  constexpr ::Unity::Collections::NativeArray_1<Tstruct> const& __cordl_internal_get_m_CpuList() const;

  constexpr ::Unity::Collections::NativeArray_1<Tstruct>& __cordl_internal_get_m_CpuList();

  constexpr int32_t const& __cordl_internal_get_m_ElementCount() const;

  constexpr int32_t& __cordl_internal_get_m_ElementCount();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_GpuBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_GpuBuffer();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_SlotAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_SlotAllocator();

  constexpr ::System::Collections::BitArray* const& __cordl_internal_get_m_Updates() const;

  constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_Updates();

  constexpr bool const& __cordl_internal_get_m_gpuBufferDirty() const;

  constexpr bool& __cordl_internal_get_m_gpuBufferDirty();

  constexpr void __cordl_internal_set_m_CpuList(::Unity::Collections::NativeArray_1<Tstruct> value);

  constexpr void __cordl_internal_set_m_ElementCount(int32_t value);

  constexpr void __cordl_internal_set_m_GpuBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_SlotAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_Updates(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set_m_gpuBufferDirty(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize);

  /// @brief Method get_elementCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_elementCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentGpuArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistentGpuArray_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentGpuArray_1(PersistentGpuArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentGpuArray_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentGpuArray_1(PersistentGpuArray_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20479 };

  /// @brief Field m_SlotAllocator, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_SlotAllocator;

  /// @brief Field m_GpuBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_GpuBuffer;

  /// @brief Field m_CpuList, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<Tstruct> ___m_CpuList;

  /// @brief Field m_Updates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::BitArray* ___m_Updates;

  /// @brief Field m_gpuBufferDirty, offset: 0x50, size: 0x1, def value: None
  bool ___m_gpuBufferDirty;

  /// @brief Field m_ElementCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_ElementCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::UnifiedRayTracing
