#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapDataEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapDataEnumerator)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> struct KeyValue_2;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapDataEnumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataEnumerator
struct CORDL_TYPE UnsafeParallelHashMapDataEnumerator {
public:
  // Declarations
  /// @brief Method GetCurrent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> inline ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue> GetCurrent();

  /// @brief Method GetCurrentKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey> inline TKey GetCurrentKey();

  /// @brief Method MoveNext, addr 0x6318910, size 0x48, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x6318958, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x63188f8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapDataEnumerator();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr UnsafeParallelHashMapDataEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer, int32_t m_Index, int32_t m_BucketIndex, int32_t m_NextIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_BucketIndex, offset: 0xc, size: 0x4, def value: None
  int32_t m_BucketIndex;

  /// @brief Field m_NextIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_NextIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, m_Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, m_BucketIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, m_NextIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, 0x18>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapDataEnumerator");
