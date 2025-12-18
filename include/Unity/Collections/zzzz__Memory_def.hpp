#pragma once
// IWYU pragma private; include "Unity/Collections/Memory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Memory)
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct Memory_Array;
}
namespace Unity::Collections {
struct Memory_Unmanaged;
}
namespace Unity::Collections {
struct Unmanaged_Memory_Array;
}
// Forward declare root types
namespace Unity::Collections {
struct Memory;
}
namespace Unity::Collections {
struct Memory_Array;
}
namespace Unity::Collections {
struct Memory_Unmanaged;
}
namespace Unity::Collections {
struct Unmanaged_Memory_Array;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Memory);
MARK_VAL_T(::Unity::Collections::Memory_Array);
MARK_VAL_T(::Unity::Collections::Memory_Unmanaged);
MARK_VAL_T(::Unity::Collections::Unmanaged_Memory_Array);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Memory/Unmanaged/Array
#pragma pack(push, 0)
struct CORDL_TYPE Unmanaged_Memory_Array {
public:
  // Declarations
  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* Allocate(int64_t count, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CustomResize, addr 0x630bc4c, size 0xe4, virtual false, abstract: false, final false
  static inline void* CustomResize(void* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, int64_t size, int32_t align);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Free(T* pointer, int64_t count, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method IsCustom, addr 0x630bc40, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCustom(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* Resize(T* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Resize, addr 0x630bad4, size 0x14c, virtual false, abstract: false, final false
  static inline void* Resize(void* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, int64_t size, int32_t align);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Unmanaged_Memory_Array();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Unmanaged_Memory_Array, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Memory/Unmanaged
#pragma pack(push, 0)
struct CORDL_TYPE Memory_Unmanaged {
public:
  // Declarations
  using Array = ::Unity::Collections::Unmanaged_Memory_Array;

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Allocate, addr 0x630bab8, size 0x1c, virtual false, abstract: false, final false
  static inline void* Allocate(int64_t size, int32_t align, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Free(T* pointer, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Free, addr 0x630bc20, size 0x20, virtual false, abstract: false, final false
  static inline void Free(void* pointer, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Memory_Unmanaged();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Memory_Unmanaged, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Memory/Array
#pragma pack(push, 0)
struct CORDL_TYPE Memory_Array {
public:
  // Declarations
  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Clear(T* pointer, int64_t count);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Copy(T* dest, T* src, int64_t count);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Set(T* pointer, int64_t count, T t);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Memory_Array();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Memory_Array, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Memory
#pragma pack(push, 0)
struct CORDL_TYPE Memory {
public:
  // Declarations
  using Array = ::Unity::Collections::Memory_Array;

  using Unmanaged = ::Unity::Collections::Memory_Unmanaged;

  /// @brief Method CheckByteCountIsReasonable, addr 0x630b9f8, size 0xc0, virtual false, abstract: false, final false
  static inline void CheckByteCountIsReasonable(int64_t size);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Memory();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15599 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field k_MaximumRamSizeInBytes offset 0xffffffff size 0x8
  static constexpr int64_t k_MaximumRamSizeInBytes{ static_cast<int64_t>(0x10000000000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Memory, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Memory, "Unity.Collections", "Memory");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Memory_Array, "Unity.Collections", "Memory/Array");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Memory_Unmanaged, "Unity.Collections", "Memory/Unmanaged");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Unmanaged_Memory_Array, "Unity.Collections", "Memory/Unmanaged/Array");
