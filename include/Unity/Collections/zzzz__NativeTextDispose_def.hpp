#pragma once
// IWYU pragma private; include "Unity/Collections/NativeTextDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeTextDispose)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeText;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeTextDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeTextDispose);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeTextDispose
struct CORDL_TYPE NativeTextDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x63109a4, size 0x8, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeTextDispose();

  // Ctor Parameters [CppParam { name: "m_TextData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None }]
  constexpr NativeTextDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_TextData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_TextData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_TextData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeTextDispose, m_TextData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeTextDispose, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeTextDispose, "Unity.Collections", "NativeTextDispose");
