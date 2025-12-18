#pragma once
// IWYU pragma private; include "Zenject/LoadSceneRelationship.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadSceneRelationship)
// Forward declare root types
namespace Zenject {
struct LoadSceneRelationship;
}
// Write type traits
MARK_VAL_T(::Zenject::LoadSceneRelationship);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.LoadSceneRelationship
struct CORDL_TYPE LoadSceneRelationship {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoadSceneRelationship_Unwrapped
  enum struct __LoadSceneRelationship_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Child = static_cast<int32_t>(0x1),
    __E_Sibling = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoadSceneRelationship_Unwrapped() const noexcept {
    return static_cast<__LoadSceneRelationship_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadSceneRelationship();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoadSceneRelationship(int32_t value__) noexcept;

  /// @brief Field Child value: I32(1)
  static ::Zenject::LoadSceneRelationship const Child;

  /// @brief Field None value: I32(0)
  static ::Zenject::LoadSceneRelationship const None;

  /// @brief Field Sibling value: I32(2)
  static ::Zenject::LoadSceneRelationship const Sibling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::LoadSceneRelationship, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::LoadSceneRelationship, 0x4>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LoadSceneRelationship, "Zenject", "LoadSceneRelationship");
