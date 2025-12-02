#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelBitArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelBitArray)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ParallelBitArray);
// Dependencies Unity.Collections.Allocator, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelBitArray
struct CORDL_TYPE ParallelBitArray {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method ChunkCount, addr 0x6619f4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t ChunkCount();

  /// @brief Method Dispose, addr 0x6619bec, size 0x54, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6619c40, size 0x6c, virtual false, abstract: false, final false
  inline void Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method FillZeroes, addr 0x6619fe4, size 0xd0, virtual false, abstract: false, final false
  inline void FillZeroes(int32_t length);

  /// @brief Method Get, addr 0x660eaa4, size 0x60, virtual false, abstract: false, final false
  inline bool Get(int32_t index);

  /// @brief Method GetBitsArray, addr 0x6619fd8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int64_t> GetBitsArray();

  /// @brief Method GetChunk, addr 0x660ea98, size 0xc, virtual false, abstract: false, final false
  inline uint64_t GetChunk(int32_t chunk_index);

  /// @brief Method GetSubArray, addr 0x6619f54, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ParallelBitArray GetSubArray(int32_t length);

  /// @brief Method InterlockedOrChunk, addr 0x6619ec4, size 0x88, virtual false, abstract: false, final false
  inline void InterlockedOrChunk(int32_t chunk_index, uint64_t chunk_bits);

  /// @brief Method InterlockedReadChunk, addr 0x6619e64, size 0x60, virtual false, abstract: false, final false
  inline uint64_t InterlockedReadChunk(int32_t chunk_index);

  /// @brief Method Resize, addr 0x6619cac, size 0x1b8, virtual false, abstract: false, final false
  inline void Resize(int32_t newLength);

  /// @brief Method Set, addr 0x660e6d4, size 0xa4, virtual false, abstract: false, final false
  inline void Set(int32_t index, bool value);

  /// @brief Method SetChunk, addr 0x660eb04, size 0xc, virtual false, abstract: false, final false
  inline void SetChunk(int32_t chunk_index, uint64_t chunk_bits);

  /// @brief Method .ctor, addr 0x6619b48, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method get_IsCreated, addr 0x6619afc, size 0x4c, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Length, addr 0x6619af4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelBitArray();

  // Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }, CppParam { name: "m_Bits", ty:
  // "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParallelBitArray(::Unity::Collections::Allocator m_Allocator, ::Unity::Collections::NativeArray_1<int64_t> m_Bits, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17753 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Allocator, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  /// @brief Field m_Bits, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int64_t> m_Bits;

  /// @brief Field m_Length, offset: 0x18, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Bits) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Length) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelBitArray, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelBitArray, "UnityEngine.Rendering", "ParallelBitArray");
