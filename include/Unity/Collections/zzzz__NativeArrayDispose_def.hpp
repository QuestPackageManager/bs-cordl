#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDispose)
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDispose);
// Type: Unity.Collections::NativeArrayDispose
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9931))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9928))
// CS Name: ::Unity.Collections::NativeArrayDispose
struct CORDL_TYPE NativeArrayDispose {
public:
  // Declarations
  /// @brief Method Dispose addr 0x2b392c0 size 0x44 virtual false final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator",
  // modifiers: "", def_value: None }]
  constexpr NativeArrayDispose(::cordl_internals::Ptr<void> m_Buffer, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayDispose();

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> m_Buffer;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_AllocatorLabel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDispose, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Collections::NativeArrayDispose, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeArrayDispose, m_AllocatorLabel) == 0x8, "Offset mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDispose, "Unity.Collections", "NativeArrayDispose");
