#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProviderBehaviourFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProviderBehaviourFlags)
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags);
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags
struct CORDL_TYPE ProviderBehaviourFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProviderBehaviourFlags_Unwrapped
  enum struct __ProviderBehaviourFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CanProvideWithFailedDependencies = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProviderBehaviourFlags_Unwrapped() const noexcept {
    return static_cast<__ProviderBehaviourFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderBehaviourFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProviderBehaviourFlags(int32_t value__) noexcept;

  /// @brief Field CanProvideWithFailedDependencies value: I32(1)
  static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const CanProvideWithFailedDependencies;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18730 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderBehaviourFlags");
