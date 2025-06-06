#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/CodegenOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodegenOptions)
// Forward declare root types
namespace UnityEngine::Bindings {
struct CodegenOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::CodegenOptions);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.CodegenOptions
struct CORDL_TYPE CodegenOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CodegenOptions_Unwrapped
  enum struct __CodegenOptions_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0x1),
    __E_Force = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CodegenOptions_Unwrapped() const noexcept {
    return static_cast<__CodegenOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CodegenOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CodegenOptions(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::Bindings::CodegenOptions const Auto;

  /// @brief Field Custom value: I32(1)
  static ::UnityEngine::Bindings::CodegenOptions const Custom;

  /// @brief Field Force value: I32(2)
  static ::UnityEngine::Bindings::CodegenOptions const Force;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::CodegenOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::CodegenOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::CodegenOptions, "UnityEngine.Bindings", "CodegenOptions");
