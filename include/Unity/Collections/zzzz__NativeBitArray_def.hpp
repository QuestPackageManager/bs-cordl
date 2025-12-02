#pragma once
// IWYU pragma private; include "Unity/Collections/NativeBitArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBitArray)
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
struct NativeBitArray_ReadOnly;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeBitArray;
}
namespace Unity::Collections {
struct NativeBitArray_ReadOnly;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeBitArray);
MARK_VAL_T(::Unity::Collections::NativeBitArray_ReadOnly);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeBitArray::ReadOnly
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeBitArray/ReadOnly
struct CORDL_TYPE NativeBitArray_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method CheckRead, addr 0x62a4f20, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CountBits, addr 0x62a4ee0, size 0x20, virtual false, abstract: false, final false
  inline int32_t CountBits(int32_t pos, int32_t numBits);

  /// @brief Method Find, addr 0x62a4e28, size 0xc, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t count, int32_t numBits);

  /// @brief Method Find, addr 0x62a4e00, size 0x14, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t numBits);

  /// @brief Method GetBits, addr 0x62a4d90, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetBits(int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x62a4dd0, size 0x18, virtual false, abstract: false, final false
  inline bool IsSet(int32_t pos);

  /// @brief Method TestAll, addr 0x62a4ea0, size 0x20, virtual false, abstract: false, final false
  inline bool TestAll(int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x62a4e60, size 0x20, virtual false, abstract: false, final false
  inline bool TestAny(int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x62a4e40, size 0x10, virtual false, abstract: false, final false
  inline bool TestNone(int32_t pos, int32_t numBits);

  /// @brief Method .ctor, addr 0x62a4cfc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::NativeBitArray> data);

  /// @brief Method get_IsCreated, addr 0x62a4d18, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x62a4d38, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Length, addr 0x62a4d88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeBitArray_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_BitArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly", modifiers: "", def_value: None }]
  constexpr NativeBitArray_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly m_BitArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15588 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BitArray, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly m_BitArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeBitArray_ReadOnly, m_BitArray) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeBitArray_ReadOnly, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeBitArray
struct CORDL_TYPE NativeBitArray {
public:
  // Declarations
  using ReadOnly = ::Unity::Collections::NativeBitArray_ReadOnly;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method AsNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> AsNativeArray();

  /// @brief Method AsReadOnly, addr 0x62a4cec, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeBitArray_ReadOnly AsReadOnly();

  /// @brief Method CheckRead, addr 0x62a4d10, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckReadBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CheckReadBounds();

  /// @brief Method CheckWrite, addr 0x62a4d14, size 0x4, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method Clear, addr 0x62a45d8, size 0x58, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Copy, addr 0x62a48f0, size 0xc, virtual false, abstract: false, final false
  inline void Copy(int32_t dstPos, ::ByRef<::Unity::Collections::NativeBitArray> srcBitArray, int32_t srcPos, int32_t numBits);

  /// @brief Method Copy, addr 0x62a48b4, size 0x20, virtual false, abstract: false, final false
  inline void Copy(int32_t dstPos, int32_t srcPos, int32_t numBits);

  /// @brief Method CountBits, addr 0x62a4cac, size 0x20, virtual false, abstract: false, final false
  inline int32_t CountBits(int32_t pos, int32_t numBits);

  /// @brief Method Dispose, addr 0x62a44e4, size 0xc4, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x62a43b4, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Find, addr 0x62a4bd0, size 0x10, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t count, int32_t numBits);

  /// @brief Method Find, addr 0x62a4ba8, size 0x14, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t numBits);

  /// @brief Method GetBits, addr 0x62a4840, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetBits(int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x62a4880, size 0x1c, virtual false, abstract: false, final false
  inline bool IsSet(int32_t pos);

  /// @brief Method Resize, addr 0x62a42ec, size 0x8, virtual false, abstract: false, final false
  inline void Resize(int32_t numBits, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Set, addr 0x62a4684, size 0x30, virtual false, abstract: false, final false
  inline void Set(int32_t pos, bool value);

  /// @brief Method SetBits, addr 0x62a46e0, size 0x8, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, bool value, int32_t numBits);

  /// @brief Method SetBits, addr 0x62a4794, size 0x8, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, uint64_t value, int32_t numBits);

  /// @brief Method SetCapacity, addr 0x62a435c, size 0x18, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacityInBits);

  /// @brief Method TestAll, addr 0x62a4c6c, size 0x20, virtual false, abstract: false, final false
  inline bool TestAll(int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x62a4c2c, size 0x20, virtual false, abstract: false, final false
  inline bool TestAny(int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x62a4bec, size 0x20, virtual false, abstract: false, final false
  inline bool TestNone(int32_t pos, int32_t numBits);

  /// @brief Method TrimExcess, addr 0x62a4388, size 0x18, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method .ctor, addr 0x62a41a4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t numBits, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method get_Capacity, addr 0x62a45c0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x62a4294, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x62a42c4, size 0x28, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Length, addr 0x62a45a8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeBitArray();

  // Ctor Parameters [CppParam { name: "m_BitArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr NativeBitArray(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArray, ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BitArray, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArray;

  /// @brief Field m_Allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeBitArray, m_BitArray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeBitArray, m_Allocator) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeBitArray, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeBitArray, "Unity.Collections", "NativeBitArray");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeBitArray_ReadOnly, "Unity.Collections", "NativeBitArray/ReadOnly");
