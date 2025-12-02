#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDispose)
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDispose);
// Dependencies Unity.Collections.Allocator
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeArrayDispose
struct CORDL_TYPE NativeArrayDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x682b2b0, size 0x44, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayDispose();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value:
  // None }]
  constexpr NativeArrayDispose(void* m_Buffer, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  void* m_Buffer;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeArrayDispose, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeArrayDispose, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDispose, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDispose, "Unity.Collections", "NativeArrayDispose");
