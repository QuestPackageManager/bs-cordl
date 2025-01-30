#pragma once
// IWYU pragma private; include "Unity/Properties/InstantiationKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstantiationKind)
// Forward declare root types
namespace Unity::Properties {
struct InstantiationKind;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::InstantiationKind);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.InstantiationKind
struct CORDL_TYPE InstantiationKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InstantiationKind_Unwrapped
  enum struct __InstantiationKind_Unwrapped : int32_t {
    __E_Activator = static_cast<int32_t>(0x0),
    __E_PropertyBagOverride = static_cast<int32_t>(0x1),
    __E_NotInstantiatable = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InstantiationKind_Unwrapped() const noexcept {
    return static_cast<__InstantiationKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiationKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstantiationKind(int32_t value__) noexcept;

  /// @brief Field Activator value: I32(0)
  static ::Unity::Properties::InstantiationKind const Activator;

  /// @brief Field NotInstantiatable value: I32(2)
  static ::Unity::Properties::InstantiationKind const NotInstantiatable;

  /// @brief Field PropertyBagOverride value: I32(1)
  static ::Unity::Properties::InstantiationKind const PropertyBagOverride;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17475 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::InstantiationKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::InstantiationKind, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::InstantiationKind, "Unity.Properties", "InstantiationKind");
