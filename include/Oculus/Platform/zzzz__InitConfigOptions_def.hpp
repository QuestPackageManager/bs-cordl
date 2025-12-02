#pragma once
// IWYU pragma private; include "Oculus/Platform/InitConfigOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitConfigOptions)
// Forward declare root types
namespace Oculus::Platform {
struct InitConfigOptions;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::InitConfigOptions);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.InitConfigOptions
struct CORDL_TYPE InitConfigOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InitConfigOptions_Unwrapped
  enum struct __InitConfigOptions_Unwrapped : uint32_t {
    __E_DisableP2pNetworking = static_cast<uint32_t>(0x1cde5ddeu),
    __E_EnableCowatching = static_cast<uint32_t>(0x7dd1c46eu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InitConfigOptions_Unwrapped() const noexcept {
    return static_cast<__InitConfigOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitConfigOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InitConfigOptions(uint32_t value__) noexcept;

  /// @brief Field DisableP2pNetworking value: U32(484335070)
  static ::Oculus::Platform::InitConfigOptions const DisableP2pNetworking;

  /// @brief Field EnableCowatching value: U32(2110899310)
  static ::Oculus::Platform::InitConfigOptions const EnableCowatching;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17794 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::InitConfigOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::InitConfigOptions, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::InitConfigOptions, "Oculus.Platform", "InitConfigOptions");
