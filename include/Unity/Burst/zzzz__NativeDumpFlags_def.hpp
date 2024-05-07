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
// Type: Unity.Burst::NativeDumpFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::NativeDumpFlags
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x3fd)
  static ::Unity::Burst::NativeDumpFlags const All;

  /// @brief Field Analysis value: static_cast<int32_t>(0x40)
  static ::Unity::Burst::NativeDumpFlags const Analysis;

  /// @brief Field Asm value: static_cast<int32_t>(0x10)
  static ::Unity::Burst::NativeDumpFlags const Asm;

  /// @brief Field Function value: static_cast<int32_t>(0x20)
  static ::Unity::Burst::NativeDumpFlags const Function;

  /// @brief Field IL value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::NativeDumpFlags const IL;

  /// @brief Field ILPre value: static_cast<int32_t>(0x100)
  static ::Unity::Burst::NativeDumpFlags const ILPre;

  /// @brief Field IR value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::NativeDumpFlags const IR;

  /// @brief Field IROptimized value: static_cast<int32_t>(0x8)
  static ::Unity::Burst::NativeDumpFlags const IROptimized;

  /// @brief Field IRPassAnalysis value: static_cast<int32_t>(0x80)
  static ::Unity::Burst::NativeDumpFlags const IRPassAnalysis;

  /// @brief Field IRPerEntryPoint value: static_cast<int32_t>(0x200)
  static ::Unity::Burst::NativeDumpFlags const IRPerEntryPoint;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::NativeDumpFlags const None;

  /// @brief Field Unused value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::NativeDumpFlags const Unused;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::NativeDumpFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::NativeDumpFlags, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::NativeDumpFlags, "Unity.Burst", "NativeDumpFlags");
