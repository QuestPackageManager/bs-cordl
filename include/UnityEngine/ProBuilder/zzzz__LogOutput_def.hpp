#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogOutput)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct LogOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::LogOutput);
// Type: UnityEngine.ProBuilder::LogOutput
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::LogOutput
struct CORDL_TYPE LogOutput {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LogOutput_Unwrapped
  enum struct __LogOutput_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Console = static_cast<int32_t>(0x1),
    __E_File = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LogOutput_Unwrapped() const noexcept {
    return static_cast<__LogOutput_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogOutput();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LogOutput(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Console value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::LogOutput const Console;

  /// @brief Field File value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::LogOutput const File;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::LogOutput const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::LogOutput, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::LogOutput, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::LogOutput, "UnityEngine.ProBuilder", "LogOutput");
