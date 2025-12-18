#pragma once
// IWYU pragma private; include "Unity/Collections/Long512.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Long64_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Long512)
// Forward declare root types
namespace Unity::Collections {
struct Long512;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Long512);
// Dependencies Unity.Collections.Long64
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Long512
struct CORDL_TYPE Long512 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Long512();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }, CppParam { name: "f1", ty: "::Unity::Collections::Long64", modifiers: "", def_value:
  // None }, CppParam { name: "f2", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }, CppParam { name: "f3", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None },
  // CppParam { name: "f4", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }, CppParam { name: "f5", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }, CppParam
  // { name: "f6", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }, CppParam { name: "f7", ty: "::Unity::Collections::Long64", modifiers: "", def_value: None }]
  constexpr Long512(::Unity::Collections::Long64 f0, ::Unity::Collections::Long64 f1, ::Unity::Collections::Long64 f2, ::Unity::Collections::Long64 f3, ::Unity::Collections::Long64 f4,
                    ::Unity::Collections::Long64 f5, ::Unity::Collections::Long64 f6, ::Unity::Collections::Long64 f7) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15531 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1000 };

  /// @brief Field f0, offset: 0x0, size: 0x200, def value: None
  ::Unity::Collections::Long64 f0;

  /// @brief Field f1, offset: 0x200, size: 0x200, def value: None
  ::Unity::Collections::Long64 f1;

  /// @brief Field f2, offset: 0x400, size: 0x200, def value: None
  ::Unity::Collections::Long64 f2;

  /// @brief Field f3, offset: 0x600, size: 0x200, def value: None
  ::Unity::Collections::Long64 f3;

  /// @brief Field f4, offset: 0x800, size: 0x200, def value: None
  ::Unity::Collections::Long64 f4;

  /// @brief Field f5, offset: 0xa00, size: 0x200, def value: None
  ::Unity::Collections::Long64 f5;

  /// @brief Field f6, offset: 0xc00, size: 0x200, def value: None
  ::Unity::Collections::Long64 f6;

  /// @brief Field f7, offset: 0xe00, size: 0x200, def value: None
  ::Unity::Collections::Long64 f7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Long512, f0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f1) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f2) == 0x400, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f3) == 0x600, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f4) == 0x800, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f5) == 0xa00, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f6) == 0xc00, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long512, f7) == 0xe00, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::Long512, 0x1000>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Long512, "Unity.Collections", "Long512");
