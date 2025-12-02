#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuddyAllocator)
namespace System {
class IDisposable;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocation;
}
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocator_Header;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocator;
}
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocator_Header;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::BuddyAllocator);
MARK_VAL_T(::UnityEngine::Rendering::Universal::BuddyAllocator_Header);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.BuddyAllocator/Header
struct CORDL_TYPE BuddyAllocator_Header {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuddyAllocator_Header();

  // Ctor Parameters [CppParam { name: "branchingOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "allocationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "freeAllocationIdsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BuddyAllocator_Header(int32_t branchingOrder, int32_t levelCount, int32_t allocationCount, int32_t freeAllocationIdsCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12748 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field branchingOrder, offset: 0x0, size: 0x4, def value: None
  int32_t branchingOrder;

  /// @brief Field levelCount, offset: 0x4, size: 0x4, def value: None
  int32_t levelCount;

  /// @brief Field allocationCount, offset: 0x8, size: 0x4, def value: None
  int32_t allocationCount;

  /// @brief Field freeAllocationIdsCount, offset: 0xc, size: 0x4, def value: None
  int32_t freeAllocationIdsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator_Header, branchingOrder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator_Header, levelCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator_Header, allocationCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator_Header, freeAllocationIdsCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::BuddyAllocator_Header, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.ValueTuple`2<T1, T2>, Unity.Collections.Allocator
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.BuddyAllocator
struct CORDL_TYPE BuddyAllocator {
public:
  // Declarations
  using Header = ::UnityEngine::Rendering::Universal::BuddyAllocator_Header;

  __declspec(property(get = get_freeMaskCounts)) ::Unity::Collections::NativeArray_1<int32_t> freeMaskCounts;

  __declspec(property(get = get_freeMaskIndicesStorage)) ::Unity::Collections::NativeArray_1<int32_t> freeMaskIndicesStorage;

  __declspec(property(get = get_freeMasksStorage)) ::Unity::Collections::NativeArray_1<uint64_t> freeMasksStorage;

  __declspec(property(get = get_header)) ::UnityEngine::Rendering::Universal::BuddyAllocator_Header header;

  __declspec(property(get = get_levelCount)) int32_t levelCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AlignForward, addr 0x665cc20, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t AlignForward(int32_t offset, int32_t alignment);

  /// @brief Method AllocateRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::ValueTuple_2<int32_t, int32_t> AllocateRange(int32_t length, ::ByRef<int32_t> dataSize);

  /// @brief Method Dispose, addr 0x665cb84, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Free, addr 0x665ca18, size 0x16c, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::Rendering::Universal::BuddyAllocation allocation);

  /// @brief Method FreeMaskIndices, addr 0x665c510, size 0xe4, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> FreeMaskIndices(int32_t level);

  /// @brief Method FreeMasks, addr 0x665c364, size 0xe4, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint64_t> FreeMasks(int32_t level);

  /// @brief Method GetNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetNativeArray(int32_t offset, int32_t length);

  /// @brief Method LevelLength, addr 0x665cc00, size 0x10, virtual false, abstract: false, final false
  static inline int32_t LevelLength(int32_t level, int32_t branchingOrder);

  /// @brief Method LevelLength64, addr 0x665c480, size 0x24, virtual false, abstract: false, final false
  static inline int32_t LevelLength64(int32_t level, int32_t branchingOrder);

  /// @brief Method LevelOffset, addr 0x665cbe0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t LevelOffset(int32_t level, int32_t branchingOrder);

  /// @brief Method LevelOffset64, addr 0x665c448, size 0x38, virtual false, abstract: false, final false
  static inline int32_t LevelOffset64(int32_t level, int32_t branchingOrder);

  /// @brief Method Pow2, addr 0x665ca0c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Pow2(int32_t n);

  /// @brief Method Pow2N, addr 0x665cc10, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Pow2N(int32_t x, int32_t n);

  /// @brief Method PtrAdd, addr 0x665cc3c, size 0x8, virtual false, abstract: false, final false
  static inline void* PtrAdd(void* ptr, int32_t bytes);

  /// @brief Method TryAllocate, addr 0x665c7f8, size 0x214, virtual false, abstract: false, final false
  inline bool TryAllocate(int32_t requestedLevel, ::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocation> allocation);

  /// @brief Method .ctor, addr 0x665c63c, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(int32_t levelCount, int32_t branchingOrder, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_freeMaskCounts, addr 0x665c28c, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_freeMaskCounts();

  /// @brief Method get_freeMaskIndicesStorage, addr 0x665c4a4, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_freeMaskIndicesStorage();

  /// @brief Method get_freeMasksStorage, addr 0x665c2f8, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint64_t> get_freeMasksStorage();

  /// @brief Method get_header, addr 0x665c248, size 0x44, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocator_Header> get_header();

  /// @brief Method get_levelCount, addr 0x665c5f4, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_levelCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuddyAllocator();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_ActiveFreeMaskCounts", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "m_FreeMasksStorage", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_FreeMaskIndicesStorage", ty:
  // "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
  constexpr BuddyAllocator(void* m_Data, ::System::ValueTuple_2<int32_t, int32_t> m_ActiveFreeMaskCounts, ::System::ValueTuple_2<int32_t, int32_t> m_FreeMasksStorage,
                           ::System::ValueTuple_2<int32_t, int32_t> m_FreeMaskIndicesStorage, ::Unity::Collections::Allocator m_Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  void* m_Data;

  /// @brief Field m_ActiveFreeMaskCounts, offset: 0x8, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> m_ActiveFreeMaskCounts;

  /// @brief Field m_FreeMasksStorage, offset: 0x10, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> m_FreeMasksStorage;

  /// @brief Field m_FreeMaskIndicesStorage, offset: 0x18, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> m_FreeMaskIndicesStorage;

  /// @brief Field m_Allocator, offset: 0x20, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_ActiveFreeMaskCounts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_FreeMasksStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_FreeMaskIndicesStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_Allocator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::BuddyAllocator, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::BuddyAllocator, "UnityEngine.Rendering.Universal", "BuddyAllocator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::BuddyAllocator_Header, "UnityEngine.Rendering.Universal", "BuddyAllocator/Header");
