#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataStore)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::UIElements::Layout {
struct ComponentType;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_Chunk;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_ComponentDataStore;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_Data;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_Chunk;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_ComponentDataStore;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore_Data;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataStore);
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk);
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore);
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataStore_Data);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/Chunk
struct CORDL_TYPE LayoutDataStore_Chunk {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDataStore_Chunk();

  // Ctor Parameters [CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: None }]
  constexpr LayoutDataStore_Chunk(uint8_t* Buffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5414 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
  uint8_t* Buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk, Buffer) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies Unity.Collections.Allocator
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/ComponentDataStore
struct CORDL_TYPE LayoutDataStore_ComponentDataStore {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6b37a74, size 0xd8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetComponentDataPtr, addr 0x6b37bb0, size 0x34, virtual false, abstract: false, final false
  inline uint8_t* GetComponentDataPtr(int32_t index);

  /// @brief Method ResizeCapacity, addr 0x6b37f7c, size 0x1c8, virtual false, abstract: false, final false
  inline void ResizeCapacity(int32_t capacity);

  /// @brief Method .ctor, addr 0x6b378fc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::Unity::Collections::Allocator allocator);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDataStore_ComponentDataStore();

  // Ctor Parameters [CppParam { name: "Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "ComponentCountPerChunk", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Chunks", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk*", modifiers: "", def_value: None }]
  constexpr LayoutDataStore_ComponentDataStore(::Unity::Collections::Allocator Allocator, int32_t Size, int32_t ComponentCountPerChunk, int32_t ChunkCount,
                                               ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk* m_Chunks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Allocator, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::Allocator Allocator;

  /// @brief Field Size, offset: 0x4, size: 0x4, def value: None
  int32_t Size;

  /// @brief Field ComponentCountPerChunk, offset: 0x8, size: 0x4, def value: None
  int32_t ComponentCountPerChunk;

  /// @brief Field ChunkCount, offset: 0xc, size: 0x4, def value: None
  int32_t ChunkCount;

  /// @brief Field m_Chunks, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk* m_Chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, Size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, ComponentCountPerChunk) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, ChunkCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, m_Chunks) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/Data
struct CORDL_TYPE LayoutDataStore_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDataStore_Data();

  // Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NextFreeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ComponentCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Versions", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "Components", ty:
  // "::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*", modifiers: "", def_value: None }]
  constexpr LayoutDataStore_Data(int32_t Capacity, int32_t NextFreeIndex, int32_t ComponentCount, int32_t* Versions,
                                 ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* Components) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5416 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Capacity, offset: 0x0, size: 0x4, def value: None
  int32_t Capacity;

  /// @brief Field NextFreeIndex, offset: 0x4, size: 0x4, def value: None
  int32_t NextFreeIndex;

  /// @brief Field ComponentCount, offset: 0x8, size: 0x4, def value: None
  int32_t ComponentCount;

  /// @brief Field Versions, offset: 0x10, size: 0x8, def value: None
  int32_t* Versions;

  /// @brief Field Components, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* Components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, Capacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, NextFreeIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, ComponentCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, Versions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, Components) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDataStore_Data, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies Unity.Collections.Allocator
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore
struct CORDL_TYPE LayoutDataStore {
public:
  // Declarations
  using Chunk = ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk;

  using ComponentDataStore = ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore;

  using Data = ::UnityEngine::UIElements::Layout::LayoutDataStore_Data;

  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0> inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(::ByRef<T0> component0);

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3>
  inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(::ByRef<T0> component0, ::ByRef<T1> component1, ::ByRef<T2> component2, ::ByRef<T3> component3);

  /// @brief Method Allocate, addr 0x6b37be4, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(uint8_t* data, int32_t count);

  /// @brief Method Dispose, addr 0x6b33610, size 0x100, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Exists, addr 0x6b37b4c, size 0x40, virtual false, abstract: false, final false
  inline bool Exists(::ByRef<::UnityEngine::UIElements::Layout::LayoutHandle> handle);

  /// @brief Method Free, addr 0x6b337a0, size 0xf8, virtual false, abstract: false, final false
  inline void Free(::ByRef<::UnityEngine::UIElements::Layout::LayoutHandle> handle);

  /// @brief Method GetComponentDataPtr, addr 0x6b37b8c, size 0x24, virtual false, abstract: false, final false
  inline void* GetComponentDataPtr(int32_t index, int32_t componentIndex);

  /// @brief Method GetNextFreeIndex, addr 0x6b37dc8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetNextFreeIndex(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* ptr, int32_t index);

  /// @brief Method IncreaseCapacity, addr 0x6b37ddc, size 0x3c, virtual false, abstract: false, final false
  inline void IncreaseCapacity();

  /// @brief Method ResizeArray, addr 0x6b37e30, size 0x14c, virtual false, abstract: false, final false
  static inline void* ResizeArray(void* fromPtr, int64_t fromCount, int64_t toCount, int64_t size, int32_t align, ::Unity::Collections::Allocator allocator);

  /// @brief Method ResizeCapacity, addr 0x6b37914, size 0x160, virtual false, abstract: false, final false
  inline void ResizeCapacity(int32_t capacity);

  /// @brief Method SetNextFreeIndex, addr 0x6b37e18, size 0x18, virtual false, abstract: false, final false
  static inline void SetNextFreeIndex(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* ptr, int32_t index, int32_t value);

  /// @brief Method .ctor, addr 0x6b33240, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::UIElements::Layout::ComponentType, ::Array<::UnityEngine::UIElements::Layout::ComponentType>*> components, int32_t initialCapacity,
                    ::Unity::Collections::Allocator allocator);

  /// @brief Method get_IsValid, addr 0x6b374fc, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDataStore();

  // Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty:
  // "::UnityEngine::UIElements::Layout::LayoutDataStore_Data*", modifiers: "", def_value: None }]
  constexpr LayoutDataStore(::Unity::Collections::Allocator m_Allocator, ::UnityEngine::UIElements::Layout::LayoutDataStore_Data* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5417 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field k_ChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t k_ChunkSize{ static_cast<int32_t>(0x8000) };

  /// @brief Field m_Allocator, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  /// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore_Data* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore, m_Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore, m_Data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDataStore, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDataStore, "UnityEngine.UIElements.Layout", "LayoutDataStore");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk, "UnityEngine.UIElements.Layout", "LayoutDataStore/Chunk");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore, "UnityEngine.UIElements.Layout", "LayoutDataStore/ComponentDataStore");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDataStore_Data, "UnityEngine.UIElements.Layout", "LayoutDataStore/Data");
