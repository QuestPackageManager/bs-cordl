#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileRangeExpansionJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileRangeExpansionJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct TileRangeExpansionJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::TileRangeExpansionJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int2, UnityEngine.Rendering.Universal.InclusiveRange
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TileRangeExpansionJob
struct CORDL_TYPE TileRangeExpansionJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x66a20e4, size 0x214, virtual true, abstract: false, final true
  inline void Execute(int32_t jobIndex);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TileRangeExpansionJob();

  // Ctor Parameters [CppParam { name: "tileRanges", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>", modifiers: "", def_value: None }, CppParam { name:
  // "tileMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "rangesPerItem", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "itemsPerTile", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordsPerTile", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tileResolution", ty:
  // "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
  constexpr TileRangeExpansionJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges, ::Unity::Collections::NativeArray_1<uint32_t> tileMasks,
                                  int32_t rangesPerItem, int32_t itemsPerTile, int32_t wordsPerTile, ::Unity::Mathematics::int2 tileResolution) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field tileRanges, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges;

  /// @brief Field tileMasks, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> tileMasks;

  /// @brief Field rangesPerItem, offset: 0x20, size: 0x4, def value: None
  int32_t rangesPerItem;

  /// @brief Field itemsPerTile, offset: 0x24, size: 0x4, def value: None
  int32_t itemsPerTile;

  /// @brief Field wordsPerTile, offset: 0x28, size: 0x4, def value: None
  int32_t wordsPerTile;

  /// @brief Field tileResolution, offset: 0x2c, size: 0x8, def value: None
  ::Unity::Mathematics::int2 tileResolution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, tileRanges) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, tileMasks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, rangesPerItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, itemsPerTile) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, wordsPerTile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, tileResolution) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TileRangeExpansionJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TileRangeExpansionJob, "UnityEngine.Rendering.Universal", "TileRangeExpansionJob");
