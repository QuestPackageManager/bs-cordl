#pragma once
// IWYU pragma private; include "Unity/Collections/RewindableAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Spinner_def.hpp"
#include "Unity/Collections/zzzz__UnmanagedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RewindableAllocator)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct AllocatorManager_Block;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
struct RewindableAllocator_MemoryBlock;
}
namespace Unity::Collections {
class RewindableAllocator_Try_000009DE$BurstDirectCall;
}
namespace Unity::Collections {
class RewindableAllocator_Try_000009DE$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct RewindableAllocator_Union;
}
// Forward declare root types
namespace Unity::Collections {
class RewindableAllocator_Try_000009DE$BurstDirectCall;
}
namespace Unity::Collections {
class RewindableAllocator_Try_000009DE$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct RewindableAllocator;
}
namespace Unity::Collections {
struct RewindableAllocator_MemoryBlock;
}
namespace Unity::Collections {
struct RewindableAllocator_Union;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::RewindableAllocator_Try_000009DE$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate);
MARK_VAL_T(::Unity::Collections::RewindableAllocator);
MARK_VAL_T(::Unity::Collections::RewindableAllocator_MemoryBlock);
MARK_VAL_T(::Unity::Collections::RewindableAllocator_Union);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.RewindableAllocator/Union
struct CORDL_TYPE RewindableAllocator_Union {
public:
  // Declarations
  __declspec(property(get = get_m_allocCount, put = set_m_allocCount)) int64_t m_allocCount;

  __declspec(property(get = get_m_current, put = set_m_current)) int64_t m_current;

  /// @brief Method get_m_allocCount, addr 0x62a9838, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_m_allocCount();

  /// @brief Method get_m_current, addr 0x62a981c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_m_current();

  /// @brief Method set_m_allocCount, addr 0x62a9844, size 0x10, virtual false, abstract: false, final false
  inline void set_m_allocCount(int64_t value);

  /// @brief Method set_m_current, addr 0x62a9828, size 0x10, virtual false, abstract: false, final false
  inline void set_m_current(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RewindableAllocator_Union();

  // Ctor Parameters [CppParam { name: "m_long", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr RewindableAllocator_Union(int64_t m_long) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field allocCountBits offset 0xffffffff size 0x4
  static constexpr int32_t allocCountBits{ static_cast<int32_t>(0x18) };

  /// @brief Field allocCountMask offset 0xffffffff size 0x8
  static constexpr int64_t allocCountMask{ static_cast<int64_t>(0xffffff) };

  /// @brief Field allocCountOffset offset 0xffffffff size 0x4
  static constexpr int32_t allocCountOffset{ static_cast<int32_t>(0x28) };

  /// @brief Field currentBits offset 0xffffffff size 0x4
  static constexpr int32_t currentBits{ static_cast<int32_t>(0x28) };

  /// @brief Field currentMask offset 0xffffffff size 0x8
  static constexpr int64_t currentMask{ static_cast<int64_t>(0xffffffffff) };

  /// @brief Field currentOffset offset 0xffffffff size 0x4
  static constexpr int32_t currentOffset{ static_cast<int32_t>(0x0) };

  /// @brief Field m_long, offset: 0x0, size: 0x8, def value: None
  int64_t m_long;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::RewindableAllocator_Union, m_long) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::RewindableAllocator_Union, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.RewindableAllocator::Union
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.RewindableAllocator/MemoryBlock
struct CORDL_TYPE RewindableAllocator_MemoryBlock {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Contains, addr 0x62a971c, size 0x2c, virtual false, abstract: false, final false
  inline bool Contains(::System::IntPtr ptr);

  /// @brief Method Dispose, addr 0x62a9158, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Rewind, addr 0x62a91b4, size 0x8, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method .ctor, addr 0x62a8f10, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int64_t bytes);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RewindableAllocator_MemoryBlock();

  // Ctor Parameters [CppParam { name: "m_pointer", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_bytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_union", ty: "::Unity::Collections::RewindableAllocator_Union", modifiers: "", def_value: None }]
  constexpr RewindableAllocator_MemoryBlock(uint8_t* m_pointer, int64_t m_bytes, ::Unity::Collections::RewindableAllocator_Union m_union) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field kMaximumAlignment offset 0xffffffff size 0x4
  static constexpr int32_t kMaximumAlignment{ static_cast<int32_t>(0x4000) };

  /// @brief Field m_pointer, offset: 0x0, size: 0x8, def value: None
  uint8_t* m_pointer;

  /// @brief Field m_bytes, offset: 0x8, size: 0x8, def value: None
  int64_t m_bytes;

  /// @brief Field m_union, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::RewindableAllocator_Union m_union;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::RewindableAllocator_MemoryBlock, m_pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator_MemoryBlock, m_bytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator_MemoryBlock, m_union) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::RewindableAllocator_MemoryBlock, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.RewindableAllocator/Try_000009DE$PostfixBurstDelegate
class CORDL_TYPE RewindableAllocator_Try_000009DE$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62a98d4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_3);

  /// @brief Method EndInvoke, addr 0x62a997c, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x62a98c0, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                      ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x62a9854, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RewindableAllocator_Try_000009DE$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RewindableAllocator_Try_000009DE$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RewindableAllocator_Try_000009DE$PostfixBurstDelegate(RewindableAllocator_Try_000009DE$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RewindableAllocator_Try_000009DE$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RewindableAllocator_Try_000009DE$PostfixBurstDelegate(RewindableAllocator_Try_000009DE$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.RewindableAllocator/Try_000009DE$BurstDirectCall
class CORDL_TYPE RewindableAllocator_Try_000009DE$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x62a9aac, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x62a99a0, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x62a9748, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t Invoke(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RewindableAllocator_Try_000009DE$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RewindableAllocator_Try_000009DE$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RewindableAllocator_Try_000009DE$BurstDirectCall(RewindableAllocator_Try_000009DE$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RewindableAllocator_Try_000009DE$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RewindableAllocator_Try_000009DE$BurstDirectCall(RewindableAllocator_Try_000009DE$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::RewindableAllocator_Try_000009DE$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.RewindableAllocator::MemoryBlock, Unity.Collections.Spinner, Unity.Collections.UnmanagedArray`1<T>
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.RewindableAllocator
struct CORDL_TYPE RewindableAllocator {
public:
  // Declarations
  using MemoryBlock = ::Unity::Collections::RewindableAllocator_MemoryBlock;

  using Try_000009DE$BurstDirectCall = ::Unity::Collections::RewindableAllocator_Try_000009DE$BurstDirectCall;

  using Try_000009DE$PostfixBurstDelegate = ::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate;

  using Union = ::Unity::Collections::RewindableAllocator_Union;

  __declspec(property(get = get_BlocksAllocated)) int32_t BlocksAllocated;

  __declspec(property(get = get_BytesAllocated)) int64_t BytesAllocated;

  __declspec(property(get = get_EnableBlockFree, put = set_EnableBlockFree)) bool EnableBlockFree;

  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_InitialSizeInBytes)) int32_t InitialSizeInBytes;

  __declspec(property(get = get_IsAutoDispose)) bool IsAutoDispose;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_MaxMemoryBlockSize)) int64_t MaxMemoryBlockSize;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr operator ::Unity::Collections::AllocatorManager_IAllocator*();

  /// @brief Method AllocateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> AllocateNativeArray(int32_t length);

  /// @brief Method AllocateNativeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeList_1<T> AllocateNativeList(int32_t capacity);

  /// @brief Method Dispose, addr 0x62a91bc, size 0xf0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x62a8e2c, size 0xe4, virtual false, abstract: false, final false
  inline void Initialize(int32_t initialSizeInBytes, bool enableBlockFree);

  /// @brief Method Rewind, addr 0x62a9040, size 0x118, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Try, addr 0x62a9498, size 0x284, virtual true, abstract: false, final true
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try, addr 0x62a8e28, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try$BurstManaged, addr 0x62a9818, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try$BurstManaged(::System::IntPtr state, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method TryAllocate, addr 0x62a9324, size 0x174, virtual false, abstract: false, final false
  inline int32_t TryAllocate(::ByRef<::Unity::Collections::AllocatorManager_Block> block, int32_t startIndex, int32_t lastIndex, int64_t alignedSize, int64_t alignmentMask);

  /// @brief Method get_BlocksAllocated, addr 0x62a8f68, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_BlocksAllocated();

  /// @brief Method get_BytesAllocated, addr 0x62a8fc4, size 0x7c, virtual false, abstract: false, final false
  inline int64_t get_BytesAllocated();

  /// @brief Method get_EnableBlockFree, addr 0x62a8f50, size 0x10, virtual false, abstract: false, final false
  inline bool get_EnableBlockFree();

  /// @brief Method get_Function, addr 0x62a92ac, size 0x78, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0x62a97e8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_InitialSizeInBytes, addr 0x62a8f74, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_InitialSizeInBytes();

  /// @brief Method get_IsAutoDispose, addr 0x62a9810, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsAutoDispose();

  /// @brief Method get_IsCustomAllocator, addr 0x62a9800, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCustomAllocator();

  /// @brief Method get_MaxMemoryBlockSize, addr 0x62a8fbc, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_MaxMemoryBlockSize();

  /// @brief Method get_ToAllocator, addr 0x62a97f8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator();

  /// @brief Method set_EnableBlockFree, addr 0x62a8f60, size 0x8, virtual false, abstract: false, final false
  inline void set_EnableBlockFree(bool value);

  /// @brief Method set_Handle, addr 0x62a97f0, size 0x8, virtual true, abstract: false, final true
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RewindableAllocator();

  // Ctor Parameters [CppParam { name: "m_spinner", ty: "::Unity::Collections::Spinner", modifiers: "", def_value: None }, CppParam { name: "m_handle", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name: "m_block", ty:
  // "::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator_MemoryBlock>", modifiers: "", def_value: None }, CppParam { name: "m_last", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_used", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_enableBlockFree", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_reachMaxBlockSize", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RewindableAllocator(::Unity::Collections::Spinner m_spinner, ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle,
                                ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator_MemoryBlock> m_block, int32_t m_last, int32_t m_used, uint8_t m_enableBlockFree,
                                uint8_t m_reachMaxBlockSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field kBlockBusyAllocateMask offset 0xffffffff size 0x4
  static constexpr int32_t kBlockBusyAllocateMask{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field kBlockBusyRewindMask offset 0xffffffff size 0x4
  static constexpr int32_t kBlockBusyRewindMask{ static_cast<int32_t>(0x80000000) };

  /// @brief Field kLog2MaxMemoryBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t kLog2MaxMemoryBlockSize{ static_cast<int32_t>(0x1a) };

  /// @brief Field kMaxMemoryBlockSize offset 0xffffffff size 0x8
  static constexpr int64_t kMaxMemoryBlockSize{ static_cast<int64_t>(0x4000000) };

  /// @brief Field kMaxNumBlocks offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumBlocks{ static_cast<int32_t>(0x40) };

  /// @brief Field kMinMemoryBlockSize offset 0xffffffff size 0x8
  static constexpr int64_t kMinMemoryBlockSize{ static_cast<int64_t>(0x20000) };

  /// @brief Field m_spinner, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::Spinner m_spinner;

  /// @brief Field m_handle, offset: 0x4, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle;

  /// @brief Field m_block, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator_MemoryBlock> m_block;

  /// @brief Field m_last, offset: 0x18, size: 0x4, def value: None
  int32_t m_last;

  /// @brief Field m_used, offset: 0x1c, size: 0x4, def value: None
  int32_t m_used;

  /// @brief Field m_enableBlockFree, offset: 0x20, size: 0x1, def value: None
  uint8_t m_enableBlockFree;

  /// @brief Field m_reachMaxBlockSize, offset: 0x21, size: 0x1, def value: None
  uint8_t m_reachMaxBlockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_spinner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_handle) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_block) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_last) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_used) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_enableBlockFree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::RewindableAllocator, m_reachMaxBlockSize) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::RewindableAllocator, 0x28>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::RewindableAllocator_Try_000009DE$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator_Try_000009DE$BurstDirectCall*, "Unity.Collections", "RewindableAllocator/Try_000009DE$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator_Try_000009DE$PostfixBurstDelegate*, "Unity.Collections", "RewindableAllocator/Try_000009DE$PostfixBurstDelegate");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator, "Unity.Collections", "RewindableAllocator");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator_MemoryBlock, "Unity.Collections", "RewindableAllocator/MemoryBlock");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator_Union, "Unity.Collections", "RewindableAllocator/Union");
