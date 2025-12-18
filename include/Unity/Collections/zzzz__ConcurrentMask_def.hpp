#pragma once
// IWYU pragma private; include "Unity/Collections/ConcurrentMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Unity::Collections::ConcurrentMask);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.ConcurrentMask
class CORDL_TYPE ConcurrentMask : public ::System::Object {
public:
  // Declarations
  /// @brief Method AtomicAnd, addr 0x62f5f38, size 0x4c, virtual false, abstract: false, final false
  static inline int64_t AtomicAnd(::ByRef<int64_t> destination, int64_t source);

  /// @brief Method AtomicOr, addr 0x62f5eec, size 0x4c, virtual false, abstract: false, final false
  static inline int64_t AtomicOr(::ByRef<int64_t> destination, int64_t source);

  /// @brief Method MakeMask, addr 0x62f60a8, size 0x14, virtual false, abstract: false, final false
  static inline int64_t MakeMask(int32_t offset, int32_t bits);

  static inline ::Unity::Collections::ConcurrentMask* New_ctor();

  /// @brief Method Succeeded, addr 0x62f1efc, size 0xc, virtual false, abstract: false, final false
  static inline bool Succeeded(int32_t error);

  /// @brief Method TryAllocate, addr 0x62f61bc, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t TryAllocate(::ByRef<int64_t> l, ::ByRef<int32_t> offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x62f60bc, size 0x74, virtual false, abstract: false, final false
  static inline int32_t TryAllocate(::ByRef<int64_t> l, int32_t offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::ByRef<T> t, ::ByRef<int32_t> offset, int32_t begin, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::ByRef<T> t, ::ByRef<int32_t> offset, int32_t begin, int32_t end, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::ByRef<T> t, ::ByRef<int32_t> offset, int32_t bits);

  /// @brief Method TryAllocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryAllocate(::ByRef<T> t, int32_t offset, int32_t bits);

  /// @brief Method TryFree, addr 0x62f6130, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t TryFree(::ByRef<int64_t> l, int32_t offset, int32_t bits);

  /// @brief Method TryFree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TryFree(::ByRef<T> t, int32_t offset, int32_t bits);

  /// @brief Method .ctor, addr 0x62f6264, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method foundAtLeastThisManyConsecutiveOnes, addr 0x62f5ff8, size 0xa8, virtual false, abstract: false, final false
  static inline bool foundAtLeastThisManyConsecutiveOnes(int64_t value, int32_t minimum, ::ByRef<int32_t> offset, ::ByRef<int32_t> count);

  /// @brief Method foundAtLeastThisManyConsecutiveZeroes, addr 0x62f60a0, size 0x8, virtual false, abstract: false, final false
  static inline bool foundAtLeastThisManyConsecutiveZeroes(int64_t value, int32_t minimum, ::ByRef<int32_t> offset, ::ByRef<int32_t> count);

  /// @brief Method longestConsecutiveOnes, addr 0x62f5f84, size 0x74, virtual false, abstract: false, final false
  static inline void longestConsecutiveOnes(int64_t value, ::ByRef<int32_t> offset, ::ByRef<int32_t> count);

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
static_assert(::cordl_internals::size_check_v<::Unity::Collections::ConcurrentMask, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::ConcurrentMask);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::ConcurrentMask*, "Unity.Collections", "ConcurrentMask");
