#pragma once
// IWYU pragma private; include "Unity/Burst/NativeDumpFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeDumpFlags)
// Forward declare root types
namespace Unity::Burst {
struct NativeDumpFlags;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::NativeDumpFlags);
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.NativeDumpFlags
struct CORDL_TYPE NativeDumpFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativeDumpFlags_Unwrapped
  enum struct __NativeDumpFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IL = static_cast<int32_t>(0x1),
    __E_Unused = static_cast<int32_t>(0x2),
    __E_IR = static_cast<int32_t>(0x4),
    __E_IROptimized = static_cast<int32_t>(0x8),
    __E_Asm = static_cast<int32_t>(0x10),
    __E_Function = static_cast<int32_t>(0x20),
    __E_Analysis = static_cast<int32_t>(0x40),
    __E_IRPassAnalysis = static_cast<int32_t>(0x80),
    __E_ILPre = static_cast<int32_t>(0x100),
    __E_IRPerEntryPoint = static_cast<int32_t>(0x200),
    __E_All = static_cast<int32_t>(0x3fd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativeDumpFlags_Unwrapped() const noexcept {
    return static_cast<__NativeDumpFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeDumpFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeDumpFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(1021)
  static ::Unity::Burst::NativeDumpFlags const All;

  /// @brief Field Analysis value: I32(64)
  static ::Unity::Burst::NativeDumpFlags const Analysis;

  /// @brief Field Asm value: I32(16)
  static ::Unity::Burst::NativeDumpFlags const Asm;

  /// @brief Field Function value: I32(32)
  static ::Unity::Burst::NativeDumpFlags const Function;

  /// @brief Field IL value: I32(1)
  static ::Unity::Burst::NativeDumpFlags const IL;

  /// @brief Field ILPre value: I32(256)
  static ::Unity::Burst::NativeDumpFlags const ILPre;

  /// @brief Field IR value: I32(4)
  static ::Unity::Burst::NativeDumpFlags const IR;

  /// @brief Field IROptimized value: I32(8)
  static ::Unity::Burst::NativeDumpFlags const IROptimized;

  /// @brief Field IRPassAnalysis value: I32(128)
  static ::Unity::Burst::NativeDumpFlags const IRPassAnalysis;

  /// @brief Field IRPerEntryPoint value: I32(512)
  static ::Unity::Burst::NativeDumpFlags const IRPerEntryPoint;

  /// @brief Field None value: I32(0)
  static ::Unity::Burst::NativeDumpFlags const None;

  /// @brief Field Unused value: I32(2)
  static ::Unity::Burst::NativeDumpFlags const Unused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::NativeDumpFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::NativeDumpFlags, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::NativeDumpFlags, "Unity.Burst", "NativeDumpFlags");
