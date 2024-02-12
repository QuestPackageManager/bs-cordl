#pragma once
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
// Type: Oculus.Platform::InitConfigOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13144))
// CS Name: ::Oculus.Platform::InitConfigOptions
struct CORDL_TYPE InitConfigOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InitConfigOptions_Unwrapped
  enum struct __InitConfigOptions_Unwrapped : uint32_t {
    __E_DisableP2pNetworking = static_cast<uint32_t>(0xde5ddedcu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InitConfigOptions_Unwrapped() const noexcept {
    return static_cast<__InitConfigOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InitConfigOptions(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitConfigOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DisableP2pNetworking value: static_cast<uint32_t>(0xde5ddedcu)
  static ::Oculus::Platform::InitConfigOptions const DisableP2pNetworking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::InitConfigOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::InitConfigOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::InitConfigOptions, "Oculus.Platform", "InitConfigOptions");
