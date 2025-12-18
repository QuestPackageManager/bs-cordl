#pragma once
// IWYU pragma private; include "Unity/Collections/UnmanagedArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnmanagedArray_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct UnmanagedArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::UnmanagedArray_1);
// Dependencies System.IntPtr, Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.UnmanagedArray`1<T>
struct CORDL_TYPE UnmanagedArray_1 {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetUnsafePointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T* GetUnsafePointer();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmanagedArray_1();

  // Ctor Parameters [CppParam { name: "m_pointer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr UnmanagedArray_1(::System::IntPtr m_pointer, int32_t m_length, ::Unity::Collections::AllocatorManager_AllocatorHandle m_allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15680 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_pointer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_pointer;

  /// @brief Field m_length, offset: 0x8, size: 0x4, def value: None
  int32_t m_length;

  /// @brief Field m_allocator, offset: 0xc, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::UnmanagedArray_1, "Unity.Collections", "UnmanagedArray`1");
