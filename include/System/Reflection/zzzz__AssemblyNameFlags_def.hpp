#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyNameFlags)
// Forward declare root types
namespace System::Reflection {
struct AssemblyNameFlags;
}
// Write type traits
MARK_VAL_T(::System::Reflection::AssemblyNameFlags);
// Type: System.Reflection::AssemblyNameFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::AssemblyNameFlags
struct CORDL_TYPE AssemblyNameFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssemblyNameFlags_Unwrapped
  enum struct __AssemblyNameFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PublicKey = static_cast<int32_t>(0x1),
    __E_EnableJITcompileOptimizer = static_cast<int32_t>(0x4000),
    __E_EnableJITcompileTracking = static_cast<int32_t>(0x8000),
    __E_Retargetable = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssemblyNameFlags_Unwrapped() const noexcept {
    return static_cast<__AssemblyNameFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyNameFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssemblyNameFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EnableJITcompileOptimizer value: static_cast<int32_t>(0x4000)
  static ::System::Reflection::AssemblyNameFlags const EnableJITcompileOptimizer;

  /// @brief Field EnableJITcompileTracking value: static_cast<int32_t>(0x8000)
  static ::System::Reflection::AssemblyNameFlags const EnableJITcompileTracking;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Reflection::AssemblyNameFlags const None;

  /// @brief Field PublicKey value: static_cast<int32_t>(0x1)
  static ::System::Reflection::AssemblyNameFlags const PublicKey;

  /// @brief Field Retargetable value: static_cast<int32_t>(0x100)
  static ::System::Reflection::AssemblyNameFlags const Retargetable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyNameFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyNameFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyNameFlags, "System.Reflection", "AssemblyNameFlags");
