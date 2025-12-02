#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeScratchBufferPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeScratchBufferPool)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool_ScratchBufferPool;
}
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool;
}
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool_ScratchBufferPool;
}
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeScratchBufferPool/ScratchBufferPool
class CORDL_TYPE ProbeVolumeScratchBufferPool_ScratchBufferPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field chunkCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkCount, put = __cordl_internal_set_chunkCount)) int32_t chunkCount;

  /// @brief Field pool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pool,
                      put = __cordl_internal_set_pool)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* pool;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*() noexcept;

  /// @brief Method CompareTo, addr 0x6579dec, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* other);

  static inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* New_ctor();

  static inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* New_ctor(int32_t chunkCount);

  constexpr int32_t const& __cordl_internal_get_chunkCount() const;

  constexpr int32_t& __cordl_internal_get_chunkCount();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* const& __cordl_internal_get_pool() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>*& __cordl_internal_get_pool();

  constexpr void __cordl_internal_set_chunkCount(int32_t value);

  constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* value);

  /// @brief Method .ctor, addr 0x6579d70, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x65799a4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t chunkCount);

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*
  i___System__IComparable_1___UnityEngine__Rendering__ProbeVolumeScratchBufferPool_ScratchBufferPool__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeScratchBufferPool_ScratchBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool_ScratchBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeScratchBufferPool_ScratchBufferPool(ProbeVolumeScratchBufferPool_ScratchBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool_ScratchBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeScratchBufferPool_ScratchBufferPool(ProbeVolumeScratchBufferPool_ScratchBufferPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12121 };

  /// @brief Field chunkCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___chunkCount;

  /// @brief Field pool, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* ___pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool, ___chunkCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool, ___pool) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeScratchBufferPool/<>c
class CORDL_TYPE ProbeVolumeScratchBufferPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* __9__26_0;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* __9__27_0;

  static inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* New_ctor();

  /// @brief Method <AllocateScratchBuffer>b__26_0, addr 0x6579e68, size 0x64, virtual false, abstract: false, final false
  inline bool _AllocateScratchBuffer_b__26_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o);

  /// @brief Method <ReleaseScratchBuffer>b__27_0, addr 0x6579ecc, size 0x64, virtual false, abstract: false, final false
  inline bool _ReleaseScratchBuffer_b__27_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o);

  /// @brief Method .ctor, addr 0x6579e64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* getStaticF___9__26_0();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* getStaticF___9__27_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* value);

  static inline void setStaticF___9__26_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value);

  static inline void setStaticF___9__27_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeScratchBufferPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeScratchBufferPool___c(ProbeVolumeScratchBufferPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeScratchBufferPool___c(ProbeVolumeScratchBufferPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeScratchBufferPool
class CORDL_TYPE ProbeVolumeScratchBufferPool : public ::System::Object {
public:
  // Declarations
  using ScratchBufferPool = ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool;

  using __c = ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c;

  /// @brief Field <chunkSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__chunkSize_k__BackingField, put = __cordl_internal_set__chunkSize_k__BackingField)) int32_t _chunkSize_k__BackingField;

  /// @brief Field <maxChunkCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__maxChunkCount_k__BackingField, put = __cordl_internal_set__maxChunkCount_k__BackingField)) int32_t _maxChunkCount_k__BackingField;

  __declspec(property(get = get_allocatedMemory)) int32_t allocatedMemory;

  __declspec(property(get = get_chunkSize, put = set_chunkSize)) int32_t chunkSize;

  /// @brief Field m_CurrentlyAllocatedChunkCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentlyAllocatedChunkCount, put = __cordl_internal_set_m_CurrentlyAllocatedChunkCount)) int32_t m_CurrentlyAllocatedChunkCount;

  /// @brief Field m_L0Size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_L0Size, put = __cordl_internal_set_m_L0Size)) int32_t m_L0Size;

  /// @brief Field m_L1Size, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_L1Size, put = __cordl_internal_set_m_L1Size)) int32_t m_L1Size;

  /// @brief Field m_L2Size, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_L2Size, put = __cordl_internal_set_m_L2Size)) int32_t m_L2Size;

  /// @brief Field m_Layouts, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Layouts,
      put = __cordl_internal_set_m_Layouts)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* m_Layouts;

  /// @brief Field m_Pools, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pools,
                      put = __cordl_internal_set_m_Pools)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* m_Pools;

  /// @brief Field m_ProbeOcclusionSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ProbeOcclusionSize, put = __cordl_internal_set_m_ProbeOcclusionSize)) int32_t m_ProbeOcclusionSize;

  /// @brief Field m_SkyOcclusionSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SkyOcclusionSize, put = __cordl_internal_set_m_SkyOcclusionSize)) int32_t m_SkyOcclusionSize;

  /// @brief Field m_SkyShadingDirectionSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SkyShadingDirectionSize, put = __cordl_internal_set_m_SkyShadingDirectionSize)) int32_t m_SkyShadingDirectionSize;

  /// @brief Field m_ValidityLayerCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ValidityLayerCount, put = __cordl_internal_set_m_ValidityLayerCount)) int32_t m_ValidityLayerCount;

  /// @brief Field m_ValiditySize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ValiditySize, put = __cordl_internal_set_m_ValiditySize)) int32_t m_ValiditySize;

  __declspec(property(get = get_maxChunkCount, put = set_maxChunkCount)) int32_t maxChunkCount;

  /// @brief Field s_ChunkCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ChunkCount, put = setStaticF_s_ChunkCount)) int32_t s_ChunkCount;

  /// @brief Method AllocateScratchBuffer, addr 0x65795fc, size 0x3a8, virtual false, abstract: false, final false
  inline bool AllocateScratchBuffer(int32_t chunkCount, ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*> scratchBuffer,
                                    ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout> layout, bool allocateGraphicsBuffers);

  /// @brief Method Cleanup, addr 0x6579bc0, size 0x1b0, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateScratchBuffer, addr 0x6579578, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* CreateScratchBuffer(int32_t chunkCount, bool allocateGraphicsBuffers);

  /// @brief Method GetOrCreateScratchBufferLayout, addr 0x6579304, size 0x274, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout GetOrCreateScratchBufferLayout(int32_t chunkCount);

  static inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* New_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method ReleaseScratchBuffer, addr 0x6579a30, size 0x190, virtual false, abstract: false, final false
  inline void ReleaseScratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* scratchBuffer);

  constexpr int32_t const& __cordl_internal_get__chunkSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__chunkSize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxChunkCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxChunkCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentlyAllocatedChunkCount() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentlyAllocatedChunkCount();

  constexpr int32_t const& __cordl_internal_get_m_L0Size() const;

  constexpr int32_t& __cordl_internal_get_m_L0Size();

  constexpr int32_t const& __cordl_internal_get_m_L1Size() const;

  constexpr int32_t& __cordl_internal_get_m_L1Size();

  constexpr int32_t const& __cordl_internal_get_m_L2Size() const;

  constexpr int32_t& __cordl_internal_get_m_L2Size();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* const& __cordl_internal_get_m_Layouts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>*& __cordl_internal_get_m_Layouts();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* const& __cordl_internal_get_m_Pools() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*& __cordl_internal_get_m_Pools();

  constexpr int32_t const& __cordl_internal_get_m_ProbeOcclusionSize() const;

  constexpr int32_t& __cordl_internal_get_m_ProbeOcclusionSize();

  constexpr int32_t const& __cordl_internal_get_m_SkyOcclusionSize() const;

  constexpr int32_t& __cordl_internal_get_m_SkyOcclusionSize();

  constexpr int32_t const& __cordl_internal_get_m_SkyShadingDirectionSize() const;

  constexpr int32_t& __cordl_internal_get_m_SkyShadingDirectionSize();

  constexpr int32_t const& __cordl_internal_get_m_ValidityLayerCount() const;

  constexpr int32_t& __cordl_internal_get_m_ValidityLayerCount();

  constexpr int32_t const& __cordl_internal_get_m_ValiditySize() const;

  constexpr int32_t& __cordl_internal_get_m_ValiditySize();

  constexpr void __cordl_internal_set__chunkSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__maxChunkCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentlyAllocatedChunkCount(int32_t value);

  constexpr void __cordl_internal_set_m_L0Size(int32_t value);

  constexpr void __cordl_internal_set_m_L1Size(int32_t value);

  constexpr void __cordl_internal_set_m_L2Size(int32_t value);

  constexpr void __cordl_internal_set_m_Layouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* value);

  constexpr void __cordl_internal_set_m_Pools(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value);

  constexpr void __cordl_internal_set_m_ProbeOcclusionSize(int32_t value);

  constexpr void __cordl_internal_set_m_SkyOcclusionSize(int32_t value);

  constexpr void __cordl_internal_set_m_SkyShadingDirectionSize(int32_t value);

  constexpr void __cordl_internal_set_m_ValidityLayerCount(int32_t value);

  constexpr void __cordl_internal_set_m_ValiditySize(int32_t value);

  /// @brief Method .ctor, addr 0x657919c, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  static inline int32_t getStaticF_s_ChunkCount();

  /// @brief Method get_allocatedMemory, addr 0x657918c, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_allocatedMemory();

  /// @brief Method get_chunkSize, addr 0x657916c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunkSize();

  /// @brief Method get_maxChunkCount, addr 0x657917c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxChunkCount();

  static inline void setStaticF_s_ChunkCount(int32_t value);

  /// @brief Method set_chunkSize, addr 0x6579174, size 0x8, virtual false, abstract: false, final false
  inline void set_chunkSize(int32_t value);

  /// @brief Method set_maxChunkCount, addr 0x6579184, size 0x8, virtual false, abstract: false, final false
  inline void set_maxChunkCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeScratchBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeScratchBufferPool(ProbeVolumeScratchBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeScratchBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeScratchBufferPool(ProbeVolumeScratchBufferPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12123 };

  /// @brief Field <chunkSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____chunkSize_k__BackingField;

  /// @brief Field <maxChunkCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____maxChunkCount_k__BackingField;

  /// @brief Field m_L0Size, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_L0Size;

  /// @brief Field m_L1Size, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_L1Size;

  /// @brief Field m_ValiditySize, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ValiditySize;

  /// @brief Field m_ValidityLayerCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_ValidityLayerCount;

  /// @brief Field m_L2Size, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_L2Size;

  /// @brief Field m_ProbeOcclusionSize, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_ProbeOcclusionSize;

  /// @brief Field m_SkyOcclusionSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_SkyOcclusionSize;

  /// @brief Field m_SkyShadingDirectionSize, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_SkyShadingDirectionSize;

  /// @brief Field m_CurrentlyAllocatedChunkCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_CurrentlyAllocatedChunkCount;

  /// @brief Field m_Pools, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* ___m_Pools;

  /// @brief Field m_Layouts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* ___m_Layouts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ____chunkSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ____maxChunkCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_L0Size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_L1Size) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_ValiditySize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_ValidityLayerCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_L2Size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_ProbeOcclusionSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_SkyOcclusionSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_SkyShadingDirectionSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_CurrentlyAllocatedChunkCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_Pools) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, ___m_Layouts) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*, "UnityEngine.Rendering", "ProbeVolumeScratchBufferPool");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*, "UnityEngine.Rendering", "ProbeVolumeScratchBufferPool/ScratchBufferPool");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*, "UnityEngine.Rendering", "ProbeVolumeScratchBufferPool/<>c");
