#pragma once
// IWYU pragma private; include "Unity/Collections/ArrayOfArrays_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayOfArrays_1)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct ArrayOfArrays_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::ArrayOfArrays_1);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.ArrayOfArrays`1<T>
struct CORDL_TYPE ArrayOfArrays_1 {
public:
  // Declarations
  __declspec(property(get = get_BlockMask)) int32_t BlockMask;

  __declspec(property(get = get_BlockSizeInBytes)) int32_t BlockSizeInBytes;

  __declspec(property(get = get_BlockSizeInElements)) int32_t BlockSizeInElements;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method BlockIndexOfElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t BlockIndexOfElement(int32_t elementIndex);

  /// @brief Method CheckBlockIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckBlockIndex(int32_t blockIndex);

  /// @brief Method CheckBlockIsNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckBlockIsNotNull(int32_t blockIndex);

  /// @brief Method CheckElementIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckElementIndex(int32_t elementIndex);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LockfreeAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LockfreeAdd(T t);

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t elementIndex);

  /// @brief Method Rewind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacityInElements, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocatorHandle, int32_t log2BlockSizeInElements);

  /// @brief Method get_BlockMask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_BlockMask();

  /// @brief Method get_BlockSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_BlockSizeInBytes();

  /// @brief Method get_BlockSizeInElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_BlockSizeInElements();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t elementIndex);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayOfArrays_1();

  // Ctor Parameters [CppParam { name: "m_backingAllocatorHandle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name:
  // "m_lengthInElements", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_capacityInElements", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_log2BlockSizeInElements", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_blocks", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_block", ty:
  // "::System::IntPtr*", modifiers: "", def_value: None }]
  constexpr ArrayOfArrays_1(::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle, int32_t m_lengthInElements, int32_t m_capacityInElements,
                            int32_t m_log2BlockSizeInElements, int32_t m_blocks, ::System::IntPtr* m_block) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15502 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_backingAllocatorHandle, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle;

  /// @brief Field m_lengthInElements, offset: 0x4, size: 0x4, def value: None
  int32_t m_lengthInElements;

  /// @brief Field m_capacityInElements, offset: 0x8, size: 0x4, def value: None
  int32_t m_capacityInElements;

  /// @brief Field m_log2BlockSizeInElements, offset: 0xc, size: 0x4, def value: None
  int32_t m_log2BlockSizeInElements;

  /// @brief Field m_blocks, offset: 0x10, size: 0x4, def value: None
  int32_t m_blocks;

  /// @brief Field m_block, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr* m_block;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::ArrayOfArrays_1, "Unity.Collections", "ArrayOfArrays`1");
