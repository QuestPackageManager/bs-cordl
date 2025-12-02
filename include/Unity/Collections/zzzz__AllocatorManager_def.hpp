#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__Long1024_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Burst {
template <typename T> struct FunctionPointer_1;
}
namespace Unity::Collections {
template <typename T> class AllocatorManager_AllocatorCache_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array16_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array256_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array32768_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array4096_1;
}
namespace Unity::Collections {
struct AllocatorManager_BlockHandle;
}
namespace Unity::Collections {
struct AllocatorManager_Block;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_Managed;
}
namespace Unity::Collections {
struct AllocatorManager_Range;
}
namespace Unity::Collections {
class AllocatorManager_SharedStatics;
}
namespace Unity::Collections {
struct AllocatorManager_SlabAllocator;
}
namespace Unity::Collections {
struct AllocatorManager_StackAllocator;
}
namespace Unity::Collections {
struct AllocatorManager_TableEntry;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_IsAutoDispose;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_IsInstalled;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_TableEntry;
}
namespace Unity::Collections {
class SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall;
}
namespace Unity::Collections {
class SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate;
}
namespace Unity::Collections {
class StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall;
}
namespace Unity::Collections {
class StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate;
}
// Forward declare root types
namespace Unity::Collections {
class AllocatorManager;
}
namespace Unity::Collections {
template <typename T> class AllocatorManager_AllocatorCache_1;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_Managed;
}
namespace Unity::Collections {
class AllocatorManager_SharedStatics;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_IsAutoDispose;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_IsInstalled;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_TableEntry;
}
namespace Unity::Collections {
class SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall;
}
namespace Unity::Collections {
class SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate;
}
namespace Unity::Collections {
class StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall;
}
namespace Unity::Collections {
class StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array16_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array256_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array32768_1;
}
namespace Unity::Collections {
template <typename T> struct AllocatorManager_Array4096_1;
}
namespace Unity::Collections {
struct AllocatorManager_Block;
}
namespace Unity::Collections {
struct AllocatorManager_BlockHandle;
}
namespace Unity::Collections {
struct AllocatorManager_Range;
}
namespace Unity::Collections {
struct AllocatorManager_SlabAllocator;
}
namespace Unity::Collections {
struct AllocatorManager_StackAllocator;
}
namespace Unity::Collections {
struct AllocatorManager_TableEntry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::AllocatorManager);
MARK_GEN_REF_PTR_T(::Unity::Collections::AllocatorManager_AllocatorCache_1);
MARK_REF_PTR_T(::Unity::Collections::AllocatorManager_IAllocator);
MARK_REF_PTR_T(::Unity::Collections::AllocatorManager_Managed);
MARK_REF_PTR_T(::Unity::Collections::AllocatorManager_SharedStatics);
MARK_REF_PTR_T(::Unity::Collections::AllocatorManager_TryFunction);
MARK_REF_PTR_T(::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose);
MARK_REF_PTR_T(::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled);
MARK_REF_PTR_T(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry);
MARK_REF_PTR_T(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate);
MARK_REF_PTR_T(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate);
MARK_VAL_T(::Unity::Collections::AllocatorManager_AllocatorHandle);
MARK_GEN_VAL_T(::Unity::Collections::AllocatorManager_Array16_1);
MARK_GEN_VAL_T(::Unity::Collections::AllocatorManager_Array256_1);
MARK_GEN_VAL_T(::Unity::Collections::AllocatorManager_Array32768_1);
MARK_GEN_VAL_T(::Unity::Collections::AllocatorManager_Array4096_1);
MARK_VAL_T(::Unity::Collections::AllocatorManager_Block);
MARK_VAL_T(::Unity::Collections::AllocatorManager_BlockHandle);
MARK_VAL_T(::Unity::Collections::AllocatorManager_Range);
MARK_VAL_T(::Unity::Collections::AllocatorManager_SlabAllocator);
MARK_VAL_T(::Unity::Collections::AllocatorManager_StackAllocator);
MARK_VAL_T(::Unity::Collections::AllocatorManager_TableEntry);
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/TryFunction
class CORDL_TYPE AllocatorManager_TryFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x628aa70, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x628ab18, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x628aa5c, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::Unity::Collections::AllocatorManager_TryFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x628a9f0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_TryFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_TryFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocatorManager_TryFunction(AllocatorManager_TryFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_TryFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager_TryFunction(AllocatorManager_TryFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_TryFunction, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/AllocatorHandle
struct CORDL_TYPE AllocatorManager_AllocatorHandle {
public:
  // Declarations
  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_IsAutoDispose)) bool IsAutoDispose;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_IsInstalled)) bool IsInstalled;

  __declspec(property(get = get_TableEntry)) ::Unity::Collections::AllocatorManager_TableEntry TableEntry;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*();

  /// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr operator ::Unity::Collections::AllocatorManager_IAllocator*();

  /// @brief Method AllocateBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::AllocatorManager_Block AllocateBlock(int32_t items);

  /// @brief Method CheckAllocatedSuccessfully, addr 0x628ac80, size 0x80, virtual false, abstract: false, final false
  static inline void CheckAllocatedSuccessfully(int32_t error);

  /// @brief Method CompareTo, addr 0x628afc0, size 0xc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::AllocatorManager_AllocatorHandle other);

  /// @brief Method Dispose, addr 0x628ae78, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x628ae8c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x628af48, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Collections::Allocator other);

  /// @brief Method Equals, addr 0x628af38, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::AllocatorManager_AllocatorHandle other);

  /// @brief Method GetHashCode, addr 0x628af58, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IncrementVersion, addr 0x628ac70, size 0x4, virtual false, abstract: false, final false
  inline void IncrementVersion();

  /// @brief Method Install, addr 0x628a37c, size 0x24, virtual false, abstract: false, final false
  inline void Install(::Unity::Collections::AllocatorManager_TableEntry tableEntry);

  /// @brief Method Rewind, addr 0x628ac74, size 0x4, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Try, addr 0x628ad08, size 0x6c, virtual true, abstract: false, final true
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method TryAllocateBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t TryAllocateBlock(::ByRef<::Unity::Collections::AllocatorManager_Block> block, int32_t items);

  /// @brief Method get_Function, addr 0x628ad00, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0x6289f08, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_IsAutoDispose, addr 0x628ad94, size 0xe4, virtual true, abstract: false, final true
  inline bool get_IsAutoDispose();

  /// @brief Method get_IsCustomAllocator, addr 0x628ad84, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCustomAllocator();

  /// @brief Method get_IsInstalled, addr 0x628ab3c, size 0xe4, virtual false, abstract: false, final false
  inline bool get_IsInstalled();

  /// @brief Method get_TableEntry, addr 0x6289d2c, size 0xcc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Collections::AllocatorManager_TableEntry> get_TableEntry();

  /// @brief Method get_ToAllocator, addr 0x628ad7c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Method get_Value, addr 0x628ac78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Value();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
  constexpr ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>* i___System__IComparable_1___Unity__Collections__AllocatorManager_AllocatorHandle_();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
  constexpr ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>* i___System__IEquatable_1___Unity__Collections__AllocatorManager_AllocatorHandle_();

  /// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator();

  /// @brief Method op_Equality, addr 0x628af60, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method op_GreaterThan, addr 0x628af90, size 0x10, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x628afb0, size 0x10, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method op_Implicit, addr 0x628a078, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle(::Unity::Collections::Allocator a);

  /// @brief Method op_Inequality, addr 0x628af70, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method op_LessThan, addr 0x628af80, size 0x10, virtual false, abstract: false, final false
  static inline bool op_LessThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x628afa0, size 0x10, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs);

  /// @brief Method set_Handle, addr 0x628ad74, size 0x8, virtual true, abstract: false, final true
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_AllocatorHandle();

  // Ctor Parameters [CppParam { name: "Index", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr AllocatorManager_AllocatorHandle(uint16_t Index, uint16_t Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15478 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Index, offset: 0x0, size: 0x2, def value: None
  uint16_t Index;

  /// @brief Field Version, offset: 0x2, size: 0x2, def value: None
  uint16_t Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_AllocatorHandle, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_AllocatorHandle, Version) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_AllocatorHandle, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/BlockHandle
struct CORDL_TYPE AllocatorManager_BlockHandle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_BlockHandle();

  // Ctor Parameters [CppParam { name: "Value", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr AllocatorManager_BlockHandle(uint16_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15479 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field Value, offset: 0x0, size: 0x2, def value: None
  uint16_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_BlockHandle, Value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_BlockHandle, 0x2>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Range
struct CORDL_TYPE AllocatorManager_Range {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x628afcc, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Range();

  // Ctor Parameters [CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "Items", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr AllocatorManager_Range(::System::IntPtr Pointer, int32_t Items, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15480 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr Pointer;

  /// @brief Field Items, offset: 0x8, size: 0x4, def value: None
  int32_t Items;

  /// @brief Field Allocator, offset: 0xc, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_Range, Pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Range, Items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Range, Allocator) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_Range, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::Range
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Block
struct CORDL_TYPE AllocatorManager_Block {
public:
  // Declarations
  __declspec(property(get = get_Alignment, put = set_Alignment)) int32_t Alignment;

  __declspec(property(get = get_AllocatedBytes)) int64_t AllocatedBytes;

  __declspec(property(get = get_Bytes)) int64_t Bytes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Allocate, addr 0x628b10c, size 0x4, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method CheckFailedToAllocate, addr 0x628b114, size 0xac, virtual false, abstract: false, final false
  inline void CheckFailedToAllocate(int32_t error);

  /// @brief Method CheckFailedToFree, addr 0x628b1c0, size 0xac, virtual false, abstract: false, final false
  inline void CheckFailedToFree(int32_t error);

  /// @brief Method Dispose, addr 0x628b008, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Free, addr 0x628b110, size 0x4, virtual false, abstract: false, final false
  inline void Free();

  /// @brief Method TryAllocate, addr 0x628b0b0, size 0x5c, virtual false, abstract: false, final false
  inline int32_t TryAllocate();

  /// @brief Method TryFree, addr 0x628b054, size 0x5c, virtual false, abstract: false, final false
  inline int32_t TryFree();

  /// @brief Method get_Alignment, addr 0x628a068, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_Alignment();

  /// @brief Method get_AllocatedBytes, addr 0x628b00c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_AllocatedBytes();

  /// @brief Method get_Bytes, addr 0x628a058, size 0x10, virtual false, abstract: false, final false
  inline int64_t get_Bytes();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Alignment, addr 0x628b018, size 0x3c, virtual false, abstract: false, final false
  inline void set_Alignment(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Block();

  // Ctor Parameters [CppParam { name: "Range", ty: "::Unity::Collections::AllocatorManager_Range", modifiers: "", def_value: None }, CppParam { name: "BytesPerItem", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "AllocatedItems", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Log2Alignment", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "Padding0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Padding1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Padding2", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr AllocatorManager_Block(::Unity::Collections::AllocatorManager_Range Range, int32_t BytesPerItem, int32_t AllocatedItems, uint8_t Log2Alignment, uint8_t Padding0, uint16_t Padding1,
                                   uint32_t Padding2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15481 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Range, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::AllocatorManager_Range Range;

  /// @brief Field BytesPerItem, offset: 0x10, size: 0x4, def value: None
  int32_t BytesPerItem;

  /// @brief Field AllocatedItems, offset: 0x14, size: 0x4, def value: None
  int32_t AllocatedItems;

  /// @brief Field Log2Alignment, offset: 0x18, size: 0x1, def value: None
  uint8_t Log2Alignment;

  /// @brief Field Padding0, offset: 0x19, size: 0x1, def value: None
  uint8_t Padding0;

  /// @brief Field Padding1, offset: 0x1a, size: 0x2, def value: None
  uint16_t Padding1;

  /// @brief Field Padding2, offset: 0x1c, size: 0x4, def value: None
  uint32_t Padding2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, Range) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, BytesPerItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, AllocatedItems) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, Log2Alignment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, Padding0) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, Padding1) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_Block, Padding2) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_Block, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/IAllocator
class CORDL_TYPE AllocatorManager_IAllocator {
public:
  // Declarations
  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_IsAutoDispose)) bool IsAutoDispose;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Try, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method get_Function, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_IsAutoDispose, addr 0x628b26c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAutoDispose();

  /// @brief Method get_IsCustomAllocator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsCustomAllocator();

  /// @brief Method get_ToAllocator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Handle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_IAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager_IAllocator(AllocatorManager_IAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/StackAllocator/Try_000000AB$PostfixBurstDelegate
class CORDL_TYPE StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x628b4ec, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_3);

  /// @brief Method EndInvoke, addr 0x628b594, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x628b4d8, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                  ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x628b46c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate(StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate(StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15483 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/StackAllocator/Try_000000AB$BurstDirectCall
class CORDL_TYPE StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x628b6c4, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x628b5b8, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x628b350, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall(StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall(StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.AllocatorManager::Block
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/StackAllocator
struct CORDL_TYPE AllocatorManager_StackAllocator {
public:
  // Declarations
  using Try_000000AB$BurstDirectCall = ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall;

  using Try_000000AB$PostfixBurstDelegate = ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate;

  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr operator ::Unity::Collections::AllocatorManager_IAllocator*();

  /// @brief Method Dispose, addr 0x628b464, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x628b2a0, size 0x14, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Collections::AllocatorManager_Block storage);

  /// @brief Method Try, addr 0x628b274, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try, addr 0x628b2b4, size 0x9c, virtual true, abstract: false, final true
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try$BurstManaged, addr 0x628b468, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try$BurstManaged(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method get_Function, addr 0x628b3f0, size 0x74, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0x628b278, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_IsCustomAllocator, addr 0x628b290, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCustomAllocator();

  /// @brief Method get_ToAllocator, addr 0x628b288, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator();

  /// @brief Method set_Handle, addr 0x628b280, size 0x8, virtual true, abstract: false, final true
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_StackAllocator();

  // Ctor Parameters [CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name: "m_storage", ty:
  // "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: None }, CppParam { name: "m_top", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr AllocatorManager_StackAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle m_handle, ::Unity::Collections::AllocatorManager_Block m_storage, int64_t m_top) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15485 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_handle, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle;

  /// @brief Field m_storage, offset: 0x8, size: 0x20, def value: None
  ::Unity::Collections::AllocatorManager_Block m_storage;

  /// @brief Field m_top, offset: 0x28, size: 0x8, def value: None
  int64_t m_top;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_StackAllocator, m_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_StackAllocator, m_storage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_StackAllocator, m_top) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_StackAllocator, 0x30>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SlabAllocator/Try_000000B9$PostfixBurstDelegate
class CORDL_TYPE SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x628bc4c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_3);

  /// @brief Method EndInvoke, addr 0x628bcf4, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x628bc38, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                 ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x628bbcc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate(SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate(SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15486 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SlabAllocator/Try_000000B9$BurstDirectCall
class CORDL_TYPE SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x628be24, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x628bd18, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x628bab0, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall(SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall(SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.AllocatorManager::Block, Unity.Collections.FixedList4096Bytes`1<T>
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/SlabAllocator
struct CORDL_TYPE AllocatorManager_SlabAllocator {
public:
  // Declarations
  using Try_000000B9$BurstDirectCall = ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall;

  using Try_000000B9$PostfixBurstDelegate = ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate;

  __declspec(property(get = get_AllocatedBytes)) int64_t AllocatedBytes;

  __declspec(property(get = get_BudgetInBytes)) int64_t BudgetInBytes;

  __declspec(property(get = get_Function)) ::Unity::Collections::AllocatorManager_TryFunction* Function;

  __declspec(property(get = get_Handle, put = set_Handle)) ::Unity::Collections::AllocatorManager_AllocatorHandle Handle;

  __declspec(property(get = get_IsCustomAllocator)) bool IsCustomAllocator;

  __declspec(property(get = get_SlabSizeInBytes, put = set_SlabSizeInBytes)) int32_t SlabSizeInBytes;

  __declspec(property(get = get_Slabs)) int32_t Slabs;

  __declspec(property(get = get_ToAllocator)) ::Unity::Collections::Allocator ToAllocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr operator ::Unity::Collections::AllocatorManager_IAllocator*();

  /// @brief Method Dispose, addr 0x628bbc4, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x628b780, size 0x108, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Collections::AllocatorManager_Block storage, int32_t slabSizeInBytes, int64_t budget);

  /// @brief Method Try, addr 0x628b6dc, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try, addr 0x628b888, size 0x228, virtual true, abstract: false, final true
  inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Try$BurstManaged, addr 0x628bbc8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Try$BurstManaged(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method get_AllocatedBytes, addr 0x628b710, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_AllocatedBytes();

  /// @brief Method get_BudgetInBytes, addr 0x628b708, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_BudgetInBytes();

  /// @brief Method get_Function, addr 0x628bb50, size 0x74, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_TryFunction* get_Function();

  /// @brief Method get_Handle, addr 0x628b6e0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_Handle();

  /// @brief Method get_IsCustomAllocator, addr 0x628b6f8, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCustomAllocator();

  /// @brief Method get_SlabSizeInBytes, addr 0x628b718, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_SlabSizeInBytes();

  /// @brief Method get_Slabs, addr 0x628b768, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Slabs();

  /// @brief Method get_ToAllocator, addr 0x628b6f0, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Allocator get_ToAllocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
  constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator();

  /// @brief Method set_Handle, addr 0x628b6e8, size 0x8, virtual true, abstract: false, final true
  inline void set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  /// @brief Method set_SlabSizeInBytes, addr 0x628b728, size 0x40, virtual false, abstract: false, final false
  inline void set_SlabSizeInBytes(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_SlabAllocator();

  // Ctor Parameters [CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name: "Storage", ty:
  // "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: None }, CppParam { name: "Log2SlabSizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Occupied", ty: "::Unity::Collections::FixedList4096Bytes_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "budgetInBytes", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "allocatedBytes", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr AllocatorManager_SlabAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle m_handle, ::Unity::Collections::AllocatorManager_Block Storage, int32_t Log2SlabSizeInBytes,
                                           ::Unity::Collections::FixedList4096Bytes_1<int32_t> Occupied, int64_t budgetInBytes, int64_t allocatedBytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15488 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1040 };

  /// @brief Field m_handle, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle;

  /// @brief Field Storage, offset: 0x8, size: 0x20, def value: None
  ::Unity::Collections::AllocatorManager_Block Storage;

  /// @brief Field Log2SlabSizeInBytes, offset: 0x28, size: 0x4, def value: None
  int32_t Log2SlabSizeInBytes;

  /// @brief Field Occupied, offset: 0x30, size: 0x1000, def value: None
  ::Unity::Collections::FixedList4096Bytes_1<int32_t> Occupied;

  /// @brief Field budgetInBytes, offset: 0x1030, size: 0x8, def value: None
  int64_t budgetInBytes;

  /// @brief Field allocatedBytes, offset: 0x1038, size: 0x8, def value: None
  int64_t allocatedBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, m_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, Storage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, Log2SlabSizeInBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, Occupied) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, budgetInBytes) == 0x1030, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_SlabAllocator, allocatedBytes) == 0x1038, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_SlabAllocator, 0x1040>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/TableEntry
struct CORDL_TYPE AllocatorManager_TableEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_TableEntry();

  // Ctor Parameters [CppParam { name: "function", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr AllocatorManager_TableEntry(::System::IntPtr function, ::System::IntPtr state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15489 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field function, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr function;

  /// @brief Field state, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::AllocatorManager_TableEntry, function) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::AllocatorManager_TableEntry, state) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_TableEntry, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array16`1<T>
struct CORDL_TYPE AllocatorManager_Array16_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Array16_1();

  // Ctor Parameters [CppParam { name: "f0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f2", ty: "T", modifiers: "",
  // def_value: None }, CppParam { name: "f3", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f4", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "T", modifiers:
  // "", def_value: None }, CppParam { name: "f6", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f7", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f8", ty: "T",
  // modifiers: "", def_value: None }, CppParam { name: "f9", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f10", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f11", ty:
  // "T", modifiers: "", def_value: None }, CppParam { name: "f12", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f13", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "f14", ty: "T", modifiers: "", def_value: None }, CppParam { name: "f15", ty: "T", modifiers: "", def_value: None }]
  constexpr AllocatorManager_Array16_1(T f0, T f1, T f2, T f3, T f4, T f5, T f6, T f7, T f8, T f9, T f10, T f11, T f12, T f13, T f14, T f15) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15490 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field f0, offset: 0x0, size: 0x8, def value: None
  T f0;

  /// @brief Field f1, offset: 0x8, size: 0x8, def value: None
  T f1;

  /// @brief Field f2, offset: 0x10, size: 0x8, def value: None
  T f2;

  /// @brief Field f3, offset: 0x18, size: 0x8, def value: None
  T f3;

  /// @brief Field f4, offset: 0x20, size: 0x8, def value: None
  T f4;

  /// @brief Field f5, offset: 0x28, size: 0x8, def value: None
  T f5;

  /// @brief Field f6, offset: 0x30, size: 0x8, def value: None
  T f6;

  /// @brief Field f7, offset: 0x38, size: 0x8, def value: None
  T f7;

  /// @brief Field f8, offset: 0x40, size: 0x8, def value: None
  T f8;

  /// @brief Field f9, offset: 0x48, size: 0x8, def value: None
  T f9;

  /// @brief Field f10, offset: 0x50, size: 0x8, def value: None
  T f10;

  /// @brief Field f11, offset: 0x58, size: 0x8, def value: None
  T f11;

  /// @brief Field f12, offset: 0x60, size: 0x8, def value: None
  T f12;

  /// @brief Field f13, offset: 0x68, size: 0x8, def value: None
  T f13;

  /// @brief Field f14, offset: 0x70, size: 0x8, def value: None
  T f14;

  /// @brief Field f15, offset: 0x78, size: 0x8, def value: None
  T f15;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::Array16`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array256`1<T>
struct CORDL_TYPE AllocatorManager_Array256_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Array256_1();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f1", ty:
  // "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f4", ty:
  // "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f7", ty:
  // "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f8", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f9", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f10", ty:
  // "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f11", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f12", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f13", ty:
  // "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }, CppParam { name: "f14", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f15", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None }]
  constexpr AllocatorManager_Array256_1(::Unity::Collections::AllocatorManager_Array16_1<T> f0, ::Unity::Collections::AllocatorManager_Array16_1<T> f1,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f2, ::Unity::Collections::AllocatorManager_Array16_1<T> f3,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f4, ::Unity::Collections::AllocatorManager_Array16_1<T> f5,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f6, ::Unity::Collections::AllocatorManager_Array16_1<T> f7,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f8, ::Unity::Collections::AllocatorManager_Array16_1<T> f9,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f10, ::Unity::Collections::AllocatorManager_Array16_1<T> f11,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f12, ::Unity::Collections::AllocatorManager_Array16_1<T> f13,
                                        ::Unity::Collections::AllocatorManager_Array16_1<T> f14, ::Unity::Collections::AllocatorManager_Array16_1<T> f15) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15491 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x800 };

  /// @brief Field f0, offset: 0x0, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f0;

  /// @brief Field f1, offset: 0x80, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f1;

  /// @brief Field f2, offset: 0x100, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f2;

  /// @brief Field f3, offset: 0x180, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f3;

  /// @brief Field f4, offset: 0x200, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f4;

  /// @brief Field f5, offset: 0x280, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f5;

  /// @brief Field f6, offset: 0x300, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f6;

  /// @brief Field f7, offset: 0x380, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f7;

  /// @brief Field f8, offset: 0x400, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f8;

  /// @brief Field f9, offset: 0x480, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f9;

  /// @brief Field f10, offset: 0x500, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f10;

  /// @brief Field f11, offset: 0x580, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f11;

  /// @brief Field f12, offset: 0x600, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f12;

  /// @brief Field f13, offset: 0x680, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f13;

  /// @brief Field f14, offset: 0x700, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f14;

  /// @brief Field f15, offset: 0x780, size: 0x80, def value: None
  ::Unity::Collections::AllocatorManager_Array16_1<T> f15;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::Array256`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array4096`1<T>
struct CORDL_TYPE AllocatorManager_Array4096_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Array4096_1();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f1", ty:
  // "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f4", ty:
  // "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f7", ty:
  // "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f8", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f9", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f10", ty:
  // "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f11", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f12", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f13", ty:
  // "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }, CppParam { name: "f14", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f15", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: None }]
  constexpr AllocatorManager_Array4096_1(::Unity::Collections::AllocatorManager_Array256_1<T> f0, ::Unity::Collections::AllocatorManager_Array256_1<T> f1,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f2, ::Unity::Collections::AllocatorManager_Array256_1<T> f3,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f4, ::Unity::Collections::AllocatorManager_Array256_1<T> f5,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f6, ::Unity::Collections::AllocatorManager_Array256_1<T> f7,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f8, ::Unity::Collections::AllocatorManager_Array256_1<T> f9,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f10, ::Unity::Collections::AllocatorManager_Array256_1<T> f11,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f12, ::Unity::Collections::AllocatorManager_Array256_1<T> f13,
                                         ::Unity::Collections::AllocatorManager_Array256_1<T> f14, ::Unity::Collections::AllocatorManager_Array256_1<T> f15) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15492 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8000 };

  /// @brief Field f0, offset: 0x0, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f0;

  /// @brief Field f1, offset: 0x800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f1;

  /// @brief Field f2, offset: 0x1000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f2;

  /// @brief Field f3, offset: 0x1800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f3;

  /// @brief Field f4, offset: 0x2000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f4;

  /// @brief Field f5, offset: 0x2800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f5;

  /// @brief Field f6, offset: 0x3000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f6;

  /// @brief Field f7, offset: 0x3800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f7;

  /// @brief Field f8, offset: 0x4000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f8;

  /// @brief Field f9, offset: 0x4800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f9;

  /// @brief Field f10, offset: 0x5000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f10;

  /// @brief Field f11, offset: 0x5800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f11;

  /// @brief Field f12, offset: 0x6000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f12;

  /// @brief Field f13, offset: 0x6800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f13;

  /// @brief Field f14, offset: 0x7000, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f14;

  /// @brief Field f15, offset: 0x7800, size: 0x800, def value: None
  ::Unity::Collections::AllocatorManager_Array256_1<T> f15;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::Array4096`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array32768`1<T>
struct CORDL_TYPE AllocatorManager_Array32768_1 {
public:
  // Declarations
  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
  constexpr operator ::Unity::Collections::IIndexable_1<T>*();

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
  constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_();

  /// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Array32768_1();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }, CppParam { name: "f1", ty:
  // "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }, CppParam { name: "f4", ty:
  // "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }, CppParam { name: "f7", ty:
  // "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None }]
  constexpr AllocatorManager_Array32768_1(::Unity::Collections::AllocatorManager_Array4096_1<T> f0, ::Unity::Collections::AllocatorManager_Array4096_1<T> f1,
                                          ::Unity::Collections::AllocatorManager_Array4096_1<T> f2, ::Unity::Collections::AllocatorManager_Array4096_1<T> f3,
                                          ::Unity::Collections::AllocatorManager_Array4096_1<T> f4, ::Unity::Collections::AllocatorManager_Array4096_1<T> f5,
                                          ::Unity::Collections::AllocatorManager_Array4096_1<T> f6, ::Unity::Collections::AllocatorManager_Array4096_1<T> f7) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15493 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40000 };

  /// @brief Field f0, offset: 0x0, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f0;

  /// @brief Field f1, offset: 0x8000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f1;

  /// @brief Field f2, offset: 0x10000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f2;

  /// @brief Field f3, offset: 0x18000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f3;

  /// @brief Field f4, offset: 0x20000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f4;

  /// @brief Field f5, offset: 0x28000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f5;

  /// @brief Field f6, offset: 0x30000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f6;

  /// @brief Field f7, offset: 0x38000, size: 0x8000, def value: None
  ::Unity::Collections::AllocatorManager_Array4096_1<T> f7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.Long1024
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics/IsInstalled
class CORDL_TYPE SharedStatics_AllocatorManager_IsInstalled : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ref, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Ref, put = setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Ref;

  static inline ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled* New_ctor();

  /// @brief Method .ctor, addr 0x628be40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> getStaticF_Ref();

  static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatics_AllocatorManager_IsInstalled();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_IsInstalled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatics_AllocatorManager_IsInstalled(SharedStatics_AllocatorManager_IsInstalled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_IsInstalled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatics_AllocatorManager_IsInstalled(SharedStatics_AllocatorManager_IsInstalled const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.AllocatorManager::Array32768`1<T>, Unity.Collections.AllocatorManager::TableEntry
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics/TableEntry
class CORDL_TYPE SharedStatics_AllocatorManager_TableEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ref, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Ref,
                      put = setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>
      Ref;

  static inline ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry* New_ctor();

  /// @brief Method .ctor, addr 0x628bec8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>> getStaticF_Ref();

  static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatics_AllocatorManager_TableEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_TableEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatics_AllocatorManager_TableEntry(SharedStatics_AllocatorManager_TableEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_TableEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatics_AllocatorManager_TableEntry(SharedStatics_AllocatorManager_TableEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.Long1024
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics/IsAutoDispose
class CORDL_TYPE SharedStatics_AllocatorManager_IsAutoDispose : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ref, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Ref, put = setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Ref;

  static inline ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose* New_ctor();

  /// @brief Method .ctor, addr 0x628bf50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> getStaticF_Ref();

  static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatics_AllocatorManager_IsAutoDispose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_IsAutoDispose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatics_AllocatorManager_IsAutoDispose(SharedStatics_AllocatorManager_IsAutoDispose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_IsAutoDispose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatics_AllocatorManager_IsAutoDispose(SharedStatics_AllocatorManager_IsAutoDispose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics
class CORDL_TYPE AllocatorManager_SharedStatics : public ::System::Object {
public:
  // Declarations
  using IsAutoDispose = ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose;

  using IsInstalled = ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled;

  using TableEntry = ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry;

  static inline ::Unity::Collections::AllocatorManager_SharedStatics* New_ctor();

  /// @brief Method .ctor, addr 0x628be3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_SharedStatics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_SharedStatics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocatorManager_SharedStatics(AllocatorManager_SharedStatics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_SharedStatics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager_SharedStatics(AllocatorManager_SharedStatics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15497 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_SharedStatics, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/Managed
class CORDL_TYPE AllocatorManager_Managed : public ::System::Object {
public:
  // Declarations
  /// @brief Field TryFunctionDelegates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TryFunctionDelegates,
                      put = setStaticF_TryFunctionDelegates)) ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*>
      TryFunctionDelegates;

  /// @brief Method RegisterDelegate, addr 0x628a3a0, size 0xdc, virtual false, abstract: false, final false
  static inline void RegisterDelegate(int32_t index, ::Unity::Collections::AllocatorManager_TryFunction* function);

  /// @brief Method UnregisterDelegate, addr 0x628bfd8, size 0xd0, virtual false, abstract: false, final false
  static inline void UnregisterDelegate(int32_t index);

  static inline ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*> getStaticF_TryFunctionDelegates();

  static inline void setStaticF_TryFunctionDelegates(::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocatorManager_Managed(AllocatorManager_Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager_Managed(AllocatorManager_Managed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15498 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager_Managed, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object, Unity.Burst.FunctionPointer`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/AllocatorCache`1<T>
class CORDL_TYPE AllocatorManager_AllocatorCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CachedFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CachedFunction, put = setStaticF_CachedFunction)) ::Unity::Collections::AllocatorManager_TryFunction* CachedFunction;

  /// @brief Field TryFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TryFunction, put = setStaticF_TryFunction)) ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> TryFunction;

  static inline ::Unity::Collections::AllocatorManager_TryFunction* getStaticF_CachedFunction();

  static inline ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> getStaticF_TryFunction();

  static inline void setStaticF_CachedFunction(::Unity::Collections::AllocatorManager_TryFunction* value);

  static inline void setStaticF_TryFunction(::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager_AllocatorCache_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_AllocatorCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocatorManager_AllocatorCache_1(AllocatorManager_AllocatorCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_AllocatorCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager_AllocatorCache_1(AllocatorManager_AllocatorCache_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15499 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.Object, Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager
class CORDL_TYPE AllocatorManager : public ::System::Object {
public:
  // Declarations
  template <typename T> using AllocatorCache_1 = ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>;

  using AllocatorHandle = ::Unity::Collections::AllocatorManager_AllocatorHandle;

  template <typename T> using Array16_1 = ::Unity::Collections::AllocatorManager_Array16_1<T>;

  template <typename T> using Array256_1 = ::Unity::Collections::AllocatorManager_Array256_1<T>;

  template <typename T> using Array32768_1 = ::Unity::Collections::AllocatorManager_Array32768_1<T>;

  template <typename T> using Array4096_1 = ::Unity::Collections::AllocatorManager_Array4096_1<T>;

  using Block = ::Unity::Collections::AllocatorManager_Block;

  using BlockHandle = ::Unity::Collections::AllocatorManager_BlockHandle;

  using IAllocator = ::Unity::Collections::AllocatorManager_IAllocator;

  using Managed = ::Unity::Collections::AllocatorManager_Managed;

  using Range = ::Unity::Collections::AllocatorManager_Range;

  using SharedStatics = ::Unity::Collections::AllocatorManager_SharedStatics;

  using SlabAllocator = ::Unity::Collections::AllocatorManager_SlabAllocator;

  using StackAllocator = ::Unity::Collections::AllocatorManager_StackAllocator;

  using TableEntry = ::Unity::Collections::AllocatorManager_TableEntry;

  using TryFunction = ::Unity::Collections::AllocatorManager_TryFunction;

  /// @brief Field AudioKernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AudioKernel, put = setStaticF_AudioKernel)) ::Unity::Collections::AllocatorManager_AllocatorHandle AudioKernel;

  /// @brief Field FirstGlobalScratchpadAllocatorIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_FirstGlobalScratchpadAllocatorIndex, put = setStaticF_FirstGlobalScratchpadAllocatorIndex)) uint32_t FirstGlobalScratchpadAllocatorIndex;

  /// @brief Field GlobalAllocatorBaseIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_GlobalAllocatorBaseIndex, put = setStaticF_GlobalAllocatorBaseIndex)) uint32_t GlobalAllocatorBaseIndex;

  /// @brief Field Invalid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::Unity::Collections::AllocatorManager_AllocatorHandle Invalid;

  /// @brief Field MaxNumGlobalAllocators, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_MaxNumGlobalAllocators, put = setStaticF_MaxNumGlobalAllocators)) uint16_t MaxNumGlobalAllocators;

  /// @brief Field None, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::Unity::Collections::AllocatorManager_AllocatorHandle None;

  /// @brief Field NumGlobalScratchAllocators, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_NumGlobalScratchAllocators, put = setStaticF_NumGlobalScratchAllocators)) uint16_t NumGlobalScratchAllocators;

  /// @brief Field Persistent, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Persistent, put = setStaticF_Persistent)) ::Unity::Collections::AllocatorManager_AllocatorHandle Persistent;

  /// @brief Field Temp, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Temp, put = setStaticF_Temp)) ::Unity::Collections::AllocatorManager_AllocatorHandle Temp;

  /// @brief Field TempJob, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_TempJob, put = setStaticF_TempJob)) ::Unity::Collections::AllocatorManager_AllocatorHandle TempJob;

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t items);

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline U* Allocate(::ByRef<T> t, U u, int32_t items);

  /// @brief Method Allocate, addr 0x6289a58, size 0xa0, virtual false, abstract: false, final false
  static inline void* Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items);

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* Allocate(::ByRef<T> t, int32_t sizeOf, int32_t alignOf, int32_t items);

  /// @brief Method AllocateBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::AllocatorManager_Block AllocateBlock(::ByRef<T> t, int32_t sizeOf, int32_t alignOf, int32_t items);

  /// @brief Method AllocateBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::AllocatorManager_Block AllocateBlock(::ByRef<T> t, U u, int32_t items);

  /// @brief Method AllocateStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void* AllocateStruct(::ByRef<T> t, U u, int32_t items);

  /// @brief Method CheckDelegate, addr 0x6289c30, size 0xc, virtual false, abstract: false, final false
  static inline void CheckDelegate(::ByRef<bool> useDelegate);

  /// @brief Method CheckFailedToAllocate, addr 0x628a850, size 0x54, virtual false, abstract: false, final false
  static inline void CheckFailedToAllocate(int32_t error);

  /// @brief Method CheckFailedToFree, addr 0x628a8a4, size 0x54, virtual false, abstract: false, final false
  static inline void CheckFailedToFree(int32_t error);

  /// @brief Method CheckValid, addr 0x628a8f8, size 0x4, virtual false, abstract: false, final false
  static inline void CheckValid(::Unity::Collections::AllocatorManager_AllocatorHandle handle);

  /// @brief Method ConvertToAllocatorHandle, addr 0x6289c2c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle ConvertToAllocatorHandle(::Unity::Collections::Allocator a);

  /// @brief Method CreateAllocator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> CreateAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, bool isGlobal, int32_t globalIndex);

  /// @brief Method DestroyAllocator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DestroyAllocator(::ByRef<T> t, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, T* pointer, int32_t items);

  /// @brief Method Free, addr 0x6289ba0, size 0x8c, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer);

  /// @brief Method Free, addr 0x6289af8, size 0xa8, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Free(::ByRef<T> t, U* pointer, int32_t items);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Free(::ByRef<T> t, void* pointer, int32_t sizeOf, int32_t alignOf, int32_t items);

  /// @brief Method FreeBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void FreeBlock(::ByRef<T> t, ::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method Initialize, addr 0x628a154, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method Install, addr 0x628a47c, size 0xe8, virtual false, abstract: false, final false
  static inline void Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState, ::Unity::Collections::AllocatorManager_TryFunction* function);

  /// @brief Method Install, addr 0x628a158, size 0x218, virtual false, abstract: false, final false
  static inline void Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState,
                             ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer, ::Unity::Collections::AllocatorManager_TryFunction* function,
                             bool IsAutoDispose);

  /// @brief Method IsCustomAllocator, addr 0x628a844, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCustomAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method LegacyOf, addr 0x6289f10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Collections::Allocator LegacyOf(::Unity::Collections::AllocatorManager_AllocatorHandle handle);

  /// @brief Method Register, addr 0x628a564, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle Register(::System::IntPtr allocatorState,
                                                                                ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer,
                                                                                bool IsAutoDispose, bool isGlobal, int32_t globalIndex);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Register(::ByRef<T> t, bool IsAutoDispose, bool isGlobal, int32_t globalIndex);

  /// @brief Method Shutdown, addr 0x628a840, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method Try, addr 0x628a080, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method TryLegacy, addr 0x6289f24, size 0x134, virtual false, abstract: false, final false
  static inline int32_t TryLegacy(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method UnmanagedUnregister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnmanagedUnregister(::ByRef<T> t);

  /// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Unregister(::ByRef<T> t);

  /// @brief Method UseDelegate, addr 0x6289c3c, size 0x54, virtual false, abstract: false, final false
  static inline bool UseDelegate();

  /// @brief Method allocate_block, addr 0x6289c90, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t allocate_block(::ByRef<::Unity::Collections::AllocatorManager_Block> block);

  /// @brief Method forward_mono_allocate_block, addr 0x6289df8, size 0x110, virtual false, abstract: false, final false
  static inline void forward_mono_allocate_block(::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::ByRef<int32_t> error);

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_AudioKernel();

  static inline uint32_t getStaticF_FirstGlobalScratchpadAllocatorIndex();

  static inline uint32_t getStaticF_GlobalAllocatorBaseIndex();

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_Invalid();

  static inline uint16_t getStaticF_MaxNumGlobalAllocators();

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_None();

  static inline uint16_t getStaticF_NumGlobalScratchAllocators();

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_Persistent();

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_Temp();

  static inline ::Unity::Collections::AllocatorManager_AllocatorHandle getStaticF_TempJob();

  static inline void setStaticF_AudioKernel(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  static inline void setStaticF_FirstGlobalScratchpadAllocatorIndex(uint32_t value);

  static inline void setStaticF_GlobalAllocatorBaseIndex(uint32_t value);

  static inline void setStaticF_Invalid(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  static inline void setStaticF_MaxNumGlobalAllocators(uint16_t value);

  static inline void setStaticF_None(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  static inline void setStaticF_NumGlobalScratchAllocators(uint16_t value);

  static inline void setStaticF_Persistent(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  static inline void setStaticF_Temp(::Unity::Collections::AllocatorManager_AllocatorHandle value);

  static inline void setStaticF_TempJob(::Unity::Collections::AllocatorManager_AllocatorHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocatorManager(AllocatorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocatorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocatorManager(AllocatorManager const&) = delete;

  /// @brief Field FirstUserIndex offset 0xffffffff size 0x2
  static constexpr uint16_t FirstUserIndex{ static_cast<uint16_t>(0x40u) };

  /// @brief Field MaxNumCustomAllocators offset 0xffffffff size 0x2
  static constexpr uint16_t MaxNumCustomAllocators{ static_cast<uint16_t>(0x8000u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15500 };

  /// @brief Field kErrorBufferOverflow offset 0xffffffff size 0x4
  static constexpr int32_t kErrorBufferOverflow{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kErrorNone offset 0xffffffff size 0x4
  static constexpr int32_t kErrorNone{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::AllocatorManager, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::AllocatorManager);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager*, "Unity.Collections", "AllocatorManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::AllocatorManager_AllocatorCache_1, "Unity.Collections", "AllocatorManager/AllocatorCache`1");
NEED_NO_BOX(::Unity::Collections::AllocatorManager_IAllocator);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_IAllocator*, "Unity.Collections", "AllocatorManager/IAllocator");
NEED_NO_BOX(::Unity::Collections::AllocatorManager_Managed);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_Managed*, "Unity.Collections", "AllocatorManager/Managed");
NEED_NO_BOX(::Unity::Collections::AllocatorManager_SharedStatics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_SharedStatics*, "Unity.Collections", "AllocatorManager/SharedStatics");
NEED_NO_BOX(::Unity::Collections::AllocatorManager_TryFunction);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_TryFunction*, "Unity.Collections", "AllocatorManager/TryFunction");
NEED_NO_BOX(::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*, "Unity.Collections", "AllocatorManager/SharedStatics/IsAutoDispose");
NEED_NO_BOX(::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*, "Unity.Collections", "AllocatorManager/SharedStatics/IsInstalled");
NEED_NO_BOX(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*, "Unity.Collections", "AllocatorManager/SharedStatics/TableEntry");
NEED_NO_BOX(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*, "Unity.Collections", "AllocatorManager/SlabAllocator/Try_000000B9$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*, "Unity.Collections",
                       "AllocatorManager/SlabAllocator/Try_000000B9$PostfixBurstDelegate");
NEED_NO_BOX(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*, "Unity.Collections", "AllocatorManager/StackAllocator/Try_000000AB$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*, "Unity.Collections",
                       "AllocatorManager/StackAllocator/Try_000000AB$PostfixBurstDelegate");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_AllocatorHandle, "Unity.Collections", "AllocatorManager/AllocatorHandle");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::AllocatorManager_Array16_1, "Unity.Collections", "AllocatorManager/Array16`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::AllocatorManager_Array256_1, "Unity.Collections", "AllocatorManager/Array256`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::AllocatorManager_Array32768_1, "Unity.Collections", "AllocatorManager/Array32768`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::AllocatorManager_Array4096_1, "Unity.Collections", "AllocatorManager/Array4096`1");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_Block, "Unity.Collections", "AllocatorManager/Block");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_BlockHandle, "Unity.Collections", "AllocatorManager/BlockHandle");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_Range, "Unity.Collections", "AllocatorManager/Range");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_SlabAllocator, "Unity.Collections", "AllocatorManager/SlabAllocator");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_StackAllocator, "Unity.Collections", "AllocatorManager/StackAllocator");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager_TableEntry, "Unity.Collections", "AllocatorManager/TableEntry");
