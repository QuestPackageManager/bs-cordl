#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapIterator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelMultiHashMapIterator_1)
// Forward declare root types
namespace Unity::Collections {
template <typename TKey> struct NativeParallelMultiHashMapIterator_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelMultiHashMapIterator_1);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename TKey>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>
struct CORDL_TYPE NativeParallelMultiHashMapIterator_1 {
public:
  // Declarations
  /// @brief Method GetEntryIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetEntryIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelMultiHashMapIterator_1();

  // Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "NextEntryIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "EntryIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeParallelMultiHashMapIterator_1(TKey key, int32_t NextEntryIndex, int32_t EntryIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15624 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  TKey key;

  /// @brief Field NextEntryIndex, offset: 0x8, size: 0x4, def value: None
  int32_t NextEntryIndex;

  /// @brief Field EntryIndex, offset: 0xc, size: 0x4, def value: None
  int32_t EntryIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeParallelMultiHashMapIterator_1, "Unity.Collections", "NativeParallelMultiHashMapIterator`1");
