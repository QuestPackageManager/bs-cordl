#pragma once
// IWYU pragma private; include "Unity/Collections/ConcurrentMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentMask)
// Forward declare root types
namespace Unity::Collections {
class ConcurrentMask;
}
// Write type traits
MARK_REF_T(::Unity::Collections::ConcurrentMask*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::ConcurrentMask*, "Unity.Collections", "ConcurrentMask");
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.ConcurrentMask
class CORDL_TYPE ConcurrentMask : public ::System::Object {
public:
  // Declarations
  /// @brief Method AtomicAnd, addr 0x64a6d9c, size 0x4c, virtual false, abstract: false, final false
  static inline int64_t AtomicAnd(::by_ref<int64_t> destination, int64_t source);

  /// @brief Method AtomicOr, addr 0x64a6d50, size 0x4c, virtual false, abstract: false, final false
  static inline int64_t AtomicOr(::by_ref<int64_t> destination, int64_t source);

  /// @brief Method MakeMask, addr 0x64a6f0c, size 0x14, virtual false, abstract: false, final false
  static inline int64_t MakeMask(int32_t offset, int32_t bits);

  static inline ::Unity::Collections::ConcurrentMask* New_ctor();

  /// @brief Method Succeeded, addr 0x64a2d60, size 0xc, virtual false, abstract: false, final false
  static inline bool Succeeded(int32_t error);

  /// @brief Method TryAllocate, addr 0x64a7020, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t TryAllocate(::by_ref<int64_t> l, ::by_ref<int32_t> offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x64a6f20, size 0x74, virtual false, abstract: false, final false
  static inline int32_t TryAllocate(::by_ref<int64_t> l, int32_t offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t begin, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t begin, int32_t end, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::by_ref<T> t, int32_t offset, int32_t bits);

  /// @brief Method TryFree, addr 0x64a6f94, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t TryFree(::by_ref<int64_t> l, int32_t offset, int32_t bits);

  /// @brief Method TryFree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryFree(::by_ref<T> t, int32_t offset, int32_t bits);

  /// @brief Method .ctor, addr 0x64a70c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method foundAtLeastThisManyConsecutiveOnes, addr 0x64a6e5c, size 0xa8, virtual false, abstract: false, final false
  static inline bool foundAtLeastThisManyConsecutiveOnes(int64_t value, int32_t minimum, ::by_ref<int32_t> offset, ::by_ref<int32_t> count);

  /// @brief Method foundAtLeastThisManyConsecutiveZeroes, addr 0x64a6f04, size 0x8, virtual false, abstract: false, final false
  static inline bool foundAtLeastThisManyConsecutiveZeroes(int64_t value, int32_t minimum, ::by_ref<int32_t> offset, ::by_ref<int32_t> count);

  /// @brief Method longestConsecutiveOnes, addr 0x64a6de8, size 0x74, virtual false, abstract: false, final false
  static inline void longestConsecutiveOnes(int64_t value, ::by_ref<int32_t> offset, ::by_ref<int32_t> count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentMask(ConcurrentMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentMask(ConcurrentMask const&) = delete;

  /// @brief Field EmptyAfterFree offset 0xffffffff size 0x4
  static constexpr int32_t EmptyAfterFree{ static_cast<int32_t>(0x0) };

  /// @brief Field EmptyBeforeAllocation offset 0xffffffff size 0x4
  static constexpr int32_t EmptyBeforeAllocation{ static_cast<int32_t>(0x0) };

  /// @brief Field ErrorAllocationCrossesWordBoundary offset 0xffffffff size 0x4
  static constexpr int32_t ErrorAllocationCrossesWordBoundary{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field ErrorFailedToAllocate offset 0xffffffff size 0x4
  static constexpr int32_t ErrorFailedToAllocate{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field ErrorFailedToFree offset 0xffffffff size 0x4
  static constexpr int32_t ErrorFailedToFree{ static_cast<int32_t>(0xffffffff) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::ConcurrentMask) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
