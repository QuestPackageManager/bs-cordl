#pragma once
// IWYU pragma private; include "Unity/Collections/Long64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Long8_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Long64)
// Forward declare root types
namespace Unity::Collections {
struct Long64;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Long64);
// Dependencies Unity.Collections.Long8
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Long64
struct CORDL_TYPE Long64 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Long64();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }, CppParam { name: "f1", ty: "::Unity::Collections::Long8", modifiers: "", def_value:
  // None }, CppParam { name: "f2", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }, CppParam { name: "f3", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None },
  // CppParam { name: "f4", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }, CppParam {
  // name: "f6", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }, CppParam { name: "f7", ty: "::Unity::Collections::Long8", modifiers: "", def_value: None }]
  constexpr Long64(::Unity::Collections::Long8 f0, ::Unity::Collections::Long8 f1, ::Unity::Collections::Long8 f2, ::Unity::Collections::Long8 f3, ::Unity::Collections::Long8 f4,
                   ::Unity::Collections::Long8 f5, ::Unity::Collections::Long8 f6, ::Unity::Collections::Long8 f7) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15516 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  /// @brief Field f0, offset: 0x0, size: 0x40, def value: None
  ::Unity::Collections::Long8 f0;

  /// @brief Field f1, offset: 0x40, size: 0x40, def value: None
  ::Unity::Collections::Long8 f1;

  /// @brief Field f2, offset: 0x80, size: 0x40, def value: None
  ::Unity::Collections::Long8 f2;

  /// @brief Field f3, offset: 0xc0, size: 0x40, def value: None
  ::Unity::Collections::Long8 f3;

  /// @brief Field f4, offset: 0x100, size: 0x40, def value: None
  ::Unity::Collections::Long8 f4;

  /// @brief Field f5, offset: 0x140, size: 0x40, def value: None
  ::Unity::Collections::Long8 f5;

  /// @brief Field f6, offset: 0x180, size: 0x40, def value: None
  ::Unity::Collections::Long8 f6;

  /// @brief Field f7, offset: 0x1c0, size: 0x40, def value: None
  ::Unity::Collections::Long8 f7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Long64, f0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f3) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f4) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f5) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f6) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long64, f7) == 0x1c0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::Long64, 0x200>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Long64, "Unity.Collections", "Long64");
