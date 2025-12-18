#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredInstancesJob_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindNonRegisteredInstancesJob_1)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> struct FindNonRegisteredInstancesJob_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.FindNonRegisteredInstancesJob`1<T>
struct CORDL_TYPE FindNonRegisteredInstancesJob_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindNonRegisteredInstancesJob_1();

  // Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "hashMap", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<int32_t,T>", modifiers: "", def_value: None }, CppParam { name: "outInstancesWriter", ty:
  // "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None }]
  constexpr FindNonRegisteredInstancesJob_1(::Unity::Collections::NativeArray_1<int32_t> instanceIDs, ::Unity::Collections::NativeParallelHashMap_2<int32_t, T> hashMap,
                                            ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outInstancesWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17638 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field instanceIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instanceIDs;

  /// @brief Field hashMap, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, T> hashMap;

  /// @brief Field outInstancesWriter, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outInstancesWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::FindNonRegisteredInstancesJob_1, "UnityEngine.Rendering", "FindNonRegisteredInstancesJob`1");
