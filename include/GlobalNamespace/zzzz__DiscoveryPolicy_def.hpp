#pragma once
// IWYU pragma private; include "GlobalNamespace/DiscoveryPolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoveryPolicy)
// Forward declare root types
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DiscoveryPolicy);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DiscoveryPolicy
struct CORDL_TYPE DiscoveryPolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DiscoveryPolicy_Unwrapped
  enum struct __DiscoveryPolicy_Unwrapped : uint8_t {
    __E_Hidden = static_cast<uint8_t>(0x0u),
    __E_WithCode = static_cast<uint8_t>(0x1u),
    __E_Public = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DiscoveryPolicy_Unwrapped() const noexcept {
    return static_cast<__DiscoveryPolicy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscoveryPolicy();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DiscoveryPolicy(uint8_t value__) noexcept;

  /// @brief Field Hidden value: U8(0)
  static ::GlobalNamespace::DiscoveryPolicy const Hidden;

  /// @brief Field Public value: U8(2)
  static ::GlobalNamespace::DiscoveryPolicy const Public;

  /// @brief Field WithCode value: U8(1)
  static ::GlobalNamespace::DiscoveryPolicy const WithCode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18918 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiscoveryPolicy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiscoveryPolicy, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiscoveryPolicy, "", "DiscoveryPolicy");
