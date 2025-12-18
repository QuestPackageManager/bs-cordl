#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUDrawInstanceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CPUDrawInstanceData)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace UnityEngine::Rendering {
struct DrawBatch;
}
namespace UnityEngine::Rendering {
struct DrawInstance;
}
namespace UnityEngine::Rendering {
struct DrawKey;
}
namespace UnityEngine::Rendering {
struct DrawRange;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct RangeKey;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CPUDrawInstanceData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CPUDrawInstanceData);
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.DrawBatch, UnityEngine.Rendering.DrawInstance,
// UnityEngine.Rendering.DrawKey, UnityEngine.Rendering.DrawRange, UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CPUDrawInstanceData
class CORDL_TYPE CPUDrawInstanceData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_batchHash)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash;

  __declspec(property(get = get_drawBatchIndices)) ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices;

  __declspec(property(get = get_drawBatches)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  __declspec(property(get = get_drawInstanceIndices)) ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices;

  __declspec(property(get = get_drawInstances)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  __declspec(property(get = get_drawRanges)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges;

  /// @brief Field m_BatchHash, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BatchHash, put = __cordl_internal_set_m_BatchHash)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>
      m_BatchHash;

  /// @brief Field m_DrawBatchIndices, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawBatchIndices, put = __cordl_internal_set_m_DrawBatchIndices)) ::Unity::Collections::NativeList_1<int32_t> m_DrawBatchIndices;

  /// @brief Field m_DrawBatches, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawBatches, put = __cordl_internal_set_m_DrawBatches)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> m_DrawBatches;

  /// @brief Field m_DrawInstanceIndices, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawInstanceIndices, put = __cordl_internal_set_m_DrawInstanceIndices)) ::Unity::Collections::NativeList_1<int32_t> m_DrawInstanceIndices;

  /// @brief Field m_DrawInstances, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawInstances, put = __cordl_internal_set_m_DrawInstances)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>
      m_DrawInstances;

  /// @brief Field m_DrawRanges, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawRanges, put = __cordl_internal_set_m_DrawRanges)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> m_DrawRanges;

  /// @brief Field m_NeedsRebuild, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsRebuild, put = __cordl_internal_set_m_NeedsRebuild)) bool m_NeedsRebuild;

  /// @brief Field m_RangeHash, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RangeHash, put = __cordl_internal_set_m_RangeHash)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>
      m_RangeHash;

  __declspec(property(get = get_rangeHash)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method DestroyDrawInstanceIndices, addr 0x6666cec, size 0xc8, virtual false, abstract: false, final false
  inline void DestroyDrawInstanceIndices(::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndicesToDestroy);

  /// @brief Method DestroyDrawInstances, addr 0x6666db4, size 0x2dc, virtual false, abstract: false, final false
  inline void DestroyDrawInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> destroyedInstances);

  /// @brief Method DestroyMaterialDrawInstances, addr 0x666709c, size 0x2dc, virtual false, abstract: false, final false
  inline void DestroyMaterialDrawInstances(::Unity::Collections::NativeArray_1<uint32_t> destroyedBatchMaterials);

  /// @brief Method Dispose, addr 0x666685c, size 0x200, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Initialize, addr 0x66666c0, size 0x19c, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method NeedsRebuild, addr 0x6667090, size 0xc, virtual false, abstract: false, final false
  inline void NeedsRebuild();

  static inline ::UnityEngine::Rendering::CPUDrawInstanceData* New_ctor();

  /// @brief Method RebuildDrawListsIfNeeded, addr 0x6666a5c, size 0x290, virtual false, abstract: false, final false
  inline void RebuildDrawListsIfNeeded();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> const& __cordl_internal_get_m_BatchHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t>& __cordl_internal_get_m_BatchHash();

  constexpr ::Unity::Collections::NativeList_1<int32_t> const& __cordl_internal_get_m_DrawBatchIndices() const;

  constexpr ::Unity::Collections::NativeList_1<int32_t>& __cordl_internal_get_m_DrawBatchIndices();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> const& __cordl_internal_get_m_DrawBatches() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>& __cordl_internal_get_m_DrawBatches();

  constexpr ::Unity::Collections::NativeList_1<int32_t> const& __cordl_internal_get_m_DrawInstanceIndices() const;

  constexpr ::Unity::Collections::NativeList_1<int32_t>& __cordl_internal_get_m_DrawInstanceIndices();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> const& __cordl_internal_get_m_DrawInstances() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>& __cordl_internal_get_m_DrawInstances();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> const& __cordl_internal_get_m_DrawRanges() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>& __cordl_internal_get_m_DrawRanges();

  constexpr bool const& __cordl_internal_get_m_NeedsRebuild() const;

  constexpr bool& __cordl_internal_get_m_NeedsRebuild();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> const& __cordl_internal_get_m_RangeHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t>& __cordl_internal_get_m_RangeHash();

  constexpr void __cordl_internal_set_m_BatchHash(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> value);

  constexpr void __cordl_internal_set_m_DrawBatchIndices(::Unity::Collections::NativeList_1<int32_t> value);

  constexpr void __cordl_internal_set_m_DrawBatches(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> value);

  constexpr void __cordl_internal_set_m_DrawInstanceIndices(::Unity::Collections::NativeList_1<int32_t> value);

  constexpr void __cordl_internal_set_m_DrawInstances(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> value);

  constexpr void __cordl_internal_set_m_DrawRanges(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> value);

  constexpr void __cordl_internal_set_m_NeedsRebuild(bool value);

  constexpr void __cordl_internal_set_m_RangeHash(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> value);

  /// @brief Method .ctor, addr 0x6667378, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_batchHash, addr 0x66665b4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> get_batchHash();

  /// @brief Method get_drawBatchIndices, addr 0x66665dc, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_drawBatchIndices();

  /// @brief Method get_drawBatches, addr 0x66665c0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> get_drawBatches();

  /// @brief Method get_drawInstanceIndices, addr 0x6666628, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_drawInstanceIndices();

  /// @brief Method get_drawInstances, addr 0x66665ac, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> get_drawInstances();

  /// @brief Method get_drawRanges, addr 0x66665d4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> get_drawRanges();

  /// @brief Method get_rangeHash, addr 0x66665c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> get_rangeHash();

  /// @brief Method get_valid, addr 0x6666674, size 0x4c, virtual false, abstract: false, final false
  inline bool get_valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUDrawInstanceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CPUDrawInstanceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CPUDrawInstanceData(CPUDrawInstanceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CPUDrawInstanceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CPUDrawInstanceData(CPUDrawInstanceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17643 };

  /// @brief Field m_RangeHash, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> ___m_RangeHash;

  /// @brief Field m_DrawRanges, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> ___m_DrawRanges;

  /// @brief Field m_BatchHash, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> ___m_BatchHash;

  /// @brief Field m_DrawBatches, offset: 0x38, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> ___m_DrawBatches;

  /// @brief Field m_DrawInstances, offset: 0x40, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> ___m_DrawInstances;

  /// @brief Field m_DrawInstanceIndices, offset: 0x48, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> ___m_DrawInstanceIndices;

  /// @brief Field m_DrawBatchIndices, offset: 0x50, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> ___m_DrawBatchIndices;

  /// @brief Field m_NeedsRebuild, offset: 0x58, size: 0x1, def value: None
  bool ___m_NeedsRebuild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_RangeHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_DrawRanges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_BatchHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_DrawBatches) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_DrawInstances) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_DrawInstanceIndices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_DrawBatchIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUDrawInstanceData, ___m_NeedsRebuild) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CPUDrawInstanceData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CPUDrawInstanceData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CPUDrawInstanceData*, "UnityEngine.Rendering", "CPUDrawInstanceData");
