#pragma once
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
// Type: ::DiscoveryPolicy
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12721))
// CS Name: ::DiscoveryPolicy
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DiscoveryPolicy(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscoveryPolicy();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Hidden value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::DiscoveryPolicy const Hidden;

  /// @brief Field WithCode value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::DiscoveryPolicy const WithCode;

  /// @brief Field Public value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::DiscoveryPolicy const Public;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiscoveryPolicy, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoveryPolicy, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiscoveryPolicy, "", "DiscoveryPolicy");
