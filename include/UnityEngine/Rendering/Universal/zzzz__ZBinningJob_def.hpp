#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ZBinningJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZBinningJob)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ZBinningJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ZBinningJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ZBinningJob
struct CORDL_TYPE ZBinningJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method DecodeHeader, addr 0x670f4d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<uint32_t, uint32_t> DecodeHeader(uint32_t zBin);

  /// @brief Method EncodeHeader, addr 0x670f4cc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t EncodeHeader(uint32_t min, uint32_t max);

  /// @brief Method Execute, addr 0x670f520, size 0x114, virtual true, abstract: false, final true
  inline void Execute(int32_t jobIndex);

  /// @brief Method FillZBins, addr 0x670f634, size 0x22c, virtual false, abstract: false, final false
  inline void FillZBins(int32_t binStart, int32_t binEnd, int32_t itemStart, int32_t itemEnd, int32_t headerIndex, int32_t itemOffset, int32_t binOffset);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ZBinningJob();

  // Ctor Parameters [CppParam { name: "bins", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "minMaxZs", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None }, CppParam { name: "zBinScale", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "zBinOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "binCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordsPerTile", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "lightCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reflectionProbeCount", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "batchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "viewCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isOrthographic", ty: "bool", modifiers: "", def_value: None }]
  constexpr ZBinningJob(::Unity::Collections::NativeArray_1<uint32_t> bins, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs, float_t zBinScale, float_t zBinOffset,
                        int32_t binCount, int32_t wordsPerTile, int32_t lightCount, int32_t reflectionProbeCount, int32_t batchCount, int32_t viewCount, bool isOrthographic) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12957 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field batchSize offset 0xffffffff size 0x4
  static constexpr int32_t batchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field headerLength offset 0xffffffff size 0x4
  static constexpr int32_t headerLength{ static_cast<int32_t>(0x2) };

  /// @brief Field bins, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> bins;

  /// @brief Field minMaxZs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs;

  /// @brief Field zBinScale, offset: 0x20, size: 0x4, def value: None
  float_t zBinScale;

  /// @brief Field zBinOffset, offset: 0x24, size: 0x4, def value: None
  float_t zBinOffset;

  /// @brief Field binCount, offset: 0x28, size: 0x4, def value: None
  int32_t binCount;

  /// @brief Field wordsPerTile, offset: 0x2c, size: 0x4, def value: None
  int32_t wordsPerTile;

  /// @brief Field lightCount, offset: 0x30, size: 0x4, def value: None
  int32_t lightCount;

  /// @brief Field reflectionProbeCount, offset: 0x34, size: 0x4, def value: None
  int32_t reflectionProbeCount;

  /// @brief Field batchCount, offset: 0x38, size: 0x4, def value: None
  int32_t batchCount;

  /// @brief Field viewCount, offset: 0x3c, size: 0x4, def value: None
  int32_t viewCount;

  /// @brief Field isOrthographic, offset: 0x40, size: 0x1, def value: None
  bool isOrthographic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, bins) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, minMaxZs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, zBinScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, zBinOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, binCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, wordsPerTile) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, lightCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, reflectionProbeCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, batchCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, viewCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, isOrthographic) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ZBinningJob, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ZBinningJob, "UnityEngine.Rendering.Universal", "ZBinningJob");
