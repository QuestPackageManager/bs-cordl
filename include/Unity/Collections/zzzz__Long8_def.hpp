#pragma once
// IWYU pragma private; include "Unity/Collections/Long8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Long8)
// Forward declare root types
namespace Unity::Collections {
struct Long8;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Long8);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Long8
struct CORDL_TYPE Long8 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Long8();

  // Ctor Parameters [CppParam { name: "f0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f2", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "f3", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f4", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "f5", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f6", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f7", ty: "int64_t", modifiers:
  // "", def_value: None }]
  constexpr Long8(int64_t f0, int64_t f1, int64_t f2, int64_t f3, int64_t f4, int64_t f5, int64_t f6, int64_t f7) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field f0, offset: 0x0, size: 0x8, def value: None
  int64_t f0;

  /// @brief Field f1, offset: 0x8, size: 0x8, def value: None
  int64_t f1;

  /// @brief Field f2, offset: 0x10, size: 0x8, def value: None
  int64_t f2;

  /// @brief Field f3, offset: 0x18, size: 0x8, def value: None
  int64_t f3;

  /// @brief Field f4, offset: 0x20, size: 0x8, def value: None
  int64_t f4;

  /// @brief Field f5, offset: 0x28, size: 0x8, def value: None
  int64_t f5;

  /// @brief Field f6, offset: 0x30, size: 0x8, def value: None
  int64_t f6;

  /// @brief Field f7, offset: 0x38, size: 0x8, def value: None
  int64_t f7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Long8, f0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f4) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f5) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long8, f7) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::Long8, 0x40>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Long8, "Unity.Collections", "Long8");
