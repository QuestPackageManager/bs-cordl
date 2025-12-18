#pragma once
// IWYU pragma private; include "Unity/Collections/NativeListDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeListDispose)
namespace Unity::Collections::LowLevel::Unsafe {
struct UntypedUnsafeList;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeListDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeListDispose);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeListDispose
struct CORDL_TYPE NativeListDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x630cb20, size 0x4c, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeListDispose();

  // Ctor Parameters [CppParam { name: "m_ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: None }]
  constexpr NativeListDispose(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15621 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ListData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeListDispose, m_ListData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeListDispose, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeListDispose, "Unity.Collections", "NativeListDispose");
